cmake_minimum_required(VERSION 3.0.2)


include(CryptoNoteWallet.cmake)
 


if(WIN32) 
#"C:\Program Files\CMake\bin\cmake.exe" -G  "Visual Studio 14 2015 Win64" ..
#msbuild Alloy.sln /p:Configuration=Release

set(BOOST_LIBRARYDIR c:/boost_1_63_0/lib64-msvc-14.0)
set(BOOST_INCLUDEDIR c:/boost_1_63_0/boost)
set(BOOST_ROOT c:/boost_1_63_0)
#b2 variant=debug,release link=static runtime-link=static address-model=64



set(CMAKE_PREFIX_PATH C:/Qt/Qt5.10.0/5.10.0/msvc2015_64)
 
set(PROJECT_SOURCE_DIR c:/opt/alloy-gui)
endif()
 



project(${CN_PROJECT_NAME})


message(STATUS "${PROJECT_BINARY_DIR}")
find_package(Git)
find_package(Boost 1.58 REQUIRED COMPONENTS
    date_time
    filesystem
    program_options
    regex
    serialization
    system
    thread
    chrono)

find_package(Qt5 REQUIRED COMPONENTS
    Core
    Gui
    Widgets
    Network
    DBus)

#set(EXTERNAL_CMAKE_ARGS
#    -DSTATIC:BOOL=OFF
#    -DBoost_USE_STATIC_LIBS:BOOL=ON
#    -DBoost_USE_STATIC_RUNTIME:BOOL=OFF)
#include(ExternalProject)
#ExternalProject_Add(Alloy
#    SOURCE_DIR ${CMAKE_SOURCE_DIR}/alloy
#    PREFIX ${CMAKE_CURRENT_BINARY_DIR}/Alloy
#    CMAKE_ARGS 
#        -DSTATIC:BOOL=OFF
#        -DBoost_USE_STATIC_LIBS:BOOL=ON
#        -DBoost_USE_STATIC_RUNTIME:BOOL=OFF
#    INSTALL_COMMAND ""
#    )

set(Boost_USE_STATIC_LIBS ON)
set(Boost_USE_STATIC_RUNTIME OFF)




# Get and add-definition for AboutDialog.cpp
# Set something in case git is not found
set(GIT_REVISION "unknown")
if (GIT_FOUND)
    execute_process(
        COMMAND ${GIT_EXECUTABLE} rev-parse --short HEAD
        WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}"
        OUTPUT_VARIABLE GIT_REVISION
        OUTPUT_STRIP_TRAILING_WHITESPACE
    )
    message(STATUS "Git Revision ${GIT_REVISION}")
else()
    message(STATUS "Git not found")
endif()

configure_file("${PROJECT_SOURCE_DIR}/src/CryptoNoteWalletConfig.h.in" "${PROJECT_BINARY_DIR}/CryptoNoteWalletConfig.h")

set(CMAKE_AUTOMOC ON)
#set(CMAKE_AUTOUIC ON)
#set(CMAKE_AUTORCC ON)
#set(CMAKE_INCLUDE_CURRENT_DIR ON)
set_property(SOURCE qrc_resources.cpp PROPERTY SKIP_AUTOMOC ON)

set(SOURCES
    src/Application/AddressBookManager.cpp
    src/Application/BlogReader.cpp
    src/Application/CommandLineParser.cpp
    src/Application/LogFileWatcher.cpp
    src/Application/MiningManager.cpp
    src/Application/OptimizationManager.cpp
    src/Application/SignalHandler.cpp
    src/Application/WalletApplication.cpp
    src/Application/WalletSplashScreen.cpp
    src/CryptoNoteWrapper/BlockChainExplorerAdapter.cpp
    src/CryptoNoteWrapper/BlockChainExplorerWorker.cpp
    src/CryptoNoteWrapper/CommonNodeAdapter.cpp
    src/CryptoNoteWrapper/CryptoNoteAdapter.cpp
    src/CryptoNoteWrapper/GuardExecutor.cpp
    src/CryptoNoteWrapper/InProcessNodeAdapter.cpp
    src/CryptoNoteWrapper/InProcessNodeWorker.cpp
    src/CryptoNoteWrapper/ProxyRpcNodeAdapter.cpp
    src/CryptoNoteWrapper/ProxyRpcNodeWorker.cpp
    src/CryptoNoteWrapper/SemaphoreUtils.cpp
    src/CryptoNoteWrapper/WalletGreenAdapter.cpp
    src/CryptoNoteWrapper/WalletGreenWorker.cpp
    src/Gui/AddressBook/AddressBookDelegate.cpp
    src/Gui/AddressBook/AddressBookFrame.cpp
    src/Gui/AddressBook/DonationColumnDelegate.cpp
    src/Gui/AddressBook/NewAddressDialog.cpp
    src/Gui/BlockchainExplorer/BlockDetailsDialog.cpp
    src/Gui/BlockchainExplorer/BlockExplorerFrame.cpp
    src/Gui/BlockchainExplorer/FilteredBlockModel.cpp
    src/Gui/BlockchainExplorer/TransactionsBlockModel.cpp
    src/Gui/BlockchainExplorer/WindowedBlockModel.cpp
    src/Gui/Common/AboutDialog.cpp
    src/Gui/Common/AddressBookDialog.cpp
    src/Gui/Common/BlockchainInstaller.cpp
    src/Gui/Common/ChangePasswordDialog.cpp
    src/Gui/Common/ClearableLineEdit.cpp
    src/Gui/Common/CopyColumnDelegate.cpp
    src/Gui/Common/CopyMagicLabel.cpp
    src/Gui/Common/ExitWidget.cpp
    src/Gui/Common/GlassFrame.cpp
    src/Gui/Common/KeyDialog.cpp
    src/Gui/Common/LinkLikeColumnDelegate.cpp
    src/Gui/Common/MagicLabel.cpp
    src/Gui/Common/NewPasswordDialog.cpp
    src/Gui/Common/NewsFrame.cpp
    src/Gui/Common/NewTransactionDelegate.cpp
    src/Gui/Common/P2pBindPortErrorDialog.cpp
    src/Gui/Common/PoolTransactionDetailsDialog.cpp
    src/Gui/Common/QuestionDialog.cpp
    src/Gui/Common/ResizableScrollArea.cpp
    src/Gui/Common/RightAlignmentColumnDelegate.cpp
    src/Gui/Common/TransactionDetailsDialog.cpp
    src/Gui/Common/TransactionsAmountDelegate.cpp
    src/Gui/Common/TransactionsHeaderView.cpp
    src/Gui/Common/TransactionsTimeDelegate.cpp
    src/Gui/Common/TransfersHeaderView.cpp
    src/Gui/Common/WalletBlueButton.cpp
    src/Gui/Common/WalletCancelButton.cpp
    src/Gui/Common/WalletDescriptionLabel.cpp
    src/Gui/Common/WalletGrayCheckBox.cpp
    src/Gui/Common/WalletLinkLikeButton.cpp
    src/Gui/Common/WalletNavigationButton.cpp
    src/Gui/Common/WalletOkButton.cpp
    src/Gui/Common/WalletTableView.cpp
    src/Gui/Common/WalletTextLabel.cpp
    src/Gui/Common/WalletTreeView.cpp
    src/Gui/Common/WalletWindowedItemModel.cpp
    src/Gui/MainWindow/MainWindow.cpp
    src/Gui/MainWindow/WalletStatusBar.cpp
    src/Gui/Mining/MinerDelegate.cpp
    src/Gui/Mining/MiningFrame.cpp
    src/Gui/Mining/PoolHeaderView.cpp
    src/Gui/Mining/PoolTreeView.cpp
    src/Gui/NoWallet/NoWalletFrame.cpp
    src/Gui/Options/ConnectionOptionsFrame.cpp
    src/Gui/Options/DonationAddressesModel.cpp
    src/Gui/Options/DonationOptionsFrame.cpp
    src/Gui/Options/OptimizationOptionsFrame.cpp
    src/Gui/Options/OptionsDialog.cpp
    src/Gui/Options/PrivacyFrame.cpp
    src/Gui/Overview/OverviewFrame.cpp
    src/Gui/Overview/OverviewHeaderFrame.cpp
    src/Gui/Overview/OverviewHeaderGlassFrame.cpp
    src/Gui/Overview/OverviewTransactionPoolModel.cpp
    src/Gui/Overview/OverviewTransactionPoolTreeView.cpp
    src/Gui/Overview/RecentTransactionsModel.cpp
    src/Gui/Send/SendFrame.cpp
    src/Gui/Send/SendGlassFrame.cpp
    src/Gui/Send/TransferFrame.cpp
    src/Gui/Transactions/DrawableTransfersModel.cpp
    src/Gui/Transactions/FilteredByAddressTransactionsModel.cpp
    src/Gui/Transactions/FilteredByAgeTransactionsModel.cpp
    src/Gui/Transactions/FilteredByHashTransactionsModel.cpp
    src/Gui/Transactions/FilteredByPeriodTransactionsModel.cpp
    src/Gui/Transactions/FilteredTransactionsModel.cpp
    src/Gui/Transactions/TransactionsDelegate.cpp
    src/Gui/Transactions/TransactionsFrame.cpp
    src/Gui/Transactions/TransactionTransfersRenderer.cpp
    src/main.cpp
    src/Miner/Miner.cpp
    src/Miner/StratumClient.cpp
    src/Miner/Worker.cpp
    src/Models/AddressBookModel.cpp
    src/Models/BlockchainModel.cpp
    src/Models/FusionTransactionsFilterModel.cpp
    src/Models/MinerModel.cpp
    src/Models/NodeStateModel.cpp
    src/Models/SortedAddressBookModel.cpp
    src/Models/SortedTransactionsModel.cpp
    src/Models/TransactionPoolModel.cpp
    src/Models/TransactionsModel.cpp
    src/Models/TransfersModel.cpp
    src/Models/WalletStateModel.cpp
    src/QJsonRpc/JsonRpcNotification.cpp
    src/QJsonRpc/JsonRpcObject.cpp
    src/QJsonRpc/JsonRpcObjectFactory.cpp
    src/QJsonRpc/JsonRpcRequest.cpp
    src/QJsonRpc/JsonRpcResponse.cpp
    src/QJsonRpc/JsonRpcServer.cpp
    src/Settings/Settings.cpp
    src/Style/DarkStyle.cpp
    src/Style/LightStyle.cpp
    src/Style/Style.cpp
    src/WalletLogger/WalletLogger.cpp)

    
    
    #file(GLOB_RECURSE SOURCES src/*.cpp)
#file(GLOB_RECURSE HEADERS "${PROJECT_SOURCE_DIR}src/*.h)

file(GLOB_RECURSE FORMS "${PROJECT_SOURCE_DIR}src/gui/ui/*.ui")

set(QRC "${PROJECT_SOURCE_DIR}/src/resources.qrc")
qt5_wrap_ui(UIS ${FORMS})
qt5_add_resources(RCC ${QRC})


set(BUILD_RESOURCES "${PROJECT_SOURCE_DIR}/src/alloywallet.rc")



    
if(WIN32)
    set(SOURCES ${SOURCES} Platform/Windows/ApplicationEventHandler.cpp)
    
        add_definitions(/D_CRT_SECURE_NO_WARNINGS /D_WIN32_WINNT=0x0600)
        include_directories(
            alloy/src/Platform/msc
            alloy/src/Platform/Windows
            Platform/Windows)
        set(BUILD_PLATFORM WIN32)
        set(Qt5_MAIN Qt5::WinMain)
    
endif()



# Include boost
#include_directories(${Boost_INCLUDE_DIRS})
# Link our externalproject *.lib's
link_directories(
    ${Boost_LIBRARY_DIRS}
    /opt/alloy/libs)
# Build AlloyWallet.exe
#add_executable(${PROJECT_NAME} ${BUILD_PLATFORM} ${SOURCES})
add_executable(${PROJECT_NAME} ${BUILD_PLATFORM} ${BUILD_RESOURCES} ${SOURCES} ${HEADERS} ${UIS} ${RCC})

set_target_properties(${PROJECT_NAME} PROPERTIES COMPILE_DEFINITIONS _GNU_SOURCE)
target_compile_definitions(${PROJECT_NAME} PUBLIC -DGIT_REVISION="${GIT_REVISION}")
target_include_directories(${PROJECT_NAME} PUBLIC
    include
    src
    alloy/include
    alloy/src
    alloy/external/rocksdb/include
    ${Boost_INCLUDE_DIR})
target_link_libraries(${PROJECT_NAME}
    ${Qt5_MAIN}
    ${Qt5DBus_LIBRARIES}
    BlockchainExplorer
    Common
    Crypto
    CryptoNoteCore
    Http
    InProcessNode
    Logging
    NodeRpcProxy
    P2p
    Rpc
    Serialization
    System
    Transfers
    Wallet
    rocksdblib
    miniupnpc
    Qt5::Widgets
    Qt5::Gui
    Qt5::Network
    Imm32 Iphlpapi Rpcrt4 Winmm Wtsapi32) 


    
        
  

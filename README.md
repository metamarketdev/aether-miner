"# aether-miner" 
Aether ERC20 Token Miner
Solves proof of work to mine supported ERC20 tokens.

Commands :
"account new"            - Create a new account and local keystore (.0xbitcoin)
"account list"           - List accounts (local keystore in .0xbitcoin or specified address)
"account select 0x####"  - Select the active mining account by address
"contract list"          - List the selected token contract to mine
"contract select 0x####" - Select a PoW token contract to mine

"config list"            - Show your current configuration
"config gasprice #"      - Set the gasprice used to submit PoW in solo mining
"config chain_id #"      - Set the chainid for different networks
"config cpu_threads #"   - Set the number of CPU cores to use for mining
"config web3provider http://----:####" - Set the web3 provider to submit PoW

"pool mine"              - Begin mining into a pool using CPU
"pool mine cuda"        - Begin mining into a pool using CUDA GPU
"pool list"              - List the selected mining pool
"pool select http://####.com:####" - Select a pool to mine into

"mine"                   - Begin solo mining using CPU
"mine cuda"              - Begin solo mining using CUDA GPU

Official Releases Downloads
https://github.com/snappyswap/aether-miner/releases

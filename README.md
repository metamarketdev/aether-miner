"# aether-miner" 
Aether ERC20 Token Miner<br />
Solves proof of work to mine supported ERC20 tokens.<br />

Commands :
"account new"            - Create a new account and local keystore (.0xbitcoin)<br />
"account list"           - List accounts (local keystore in .0xbitcoin or specified address)<br />
"account select 0x####"  - Select the active mining account by address<br />
"contract list"          - List the selected token contract to mine<br />
"contract select 0x####" - Select a PoW token contract to mine<br />

"config list"            - Show your current configuration<br />
"config gasprice #"      - Set the gasprice used to submit PoW in solo mining<br />
"config chain_id #"      - Set the chainid for different networks<br />
"config cpu_threads #"   - Set the number of CPU cores to use for mining<br />
"config web3provider http://----:####" - Set the web3 provider to submit PoW<br />

"pool mine"              - Begin mining into a pool using CPU<br />
"pool mine cuda"        - Begin mining into a pool using CUDA GPU<br />
"pool list"              - List the selected mining pool<br />
"pool select http://####.com:####" - Select a pool to mine into<br />

"mine"                   - Begin solo mining using CPU<br />
"mine cuda"              - Begin solo mining using CUDA GPU<br />

Official Releases Downloads<br />
https://github.com/snappyswap/aether-miner/releases<br />

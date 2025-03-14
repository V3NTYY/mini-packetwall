### mini-packetwall (on-hiatus until semester in finished)

A C++ Console Desktop application that will parse, process and discard packets that doesn't adhere to user-defined rules -- a mini-firewall.

Please note, all planned features may not be implemented in the future however it acts as a goal to work towards for this project.

## Current Features
* None so far -- I'm working on it!

## Planned features
- **Packet filtering:** Block packets based on port, IP address or domain
- **Packet logging:** Logs blocked packets with an error code
- **Auto-update:** Enable automatic downloading and installation of updates for the mini-firewall
- **Port scanner:** Identify which ports are open or closed on your local network
- **Anomaly-based detection:** Block anomalous traffic such as packet surges, large data transfers -- typically used to mitigate Denial-of-Service (DDoS / DoS) attacks

## Features that will NEVER exist here
- **Signature-based detection:** I do not have access to any online databases that contain attack signatures, and frankly it's not a great idea to try to build my own
- **GUI Interace:** This project does not necessarily need a GUI, at least for C++ apps it is annoying to implement one; maybe in future projects

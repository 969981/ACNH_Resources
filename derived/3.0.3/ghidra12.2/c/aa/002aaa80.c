
char * FUN_002aaa80(undefined8 param_1)

{
  char *pcVar1;
  
  pcVar1 = "KeepAlive";
  switch((uint)((ulong)param_1 >> 0x18) & 0xff) {
  case 8:
    goto switchD_002aaaac_caseD_8;
  default:
    pcVar1 = "Unknown";
switchD_002aaaac_caseD_8:
    return pcVar1;
  case 0x14:
    return "Station";
  case 0x18:
    return "Mesh";
  case 0x1c:
    return "SyncClock";
  case 0x24:
    return "Local";
  case 0x34:
    return "Nat";
  case 0x44:
    return "Lan";
  case 0x58:
    return "Rtt";
  case 0x65:
    return "Sync";
  case 0x68:
    return "Unreliable";
  case 0x73:
    return "Clone";
  case 0x74:
    return "Atomic";
  case 0x75:
    return "Event";
  case 0x76:
    return "BroadcastEvent";
  case 0x77:
    return "Clock";
  case 0x7b:
    return "Voice";
  case 0x7c:
    return "Reliable";
  case 0x80:
    return "BroadcastReliable";
  case 0x81:
    return "StreamBroadcastReliable";
  case 0x94:
    return "Session";
  case 0xa4:
    return "MonitoringData";
  case 0xb0:
    return "Reckoning1d";
  case 0xb4:
    return "Reckoning3d";
  }
}


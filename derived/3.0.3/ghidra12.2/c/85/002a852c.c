
undefined8 FUN_002a852c(undefined8 param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  char *pcVar4;
  int iVar5;
  undefined8 local_2c;
  undefined4 local_24;
  
  if (*(uint *)(param_2 + 0x5f8) < 0x20) {
    pcVar4 = "PacketReader::BeginDispatch GetDataSize < PiaPacketHeaderSize";
  }
  else {
    plVar2 = (long *)FUN_002ba790(DAT_04c61168);
    lVar3 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2 + 0x630);
    if ((lVar3 == 0) || (1 < *(int *)(lVar3 + 0x4c) - 7U)) {
      lVar3 = FUN_002ba790(DAT_04c61168);
      if (*(long *)(lVar3 + 0x98) == 0) {
LAB_002a8620:
        iVar5 = 0;
        if (*(int *)(param_2 + 0x10) != 0) {
LAB_002a8628:
          pcVar4 = "PacketReader::BeginDispatch DestinationVariableId is not match.";
          goto LAB_002a8638;
        }
      }
      else {
        lVar3 = FUN_002ba790(DAT_04c61168);
        iVar1 = *(int *)(*(long *)(lVar3 + 0x98) + 0x48);
        if (iVar1 == 0) goto LAB_002a8620;
        iVar5 = *(int *)(param_2 + 0x10);
        if ((iVar5 != 0) && (iVar1 != iVar5)) goto LAB_002a8628;
      }
      if ((*(int *)(param_2 + 0x14) == 0) || ((iVar5 == 0 && (*(char *)(param_2 + 0x1a) == '\0'))))
      {
        return 1;
      }
      plVar2 = (long *)FUN_002ba790(DAT_04c61168);
      lVar3 = (**(code **)(*plVar2 + 0x48))(plVar2,*(undefined4 *)(param_2 + 0x14));
      if (lVar3 != 0) {
        return 1;
      }
      pcVar4 = "PacketReader::BeginDispatch SourceVariableId is not match";
      local_2c = 0x8000000000;
      goto LAB_002a863c;
    }
    pcVar4 = "PacketReader::BeginDispatch ignore Leaving station";
  }
LAB_002a8638:
  local_2c = 0x400000000;
LAB_002a863c:
  local_24 = 0;
  FUN_002a8940(param_1,&local_2c,param_2,pcVar4);
  return 0;
}


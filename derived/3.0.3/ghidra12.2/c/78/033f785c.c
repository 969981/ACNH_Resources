
undefined8 FUN_033f785c(undefined1 *param_1)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  byte *pbVar4;
  long lVar5;
  long *plVar6;
  byte local_60 [8];
  undefined *local_58;
  char *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined8 *local_38;
  undefined4 local_30;
  undefined2 local_2c;
  undefined4 local_28;
  
  *(undefined4 *)(param_1 + 0x28) = 0;
  *param_1 = 0;
  local_38 = (undefined8 *)(param_1 + 8);
  *local_38 = &PTR_LAB_04b29500;
  *(undefined1 **)(param_1 + 0x10) = param_1;
  puVar3 = PTR_DAT_04bb6538;
  local_58 = PTR_DAT_04bb2020 + 0x10;
  local_40 = PTR_DAT_04bb2120;
  local_30 = 0x10101;
  local_2c = 0;
  lVar5 = *(long *)PTR_DAT_04bb39b0;
  pbVar4 = PTR_DAT_04bb32e0;
  if (lVar5 == 0) {
LAB_033f7918:
    if (7 < *pbVar4) {
LAB_033f7924:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar5 = **(long **)PTR_DAT_04bb27d0;
        bVar2 = *(byte *)(lVar5 + 0x473);
        pbVar4 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar5 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar5 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar4 = (byte *)(lVar5 + 0x471);
          }
        }
        local_60[0] = *pbVar4;
        if (local_60[0] < 8) goto LAB_033f7994;
      }
      pbVar4 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar5 + 0x15c) != 0) {
      pbVar4 = (byte *)(lVar5 + 0x158);
    }
    if (7 < *pbVar4) {
      if ((*(int *)(lVar5 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar4 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_033f7918;
      }
      goto LAB_033f7924;
    }
  }
  local_60[0] = *pbVar4;
  if (7 < local_60[0]) {
    local_60[0] = 0xff;
  }
LAB_033f7994:
  local_28 = 0;
  if (7 < local_60[0]) {
    local_60[0] = 0xff;
  }
  local_50 = "10702";
  local_48 = local_58;
  FUN_02dfa190(*(undefined8 *)PTR_DAT_04bb6538,local_60);
  plVar6 = *(long **)puVar3;
  if (4 < (int)plVar6[0x15] - 3U) {
    if (((int)plVar6[0x15] == 5) || ((int)plVar6[0x15] == 2)) {
      FUN_0386b170(plVar6[0x13],plVar6);
      *(undefined1 *)((long)plVar6 + 0x165) = 1;
      return 1;
    }
    if (6 < *(uint *)(plVar6 + 0x15)) {
      return 1;
    }
    if ((1 << (ulong)(*(uint *)(plVar6 + 0x15) & 0x1f) & 0x58U) == 0) {
      return 1;
    }
  }
  (**(code **)(*plVar6 + 0xa8))(plVar6);
  return 1;
}


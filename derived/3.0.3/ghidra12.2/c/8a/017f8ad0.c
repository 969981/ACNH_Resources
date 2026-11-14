
undefined4 FUN_017f8ad0(long param_1)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  byte *pbVar6;
  long lVar7;
  undefined *local_30;
  char *pcStack_28;
  byte local_4 [4];
  
  lVar7 = *(long *)PTR_DAT_04bb39b0;
  pbVar6 = PTR_DAT_04bb32e0;
  if (lVar7 == 0) {
LAB_017f8b44:
    if (*pbVar6 < 8) goto LAB_017f8bbc;
LAB_017f8b50:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_017f8bb4:
      pbVar6 = PTR_DAT_04bb5038;
      goto LAB_017f8bbc;
    }
    lVar7 = **(long **)PTR_DAT_04bb27d0;
    bVar3 = *(byte *)(lVar7 + 0x473);
    pbVar6 = PTR_DAT_04bb5038;
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
      if (7 < bVar3) {
        puVar1 = (uint *)(lVar7 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar6 = (byte *)(lVar7 + 0x471);
      }
    }
    local_4[0] = *pbVar6;
    if (7 < local_4[0]) goto LAB_017f8bb4;
  }
  else {
    if (*(int *)(lVar7 + 0x15c) != 0) {
      pbVar6 = (byte *)(lVar7 + 0x158);
    }
    if (7 < *pbVar6) {
      if ((*(int *)(lVar7 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar6 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_017f8b44;
      }
      goto LAB_017f8b50;
    }
LAB_017f8bbc:
    local_4[0] = *pbVar6;
    if (7 < local_4[0]) {
      local_4[0] = 0xff;
    }
  }
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "WHEREAREN_Unlock_RoomDimming";
  iVar5 = FUN_0274bce0(local_4,&local_30);
  iVar2 = *(int *)(param_1 + 0x140);
  if (iVar2 == 0) {
    lVar7 = 1;
  }
  else if (iVar2 == 3) {
    if ((*(long *)PTR_DAT_04bb5ce0 != 0) && (sVar4 = *(short *)PTR_DAT_04bb6298, sVar4 != -1)) {
      local_30 = (undefined *)CONCAT44(local_30._4_4_,0x19);
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
      if (0xff < (uint)(int)sVar4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 0x19 & 1) == 0) {
        local_30 = (undefined *)CONCAT44(local_30._4_4_,7);
        puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
        if (0xff < (uint)(int)sVar4) {
          puVar1 = (uint *)PTR_DAT_04bc39f8;
        }
        lVar7 = (ulong)((*puVar1 & 0x80) == 0) << 1;
        goto LAB_017f8ce0;
      }
    }
    lVar7 = 2;
  }
  else if (iVar2 == 1) {
    lVar7 = 2;
    if (iVar5 != 0) {
      lVar7 = 3;
    }
  }
  else {
    lVar7 = 0;
  }
LAB_017f8ce0:
  FUN_017eeffc(param_1,lVar7,1);
  return *(undefined4 *)(param_1 + 0x140);
}


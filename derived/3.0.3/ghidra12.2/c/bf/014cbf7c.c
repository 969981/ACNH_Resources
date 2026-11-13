
/* WARNING: Removing unreachable block (ram,0x014cc0b8) */

ulong FUN_014cbf7c(long param_1)

{
  uint *puVar1;
  byte bVar2;
  ulong uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined *local_30;
  char *pcStack_28;
  byte local_4 [4];
  
  if ((*(byte *)(param_1 + 0xa2d) >> 5 & 1) == 0) {
    return 0;
  }
  lVar7 = *(long *)PTR_DAT_04bb39b0;
  pbVar4 = PTR_DAT_04bb32e0;
  if (lVar7 == 0) {
LAB_014cc000:
    if (*pbVar4 < 8) goto LAB_014cc078;
LAB_014cc00c:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_014cc070:
      pbVar4 = PTR_DAT_04bb5038;
      goto LAB_014cc078;
    }
    lVar7 = **(long **)PTR_DAT_04bb27d0;
    bVar2 = *(byte *)(lVar7 + 0x473);
    pbVar4 = PTR_DAT_04bb5038;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar7 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar4 = (byte *)(lVar7 + 0x471);
      }
    }
    local_4[0] = *pbVar4;
    if (7 < local_4[0]) goto LAB_014cc070;
  }
  else {
    if (*(int *)(lVar7 + 0x15c) != 0) {
      pbVar4 = (byte *)(lVar7 + 0x158);
    }
    if (7 < *pbVar4) {
      if ((*(int *)(lVar7 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar4 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_014cc000;
      }
      goto LAB_014cc00c;
    }
LAB_014cc078:
    local_4[0] = *pbVar4;
    if (7 < local_4[0]) {
      local_4[0] = 0xff;
    }
  }
  lVar7 = *(long *)PTR_DAT_04bb46b0;
  if (lVar7 == 0) {
    return 0;
  }
  local_30 = (undefined *)CONCAT44(local_30._4_4_,1);
  if (((*(byte *)(lVar7 + 0x50d) ^ 0xff) & 6) != 0) {
    return 0;
  }
  lVar7 = (**(code **)(**(long **)(*(long *)(lVar7 + 0x10) + 0x188) + 0x38))();
  if (lVar7 == 0) {
    return 0;
  }
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "Unlock_CreateRoad";
  uVar3 = FUN_02757a80(local_4,&local_30);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  iVar6 = *(int *)(param_1 + 0x368);
  if (iVar6 != 3) {
    iVar5 = 3;
    if (iVar6 < 3) {
      iVar5 = iVar6 + 1;
    }
    iVar6 = 3;
    if (iVar5 < 3) {
      iVar6 = iVar5 + 1;
    }
    if ((*(byte *)(param_1 + 0xa2d) & 0x10) != 0) {
      iVar6 = iVar5;
    }
    if ((*(byte *)(param_1 + 0xa2d) >> 5 & 1) == 0) {
      if (2 < iVar6) goto LAB_014cc148;
      iVar6 = iVar6 + 1;
    }
    if (iVar6 != 3) goto LAB_014cc14c;
  }
LAB_014cc148:
  iVar6 = 0;
LAB_014cc14c:
  return (ulong)(iVar6 == 2);
}


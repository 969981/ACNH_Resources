
bool FUN_01de19b0(long param_1,undefined1 *param_2,long param_3)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  undefined *local_50;
  char *pcStack_48;
  byte local_24 [4];
  
  *param_2 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    return false;
  }
  if ((*(int *)(*(long *)PTR_DAT_04bb21d0 + 0x78) != 0) &&
     (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0xc4) != 0)) {
    return false;
  }
  uVar6 = FUN_02640eb0(0);
  puVar3 = PTR_DAT_04bb2020;
  if ((uVar6 & 1) == 0) {
    return false;
  }
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "IllegalReportCount";
  iVar4 = FUN_0274f6e0(&local_50);
  lVar8 = *(long *)PTR_DAT_04bb39b0;
  pbVar7 = PTR_DAT_04bb32e0;
  if (lVar8 == 0) {
LAB_01de1a90:
    if (7 < *pbVar7) {
LAB_01de1a9c:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar8 = **(long **)PTR_DAT_04bb27d0;
        bVar2 = *(byte *)(lVar8 + 0x473);
        pbVar7 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar8 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar7 = (byte *)(lVar8 + 0x471);
          }
        }
        local_24[0] = *pbVar7;
        if (local_24[0] < 8) goto LAB_01de1b1c;
      }
      pbVar7 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar8 + 0x15c) != 0) {
      pbVar7 = (byte *)(lVar8 + 0x158);
    }
    if (7 < *pbVar7) {
      if ((*(int *)(lVar8 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar7 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01de1a90;
      }
      goto LAB_01de1a9c;
    }
  }
  local_24[0] = *pbVar7;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
LAB_01de1b1c:
  local_50 = puVar3 + 0x10;
  pcStack_48 = "IllegalReportCount";
  iVar5 = FUN_0274bce0(local_24,&local_50);
  if (iVar4 <= iVar5) {
    *param_2 = 1;
    return false;
  }
  *param_2 = 0;
  if (*(long *)(param_3 + 8) == 0) {
    return false;
  }
  return *(long *)(param_3 + 0x10) != 0;
}


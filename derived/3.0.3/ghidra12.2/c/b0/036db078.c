
void FUN_036db078(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  undefined *local_38;
  char *pcStack_30;
  byte local_24 [4];
  
  if ((*(int *)(param_1 + 0x14) != 0) &&
     ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0 || ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)))
     ) {
    if (*(int *)(param_1 + 0x18) == 1) {
      FUN_036e2330(param_1);
    }
    else {
      FUN_037693c0();
      FUN_036dab00(param_1);
    }
  }
  FUN_036dab00(param_1);
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  lVar6 = *(long *)PTR_DAT_04bb39b0;
  pbVar5 = PTR_DAT_04bb32e0;
  if (lVar6 == 0) {
LAB_036db144:
    if (7 < *pbVar5) {
LAB_036db150:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar6 = **(long **)PTR_DAT_04bb27d0;
        bVar3 = *(byte *)(lVar6 + 0x473);
        pbVar5 = PTR_DAT_04bb5038;
        if ((long)(char)bVar3 != 0xffffffffffffffff) {
          puVar2 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
          if (7 < bVar3) {
            puVar2 = (uint *)(lVar6 + 0x48);
          }
          if ((*puVar2 & 8) != 0) {
            pbVar5 = (byte *)(lVar6 + 0x471);
          }
        }
        local_24[0] = *pbVar5;
        if (local_24[0] < 8) goto LAB_036db1d0;
      }
      pbVar5 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar6 + 0x15c) != 0) {
      pbVar5 = (byte *)(lVar6 + 0x158);
    }
    if (7 < *pbVar5) {
      if ((*(int *)(lVar6 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar5 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_036db144;
      }
      goto LAB_036db150;
    }
  }
  local_24[0] = *pbVar5;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
LAB_036db1d0:
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_30 = "WorkModeNewItemLook";
  local_38 = puVar1;
  iVar4 = FUN_02757a80(local_24,&local_38);
  if (iVar4 == 1) {
    pcStack_30 = "CoordinatorGrade";
    local_38 = puVar1;
    iVar4 = FUN_02758850(&local_38);
    pcStack_30 = "WorkModeNewItemGrade";
    local_38 = puVar1;
    FUN_02757de8(local_24,&local_38,iVar4 + 1);
    pcStack_30 = "WorkModeNewItemLook";
    local_38 = puVar1;
    FUN_02757de8(local_24,&local_38,0);
  }
  return;
}


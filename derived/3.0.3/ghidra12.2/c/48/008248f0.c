
bool FUN_008248f0(long param_1,byte *param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  byte *pbVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  byte local_94 [4];
  undefined8 local_90;
  char *local_88;
  int local_6c;
  byte local_68 [4];
  byte local_64 [4];
  undefined *local_60;
  char *pcStack_58;
  
  bVar7 = *param_2;
  if (7 < bVar7) {
    bVar7 = 0xff;
  }
  bVar8 = *(byte *)(param_1 + 0x158);
  if (7 < bVar8) {
    bVar8 = 0xff;
  }
  if (bVar7 == bVar8) goto LAB_00824bb8;
  pbVar1 = (byte *)(param_1 + 0x158);
  *pbVar1 = bVar7;
  local_90 = &PTR_FUN_04a72e28;
  local_88 = (char *)CONCAT71(local_88._1_7_,bVar7);
  iVar4 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
  local_94[0] = bVar8;
  if (iVar4 != 0) {
    lVar11 = (long)iVar4 << 3;
    puVar10 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
    do {
      (*(code *)*local_90)(&local_90,*puVar10);
      lVar11 = lVar11 + -8;
      puVar10 = puVar10 + 1;
    } while (lVar11 != 0);
  }
  FUN_021af03c(&DAT_053fe348);
  puVar3 = PTR_DAT_04bb2020;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  local_88 = "FireworksApproachNpcIndex";
  local_90 = (undefined **)puVar2;
  iVar4 = FUN_0274bce0(local_94,&local_90);
  if (iVar4 != 0) {
    local_60 = (undefined *)CONCAT44(local_60._4_4_,iVar4 + -1);
    local_88 = "FireworksApproachTalk";
    local_90 = (undefined **)puVar2;
    FUN_021be8c0(&local_60,&local_90,0);
  }
  local_88 = "HalloweenApproachNpcIndex";
  local_90 = (undefined **)puVar2;
  iVar4 = FUN_02743000(&local_90);
  if (iVar4 == 0) {
    local_60 = puVar3 + 0x10;
    pcStack_58 = "HalloweenApproachNow";
    iVar4 = FUN_02743000(&local_60);
    if (iVar4 != 0) goto LAB_00824a1c;
  }
  else {
LAB_00824a1c:
    local_88 = "HalloweenApproachNow";
    local_90 = (undefined **)(puVar3 + 0x10);
    FUN_02743234(&local_90,0);
    local_88 = "HalloweenApproachNpcIndex";
    local_90 = (undefined **)(puVar3 + 0x10);
    FUN_02743234(&local_90,0);
  }
  DAT_05454080 = 0;
  FUN_021c6130(&DAT_053fe348,pbVar1);
  FUN_033fba40(pbVar1);
  local_64[0] = local_94[0];
  if (7 < local_94[0]) {
    local_64[0] = 0xff;
  }
  local_68[0] = *pbVar1;
  if (7 < local_68[0]) {
    local_68[0] = 0xff;
  }
  FUN_00813658(*(undefined8 *)PTR_DAT_04bb48c8,local_64,local_68);
  local_60 = puVar3 + 0x10;
  pcStack_58 = "sys_change_main_player";
  FUN_025ffac8(&local_90,&local_60,pbVar1);
  puVar2 = PTR_DAT_04bc3440 + 0x10;
  local_90 = (undefined **)puVar2;
  FUN_02602bc0(&local_90,3);
  local_90 = (undefined **)puVar2;
  iVar4 = FUN_025dd930(&local_90);
  if (iVar4 == -1) {
LAB_00824b0c:
    if (local_6c == 0) {
      local_6c = 1;
    }
  }
  else {
    iVar4 = (**(code **)((long)local_90 + 0x20))(&local_90);
    local_60 = (undefined *)CONCAT44(local_60._4_4_,iVar4);
    if (0xc < iVar4) goto LAB_00824b0c;
  }
  FUN_02601530(&local_90);
  pbVar5 = *(byte **)PTR_DAT_04bb38d0;
  if (pbVar5 != (byte *)0x0) {
    local_90 = (undefined **)(CONCAT44(local_90._4_4_,(uint)(*pbVar5 >> 2)) & 0xffffffff0000000f);
    if ((int)local_90 == 3) {
      FUN_008a6110(pbVar5,2);
    }
  }
  FUN_02cae70c(*(undefined8 *)PTR_DAT_04bc5c78,0);
  puVar3 = PTR_DAT_04bb49f0;
  *(undefined1 *)(*(long *)PTR_DAT_04bb5030 + 0x111) = 1;
  puVar2 = PTR_DAT_04bb21d0;
  bVar6 = *pbVar1;
  if (7 < bVar6) {
    bVar6 = 0xff;
  }
  lVar9 = *(long *)puVar3;
  *(byte *)(lVar9 + 0xb1) = bVar6;
  lVar11 = *(long *)puVar2;
  *(undefined1 *)(lVar9 + 0xb0) = 1;
  *(undefined2 *)(lVar11 + 0x1cd4) = 1;
  *(undefined4 *)(lVar11 + 0x1cd8) = 2;
LAB_00824bb8:
  return bVar7 != bVar8;
}


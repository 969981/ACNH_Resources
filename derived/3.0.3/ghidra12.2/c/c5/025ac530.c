
void FUN_025ac530(long param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  undefined *local_90;
  char *local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined *local_70;
  char *pcStack_68;
  uint local_60;
  undefined4 uStack_5c;
  long local_58;
  
  puVar5 = PTR_DAT_04bb2020;
  local_70 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "IsMainAccount";
  uVar11 = FUN_02601690(param_1,&local_90);
  if (((uVar11 & 1) == 0) ||
     (iVar9 = nn::account::GetUserId((Uid *)&local_60,(UserHandle *)&local_90), iVar9 != 0)) {
    bVar8 = false;
    lVar12 = *(long *)(param_1 + 8);
  }
  else {
    lVar12 = *(long *)PTR_DAT_04bb4410;
    if (lVar12 == 0) {
      lVar17 = 0;
      lVar12 = 0;
    }
    else {
      lVar17 = *(long *)(lVar12 + 0x140);
      lVar12 = *(long *)(lVar12 + 0x148);
    }
    bVar8 = CONCAT44(uStack_5c,local_60) == lVar17 && local_58 == lVar12;
    lVar12 = *(long *)(param_1 + 8);
  }
  if (lVar12 != 0) {
    FUN_026054d0(lVar12,&local_70,bVar8);
  }
  FUN_02602f20(param_1);
  FUN_02603050(param_1);
  FUN_026031e0(param_1);
  puVar6 = PTR_DAT_04bb46b0;
  if (*(byte *)(param_1 + 0x18) < 8) {
    local_90 = (undefined *)CONCAT71(local_90._1_7_,*(byte *)(param_1 + 0x18));
    lVar12 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_90,1);
  }
  else {
    if ((*(int *)(param_1 + 0x1c) == -1) || (*(long *)PTR_DAT_04bb46b0 == 0)) goto LAB_025ac7b0;
    lVar12 = FUN_026eec4c();
  }
  if (lVar12 == 0) goto LAB_025ac7b0;
  lVar17 = lVar12 + 0x194b0;
  if (*(long *)(lVar12 + 0x194b8) == 0) {
    lVar17 = *(long *)(*(long *)puVar6 + 0x20);
    plVar14 = *(long **)(lVar17 + 0x1170);
    if (plVar14 == (long *)0x0) goto LAB_025ac660;
LAB_025ac620:
    uVar11 = 0;
    if ((undefined8 *)*plVar14 != (undefined8 *)0x0) {
      uVar11 = (*(code *)**(undefined8 **)*plVar14)();
    }
  }
  else {
    plVar14 = *(long **)(lVar12 + 0x1a620);
    if (plVar14 != (long *)0x0) goto LAB_025ac620;
LAB_025ac660:
    uVar11 = 0;
  }
  uVar10 = 0;
  iVar9 = 0;
  pbVar2 = (byte *)(*(long *)(lVar17 + 0x1158) + *(long *)(lVar17 + 0x1150));
  do {
    local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar10);
    if (uVar10 == *pbVar2) {
      uVar15 = 1;
    }
    else {
      uVar7 = 0;
      do {
        uVar16 = uVar7;
        if (uVar10 == pbVar2[uVar16 + 1]) goto LAB_025ac720;
        if (uVar10 == pbVar2[uVar16 + 2]) {
          uVar16 = uVar16 + 1;
          goto LAB_025ac720;
        }
        if (uVar10 == pbVar2[uVar16 + 3]) {
          uVar16 = uVar16 + 2;
          goto LAB_025ac720;
        }
        if (uVar16 == 0xfc) {
          uVar16 = 0xff;
          goto LAB_025ac720;
        }
        uVar7 = uVar16 + 4;
      } while (uVar10 != pbVar2[uVar16 + 4]);
      uVar16 = uVar16 + 3;
LAB_025ac720:
      uVar15 = (uint)(uVar16 < 0xff);
    }
    uVar10 = uVar10 + 1;
    iVar9 = iVar9 + uVar15;
  } while (uVar10 != 0x79);
  if ((((uVar11 & 1) != 0) && (*(long *)(lVar17 + 0x1170) != 0)) &&
     (puVar13 = *(undefined8 **)(*(long *)(lVar17 + 0x1170) + 8), puVar13 != (undefined8 *)0x0)) {
    (**(code **)*puVar13)();
  }
  puVar1 = puVar5 + 0x10;
  local_88 = "ActiveManpuNum";
  if (*(long *)(param_1 + 8) != 0) {
    local_90 = puVar1;
    FUN_026054d0(*(long *)(param_1 + 8),&local_90,iVar9);
  }
  local_88 = "Activate_WebService";
  local_90 = puVar1;
  iVar9 = FUN_02602860(param_1,&local_90);
  local_88 = "ActivateBlanco";
  local_90 = puVar1;
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_90,iVar9 != 0);
  }
LAB_025ac7b0:
  lVar12 = FUN_02602680(param_1);
  if (lVar12 != 0) {
    if (*(long **)(lVar12 + 0x28) == (long *)0x0) {
      uVar11 = 0;
    }
    else {
      puVar13 = (undefined8 *)**(long **)(lVar12 + 0x28);
      uVar11 = 0;
      if (puVar13 != (undefined8 *)0x0) {
        uVar11 = (**(code **)*puVar13)();
      }
    }
    local_60 = *(uint *)(*(long *)(lVar12 + 0x10) + *(long *)(lVar12 + 8));
    if (8 < local_60) {
      local_60 = 0;
    }
    if ((((uVar11 & 1) != 0) && (*(long *)(lVar12 + 0x28) != 0)) &&
       (puVar13 = *(undefined8 **)(*(long *)(lVar12 + 0x28) + 8), puVar13 != (undefined8 *)0x0)) {
      (**(code **)*puVar13)();
    }
    local_90 = puVar5 + 0x10;
    local_88 = "HouseLevel";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_026054d0(*(long *)(param_1 + 8),&local_90,(long)(int)local_60);
    }
    if ((*(long **)(lVar12 + 0x28) == (long *)0x0) ||
       (puVar13 = (undefined8 *)**(long **)(lVar12 + 0x28), puVar13 == (undefined8 *)0x0)) {
      uVar10 = 1;
    }
    else {
      uVar10 = (**(code **)*puVar13)();
      uVar10 = uVar10 ^ 1;
    }
    puVar1 = puVar5 + 0x10;
    local_88 = "CountHouseExtension";
    local_90 = puVar1;
    iVar9 = FUN_0273c490(*(long *)(lVar12 + 0x10) + *(long *)(lVar12 + 8) + 0x20,&local_90);
    if ((((uVar10 & 1) == 0) && (*(long *)(lVar12 + 0x28) != 0)) &&
       (puVar13 = *(undefined8 **)(*(long *)(lVar12 + 0x28) + 8), puVar13 != (undefined8 *)0x0)) {
      (**(code **)*puVar13)();
    }
    local_88 = "HouseExtension";
    local_90 = puVar1;
    if (*(long *)(param_1 + 8) != 0) {
      FUN_026054d0(*(long *)(param_1 + 8),&local_90,(long)iVar9);
    }
  }
  lVar12 = *(long *)puVar6;
  if ((lVar12 != 0) &&
     (lVar12 = (**(code **)(*(long *)**(undefined8 **)(lVar12 + 0x10) + 0x38))(), lVar12 != 0)) {
    if ((*(long **)(lVar12 + 0x27f638) == (long *)0x0) ||
       (puVar13 = (undefined8 *)**(long **)(lVar12 + 0x27f638), puVar13 == (undefined8 *)0x0)) {
      uVar10 = 1;
    }
    else {
      uVar10 = (**(code **)*puVar13)();
      uVar10 = uVar10 ^ 1;
    }
    bVar4 = *(byte *)(*(long *)(lVar12 + 0x27f620) + *(long *)(lVar12 + 0x27f618) + 8);
    bVar3 = bVar4;
    if (7 < bVar4) {
      bVar3 = 0xff;
    }
    if ((((uVar10 & 1) == 0) && (*(long *)(lVar12 + 0x27f638) != 0)) &&
       (puVar13 = *(undefined8 **)(*(long *)(lVar12 + 0x27f638) + 8), puVar13 != (undefined8 *)0x0))
    {
      (**(code **)*puVar13)();
    }
    local_90 = puVar5 + 0x10;
    local_88 = "IsBackupAgent";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_026054d0(*(long *)(param_1 + 8),&local_90,
                   bVar4 < 8 && *(int *)(param_1 + 0x1c) == (int)(char)bVar3);
    }
  }
  FUN_0260cdfc(&local_60);
  uVar10 = local_60;
  if (local_60 != 0) {
    uVar15 = 0;
    do {
      lVar12 = local_58 + ((long)((ulong)uVar15 << 0x20) >> 0x1b);
      local_88 = *(char **)(lVar12 + 8);
      local_78 = *(undefined8 *)(lVar12 + 0x18);
      local_90 = puVar5 + 0x10;
      puStack_80 = puVar5 + 0x10;
      iVar9 = FUN_02602860(param_1,&local_90);
      if (*(long *)(param_1 + 8) != 0) {
        FUN_026054d0(*(long *)(param_1 + 8),&puStack_80,(long)iVar9);
      }
      uVar15 = uVar15 + 1;
    } while (uVar10 != uVar15);
  }
  return;
}


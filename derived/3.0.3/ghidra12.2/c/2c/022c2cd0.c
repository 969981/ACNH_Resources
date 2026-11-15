
undefined8 FUN_022c2cd0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  byte *pbVar2;
  byte bVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  short sVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined *local_78;
  char *pcStack_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_38;
  
  pbVar2 = PTR_DAT_04bb5038 + (uint)(int)*(char *)(param_1 + 0x17);
  if (7 < (uint)(int)*(char *)(param_1 + 0x17)) {
    pbVar2 = PTR_DAT_04bb32e0;
  }
  if (*(byte *)(param_1 + 0x16) - 0x19 < 3) {
    local_68 = PTR_DAT_04bb2010 + 0x10;
    bVar3 = *(byte *)(param_1 + 0x19);
    local_60 = (char *)CONCAT44((int)*(short *)(param_1 + 0xe) +
                                (uint)(*(byte *)(param_1 + 0x1d) >> 4) + -8,
                                (*(byte *)(param_1 + 0x1d) & 0xf) + (int)*(short *)(param_1 + 0xc) +
                                -8);
    local_78 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_78);
    local_78 = *(undefined **)(param_1 + 4);
    FUN_011f3880(param_2,bVar3 & 7,&local_78,&local_68);
    return 1;
  }
  if (*(byte *)(param_1 + 0x16) != 0x17) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x1c) >> 1 & 1) != 0) {
    if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
      local_60 = (char *)CONCAT44((int)*(short *)(param_1 + 0xe),(int)*(short *)(param_1 + 0xc));
      local_68 = PTR_DAT_04bb2010 + 0x10;
      if (DAT_055c1b60 != &DAT_055c1b58) {
        sVar10 = 0;
        puVar11 = DAT_055c1b60;
        do {
          if (*(int *)(puVar11 + -1) == 0x6622bd46) goto LAB_022c2e28;
          puVar11 = (undefined8 *)puVar11[1];
          sVar10 = sVar10 + 1;
        } while (puVar11 != &DAT_055c1b58);
      }
      sVar10 = -1;
LAB_022c2e28:
      if (*(short *)(param_1 + 0x14) == sVar10) {
        uVar9 = 0;
      }
      else {
        uVar8 = FUN_0122a4e0();
        uVar9 = 1;
        if ((uVar8 & 1) == 0) {
          uVar9 = 2;
        }
      }
      FUN_0122aaa0(&local_68,uVar9);
    }
    else {
      local_60 = (char *)CONCAT44((int)*(short *)(param_1 + 0xe),(int)*(short *)(param_1 + 0xc));
      local_68 = PTR_DAT_04bb2010 + 0x10;
      if (DAT_055c1b60 != &DAT_055c1b58) {
        sVar10 = 0;
        puVar11 = DAT_055c1b60;
        do {
          if (*(int *)(puVar11 + -1) == 0x6622bd46) goto LAB_022c2ea8;
          puVar11 = (undefined8 *)puVar11[1];
          sVar10 = sVar10 + 1;
        } while (puVar11 != &DAT_055c1b58);
      }
      sVar10 = -1;
LAB_022c2ea8:
      if (*(short *)(param_1 + 0x14) == sVar10) {
        uVar9 = 0;
      }
      else {
        uVar8 = FUN_0122a4e0();
        uVar9 = 1;
        if ((uVar8 & 1) == 0) {
          uVar9 = 2;
        }
      }
      FUN_0122a7f0(&local_68,uVar9);
    }
  }
  local_38 = 0xfffe;
  FUN_0277d4ac(&local_38);
  puVar1 = PTR_DAT_04bb2010;
  local_38 = *(undefined8 *)(param_1 + 4);
  if (-1 < *(char *)(param_1 + 0x1a)) {
    if ((((*pbVar2 < 8) && (uVar5 = FUN_02582d8c(pbVar2,1), uVar5 < 8)) &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d4) != '\0')) &&
       ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d6) != '\0' &&
        (iVar6 = FUN_0277d6c4(&local_38), iVar6 == 0x38d2)))) {
      local_68 = PTR_DAT_04bb2020 + 0x10;
      local_60 = "PV_FillInHaniwaPiece";
      FUN_01b5c520(&local_68,1,pbVar2);
      puVar1 = PTR_DAT_04bb30a0;
      uVar5 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0);
      if (((uVar5 & 0xfffffffe) != 4) &&
         (uVar5 = FUN_00a86724(*(undefined8 *)puVar1), (uVar5 & 0xfffffffe) != 6)) {
        local_60 = (char *)CONCAT44((int)*(short *)(param_1 + 0xe),(int)*(short *)(param_1 + 0xc));
        local_68 = PTR_DAT_04bb2010 + 0x10;
        FUN_0122acc0(&local_68,*(undefined2 *)(param_1 + 0x14));
      }
    }
    local_60 = (char *)CONCAT44((int)*(short *)(param_1 + 0xe),(int)*(short *)(param_1 + 0xc));
    puVar1 = PTR_DAT_04bb2010 + 0x10;
    local_68 = puVar1;
    FUN_011f3520(param_2,0,&local_68);
    local_60 = (char *)CONCAT44((int)*(short *)(param_1 + 0xe),(int)*(short *)(param_1 + 0xc));
    local_68 = puVar1;
    FUN_01a50ae4(param_2,&local_38,&local_68);
    return 1;
  }
  local_60 = (char *)CONCAT44((int)*(short *)(param_1 + 0xe),(int)*(short *)(param_1 + 0xc));
  local_68 = PTR_DAT_04bb2010 + 0x10;
  FUN_011f3520(param_2,0,&local_68);
  uVar5 = *(byte *)(param_1 + 0x19) >> 3 & 3;
  if (uVar5 == 3) {
    uVar5 = 0xffffffff;
  }
  if ((*(ushort *)(param_1 + 0xc) < 0x120) && (*(ushort *)(param_1 + 0xe) < 0x100)) {
    lVar12 = (ulong)(uint)(((int)((uint)*(ushort *)(param_1 + 0xe) << 0x10) >> 0x11) * 0x90) +
             (ulong)(uint)((int)(short)*(ushort *)(param_1 + 0xc) >> 1);
    if ((uint)lVar12 != 0xffffffff) {
      if (8 < (uint)lVar12 >> 0xb) {
        lVar12 = 0;
      }
      *(undefined1 *)(*(long *)PTR_DAT_04bb4778 + lVar12 + 0x2a58) = 0;
    }
  }
  puVar4 = PTR_DAT_04bb43c0;
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    local_78 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_78);
    if ((*(byte *)(param_1 + 0x1b) >> 1 & 1) == 0) {
      local_68 = (undefined *)0xea65;
      FUN_0277d4ac(&local_68);
    }
    else {
      local_88 = 0xfffe;
      FUN_0277d4ac(&local_88);
      local_88 = *(undefined8 *)(param_1 + 4);
      local_7c = FUN_0277d6c4(&local_88);
      FUN_012505d4(&local_68,&local_7c);
    }
    local_60 = (char *)CONCAT44((int)*(short *)(param_1 + 0xe),(int)*(short *)(param_1 + 0xc));
    local_78 = local_68;
    local_68 = puVar1 + 0x10;
    FUN_011f3880(param_2,0,&local_78,&local_68);
    goto LAB_022c3350;
  }
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(&local_38);
  if (*(long *)puVar4 == 0) {
LAB_022c317c:
    uVar8 = FUN_0277db54(&local_38);
  }
  else {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((*(uint *)(lVar12 + 0x1d8) <= uVar7) ||
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_022c317c;
    uVar8 = FUN_0124cebc(&local_38,uVar5,*(byte *)(param_1 + 0x19) >> 5);
  }
  if ((uVar8 & 1) != 0) {
    local_60 = (char *)CONCAT44((int)*(short *)(param_1 + 0xe),(int)*(short *)(param_1 + 0xc));
    local_68 = puVar1 + 0x10;
    FUN_011f3880(param_2,0,&local_38,&local_68);
  }
  if (7 < *pbVar2) {
    return 1;
  }
  uVar5 = FUN_02582d8c(pbVar2,1);
  if ((((uVar5 < 8) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d4) != '\0')) &&
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d6) != '\0')) &&
     (uVar8 = FUN_0277db54(&local_38), (uVar8 & 1) != 0)) {
    FUN_0124c030(&local_68,&local_38);
    iVar6 = FUN_0123db50(&local_60,local_58);
    puVar4 = PTR_DAT_04bb2020;
    if (((iVar6 - 0x23U < 9) || (uVar8 = FUN_0123d890(local_58,4), (uVar8 & 1) != 0)) ||
       ((uVar8 = FUN_0124dcb0(&local_68), (uVar8 & 1) != 0 ||
        (iVar6 = FUN_0123db50(&local_60,local_58), iVar6 - 0xbU < 7)))) {
      local_78 = puVar4 + 0x10;
      pcStack_70 = "PlantTreeCount";
      FUN_0212944c(&local_78,1,pbVar2);
    }
    iVar6 = FUN_0123db50(&local_60,local_58);
    if (iVar6 - 0x12U < 6) {
      local_78 = puVar4 + 0x10;
      pcStack_70 = "PlantVegetableCount";
      FUN_0212944c(&local_78,1,pbVar2);
    }
  }
LAB_022c3350:
  if (((*pbVar2 < 8) && (uVar5 = FUN_02582d8c(pbVar2,1), uVar5 < 8)) &&
     ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d4) != '\0' &&
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d6) != '\0')))) {
    local_90 = (undefined4)local_38;
    uStack_8c = local_38._4_4_;
    local_68 = puVar1 + 0x10;
    local_60 = (char *)CONCAT44((int)*(short *)(param_1 + 0xe),(int)*(short *)(param_1 + 0xc));
    FUN_022c1a90(pbVar2,*(byte *)(param_1 + 0x1a) >> 4 & 7,&local_90,&local_68);
  }
  return 1;
}


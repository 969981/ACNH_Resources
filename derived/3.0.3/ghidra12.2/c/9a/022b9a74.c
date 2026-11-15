
void FUN_022b9a74(long param_1,long *param_2)

{
  undefined *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  byte bVar5;
  short sVar6;
  short sVar7;
  bool bVar8;
  undefined1 uVar9;
  ushort uVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  undefined **ppuVar14;
  undefined2 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  char cVar18;
  byte *pbVar19;
  long lVar20;
  undefined8 *puVar21;
  long lVar22;
  long lVar23;
  float fVar24;
  float fVar25;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  uint local_58;
  int iStack_54;
  char *local_50;
  uint local_48;
  int iStack_44;
  
  lVar22 = *param_2;
  if (lVar22 == 0) {
    return;
  }
  pbVar19 = (byte *)(param_1 + 0x10);
  if (7 < *pbVar19) goto switchD_022b9b18_caseD_2;
  uVar11 = FUN_02582d8c(pbVar19,1);
  puVar1 = PTR_DAT_04bb4fb8;
  if (((7 < uVar11) ||
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar11 * 0x13f0 + 0x13d4) == '\0')) ||
     (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar11 * 0x13f0 + 0x13d6) == '\0'))
  goto switchD_022b9b18_caseD_2;
  switch(*(undefined1 *)(lVar22 + 0x16)) {
  case 1:
    if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x24a26848) {
      local_78 = (undefined *)0xfffe;
      FUN_0277d4ac(&local_78);
      local_78 = *(undefined **)(lVar22 + 4);
      uVar13 = FUN_0277db54(&local_78);
      if ((uVar13 & 1) != 0) {
        local_80 = 0xfffe;
        FUN_0277d4ac(&local_80);
        local_80 = *(undefined8 *)(lVar22 + 4);
        FUN_0124c030(&local_68,&local_80);
        uVar13 = FUN_01250394(&local_68,1);
        if ((uVar13 & 1) == 0) break;
      }
    }
    local_78 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_78);
    local_78 = *(undefined **)(lVar22 + 4);
    FUN_01ad5d04(&local_68,&local_78);
    FUN_01af49bc(&local_68);
    uVar13 = FUN_0122449c(pbVar19,0);
    if (((uVar13 & 1) != 0) && ((*(byte *)(lVar22 + 0x1c) >> 2 & 1) != 0)) {
      local_70 = "PullWeedCount";
LAB_022b9ca0:
      local_78 = PTR_DAT_04bb2020 + 0x10;
      FUN_0212944c(&local_78,1,pbVar19);
    }
    break;
  case 4:
    if (((*pbVar19 < 8) && (uVar11 = FUN_02582d8c(pbVar19,1), uVar11 < 8)) &&
       ((*(char *)(*(long *)puVar1 + (ulong)uVar11 * 0x13f0 + 0x13d4) != '\0' &&
        (*(char *)(*(long *)puVar1 + (ulong)uVar11 * 0x13f0 + 0x13d6) != '\0')))) {
      local_80 = 0xfffe;
      FUN_0277d4ac(&local_80);
      local_80 = *(undefined8 *)(lVar22 + 4);
      uVar13 = FUN_0277db54(&local_80);
      if ((uVar13 & 1) != 0) {
        FUN_0124c030(&local_68,&local_80);
        iVar12 = FUN_0123db50(&local_60,CONCAT44(iStack_54,local_58));
        if (((iVar12 - 0x23U < 9) ||
            (uVar13 = FUN_0123d890(CONCAT44(iStack_54,local_58),4), (uVar13 & 1) != 0)) ||
           (uVar13 = FUN_0124dcb0(&local_68), (uVar13 & 1) != 0)) {
          local_78 = PTR_DAT_04bb2020 + 0x10;
          local_70 = "PlantTreeCount";
          FUN_0212944c(&local_78,1,pbVar19);
        }
        iVar12 = FUN_0123db50(&local_60,CONCAT44(iStack_54,local_58));
        if (iVar12 - 0xbU < 7) {
          local_78 = PTR_DAT_04bb2020 + 0x10;
          local_70 = "PlantTreeCount";
          FUN_0212944c(&local_78,1,pbVar19);
        }
        iVar12 = FUN_0123db50(&local_60,CONCAT44(iStack_54,local_58));
        if (iVar12 - 0x12U < 6) {
          local_70 = "PlantVegetableCount";
          goto LAB_022b9ca0;
        }
      }
    }
    break;
  case 5:
  case 6:
    sVar7 = *(short *)PTR_DAT_04bb6298;
    if (sVar7 != -1) {
      local_68 = (undefined *)CONCAT44(local_68._4_4_,3);
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8);
      if (0xff < (uint)(int)sVar7) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar2 >> 3 & 1) != 0) {
        local_68 = PTR_DAT_04bb2020 + 0x10;
        local_60 = "HasSetVineOrFixLadderAfterVer3_0";
        FUN_0274bfe8(pbVar19,&local_68,1);
      }
    }
    break;
  case 9:
    if ((*(byte *)(lVar22 + 0x1b) >> 3 & 1) != 0) {
      bVar5 = *(byte *)(param_1 + 0x10);
      bVar8 = 7 < bVar5;
      if (bVar8) {
        bVar5 = 0xff;
      }
      puVar3 = (undefined4 *)(&DAT_0547a3f8 + ((long)(char)bVar5 & 0xffffffffU) * 4);
      if (bVar8) {
        puVar3 = (undefined4 *)&DAT_0547a3f8;
      }
      uVar4 = *(undefined4 *)(param_1 + 0x28);
      *puVar3 = *(undefined4 *)(param_1 + 0x24);
      puVar3[1] = uVar4;
    }
    ppuVar14 = (undefined **)PTR_DAT_04bb37e0;
    switch(*(byte *)(lVar22 + 0x19) >> 5) {
    case 0:
      puVar15 = (undefined2 *)(param_1 + 0x24);
      goto LAB_022b9fc8;
    case 1:
      local_68 = (undefined *)0xfffe;
      FUN_0277d4ac(&local_68);
      uVar13 = FUN_0123b020(param_1 + 0x24,&local_68,&local_78,0);
      if ((uVar13 & 1) == 0) break;
      ppuVar14 = &local_68;
LAB_022ba4d0:
      puVar15 = (undefined2 *)(param_1 + 0x24);
      uVar16 = 0;
      uVar17 = 1;
      goto LAB_022b9fd0;
    case 2:
      FUN_0124c030(&local_68,param_1 + 0x24);
      uVar10 = FUN_01250cb0(&local_68);
      local_78 = (undefined *)(ulong)uVar10;
      FUN_0277d4ac(&local_78);
      uVar13 = FUN_0277d9a8(&local_78);
      if ((uVar13 & 1) != 0) {
        ppuVar14 = &local_78;
        goto LAB_022ba4d0;
      }
      break;
    case 3:
      puVar15 = (undefined2 *)(param_1 + 0x24);
      uVar16 = 1;
      goto LAB_022b9fcc;
    case 4:
      bVar5 = *(byte *)(param_1 + 0x10);
      bVar8 = 7 < bVar5;
      if (bVar8) {
        bVar5 = 0xff;
      }
      puVar3 = (undefined4 *)(&DAT_0547a3f8 + ((long)(char)bVar5 & 0xffffffffU) * 4);
      if (bVar8) {
        puVar3 = (undefined4 *)&DAT_0547a3f8;
      }
      uVar4 = *(undefined4 *)(param_1 + 0x28);
      *puVar3 = *(undefined4 *)(param_1 + 0x24);
      puVar3[1] = uVar4;
    }
    break;
  case 10:
    ppuVar14 = (undefined **)PTR_DAT_04bb37e0;
    goto LAB_022b9f48;
  case 0xb:
  case 0xd:
    bVar5 = *(byte *)(param_1 + 0x10);
    bVar8 = 7 < bVar5;
    if (bVar8) {
      bVar5 = 0xff;
    }
    puVar15 = (undefined2 *)(PTR_DAT_04bc2ea0 + ((long)(char)bVar5 & 0xffffffffU) * 8);
    if (bVar8) {
      puVar15 = (undefined2 *)PTR_DAT_04bc2ea0;
    }
    *puVar15 = *(undefined2 *)(param_1 + 0x1c);
    *(undefined1 *)(puVar15 + 1) = *(undefined1 *)(param_1 + 0x1e);
    *(undefined1 *)((long)puVar15 + 3) = *(undefined1 *)(param_1 + 0x1f);
    *(undefined4 *)(puVar15 + 2) = *(undefined4 *)(param_1 + 0x20);
    break;
  case 0xc:
    ppuVar14 = (undefined **)PTR_DAT_04bb37e0;
    goto LAB_022b9f74;
  case 0x10:
    local_78 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_78);
    puVar1 = PTR_DAT_04bb43c0;
    local_78 = *(undefined **)(lVar22 + 4);
    lVar20 = *(long *)PTR_DAT_04bb43c0;
    uVar11 = FUN_0277d6c4(&local_78);
    if (*(long *)puVar1 != 0) {
      lVar20 = *(long *)(lVar20 + 0x57e58);
      uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
      if ((uVar11 < *(uint *)(lVar20 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
        FUN_01ad5d04(&local_68,&local_78);
        FUN_01afc3c4(&local_68);
      }
    }
    break;
  case 0x15:
    local_68 = PTR_DAT_04bb2020 + 0x10;
    local_60 = "BuildFence";
    FUN_0279a9f0(pbVar19,&local_68,1);
    break;
  case 0x19:
    local_68 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_68);
    local_68 = *(undefined **)(lVar22 + 4);
    ppuVar14 = &local_68;
LAB_022b9f48:
    FUN_011c1480(pbVar19,ppuVar14,0);
    break;
  case 0x1a:
    local_68 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_68);
    local_68 = *(undefined **)(lVar22 + 4);
    ppuVar14 = &local_68;
LAB_022b9f74:
    FUN_011c1480(pbVar19,ppuVar14,1);
    break;
  case 0x1b:
    bVar5 = *pbVar19;
    bVar8 = 7 < bVar5;
    if (bVar8) {
      bVar5 = 0xff;
    }
    puVar15 = &DAT_0547a3f8 + ((long)(char)bVar5 & 0xffffffffU) * 4;
    if (bVar8) {
      puVar15 = &DAT_0547a3f8;
    }
    local_68 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_68);
    local_68 = *(undefined **)(lVar22 + 4);
    ppuVar14 = &local_68;
LAB_022b9fc8:
    uVar16 = 0;
LAB_022b9fcc:
    uVar17 = 0;
LAB_022b9fd0:
    FUN_011c1780(pbVar19,puVar15,ppuVar14,uVar16,uVar17);
  }
switchD_022b9b18_caseD_2:
  puVar1 = PTR_DAT_04bb2010;
  cVar18 = *(char *)(lVar22 + 0x16);
  switch(cVar18) {
  case '\x01':
    local_70 = (char *)CONCAT44((int)*(short *)(lVar22 + 0xe),(int)*(short *)(lVar22 + 0xc));
    local_78 = PTR_DAT_04bb2010 + 0x10;
    if (*(char *)(*(long *)PTR_DAT_04bb4910 + 0x88) == '\0') {
      local_68 = PTR_DAT_04bbc5d8 + 0x10;
      local_60 = PTR_DAT_04bb2018 + 0x10;
      fVar24 = (float)(int)*(short *)(lVar22 + 0xc) * 0.5;
      fVar25 = (float)(int)*(short *)(lVar22 + 0xe) * 0.5;
      local_58 = 0;
      if (fVar24 != (float)(int)fVar24) {
        local_58 = (uint)(fVar24 < 0.0);
      }
      local_58 = (int)fVar24 - local_58;
      uVar11 = 0;
      if (fVar25 != (float)(int)fVar25) {
        uVar11 = (uint)(fVar25 < 0.0);
      }
      iStack_54 = (int)fVar25 - uVar11;
      local_50 = local_60;
      local_48 = local_58;
      iStack_44 = iStack_54;
      FUN_036833e0(*(long *)PTR_DAT_04bb4910,&local_68);
    }
    FUN_011dbc54(&local_78,5);
    bVar5 = *(byte *)(lVar22 + 0x1a);
    if ((bVar5 >> 2 & 1) != 0) {
      local_60 = (char *)CONCAT44((int)*(short *)(lVar22 + 0xe),(int)*(short *)(lVar22 + 0xc));
      local_68 = puVar1 + 0x10;
      FUN_011e3e20(&local_68,1);
      local_70 = (char *)CONCAT44(local_70._4_4_,(float)local_60._4_4_ * 5.0 + 5.0);
      local_78 = (undefined *)CONCAT44(local_78._4_4_,(float)(int)local_60 * 5.0 + 5.0);
      FUN_01953930(*(undefined8 *)PTR_DAT_04bb47e0,&local_78);
      bVar5 = *(byte *)(lVar22 + 0x1a);
    }
    if ((bVar5 >> 3 & 1) != 0) goto switchD_022b9ff8_caseD_4;
    break;
  default:
    goto switchD_022b9ff8_caseD_2;
  case '\x15':
    local_60 = (char *)CONCAT44((int)*(short *)(lVar22 + 0xe),(int)*(short *)(lVar22 + 0xc));
    local_68 = PTR_DAT_04bb2010 + 0x10;
    FUN_011e3e20(&local_68,2);
    local_70 = (char *)CONCAT44(local_70._4_4_,(float)local_60._4_4_ * 5.0 + 5.0);
    local_78 = (undefined *)CONCAT44(local_78._4_4_,(float)(int)local_60 * 5.0 + 5.0);
    FUN_013ef290(0x41c80000,*(undefined8 *)PTR_DAT_04bb3d80,&local_78);
    FUN_01953930(*(undefined8 *)PTR_DAT_04bb47e0,&local_78);
    break;
  case '\x16':
    local_60 = (char *)((ulong)local_60 & 0xffffffff00000000);
    lVar20 = *(long *)PTR_DAT_04bb2720;
    if (lVar20 == 0) {
      puVar21 = &DAT_055c04a0;
    }
    else {
      puVar21 = &DAT_055c04a0;
      if (*(long *)(lVar20 + 0x330) != 0) {
        puVar21 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar20 + 0x338));
        iVar12 = FUN_006bd550(*puVar21,0);
        puVar21 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar12 != 0x758f7eaf) {
          puVar21 = &DAT_055c04a0;
        }
      }
    }
    local_60 = (char *)CONCAT44(*(undefined4 *)(puVar21 + 7),(int)local_60);
    uVar9 = FUN_017baf44();
    local_58 = CONCAT31(local_58._1_3_,uVar9) & 0xffffff01;
    local_68 = PTR_DAT_04bb6268 + 0x10;
    puVar1 = PTR_DAT_04bb2010 + 0x10;
    local_70 = (char *)CONCAT44((int)*(short *)(lVar22 + 0xe),(int)*(short *)(lVar22 + 0xc));
    local_78 = puVar1;
    FUN_011f3520(&local_68,0,&local_78);
    local_70 = (char *)CONCAT44((int)*(short *)(lVar22 + 0xe),(int)*(short *)(lVar22 + 0xc));
    local_78 = puVar1;
    FUN_01225ba0(*(undefined8 *)PTR_DAT_04bb4778,&local_78,2);
  case '\x04':
switchD_022b9ff8_caseD_4:
    sVar7 = *(short *)(lVar22 + 0xc);
    sVar6 = *(short *)(lVar22 + 0xe);
    lVar23 = *(long *)PTR_DAT_04bb26a8;
    nn::os::LockMutex((MutexType *)(lVar23 + 0x1466a8));
    lVar20 = lVar23 + 0x146648 + (ulong)*(uint *)(lVar23 + 0x146640) * 0x20;
    if (1 < *(uint *)(lVar23 + 0x146640)) {
      lVar20 = lVar23 + 0x146648;
    }
    FUN_02a061d0(lVar20,(int)sVar7,(int)sVar6);
    nn::os::UnlockMutex((MutexType *)(lVar23 + 0x1466a8));
    break;
  case '\x17':
    if (*(char *)(lVar22 + 0x1a) < '\0') goto switchD_022b9ff8_caseD_4;
    goto LAB_022ba418;
  case '\x18':
    local_70 = (char *)CONCAT44((int)*(short *)(lVar22 + 0xe),(int)*(short *)(lVar22 + 0xc));
    local_78 = PTR_DAT_04bb2010 + 0x10;
    if (*(char *)(*(long *)PTR_DAT_04bb4910 + 0x88) == '\0') {
      local_68 = PTR_DAT_04bbc5d8 + 0x10;
      local_60 = PTR_DAT_04bb2018 + 0x10;
      fVar24 = (float)(int)*(short *)(lVar22 + 0xc) * 0.5;
      fVar25 = (float)(int)*(short *)(lVar22 + 0xe) * 0.5;
      local_58 = 0;
      if (fVar24 != (float)(int)fVar24) {
        local_58 = (uint)(fVar24 < 0.0);
      }
      local_58 = (int)fVar24 - local_58;
      uVar11 = 0;
      if (fVar25 != (float)(int)fVar25) {
        uVar11 = (uint)(fVar25 < 0.0);
      }
      iStack_54 = (int)fVar25 - uVar11;
      local_50 = local_60;
      local_48 = local_58;
      iStack_44 = iStack_54;
      FUN_036833e0(*(long *)PTR_DAT_04bb4910,&local_68);
    }
    FUN_011dbc54(&local_78,0);
    break;
  case '\x1d':
    local_60 = (char *)CONCAT44((int)*(short *)(lVar22 + 0xe),(int)*(short *)(lVar22 + 0xc));
    local_68 = PTR_DAT_04bb2010 + 0x10;
    FUN_011e9260(&local_68);
    return;
  }
  cVar18 = *(char *)(lVar22 + 0x16);
switchD_022b9ff8_caseD_2:
  if ((cVar18 != '\x01') || ((*(byte *)(param_1 + 0x5c) >> 3 & 1) == 0)) {
LAB_022ba418:
    *(undefined8 *)(param_1 + 0x14) = 0xfffe;
    FUN_0277d4ac();
    *(undefined8 *)(param_1 + 0x1c) = 0xfffe;
    FUN_0277d4ac((undefined8 *)(param_1 + 0x1c));
    *(undefined8 *)(param_1 + 0x2c) = 0;
    *(undefined8 *)(param_1 + 0x34) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0x2400000000;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return;
}


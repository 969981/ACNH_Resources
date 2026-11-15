
/* WARNING: Type propagation algorithm not settling */

void FUN_02438f70(long param_1)

{
  byte *pbVar1;
  int iVar2;
  uint *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  uint uVar7;
  char cVar8;
  byte bVar9;
  short sVar10;
  int iVar11;
  undefined *puVar12;
  undefined *puVar13;
  int iVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  float fVar22;
  undefined4 local_84;
  int local_80;
  int local_7c;
  undefined *local_78;
  char *pcStack_70;
  undefined4 local_64;
  
  puVar13 = PTR_DAT_04bb47c0;
  puVar12 = PTR_DAT_04bb2020;
  lVar19 = *(long *)PTR_DAT_04bb47c0;
  lVar16 = *(long *)(*(long *)(param_1 + 0x60) + 0x1138);
  uVar6 = *(undefined4 *)(lVar19 + 0xc);
  local_7c = *(int *)(lVar19 + 0x1c);
  uVar7 = *(uint *)(lVar19 + 0x14);
  cVar8 = *(char *)(lVar19 + 0x1a);
  local_78 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "GymnasticsActionNum";
  if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x78), lVar16 != 0)) &&
     (plVar15 = *(long **)(lVar16 + 0x48), plVar15 != (long *)0x0)) {
    (**(code **)(*plVar15 + 0x28))(plVar15,&local_78,uVar7);
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    local_84 = *(undefined4 *)(param_1 + 0x230);
    sVar10 = *(short *)PTR_DAT_04bb6298;
    if (sVar10 == -1) {
LAB_02439110:
      FUN_016f742c(&local_80,&local_84,0);
      if (*(int *)(param_1 + 0x178) == 0) goto LAB_02439128;
    }
    else {
      local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
      puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar10 * 8);
      if (0xff < (uint)(int)sVar10) {
        puVar3 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar3 >> 1 & 1) == 0) goto LAB_02439110;
      local_80 = 0;
LAB_02439128:
      local_64 = 10;
      local_78 = (undefined *)CONCAT44(local_78._4_4_,10);
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_02439218;
    }
    plVar15 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar15 = *(long **)(param_1 + 0x4c8);
    }
    lVar16 = (**(code **)(*plVar15 + 0x148))();
    iVar18 = local_80 - *(int *)(lVar16 + 4);
    iVar14 = local_80;
    if (0xb60b5e < iVar18 + 0x5b05afU) {
      iVar11 = 0x15555560;
      iVar14 = -0x15555560;
      iVar18 = (int)((float)iVar18 * 0.3);
      if (iVar18 < 1) {
        iVar11 = -0x5b05b0;
      }
      else {
        iVar14 = 0x5b05b0;
      }
      iVar2 = iVar18;
      if (iVar11 <= iVar18) {
        iVar2 = iVar11;
      }
      if (iVar14 <= iVar18) {
        iVar14 = iVar2;
      }
      iVar14 = iVar14 + *(int *)(lVar16 + 4);
    }
    *(int *)(lVar16 + 4) = iVar14;
  }
  else {
    iVar14 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
    plVar15 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar15 = *(long **)(param_1 + 0x4c8);
    }
    lVar16 = (**(code **)(*plVar15 + 0x148))();
    iVar18 = iVar14 - *(int *)(lVar16 + 4);
    if (0xb60b5e < iVar18 + 0x5b05afU) {
      iVar11 = 0x15555560;
      iVar14 = -0x15555560;
      iVar18 = (int)((float)iVar18 * 0.3);
      if (iVar18 < 1) {
        iVar11 = -0x5b05b0;
      }
      else {
        iVar14 = 0x5b05b0;
      }
      iVar2 = iVar18;
      if (iVar11 <= iVar18) {
        iVar2 = iVar11;
      }
      if (iVar14 <= iVar18) {
        iVar14 = iVar2;
      }
      iVar14 = iVar14 + *(int *)(lVar16 + 4);
    }
    *(int *)(lVar16 + 4) = iVar14;
  }
LAB_02439218:
  if (*(long *)(*(long *)(param_1 + 0x60) + 0x1138) != 0) {
    FUN_03850760(*(undefined4 *)(param_1 + 0x2248));
  }
  fVar22 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x1c04));
  if (fVar22 <= *(float *)(param_1 + 0x224c)) {
    if ((*(float *)(param_1 + 0x2250) <= fVar22) && (60.0 <= *(float *)(*(long *)puVar13 + 0x54))) {
      *(undefined4 *)(*(long *)puVar13 + 0x54) = 0;
    }
  }
  else {
    if ((*(float *)(param_1 + 0x2248) != 1.0) &&
       (*(undefined4 *)(param_1 + 0x2248) = 0x3f800000,
       *(long *)(*(long *)(param_1 + 0x60) + 0x1138) != 0)) {
      FUN_03850760(0x3f800000);
    }
    if (local_7c == 0) goto switchD_02439450_default;
    pbVar1 = (byte *)(param_1 + 0x100c);
    if (((local_7c == 7) && (*(int *)(param_1 + 0x2258) == 7)) &&
       ((*(byte *)(param_1 + 0x225c) | 2) == 3)) {
      local_78 = (undefined *)CONCAT44(local_78._4_4_,6);
      FUN_02438754(param_1,&local_78);
    }
    iVar14 = *(int *)(param_1 + 0xf64);
    local_78 = (undefined *)CONCAT44(local_78._4_4_,iVar14);
    if (*(char *)(param_1 + 0x1014) == '\0') {
      switch(iVar14) {
      case 1:
        bVar9 = *pbVar1 >> 1;
        break;
      case 2:
        bVar9 = *pbVar1 >> 2;
        break;
      case 3:
        bVar9 = *pbVar1 >> 3;
        break;
      case 4:
        bVar9 = *pbVar1 >> 4;
        break;
      case 5:
        bVar9 = *pbVar1 >> 5;
        break;
      case 6:
        bVar9 = *pbVar1 >> 6;
        break;
      case 7:
        if (-1 < (char)*pbVar1) goto LAB_024392c4;
        goto LAB_02439408;
      default:
        bVar9 = *pbVar1;
      }
      if ((bVar9 & 1) != 0) {
LAB_02439408:
        *(undefined1 *)(param_1 + 0x1014) = 1;
        if ((*(int *)(param_1 + 0x2258) == iVar14) && (uVar7 == *(byte *)(param_1 + 0x225c))) {
          return;
        }
        switch(iVar14) {
        case 1:
          local_64 = 0;
          break;
        case 2:
          local_64 = 1;
          break;
        case 3:
          local_64 = 2;
          break;
        case 4:
          local_64 = 3;
          break;
        case 5:
          local_64 = 4;
          break;
        case 6:
          local_64 = 5;
          break;
        case 7:
          local_64 = 6;
          break;
        default:
          goto switchD_02439450_default;
        }
        FUN_02438754(param_1,&local_64);
        goto switchD_02439450_default;
      }
    }
LAB_024392c4:
    if ((1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476)) &&
       ((ulong)*(byte *)(param_1 + 0x1ee8) < 8)) {
      lVar16 = *(long *)puVar13 + (ulong)*(byte *)(param_1 + 0x1ee8) * 0x10;
      *(undefined1 *)(lVar16 + 0x58) = 0;
      *(int *)(lVar16 + 0x5c) = local_7c;
      *(ulong *)(lVar16 + 0x60) = CONCAT44(uVar6,uVar7);
      uVar17 = (ulong)*(byte *)(param_1 + 0x1ee8);
      if (uVar17 < 8) {
        lVar19 = *(long *)puVar13 + uVar17 * 0x10;
        lVar16 = *(long *)puVar13 + 0xd8;
        lVar20 = lVar16 + uVar17 * 0x28;
        if (*(long *)(lVar20 + 8) != *(long *)(lVar19 + 0x58) ||
            *(long *)(lVar20 + 0x10) != *(long *)(lVar19 + 0x60)) {
          lVar4 = *(long *)(lVar19 + 0x58);
          uVar5 = *(undefined8 *)(lVar19 + 0x60);
          *(undefined1 *)(lVar16 + uVar17 * 0x28 + 0x18) = 1;
          *(long *)(lVar20 + 8) = lVar4;
          *(undefined8 *)(lVar20 + 0x10) = uVar5;
        }
      }
    }
  }
switchD_02439450_default:
  puVar21 = *(undefined8 **)(param_1 + 0x60);
  if (puVar21 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar14 = __cxa_guard_acquire(&DAT_052461c0);
      puVar21 = &DAT_05240280;
      if (iVar14 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar21 = &DAT_05240280;
    }
  }
  local_64 = 0;
  local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
  if (puVar21[0x227] != 0) {
    uVar17 = FUN_03850368(puVar21[0x227],0);
    uVar6 = local_64;
    if (((((uVar17 & 1) == 0) && (puVar21[0x227] != 0)) &&
        (uVar17 = FUN_03850368(puVar21[0x227],local_64), (uVar17 & 1) == 0)) &&
       ((uVar17 = FUN_0384fca4(puVar21[0x227],uVar6), (uVar17 & 1) == 0 && (cVar8 != '\0'))))
    goto LAB_02439650;
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    *(undefined4 *)(param_1 + 0x2248) = 0x3f800000;
    if (*(long *)(*(long *)(param_1 + 0x60) + 0x1138) != 0) {
      FUN_03850760(0x3f800000);
      lVar16 = *(long *)(*(long *)(param_1 + 0x60) + 0x1138);
      local_78 = puVar12 + 0x10;
      pcStack_70 = "GymnasticsActionNum";
      if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x78), lVar16 != 0)) &&
         (plVar15 = *(long **)(lVar16 + 0x48), plVar15 != (long *)0x0)) {
        (**(code **)(*plVar15 + 0x28))(plVar15,&local_78,*(undefined4 *)(*(long *)puVar13 + 0x14));
      }
    }
    local_78 = (undefined *)CONCAT44(local_78._4_4_,0x11e);
    *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x1940);
    *(undefined8 *)(param_1 + 0x18c0) = 0;
    *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x1948);
    *(undefined8 *)(param_1 + 0x18c8) = 0;
    *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x1950);
    *(undefined8 *)(param_1 + 0x18d0) = 0;
    *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x1958);
    *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x1920);
    *(undefined8 *)(param_1 + 0x18a0) = 0;
    *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x1928);
    *(undefined8 *)(param_1 + 0x18a8) = 0;
    *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x1930);
    *(undefined8 *)(param_1 + 0x18b0) = 0;
    *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x1938);
    *(undefined8 *)(param_1 + 0x18b8) = 0;
    *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1900);
    *(undefined8 *)(param_1 + 0x1880) = 0;
    *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
    *(undefined8 *)(param_1 + 0x1888) = 0;
    *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
    *(undefined8 *)(param_1 + 0x1890) = 0;
    *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
    *(undefined8 *)(param_1 + 0x1898) = 0;
    *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
    lVar16 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar16 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar16,0x11e);
  }
  else {
    FUN_023164ec(param_1,6);
  }
LAB_02439650:
  return;
}


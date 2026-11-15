
void FUN_0235b0e0(long param_1,char *param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  undefined8 *puVar11;
  byte bVar12;
  undefined8 *puVar13;
  short sVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  float fVar17;
  float fVar18;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  puVar4 = PTR_DAT_04bb2720;
  if (*(int *)(param_1 + 0x178) == 1) {
    return;
  }
  lVar10 = *(long *)PTR_DAT_04bb2720;
  if (lVar10 == 0) {
    puVar16 = &DAT_055c04a0;
  }
  else {
    puVar16 = &DAT_055c04a0;
    if (*(long *)(lVar10 + 0x330) != 0) {
      puVar16 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar5 = FUN_006bd550(*puVar16,0);
      puVar16 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar5 != 0x758f7eaf) {
        puVar16 = &DAT_055c04a0;
      }
    }
  }
  if (DAT_055c1b60 != &DAT_055c1b58) {
    uVar6 = 0;
    puVar11 = DAT_055c1b60;
    do {
      if (*(int *)(puVar11 + -1) == *(int *)(puVar16 + 7)) {
        if (((uVar6 ^ 0xffffffff) & 0xffff) != 0) goto LAB_0235b1d4;
        break;
      }
      puVar11 = (undefined8 *)puVar11[1];
      uVar6 = uVar6 + 1;
    } while (puVar11 != &DAT_055c1b58);
  }
  uVar6 = 0;
LAB_0235b1d4:
  uVar7 = FUN_016e6c20(uVar6);
  if ((uVar7 & 1) != 0) {
    return;
  }
  lVar10 = *(long *)puVar4;
  if (lVar10 == 0) {
    puVar16 = &DAT_055c04a0;
  }
  else {
    puVar16 = &DAT_055c04a0;
    if (*(long *)(lVar10 + 0x330) != 0) {
      puVar16 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar5 = FUN_006bd550(*puVar16,0);
      puVar16 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar5 != 0x758f7eaf) {
        puVar16 = &DAT_055c04a0;
      }
    }
  }
  if (DAT_055c1b60 == &DAT_055c1b58) goto LAB_0235b2c8;
  puVar13 = DAT_055c1b60 + -8;
  sVar14 = 0;
  puVar11 = DAT_055c1b60;
  puVar15 = puVar13;
  do {
    if (*(int *)(puVar15 + 7) == *(int *)(puVar16 + 7)) {
      if ((sVar14 != 0) && (puVar16 = DAT_055c1b60, sVar14 != -1)) goto LAB_0235b2a0;
      break;
    }
    puVar11 = (undefined8 *)puVar11[1];
    sVar14 = sVar14 + 1;
    puVar15 = puVar11 + -8;
  } while (puVar11 != &DAT_055c1b58);
LAB_0235b2d0:
  if (*(int *)(puVar13 + 7) == -0x78855454) {
    return;
  }
  if ((*param_2 != '\0') && ((*(uint *)(param_1 + 0x248) >> 1 & 1) != 0)) {
    return;
  }
  uVar6 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar3 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
    uVar6 = 0;
    if (uVar3 < 0x149) {
      uVar6 = uVar3;
    }
  }
  local_70 = CONCAT44(local_70._4_4_,uVar6);
  if (((DAT_054f0b68 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_054f0b68), iVar5 != 0)) {
    DAT_054f0b60 = 0;
    __cxa_guard_release(&DAT_054f0b68);
  }
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    puVar8 = &DAT_054f0b60;
  }
  else {
    lVar10 = *(long *)PTR_DAT_04bb4718 + 0x20;
    puVar8 = (uint *)FUN_0250f090(lVar10,uVar6);
    if (puVar8 == (uint *)0x0) {
      puVar9 = (uint *)FUN_0250f090(lVar10,0);
      puVar8 = &DAT_054f0b60;
      if (puVar9 != (uint *)0x0) {
        puVar8 = puVar9;
      }
    }
  }
  puVar9 = (uint *)((long)puVar8 - (ulong)*puVar8);
  if ((((*puVar8 != 0) && (puVar9 != (uint *)0x0)) && (*puVar9 != 0)) &&
     ((uVar6 = puVar9[1], uVar6 != 0 && ((ulong)(ushort)puVar9[2] != 0)))) {
    lVar10 = 0xc;
    if (*(char *)((long)puVar9 + 10) != '\0') {
      lVar10 = 0x1c;
    }
    lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
    if (lVar10 != 0) {
      uVar3 = 0;
      if ((ulong)uVar6 != 0) {
        uVar3 = (uint)((ulong)((long)puVar8 - lVar10) / (ulong)uVar6);
      }
      if (*puVar9 <= uVar3) {
        uVar3 = 0xffffffff;
      }
      if ((uVar3 < *(uint *)PTR_DAT_04bc2ff8) &&
         (*(short *)(*(long *)(PTR_DAT_04bc2ff8 + 8) + (long)(int)uVar3 * 2) == 1)) {
        return;
      }
    }
  }
  FUN_0235ad50(param_1,param_1 + 0x18e0,0);
  if (param_2[4] != '\0') {
    puVar16 = *(undefined8 **)(param_1 + 0x60);
    pbVar1 = (byte *)(param_1 + 0x18fa);
    if (puVar16 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0);
        puVar16 = &DAT_05240280;
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar16 = &DAT_05240280;
      }
    }
    if ((*(uint *)((long)puVar16 + 0x15f4) >> 4 & 1) == 0) {
      bVar12 = *pbVar1 & 0xfe;
    }
    else {
      bVar12 = *pbVar1 | 1;
    }
    local_70 = local_70 & 0xffffffff00000000;
    *pbVar1 = bVar12;
  }
  if (param_2[2] == '\0') goto LAB_0235b6f0;
  pbVar1 = (byte *)(param_1 + 0x18f4);
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 3;
  local_70 = 0;
  local_68 = 0;
  local_48 = *(long *)(param_1 + 0x68) + 0x2b4;
  uVar7 = FUN_016f3040(param_1,&local_70);
  if ((uVar7 & 1) == 0) {
LAB_0235b5c4:
    bVar12 = *pbVar1 & 0x7f;
  }
  else {
    uVar6 = FUN_006f0400((undefined4)local_70,(undefined4)local_68);
    uVar6 = uVar6 ^ 0x80000000;
    uVar3 = *(uint *)(*(long *)(param_1 + 0x68) + 0x2b4);
    if (uVar6 - uVar3 != 0) {
      uVar2 = uVar6 - uVar3;
      if (uVar6 <= uVar3) {
        uVar2 = uVar3 - uVar6;
      }
      uVar6 = -uVar2;
      if (uVar2 < 0x80000001) {
        uVar6 = uVar2;
      }
      if (60.0 <= (float)uVar6 * 8.381903e-08) goto LAB_0235b5c4;
    }
    bVar12 = *pbVar1 | 0x80;
  }
  *pbVar1 = bVar12;
  local_70._0_4_ = 7;
  fVar17 = *(float *)(param_1 + 0x1820);
  fVar18 = -fVar17;
  if (0.0 <= fVar17) {
    fVar18 = fVar17;
  }
  if ((0.1 <= fVar18) || (uVar7 = FUN_016f2f3c(param_1), (uVar7 & 1) == 0)) {
    bVar12 = *pbVar1 & 0xbf;
  }
  else {
    bVar12 = *pbVar1 | 0x40;
  }
  local_70 = CONCAT44(local_70._4_4_,6);
  *pbVar1 = bVar12;
LAB_0235b6f0:
  local_70 = CONCAT35(local_70._5_3_,0x101000000);
  local_70._0_3_ = CONCAT12(param_2[1],1);
  FUN_02558ce0(param_1 + 0x1ee8,param_1 + 0x18e0,&local_70);
  return;
LAB_0235b2a0:
  do {
    puVar16 = (undefined8 *)puVar16[1];
    sVar14 = sVar14 + -1;
  } while (puVar16 != &DAT_055c1b58 && sVar14 != 0);
  puVar13 = puVar16 + -8;
  if (puVar13 == &DAT_055c1b18) {
LAB_0235b2c8:
    puVar13 = &DAT_055c04a0;
  }
  goto LAB_0235b2d0;
}


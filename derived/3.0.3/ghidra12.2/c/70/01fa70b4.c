
/* WARNING: Removing unreachable block (ram,0x01fa719c) */
/* WARNING: Removing unreachable block (ram,0x01fa71ac) */
/* WARNING: Removing unreachable block (ram,0x01fa71f8) */

void FUN_01fa70b4(long *param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  uint *puVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  short sVar17;
  long lVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined *puStack_70;
  int local_68;
  int iStack_64;
  undefined8 local_60;
  float local_58;
  
  puVar5 = PTR_DAT_04bb5ce0;
  puVar3 = PTR_DAT_04bb2720;
  if (*(long *)PTR_DAT_04bb5ce0 == 0) {
    return;
  }
  lVar12 = *(long *)PTR_DAT_04bb2720;
  if (lVar12 == 0) {
    return;
  }
  if (*(long *)(lVar12 + 0x330) == 0) {
    return;
  }
  puVar8 = (undefined8 *)
           (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                     (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
  iVar6 = FUN_006bd550(*puVar8,0);
  if (iVar6 != 0x758f7eaf) {
    return;
  }
  if (*(long *)puVar3 == 0) {
    return;
  }
  lVar12 = *(long *)(*(long *)puVar3 + 0x330);
  if (lVar12 == 0) {
    return;
  }
  if (*(int *)(lVar12 + 0x244) == 0) {
    return;
  }
  local_60 = *(undefined8 *)(*(long *)(param_1[1] + 0x68) + 0x278);
  local_58 = *(float *)(*(long *)(param_1[1] + 0x68) + 0x280);
  FUN_021f2ed0(&local_60,0);
  FUN_021f4f90(&local_60,0,0);
  puVar3 = PTR_DAT_04bb2010;
  local_c0 = (undefined *)((ulong)local_c0._4_4_ << 0x20);
  local_80 = PTR_DAT_04bb2010 + 0x10;
  local_78 = 0;
  local_68 = (int)((float)(int)(float)local_60 / 5.0) - (uint)((float)local_60 < 0.0);
  fVar21 = (float)(int)local_58 / 5.0;
  iStack_64 = (int)fVar21 - (uint)(local_58 < 0.0);
  lVar12 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0xd0);
  fVar20 = local_58;
  puStack_70 = local_80;
  if (lVar12 == 0) {
    puVar9 = (undefined4 *)PTR_DAT_04bb37e0;
  }
  else {
    lVar18 = lVar12 + 0x130 + (ulong)*(uint *)(lVar12 + 0x198) * 0x30;
    if (1 < *(uint *)(lVar12 + 0x198)) {
      lVar18 = lVar12 + 0x130;
    }
    puVar9 = (undefined4 *)FUN_012eb21c(lVar18,&puStack_70,&local_80);
  }
  puVar4 = PTR_DAT_04bb43c0;
  lVar18 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(puVar9);
  lVar12 = *(long *)puVar4;
  if (lVar12 == 0) goto LAB_01fa75ac;
  lVar18 = *(long *)(lVar18 + 0x57e58);
  uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
  if ((*(uint *)(lVar18 + 0x1d8) <= uVar7) ||
     (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_01fa75ac;
  local_98 = PTR_DAT_04bc0510 + 0x10;
  local_90 = *puVar9;
  local_8c = puVar9[1];
  local_88 = 0;
  uVar7 = FUN_0277d6c4(&local_90);
  puVar13 = (uint *)0x0;
  if (*(long *)puVar4 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if (uVar7 < *(uint *)(lVar12 + 0x1d8)) {
      puVar13 = (uint *)0x0;
      if (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) != 0) {
        lVar12 = *(long *)PTR_DAT_04bc0428;
        uVar7 = FUN_0277d6c4(puVar9);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if (*(uint *)(lVar12 + 0x1d8) <= uVar7) goto LAB_01fa735c;
        puVar13 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8);
      }
    }
    else {
LAB_01fa735c:
      puVar13 = (uint *)0x0;
    }
  }
  if (*(int *)(param_1[1] + 0x750) == 3) {
    uVar7 = 0;
    if (((puVar13 != (uint *)0x0) && (uVar2 = *puVar13, uVar2 != 0)) &&
       (puVar13 != (uint *)(ulong)uVar2)) {
      puVar15 = (uint *)((long)puVar13 - (long)(ulong)uVar2);
      uVar7 = 0;
      if (*puVar15 != 0) {
        uVar7 = puVar15[1];
        if ((uVar7 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
          lVar12 = 0xc;
          if (*(char *)((long)puVar15 + 10) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar15 + lVar12 + (ulong)(ushort)puVar15[2] * 8;
          if (lVar12 != 0) {
            uVar2 = 0;
            if ((ulong)uVar7 != 0) {
              uVar2 = (uint)((ulong)((long)puVar13 - lVar12) / (ulong)uVar7);
            }
            if (*puVar15 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc0048) &&
               (uVar7 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar2 * 2),
               uVar7 < 0x52)) goto LAB_01fa74b0;
          }
        }
        uVar7 = 0;
      }
    }
LAB_01fa74b0:
    local_c0 = (undefined *)CONCAT44(local_c0._4_4_,uVar7);
    if ((uVar7 & 0xfffffffe) != 10) goto LAB_01fa75ac;
  }
  else {
    if (*(int *)(param_1[1] + 0x750) != 1) goto LAB_01fa75ac;
    uVar7 = 0;
    if (((puVar13 != (uint *)0x0) && (uVar2 = *puVar13, uVar2 != 0)) &&
       (puVar13 != (uint *)(ulong)uVar2)) {
      puVar15 = (uint *)((long)puVar13 - (long)(ulong)uVar2);
      uVar7 = 0;
      if (*puVar15 != 0) {
        uVar7 = puVar15[1];
        if ((uVar7 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
          lVar12 = 0xc;
          if (*(char *)((long)puVar15 + 10) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar15 + lVar12 + (ulong)(ushort)puVar15[2] * 8;
          if (lVar12 != 0) {
            uVar2 = 0;
            if ((ulong)uVar7 != 0) {
              uVar2 = (uint)((ulong)((long)puVar13 - lVar12) / (ulong)uVar7);
            }
            if (*puVar15 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc0048) &&
               (uVar7 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar2 * 2),
               uVar7 < 0x52)) goto LAB_01fa7408;
          }
        }
        uVar7 = 0;
      }
    }
LAB_01fa7408:
    local_c0 = (undefined *)CONCAT44(local_c0._4_4_,uVar7);
    if (8 < uVar7 - 1) goto LAB_01fa75ac;
  }
  local_b8 = (undefined8 *)(puVar3 + 0x10);
  lVar12 = *(long *)puVar5;
  local_a0 = 0;
  local_b0 = 0;
  local_c0 = PTR_DAT_04bbc1a0 + 0x10;
  if (lVar12 == 0) {
    iVar6 = 0;
    iVar11 = 0;
    iVar14 = 0x10;
    iVar16 = 0x10;
  }
  else {
    iVar6 = *(int *)(lVar12 + 0xd88);
    iVar11 = *(int *)(lVar12 + 0xd8c);
    iVar16 = *(int *)(lVar12 + 0xd98);
    iVar14 = *(int *)(lVar12 + 0xd9c);
  }
  iVar1 = iVar6;
  if (iVar16 <= iVar6) {
    iVar1 = iVar16;
  }
  if (iVar6 <= iVar16) {
    iVar6 = iVar16;
  }
  iVar16 = iVar11;
  if (iVar14 <= iVar11) {
    iVar16 = iVar14;
  }
  if (iVar11 <= iVar14) {
    iVar11 = iVar14;
  }
  local_a8 = local_b8;
  FUN_0277f02c(puVar9,&local_c0);
  if ((iVar1 <= (int)local_b0 + (int)local_78) && ((int)local_a0 + (int)local_78 <= iVar6)) {
    if ((iVar16 <= local_b0._4_4_ + local_78._4_4_) && (local_a0._4_4_ + local_78._4_4_ <= iVar11))
    goto LAB_01fa75ac;
  }
  if ((int)param_1[0xef6] != 0x3c) {
    (**(code **)(*param_1 + 0x38))(param_1,0x3c,0,0);
  }
  *(uint *)(param_1 + 0x15f6) = *(uint *)(param_1 + 0x15f6) | 0x100000;
LAB_01fa75ac:
  if (((*(uint *)(&DAT_00001230 + *(long *)PTR_DAT_04bb4e28) >> 2 & 1) == 0) &&
     (uVar10 = FUN_01fa7760(param_1), (uVar10 & 1) != 0)) {
    uVar10 = (**(code **)(*param_1 + 0x5c0))(param_1);
    if ((uVar10 & 1) == 0) {
      if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
           ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
         (lVar12 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar12 == 0)) {
        sVar17 = *(short *)(*(long *)PTR_DAT_04bb27f8 + 0x2a);
      }
      else if ((*(long **)(lVar12 + 0x60) == (long *)0x0) ||
              (puVar8 = (undefined8 *)**(long **)(lVar12 + 0x60), puVar8 == (undefined8 *)0x0)) {
        sVar17 = *(short *)(*(long *)(lVar12 + 0x48) + *(long *)(lVar12 + 0x40) + 2);
      }
      else {
        uVar10 = (**(code **)*puVar8)();
        sVar17 = *(short *)(*(long *)(lVar12 + 0x48) + *(long *)(lVar12 + 0x40) + 2);
        if ((((uVar10 & 1) != 0) && (*(long *)(lVar12 + 0x60) != 0)) &&
           (puVar8 = *(undefined8 **)(*(long *)(lVar12 + 0x60) + 8), puVar8 != (undefined8 *)0x0)) {
          (**(code **)*puVar8)();
        }
      }
      local_c0 = PTR_DAT_04bb2020 + 0x10;
      local_b8 = &DAT_0407ebb1;
      uVar19 = FUN_03771b40(sVar17 != *(short *)((long)param_1 + 0x12184),&local_c0);
    }
    else {
      uVar19 = FUN_037715a0();
    }
    local_c0 = (undefined *)CONCAT44(fVar20,uVar19);
    local_b8 = (undefined8 *)CONCAT44(local_b8._4_4_,fVar21);
    FUN_01e57c78(param_1[2],PTR_DAT_04bb37e0,0,1);
    if ((int)param_1[0xef6] != 0x37) {
      (**(code **)(*param_1 + 0x38))(param_1,0x37,0,0);
    }
    *(uint *)(param_1[1] + 0x69c) = *(uint *)(param_1[1] + 0x69c) & 0xfffffbff;
    *(undefined4 *)(param_1[1] + 0x750) = 0;
    local_98 = (undefined *)CONCAT44(local_98._4_4_,0x80000000);
    FUN_01e39778(param_1[1],&local_c0,&local_98,0);
    *(uint *)(param_1[1] + 0x69c) = *(uint *)(param_1[1] + 0x69c) | 0x400;
  }
  return;
}


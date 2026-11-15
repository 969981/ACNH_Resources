
/* WARNING: Removing unreachable block (ram,0x01f09ff4) */
/* WARNING: Removing unreachable block (ram,0x01f0a004) */
/* WARNING: Removing unreachable block (ram,0x01f0a050) */

void FUN_01f09f84(long *param_1)

{
  ushort *puVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  long lVar16;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined **local_98;
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
  
  local_60 = *(undefined8 *)(*(long *)(param_1[1] + 0x68) + 0x278);
  local_58 = *(float *)(*(long *)(param_1[1] + 0x68) + 0x280);
  FUN_021f2ed0(&local_60,0);
  FUN_021f4f90(&local_60,0,0);
  puVar4 = PTR_DAT_04bb2010;
  local_c0 = (undefined *)((ulong)local_c0._4_4_ << 0x20);
  puVar1 = (ushort *)((long)param_1 + 0xaf64);
  local_80 = PTR_DAT_04bb2010 + 0x10;
  local_78 = 0;
  local_68 = (int)((float)(int)(float)local_60 / 5.0) - (uint)((float)local_60 < 0.0);
  iStack_64 = (int)((float)(int)local_58 / 5.0) - (uint)(local_58 < 0.0);
  lVar10 = *(long *)(*(long *)(DAT_0519d040 + 0x1f8) + 0xd0);
  puStack_70 = local_80;
  if (lVar10 == 0) {
    puVar7 = (undefined4 *)&DAT_05586008;
  }
  else {
    lVar16 = lVar10 + 0x130 + (ulong)*(uint *)(lVar10 + 0x198) * 0x30;
    if (1 < *(uint *)(lVar10 + 0x198)) {
      lVar16 = lVar10 + 0x130;
    }
    puVar7 = (undefined4 *)FUN_012eb21c(lVar16,&puStack_70,&local_80);
  }
  puVar5 = PTR_DAT_04bb43c0;
  lVar16 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(puVar7);
  lVar10 = *(long *)puVar5;
  if (lVar10 == 0) goto LAB_01f0a440;
  lVar16 = *(long *)(lVar16 + 0x57e58);
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
  if ((*(uint *)(lVar16 + 0x1d8) <= uVar6) ||
     (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_01f0a440;
  local_98 = &PTR_FUN_04a36b50;
  local_90 = *puVar7;
  local_8c = puVar7[1];
  local_88 = 0;
  uVar6 = FUN_0277d6c4(&local_90);
  puVar11 = (uint *)0x0;
  if (*(long *)puVar5 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if (uVar6 < *(uint *)(lVar10 + 0x1d8)) {
      puVar11 = (uint *)0x0;
      if (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0) {
        lVar10 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4(puVar7);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if (*(uint *)(lVar10 + 0x1d8) <= uVar6) goto LAB_01f0a1b4;
        puVar11 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8);
      }
    }
    else {
LAB_01f0a1b4:
      puVar11 = (uint *)0x0;
    }
  }
  if (*(int *)(param_1[1] + 0x750) == 3) {
    uVar6 = 0;
    if (((puVar11 != (uint *)0x0) && (uVar3 = *puVar11, uVar3 != 0)) &&
       (puVar11 != (uint *)(ulong)uVar3)) {
      puVar14 = (uint *)((long)puVar11 - (long)(ulong)uVar3);
      uVar6 = 0;
      if (*puVar14 != 0) {
        uVar6 = puVar14[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
          lVar10 = 0xc;
          if (*(char *)((long)puVar14 + 10) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar14 + lVar10 + (ulong)(ushort)puVar14[2] * 8;
          if (lVar10 != 0) {
            uVar3 = 0;
            if ((ulong)uVar6 != 0) {
              uVar3 = (uint)((ulong)((long)puVar11 - lVar10) / (ulong)uVar6);
            }
            if (*puVar14 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < DAT_05326d48) &&
               (uVar6 = (uint)*(ushort *)(DAT_05326d50 + (long)(int)uVar3 * 2), uVar6 < 0x52))
            goto LAB_01f0a308;
          }
        }
        uVar6 = 0;
      }
    }
LAB_01f0a308:
    local_c0 = (undefined *)CONCAT44(local_c0._4_4_,uVar6);
    if ((uVar6 & 0xfffffffe) != 10) goto LAB_01f0a440;
  }
  else {
    if (*(int *)(param_1[1] + 0x750) != 1) goto LAB_01f0a440;
    uVar6 = 0;
    if (((puVar11 != (uint *)0x0) && (uVar3 = *puVar11, uVar3 != 0)) &&
       (puVar11 != (uint *)(ulong)uVar3)) {
      puVar14 = (uint *)((long)puVar11 - (long)(ulong)uVar3);
      uVar6 = 0;
      if (*puVar14 != 0) {
        uVar6 = puVar14[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
          lVar10 = 0xc;
          if (*(char *)((long)puVar14 + 10) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar14 + lVar10 + (ulong)(ushort)puVar14[2] * 8;
          if (lVar10 != 0) {
            uVar3 = 0;
            if ((ulong)uVar6 != 0) {
              uVar3 = (uint)((ulong)((long)puVar11 - lVar10) / (ulong)uVar6);
            }
            if (*puVar14 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < DAT_05326d48) &&
               (uVar6 = (uint)*(ushort *)(DAT_05326d50 + (long)(int)uVar3 * 2), uVar6 < 0x52))
            goto LAB_01f0a260;
          }
        }
        uVar6 = 0;
      }
    }
LAB_01f0a260:
    local_c0 = (undefined *)CONCAT44(local_c0._4_4_,uVar6);
    if (8 < uVar6 - 1) goto LAB_01f0a440;
  }
  local_b8 = puVar4 + 0x10;
  local_a0 = 0;
  local_c0 = PTR_DAT_04bbc1a0 + 0x10;
  local_b0 = 0;
  if (DAT_05292338 == 0) {
    iVar12 = 0;
    iVar9 = 0;
    iVar13 = 0x10;
    iVar15 = 0x10;
  }
  else {
    iVar12 = *(int *)(DAT_05292338 + 0xd88);
    iVar9 = *(int *)(DAT_05292338 + 0xd8c);
    iVar15 = *(int *)(DAT_05292338 + 0xd98);
    iVar13 = *(int *)(DAT_05292338 + 0xd9c);
  }
  iVar2 = iVar12;
  if (iVar15 <= iVar12) {
    iVar2 = iVar15;
  }
  if (iVar12 <= iVar15) {
    iVar12 = iVar15;
  }
  iVar15 = iVar9;
  if (iVar13 <= iVar9) {
    iVar15 = iVar13;
  }
  if (iVar9 <= iVar13) {
    iVar9 = iVar13;
  }
  local_a8 = local_b8;
  FUN_0277f02c(puVar7,&local_c0);
  if ((iVar2 <= (int)local_b0 + (int)local_78) && ((int)local_a0 + (int)local_78 <= iVar12)) {
    if ((iVar15 <= local_b0._4_4_ + local_78._4_4_) && (local_a0._4_4_ + local_78._4_4_ <= iVar9))
    goto LAB_01f0a440;
  }
  (**(code **)(*param_1 + 0x5b8))(param_1);
  if ((int)param_1[0xef6] != 0x3c) {
    (**(code **)(*param_1 + 0x38))(param_1,0x3c,0,0);
  }
  local_c0 = (undefined *)((ulong)local_c0 & 0xffffffff00000000);
  *(ushort *)((long)param_1 + 0xaf84) = *(ushort *)((long)param_1 + 0xaf84) | 1;
  *puVar1 = *puVar1 | 0x20;
LAB_01f0a440:
  local_c0 = (undefined *)CONCAT44(local_c0._4_4_,3);
  if (((*(byte *)(*(long *)PTR_DAT_04bb9a68 + 0x54) >> 3 & 1) == 0) &&
     (uVar8 = FUN_01f097a0(param_1), (uVar8 & 1) != 0)) {
    local_b8 = (undefined *)((ulong)local_b8 & 0xffffffff00000000);
    local_c0 = (undefined *)0x0;
    (**(code **)(*param_1 + 0x5a8))(param_1,&local_c0);
    local_98 = (undefined **)((ulong)local_98 & 0xffffffff00000000);
    *(ushort *)((long)param_1 + 0xaf84) = *(ushort *)((long)param_1 + 0xaf84) & 0xfffe;
    FUN_01e57c78(param_1[2],PTR_DAT_04bb37e0,0,1);
    (**(code **)(*param_1 + 0x598))(param_1);
    *(uint *)(param_1[1] + 0x69c) = *(uint *)(param_1[1] + 0x69c) & 0xfffffbff;
    *(undefined4 *)(param_1[1] + 0x750) = 0;
    local_98 = (undefined **)CONCAT44(local_98._4_4_,0x80000000);
    FUN_01e39778(param_1[1],&local_c0,&local_98,0);
    *(uint *)(param_1[1] + 0x69c) = *(uint *)(param_1[1] + 0x69c) | 0x400;
    *puVar1 = *puVar1 & 0xffdf;
  }
  return;
}


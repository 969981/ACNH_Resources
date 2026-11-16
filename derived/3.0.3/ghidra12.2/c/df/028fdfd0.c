
void FUN_028fdfd0(undefined8 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  undefined8 local_6c0;
  undefined *local_6b8;
  undefined4 local_6b0;
  undefined4 local_6ac;
  byte local_6a8;
  undefined *local_6a0;
  int local_698;
  int iStack_694;
  undefined *local_690;
  undefined4 local_688;
  undefined4 uStack_684;
  undefined8 local_680;
  float local_678 [2];
  undefined *local_670;
  int local_668;
  int iStack_664;
  undefined4 local_660;
  uint uStack_65c;
  
  puVar2 = PTR_DAT_04bb43c0;
  uVar8 = 0;
  uVar17 = 0;
  lVar16 = -0x200;
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  do {
    lVar13 = (long)param_1 + ((long)((ulong)uVar17 << 0x20) >> 0x1d);
    uVar6 = FUN_0277d6c4(lVar13);
    lVar18 = *(long *)puVar2;
    if (lVar18 != 0) {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        uVar10 = FUN_0277d7b4(lVar13,param_2);
        lVar18 = *(long *)puVar2;
        if ((uVar10 & 1) != 0) {
          uVar17 = 0;
          uVar6 = 0;
          lVar12 = -0x200;
          break;
        }
      }
    }
    uVar8 = uVar8 + 1;
    uVar17 = uVar17 + 1;
    lVar16 = lVar16 + -4;
    lVar12 = lVar18;
    if (uVar8 == 0x40) {
      return;
    }
  } while( true );
LAB_028fe0b8:
  lVar13 = (long)param_1 + ((long)((ulong)uVar6 << 0x20) >> 0x1d);
  uVar7 = FUN_0277d6c4(lVar13);
  lVar14 = *(long *)puVar2;
  if (lVar14 != 0) {
    lVar18 = *(long *)(lVar18 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar18 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      uVar10 = FUN_0277d7b4(lVar13,param_2);
      lVar14 = *(long *)puVar2;
      if ((uVar10 & 1) != 0) {
        piVar1 = (int *)(param_1 + 0x40);
        piVar3 = (int *)((long)param_1 - lVar12);
        if (0x3f < uVar17) {
          piVar3 = piVar1;
        }
        if (*piVar3 < 1) {
          return;
        }
        uVar17 = 0;
        piVar3 = (int *)((long)param_1 - lVar16);
        if (0x3f < uVar8) {
          piVar3 = piVar1;
        }
        uVar8 = 0;
        lVar12 = -0x200;
        *piVar3 = *piVar3 + -1;
        goto LAB_028fe17c;
      }
    }
  }
  uVar17 = uVar17 + 1;
  uVar6 = uVar6 + 1;
  lVar12 = lVar12 + -4;
  lVar18 = lVar14;
  if (uVar17 == 0x40) {
    return;
  }
  goto LAB_028fe0b8;
LAB_028fe17c:
  lVar16 = (long)param_1 + ((long)((ulong)uVar8 << 0x20) >> 0x1d);
  uVar6 = FUN_0277d6c4(lVar16);
  lVar13 = *(long *)puVar2;
  if (lVar13 != 0) {
    lVar18 = *(long *)(lVar14 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar18 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      uVar10 = FUN_0277d7b4(lVar16,param_2);
      if ((uVar10 & 1) != 0) {
        piVar3 = (int *)((long)param_1 - lVar12);
        if (0x3f < uVar17) {
          piVar3 = piVar1;
        }
        if (*piVar3 != 0) {
          return;
        }
        if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x21ba1d3a) {
          return;
        }
        local_6b8 = (undefined *)((ulong)local_6b8 & 0xffffffff00000000);
        uVar10 = FUN_0291e130(local_678,&local_6b8,0);
        puVar2 = PTR_DAT_04bb43c0;
        lVar12 = *(long *)PTR_DAT_04bb43c0;
        if ((uVar10 & 1) == 0) goto LAB_028fe348;
        uVar10 = (ulong)local_6b8 & 0xffffffff;
        if ((int)local_6b8 == 0) goto LAB_028fe348;
        iVar9 = 0;
        uVar19 = 1;
        lVar16 = lVar12;
        puVar15 = param_1;
        goto LAB_028fe2c0;
      }
      lVar13 = *(long *)puVar2;
    }
  }
  uVar17 = uVar17 + 1;
  uVar8 = uVar8 + 1;
  lVar12 = lVar12 + -4;
  lVar14 = lVar13;
  if (uVar17 == 0x40) {
    return;
  }
  goto LAB_028fe17c;
  while( true ) {
    bVar5 = uVar10 <= uVar19;
    uVar19 = uVar19 + 1;
    puVar15 = puVar15 + 1;
    lVar16 = lVar12;
    if (bVar5) break;
LAB_028fe2c0:
    puVar4 = puVar15;
    if (0x3f < uVar19 - 1) {
      puVar4 = param_1;
    }
    local_690 = (undefined *)*puVar4;
    uVar8 = FUN_0277d6c4(&local_690);
    lVar12 = *(long *)puVar2;
    if (lVar12 != 0) {
      lVar16 = *(long *)(lVar16 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar16 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
        uVar11 = FUN_0277d7b4(&local_690,param_2);
        lVar12 = *(long *)puVar2;
        if ((uVar11 & 1) != 0) {
          fVar21 = local_678[(long)iVar9 * 3];
          fVar20 = local_678[(long)iVar9 * 3 + 2];
          goto LAB_028fe350;
        }
      }
    }
    iVar9 = iVar9 + 1;
    if (iVar9 == 0x80) break;
  }
LAB_028fe348:
  fVar21 = 0.0;
  fVar20 = 0.0;
LAB_028fe350:
  local_680 = 0;
  local_688 = *param_2;
  uStack_684 = param_2[1];
  local_690 = PTR_DAT_04bc0510 + 0x10;
  uVar8 = FUN_0277d6c4(&local_688);
  if (*(long *)puVar2 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      FUN_0277d6c4(param_2);
    }
  }
  local_6b0 = 0;
  puVar2 = PTR_DAT_04bb2010 + 0x10;
  local_6b8 = PTR_DAT_04bbfe68 + 0x10;
  local_698 = ~(uint)(fVar21 < 0.0) + (int)((float)(int)fVar21 / 5.0);
  iStack_694 = ~(uint)(fVar20 < 0.0) + (int)((float)(int)fVar20 / 5.0);
  lVar12 = *(long *)PTR_DAT_04bb2720;
  local_6a0 = puVar2;
  if (lVar12 == 0) {
    puVar15 = &DAT_055c04a0;
  }
  else {
    puVar15 = &DAT_055c04a0;
    if (*(long *)(lVar12 + 0x330) != 0) {
      puVar15 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
      iVar9 = FUN_006bd550(*puVar15,0);
      puVar15 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar9 != 0x758f7eaf) {
        puVar15 = &DAT_055c04a0;
      }
    }
  }
  local_6ac = *(undefined4 *)(puVar15 + 7);
  local_6a8 = FUN_017baf44();
  local_6a8 = local_6a8 & 1;
  FUN_01a5033c(local_678,&local_6b8,1,&local_6a0,0);
  uVar8 = FUN_0277d7b4(local_678,param_2);
  FUN_01513b9c(&local_6a0,uVar8 & 1,0);
  local_6c0 = 0x37b4;
  local_670 = puVar2;
  FUN_0277d4ac(&local_6c0);
  local_660 = 0;
  local_678[0] = (float)local_6c0;
  local_678[1] = (float)local_6c0._4_4_;
  local_668 = local_698;
  iStack_664 = iStack_694;
  uStack_65c = uVar8 & 1;
  FUN_0152015c(local_678);
  return;
}



void FUN_01e613d0(long param_1)

{
  long lVar1;
  short sVar2;
  int iVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  uint uVar16;
  long lVar17;
  uint *puVar18;
  undefined8 local_d8;
  ulong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined *local_b8;
  undefined *puStack_b0;
  undefined8 local_a8;
  undefined *puStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  
  (**(code **)(**(long **)(param_1 + 0xb378) + 0x20))();
  uVar11 = (**(code **)(**(long **)(param_1 + 8) + 0x180))();
  if ((uVar11 & 1) == 0) {
    return;
  }
  if ((((*(ushort *)(param_1 + 0x12570) >> 9 & 1) != 0) &&
      (lVar12 = FUN_0265c3e0(*(undefined4 *)(*(long *)(param_1 + 8) + 0x508)), lVar12 != 0)) &&
     (*(long *)(*(long *)(param_1 + 8) + 0x690) != 0)) {
    lVar17 = *(long *)(lVar12 + 0x28);
    if (lVar17 == 0) {
      uVar11 = 0;
    }
    else {
      if (*(undefined8 **)(lVar17 + 0x10) == (undefined8 *)0x0) {
        uVar11 = 0;
      }
      else {
        uVar11 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
        lVar17 = *(long *)(lVar12 + 0x28);
        uVar11 = uVar11 & 0xffffffff;
        if (lVar17 == 0) goto LAB_01e614b0;
      }
      plVar13 = *(long **)(lVar17 + 0x20);
      if (plVar13 != (long *)0x0) {
        local_d8 = *(undefined **)(lVar12 + 8);
        local_d0 = *(ulong *)(lVar12 + 0x10);
        local_c8 = 0x13230;
        (**(code **)(*plVar13 + 0x20))(plVar13,&local_d8);
      }
    }
LAB_01e614b0:
    *(char *)(*(long *)(lVar12 + 0x10) + *(long *)(lVar12 + 8) + 0x1315b) =
         (char)*(undefined4 *)(param_1 + 0x126f4);
    uVar9 = FUN_021d7d60();
    puVar5 = PTR_DAT_04bb27d0;
    uVar4 = (ulong)local_d8 >> 0x30;
    local_48._0_2_ = CONCAT11((char)*(undefined4 *)(param_1 + 0x126f4),uVar9);
    local_d8 = (undefined *)CONCAT26((ushort)uVar4 & 0xff00,0xff0000000000);
    if (-1 < DAT_053d0e30) {
      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0e30,&local_d8,&local_48,2,0);
    }
    if ((*(long *)(lVar12 + 0x28) != 0) &&
       (plVar13 = *(long **)(*(long *)(lVar12 + 0x28) + 0x20), plVar13 != (long *)0x0)) {
      local_d8 = *(undefined **)(lVar12 + 8);
      local_d0 = *(ulong *)(lVar12 + 0x10);
      local_c8 = 0x13230;
      (**(code **)(*plVar13 + 0x20))(plVar13,&local_d8);
    }
    lVar17 = *(long *)(lVar12 + 8);
    lVar1 = *(long *)(lVar12 + 0x10);
    plVar13 = *(long **)(*(long *)(param_1 + 8) + 0x60);
    if (plVar13 == (long *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar10 = __cxa_guard_acquire(&DAT_052461c0);
        if (iVar10 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
        plVar13 = &DAT_05240280;
      }
      else {
        plVar13 = &DAT_05240280;
      }
    }
    (**(code **)(*plVar13 + 0x348))(&local_68);
    local_48 = 0;
    local_42 = 0;
    local_d0 = CONCAT44(local_d0._4_4_,0x5ff0000);
    local_44 = 0xff00;
    local_d8 = (undefined *)local_68;
    local_d0 = CONCAT62(local_d0._2_6_,(short)*(undefined4 *)(*(long *)(param_1 + 8) + 0x508));
    if (-1 < DAT_053d08f0) {
      FUN_01db1df0(**(long **)puVar5 + 0x480,DAT_053d08f0,&local_48,&local_d8,0xc,0);
    }
    FUN_0268e6d0(lVar1 + lVar17,&local_68,0,0,0,0,1,1);
    if ((*(long *)(lVar12 + 0x28) != 0) &&
       (plVar13 = *(long **)(*(long *)(lVar12 + 0x28) + 0x20), plVar13 != (long *)0x0)) {
      local_d8 = *(undefined **)(lVar12 + 8);
      local_d0 = *(undefined8 *)(lVar12 + 0x10);
      local_c8 = 0x13230;
      (**(code **)(*plVar13 + 0x20))(plVar13,&local_d8);
    }
    lVar17 = *(long *)(lVar12 + 8);
    lVar1 = *(long *)(lVar12 + 0x10);
    plVar13 = *(long **)(*(long *)(param_1 + 8) + 0x60);
    if (plVar13 == (long *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_052461c0), iVar10 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        plVar13 = &DAT_05240280;
      }
      else {
        plVar13 = &DAT_05240280;
      }
    }
    (**(code **)(*plVar13 + 0x330))(&local_68);
    local_48 = 0;
    local_42 = 0;
    local_d0 = CONCAT44(local_d0._4_4_,0x1ff0000);
    local_d8 = (undefined *)local_68;
    local_d0 = CONCAT62(local_d0._2_6_,(short)*(undefined4 *)(*(long *)(param_1 + 8) + 0x508));
    local_44 = 0xff00;
    if (-1 < DAT_053d08f0) {
      FUN_01db1df0(**(long **)puVar5 + 0x480,DAT_053d08f0,&local_48,&local_d8,0xc,0);
    }
    FUN_026934e8(lVar1 + lVar17,&local_68,0,0,0,0,1,1);
    if ((*(long *)(lVar12 + 0x28) != 0) &&
       (plVar13 = *(long **)(*(long *)(lVar12 + 0x28) + 0x20), plVar13 != (long *)0x0)) {
      local_d8 = *(undefined **)(lVar12 + 8);
      local_d0 = *(undefined8 *)(lVar12 + 0x10);
      local_c8 = 0x13230;
      (**(code **)(*plVar13 + 0x20))(plVar13,&local_d8);
    }
    lVar17 = *(long *)(lVar12 + 8);
    lVar1 = *(long *)(lVar12 + 0x10);
    plVar13 = *(long **)(*(long *)(param_1 + 8) + 0x60);
    if (plVar13 == (long *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar10 = __cxa_guard_acquire(&DAT_052461c0);
        if (iVar10 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
        plVar13 = &DAT_05240280;
      }
      else {
        plVar13 = &DAT_05240280;
      }
    }
    (**(code **)(*plVar13 + 0x338))(&local_68);
    local_48 = 0;
    local_42 = 0;
    local_d0 = CONCAT44(local_d0._4_4_,0x2ff0000);
    local_d8 = (undefined *)local_68;
    local_d0 = CONCAT62(local_d0._2_6_,(short)*(undefined4 *)(*(long *)(param_1 + 8) + 0x508));
    local_44 = 0xff00;
    if (-1 < DAT_053d08f0) {
      FUN_01db1df0(**(long **)puVar5 + 0x480,DAT_053d08f0,&local_48,&local_d8,0xc,0);
    }
    FUN_0269296c(lVar1 + lVar17,&local_68,0,0,0,0,1,1);
    if ((((uVar11 & 1) != 0) && (*(long *)(lVar12 + 0x28) != 0)) &&
       (puVar14 = *(undefined8 **)(*(long *)(lVar12 + 0x28) + 0x18), puVar14 != (undefined8 *)0x0))
    {
      (**(code **)*puVar14)();
    }
  }
  FUN_01e7cd70(param_1);
  FUN_01e7d730(param_1);
  uVar11 = FUN_022025a0(*(long *)(*(long *)(param_1 + 8) + 0x68) + 0x278);
  if ((uVar11 & 1) != 0) {
    local_d0 = local_d0 & 0xffffffff00000000;
    local_d8 = (undefined *)0x0;
    uVar11 = FUN_021d9480(&local_d8,*(long *)(param_1 + 8) + 0x508,0);
    if ((uVar11 & 1) != 0) {
      plVar13 = *(long **)(*(long *)(param_1 + 8) + 0x68);
      (**(code **)(*plVar13 + 0x100))(plVar13,&local_d8);
      plVar13 = *(long **)(*(long *)(param_1 + 8) + 0x68);
      (**(code **)(*plVar13 + 0x160))(plVar13,PTR_DAT_04bb2ce0);
    }
  }
  puVar6 = PTR_DAT_04bb3968;
  FUN_01e2a964(*(long *)PTR_DAT_04bb3968 + 0xda0,1,*(long *)(param_1 + 8) + 0x508);
  puVar8 = PTR_DAT_04bc1558;
  puVar7 = PTR_DAT_04bbc1a0;
  puVar5 = PTR_DAT_04bb2010;
  if ((*(ushort *)(param_1 + 0x12570) & 1) == 0) {
    return;
  }
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 != -1) {
    puVar18 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar18 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar18 >> 1 & 1) != 0) {
      if (((*(long *)(param_1 + 8) == 0) ||
          (uVar16 = *(uint *)(*(long *)(param_1 + 8) + 0x508), 9 < uVar16)) ||
         ((&DAT_053fee41)[(ulong)uVar16 * 0xba0] == '\0')) {
LAB_01e6197c:
        puVar18 = (uint *)PTR_DAT_04bc15a0;
LAB_01e61984:
        uVar16 = *puVar18;
      }
      else {
        if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
          if ((int)(&DAT_053fe898)[(ulong)uVar16 * 0x2e8] < 1) goto LAB_01e6197c;
          uVar11 = (ulong)uVar16;
          iVar3 = (&DAT_053fe898)[(ulong)uVar16 * 0x2e8] + (&DAT_053fe894)[uVar11 * 0x2e8] + -1;
          iVar10 = 0;
          if ((int)(&DAT_053fe890)[uVar11 * 0x2e8] <= iVar3) {
            iVar10 = (&DAT_053fe890)[uVar11 * 0x2e8];
          }
          puVar18 = (uint *)((&DAT_053fe888)[uVar11 * 0x174] + (long)(iVar3 - iVar10) * 0x14 + 8);
          goto LAB_01e61984;
        }
        uVar16 = *(byte *)(*(long *)puVar6 + (ulong)uVar16 * 0x28 + 0xe23) & 3;
      }
      if (uVar16 == 1) {
        return;
      }
    }
  }
  if (((*(long *)(param_1 + 8) != 0) &&
      (uVar16 = *(uint *)(*(long *)(param_1 + 8) + 0x508), uVar16 < 10)) &&
     (((&DAT_053fee41)[(ulong)uVar16 * 0xba0] != '\0' &&
      (((&DAT_053fede8)[(ulong)uVar16 * 0x174] != 0 &&
       (*(int *)((&DAT_053fede8)[(ulong)uVar16 * 0x174] + 4) == 1)))))) {
    return;
  }
  local_c8 = 0;
  uStack_c0 = 0;
  local_88 = 0xffffffff;
  local_84 = 0;
  local_d8 = PTR_DAT_04bc1558 + 0x10;
  local_d0 = 0;
  puStack_b0 = PTR_DAT_04bb2010 + 0x10;
  local_b8 = PTR_DAT_04bbc1a0 + 0x10;
  local_a8 = 0;
  local_98 = 0;
  uStack_90 = 0xffffffff00000000;
  local_80 = 0xfffe;
  puStack_a0 = puStack_b0;
  FUN_0277d4ac(&local_80);
  local_70 = 0;
  local_6c = 0;
  local_78 = 0x3bf800000;
  local_48 = FUN_021dcc90(*(long *)(param_1 + 8) + 0x508);
  FUN_01e26a60(&local_d8,&local_48);
  FUN_0209bf8c(param_1 + 0xaf38,&local_d8);
  uVar16 = *(uint *)(*(long *)(param_1 + 8) + 0x508);
  if ((uVar16 < 10) && ((&DAT_053fee41)[(ulong)uVar16 * 0xba0] != '\0')) {
    local_d8 = (undefined *)CONCAT44(local_d8._4_4_,(&DAT_053fe830)[(ulong)uVar16 * 0x2e8]);
    if ((&DAT_053fe830)[(ulong)uVar16 * 0x2e8] != 0) {
      local_d8 = puVar8 + 0x10;
      local_88 = 0xffffffff;
      local_d0 = 0;
      local_b8 = puVar7 + 0x10;
      puStack_b0 = puVar5 + 0x10;
      local_84 = 0;
      local_98 = 0;
      uStack_90 = 0xffffffff00000000;
      local_80 = 0xfffe;
      local_c8 = 0;
      uStack_c0 = 0;
      local_a8 = 0;
      puStack_a0 = puStack_b0;
      FUN_0277d4ac(&local_80);
      local_6c = (&DAT_053fe830)[(ulong)uVar16 * 0x2e8];
      local_78 = 0x3bf800000;
      local_70 = 0;
      FUN_0209bf8c(param_1 + 0xaf38,&local_d8);
      puVar14 = &local_d8;
      uVar15 = 0;
      goto LAB_01e61b48;
    }
  }
  puVar14 = (undefined8 *)(param_1 + 0xb028);
  uVar15 = 1;
LAB_01e61b48:
  FUN_01e67ee0(param_1,puVar14,0,0,uVar15);
  return;
}


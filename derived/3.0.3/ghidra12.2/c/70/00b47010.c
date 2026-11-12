
/* WARNING: Removing unreachable block (ram,0x00b486f4) */
/* WARNING: Removing unreachable block (ram,0x00b486e4) */
/* WARNING: Removing unreachable block (ram,0x00b48794) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b47010(undefined8 *param_1,int param_2,byte *param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  ushort uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  ushort uVar11;
  short sVar12;
  bool bVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  long *plVar20;
  undefined8 *puVar21;
  ulong uVar22;
  undefined2 *puVar23;
  int iVar24;
  int iVar25;
  undefined4 *puVar26;
  uint uVar27;
  long lVar28;
  long lVar29;
  long *plVar30;
  long lVar31;
  ulong uVar32;
  int iVar33;
  int iVar34;
  float fVar35;
  float fVar36;
  ulong local_c8;
  undefined2 local_c0;
  undefined1 local_be;
  undefined1 local_bd;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined2 local_a0;
  undefined1 local_9e;
  undefined1 local_9d;
  undefined4 local_9c;
  undefined *local_98;
  int local_90;
  int iStack_8c;
  byte local_84 [4];
  undefined8 local_80;
  undefined8 local_78;
  byte local_70;
  byte local_6f;
  int local_64;
  
  lVar31 = *(long *)PTR_DAT_04bb3968;
  *param_1 = 0xfffe;
  local_64 = param_2;
  FUN_0277d4ac();
  puVar2 = PTR_DAT_04bb27c0;
  uVar17 = local_b8._4_4_;
  switch(local_64) {
  case 0:
    lVar28 = *(long *)PTR_DAT_04bb46b0;
    if (lVar28 == 0) {
      return;
    }
    puVar21 = *(undefined8 **)(lVar28 + 0x10);
    if ((*(byte *)(lVar28 + 0x453) & 1) == 0) {
      lVar29 = (**(code **)(*(long *)*puVar21 + 0x38))();
      lVar28 = 0;
      if (lVar29 != 0) {
        lVar28 = lVar29 + 0x70;
      }
    }
    else {
      if (puVar21 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar21[0x26] == (long *)0x0) {
        return;
      }
      lVar28 = (**(code **)(*(long *)puVar21[0x26] + 0x38))();
    }
    lVar29 = lVar28 + 0xe6ba0;
    if (lVar28 == 0) {
      lVar29 = 0;
    }
    if (lVar31 == 0) {
      return;
    }
    if (lVar28 == 0) {
      return;
    }
    FUN_00adda18(&local_b8,lVar31 + 0xa20,0);
    if (uStack_b0._1_1_ == '\0') {
      return;
    }
    if (local_b8 == (undefined *)0x0) {
      return;
    }
    if (*(int *)(local_b8 + 0x500) != 0) {
      return;
    }
    local_70 = 1;
    local_78 = (char *)lVar29;
    if (*(long **)(lVar29 + 0x28) == (long *)0x0) {
      local_6f = 0;
    }
    else {
      puVar21 = (undefined8 *)**(long **)(lVar29 + 0x28);
      local_6f = 0;
      if (puVar21 != (undefined8 *)0x0) {
        local_6f = (**(code **)*puVar21)();
      }
    }
    local_6f = local_6f & 1;
    local_80 = (undefined **)(PTR_DAT_04bb4ff8 + 0x10);
    FUN_0284eea8(*(long *)(lVar29 + 0x10) + *(long *)(lVar29 + 8),param_1,
                 *(undefined4 *)(local_b8 + 0x508));
    goto LAB_00b48b00;
  case 1:
  case 2:
  case 9:
    puVar26 = &DAT_05405f5c;
    goto LAB_00b47b14;
  case 3:
    lVar28 = *(long *)PTR_DAT_04bb27c0;
    if (lVar28 == 0) {
      return;
    }
    uVar17 = *(uint *)(lVar31 + 0xa20);
    if ((((uVar17 == 0) ||
         (plVar30 = *(long **)(*(long *)(*(long *)(lVar28 + 0x1c0) + 8) +
                              ((ulong)(uVar17 >> 0x11) & 0x7ff8)), plVar30 == (long *)0x0)) ||
        ((*(uint *)(plVar30 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar30 + 0x46) != uVar17)) {
      plVar30 = (long *)0x0;
    }
    if (*(int *)(lVar28 + 0x288) == 1 || *(int *)(lVar28 + 0x288) == -1) {
      plVar20 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar31 = *(long *)puVar2;
      iVar15 = (**(code **)(*plVar20 + 0x60))();
      if (iVar15 < 0x11) {
        uVar17 = 1;
      }
      else {
        if (4 < *(uint *)(lVar31 + 0x5e8)) goto LAB_00b481a4;
        uVar17 = 0x1aU >> (ulong)(*(uint *)(lVar31 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_00b481a4:
      uVar17 = 0;
    }
    if (plVar30 == (long *)0x0) {
      return;
    }
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar15 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar15 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar18 = (**(code **)(*plVar30 + 0x20))(plVar30,PTR_DAT_04bb37d0);
    if ((uVar17 & uVar18) != 1) {
      return;
    }
    if ((int)plVar30[0xa0] == 1) {
      puVar2 = PTR_DAT_04bb2020 + 0x10;
      local_78 = "owl";
      local_80 = (undefined **)puVar2;
      uVar32 = FUN_00710cb0(plVar30 + 0x7c,&local_80);
      if ((uVar32 & 1) == 0) {
        local_78 = "rcm";
        local_80 = (undefined **)puVar2;
        uVar32 = FUN_00710cb0(plVar30 + 0x7c,&local_80);
        if ((uVar32 & 1) == 0) goto LAB_00b48a70;
        local_80 = (undefined **)0xac4;
      }
      else {
        local_80 = (undefined **)0xac3;
      }
      FUN_0277d4ac(&local_80);
      *(undefined4 *)param_1 = (undefined4)local_80;
      *(undefined4 *)((long)param_1 + 4) = local_80._4_4_;
    }
    else if ((int)plVar30[0xa0] == 0) {
      local_b8 = (undefined *)0xac5;
      FUN_0277d4ac(&local_b8);
      local_98 = (undefined *)0xac5;
      FUN_0277d4ac(&local_98);
      FUN_01ad5d04(&local_80,&local_98);
      local_98 = (undefined *)CONCAT53(local_98._3_5_,0x80023);
      FUN_020fd3a0(&local_98,plVar30 + 0x7c);
      FUN_01ad6844(&local_80,&local_98);
      *(undefined4 *)param_1 = (undefined4)local_78;
      *(undefined4 *)((long)param_1 + 4) = local_78._4_4_;
    }
LAB_00b48a70:
    FUN_033925a8(1,param_1);
    break;
  case 4:
    if (*(long *)PTR_DAT_04bb2230 == 0) {
      lVar31 = 0;
      iVar15 = _DAT_00002140;
    }
    else {
      lVar31 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
      iVar15 = *(int *)(&DAT_00002140 + lVar31);
    }
    if (iVar15 == 0xd) {
      if (*(char *)(lVar31 + 0xd78) == '\0') {
        bVar14 = 1;
      }
      else {
        bVar14 = (**(code **)(*(long *)(lVar31 + 0xd70) + 0x18))(lVar31 + 0xd70);
        *(undefined1 *)(lVar31 + 0xd78) = 0;
      }
      uVar32 = 0;
      *(byte *)(lVar31 + 0xd79) = bVar14 & 1;
      uVar22 = *(ulong *)(lVar31 + 0xd90);
      do {
        if ((uVar22 >> (uVar32 & 0x3f) & 1) != 0) {
          iVar15 = FUN_02672e00(param_3);
          uVar17 = (uint)uVar32;
          if (iVar15 <= (int)uVar17 || 0x7fffffff < uVar17) {
            uVar17 = 0xffffffff;
          }
          if (uVar17 < 0x28) {
            puVar23 = (undefined2 *)FUN_02677ea0(param_3);
            *(undefined2 *)param_1 = *puVar23;
            *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)(puVar23 + 1);
            *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar23 + 3);
            *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)(puVar23 + 2);
            return;
          }
        }
        uVar32 = uVar32 + 1;
      } while (uVar32 != 0x40);
    }
    else {
      if (*(char *)(lVar31 + 0x28) == '\0') {
        bVar14 = 1;
      }
      else {
        bVar14 = (**(code **)(*(long *)(lVar31 + 0x20) + 0x18))((long *)(lVar31 + 0x20));
        *(undefined1 *)(lVar31 + 0x28) = 0;
      }
      *(byte *)(lVar31 + 0x29) = bVar14 & 1;
      *(undefined2 *)param_1 = *(undefined2 *)(lVar31 + 0x2c);
      *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)(lVar31 + 0x2e);
      *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)(lVar31 + 0x2f);
      *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)(lVar31 + 0x30);
    }
    break;
  case 6:
    lVar28 = *(long *)PTR_DAT_04bb27c0;
    if (lVar28 == 0) {
      return;
    }
    uVar17 = *(uint *)(lVar31 + 0xa20);
    if (((uVar17 == 0) ||
        (plVar30 = *(long **)(*(long *)(*(long *)(lVar28 + 0x1c0) + 8) +
                             ((ulong)(uVar17 >> 0x11) & 0x7ff8)), plVar30 == (long *)0x0)) ||
       (((*(uint *)(plVar30 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar30 + 0x46) != uVar17)))) {
      plVar30 = (long *)0x0;
    }
    if (*(int *)(lVar28 + 0x288) == 1 || *(int *)(lVar28 + 0x288) == -1) {
      plVar20 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar31 = *(long *)puVar2;
      iVar15 = (**(code **)(*plVar20 + 0x60))();
      if (iVar15 < 0x11) {
        uVar17 = 1;
      }
      else {
        if (4 < *(uint *)(lVar31 + 0x5e8)) goto LAB_00b481ac;
        uVar17 = 0x1aU >> (ulong)(*(uint *)(lVar31 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_00b481ac:
      uVar17 = 0;
    }
    if (plVar30 == (long *)0x0) {
      return;
    }
    lVar31 = plVar30[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar15 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar15 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar32 = (**(code **)(*plVar30 + 0x20))(plVar30,PTR_DAT_04bb37d0);
    uVar18 = 0;
    if ((int)lVar31 == 1) {
      uVar18 = uVar17;
    }
    if ((uVar32 & 1) == 0) {
      return;
    }
    if (uVar18 == 0) {
      return;
    }
    uVar17 = *(uint *)(*(long *)(plVar30[0x13] + 0x288) + 0x1e0);
    puVar5 = (undefined4 *)(*(long *)(plVar30[0x13] + 0x288) + 0x1ac);
    puVar26 = puVar5 + (ulong)uVar17 * 2;
    if (3 < uVar17) {
      puVar26 = puVar5;
    }
    goto LAB_00b47b14;
  case 10:
  case 0xb:
    lVar31 = *(long *)PTR_DAT_04bb46b0;
    if (lVar31 == 0) {
      return;
    }
    puVar21 = *(undefined8 **)(lVar31 + 0x10);
    if ((*(byte *)(lVar31 + 0x453) & 1) == 0) {
      lVar31 = (**(code **)(*(long *)*puVar21 + 0x38))();
      if (lVar31 == 0) {
        return;
      }
      lVar31 = lVar31 + 0x70;
    }
    else {
      if (puVar21 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar21[0x26] == (long *)0x0) {
        return;
      }
      lVar31 = (**(code **)(*(long *)puVar21[0x26] + 0x38))();
      if (lVar31 == 0) {
        return;
      }
    }
    if ((*(long **)(lVar31 + 0xe6d50) == (long *)0x0) ||
       (puVar21 = (undefined8 *)**(long **)(lVar31 + 0xe6d50), puVar21 == (undefined8 *)0x0)) {
      uVar17 = 1;
    }
    else {
      uVar17 = (**(code **)*puVar21)();
      uVar17 = uVar17 ^ 1;
    }
    FUN_02845810(&local_80,*(long *)(lVar31 + 0xe6d38) + *(long *)(lVar31 + 0xe6d30),1);
    *(undefined4 *)param_1 = (undefined4)local_80;
    *(undefined4 *)((long)param_1 + 4) = local_80._4_4_;
    if ((((uVar17 & 1) == 0) && (*(long *)(lVar31 + 0xe6d50) != 0)) &&
       (puVar21 = *(undefined8 **)(*(long *)(lVar31 + 0xe6d50) + 8), puVar21 != (undefined8 *)0x0))
    {
      (**(code **)*puVar21)();
    }
    if (local_64 != 0xb) {
      return;
    }
    FUN_01ad5d04(&local_80,param_1);
    iVar15 = FUN_01ad9fd0(&local_80);
    if (iVar15 != 0x8d) {
      return;
    }
    FUN_01b06c00(&local_b8,&local_80);
    local_80._0_4_ = (undefined4)local_b8;
    local_80._4_4_ = local_b8._4_4_;
    goto LAB_00b47ba8;
  case 0xc:
    lVar31 = 0xde08;
    goto LAB_00b47b08;
  case 0xd:
    lVar31 = 0xde98;
    goto LAB_00b47b08;
  case 0xe:
    lVar28 = *(long *)PTR_DAT_04bb27c0;
    if (lVar28 == 0) {
      return;
    }
    uVar17 = *(uint *)(lVar31 + 0xa20);
    if ((((uVar17 == 0) ||
         (plVar30 = *(long **)(*(long *)(*(long *)(lVar28 + 0x1c0) + 8) +
                              ((ulong)(uVar17 >> 0x11) & 0x7ff8)), plVar30 == (long *)0x0)) ||
        ((*(uint *)(plVar30 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar30 + 0x46) != uVar17)) {
      plVar30 = (long *)0x0;
    }
    if (*(int *)(lVar28 + 0x288) == 1 || *(int *)(lVar28 + 0x288) == -1) {
      plVar20 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar31 = *(long *)puVar2;
      iVar15 = (**(code **)(*plVar20 + 0x60))();
      if (iVar15 < 0x11) {
        uVar17 = 1;
      }
      else {
        if (4 < *(uint *)(lVar31 + 0x5e8)) goto LAB_00b481b4;
        uVar17 = 0x1aU >> (ulong)(*(uint *)(lVar31 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_00b481b4:
      uVar17 = 0;
    }
    if (plVar30 != (long *)0x0) {
      if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar15 != 0)) {
        *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37d8);
      }
      uVar18 = (**(code **)(*plVar30 + 0x20))(plVar30,PTR_DAT_04bb37d0);
      if (((uVar17 & uVar18) == 1) && (lVar31 = plVar30[0x7a], lVar31 != 0)) {
        lVar28 = 0x238;
        lVar29 = lVar31 + 0x238;
        if (*(short *)(lVar31 + 0x228) != -2) {
          lVar28 = 0x228;
          lVar29 = lVar31 + 0x228;
        }
        *(undefined2 *)param_1 = *(undefined2 *)(lVar31 + lVar28);
        *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)(lVar29 + 2);
        *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)(lVar29 + 3);
        *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)(lVar29 + 4);
      }
    }
    break;
  case 0xf:
    lVar28 = *(long *)PTR_DAT_04bb27c0;
    if (lVar28 == 0) {
      return;
    }
    uVar17 = *(uint *)(lVar31 + 0xa20);
    if (((uVar17 == 0) ||
        (plVar30 = *(long **)(*(long *)(*(long *)(lVar28 + 0x1c0) + 8) +
                             ((ulong)(uVar17 >> 0x11) & 0x7ff8)), plVar30 == (long *)0x0)) ||
       (((*(uint *)(plVar30 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar30 + 0x46) != uVar17)))) {
      plVar30 = (long *)0x0;
    }
    if (*(int *)(lVar28 + 0x288) == 1 || *(int *)(lVar28 + 0x288) == -1) {
      plVar20 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar31 = *(long *)puVar2;
      iVar15 = (**(code **)(*plVar20 + 0x60))();
      if (iVar15 < 0x11) {
        uVar17 = 1;
      }
      else {
        if (4 < *(uint *)(lVar31 + 0x5e8)) goto LAB_00b481bc;
        uVar17 = 0x1aU >> (ulong)(*(uint *)(lVar31 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_00b481bc:
      uVar17 = 0;
    }
    if (plVar30 == (long *)0x0) {
      return;
    }
    lVar31 = plVar30[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar15 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar15 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar32 = (**(code **)(*plVar30 + 0x20))(plVar30,PTR_DAT_04bb37d0);
    uVar18 = 0;
    if ((int)lVar31 == 1) {
      uVar18 = uVar17;
    }
    if ((uVar32 & 1) == 0) {
      return;
    }
    if (uVar18 == 0) {
      return;
    }
    lVar31 = FUN_00b48ccc(plVar30);
    if (lVar31 == 0) {
      lVar31 = FUN_00b48d5c(plVar30);
      if (lVar31 == 0) {
        lVar31 = FUN_00b48de8(plVar30);
        if (lVar31 == 0) {
          return;
        }
        lVar28 = 0xaf58;
      }
      else {
        lVar28 = 0x129e8;
      }
    }
    else {
      lVar28 = 0x136e8;
    }
    local_80 = (undefined **)(ulong)(ushort)*(undefined4 *)(lVar31 + lVar28);
    FUN_0277d4ac(&local_80);
    goto LAB_00b47ba4;
  case 0x10:
    lVar28 = *(long *)PTR_DAT_04bb27c0;
    if (lVar28 == 0) {
      return;
    }
    uVar17 = *(uint *)(lVar31 + 0xa20);
    if ((((uVar17 == 0) ||
         (plVar30 = *(long **)(*(long *)(*(long *)(lVar28 + 0x1c0) + 8) +
                              ((ulong)(uVar17 >> 0x11) & 0x7ff8)), plVar30 == (long *)0x0)) ||
        ((*(uint *)(plVar30 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar30 + 0x46) != uVar17)) {
      plVar30 = (long *)0x0;
    }
    if (*(int *)(lVar28 + 0x288) == 1 || *(int *)(lVar28 + 0x288) == -1) {
      plVar20 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar31 = *(long *)puVar2;
      iVar15 = (**(code **)(*plVar20 + 0x60))();
      if (iVar15 < 0x11) {
        uVar17 = 1;
      }
      else {
        if (4 < *(uint *)(lVar31 + 0x5e8)) goto LAB_00b481c4;
        uVar17 = 0x1aU >> (ulong)(*(uint *)(lVar31 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_00b481c4:
      uVar17 = 0;
    }
    if (plVar30 == (long *)0x0) {
      return;
    }
    lVar31 = plVar30[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar15 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar15 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar32 = (**(code **)(*plVar30 + 0x20))(plVar30,PTR_DAT_04bb37d0);
    uVar18 = 0;
    if ((int)lVar31 == 1) {
      uVar18 = uVar17;
    }
    if ((uVar32 & 1) == 0) {
      return;
    }
    if (uVar18 == 0) {
      return;
    }
    lVar31 = FUN_0265c2a0((int)plVar30[0xa1]);
    puVar2 = PTR_DAT_04bb46f0;
    if (lVar31 == 0) {
      return;
    }
    lVar28 = *(long *)PTR_DAT_04bb46f0;
    if (lVar28 == 0) {
      return;
    }
    local_70 = 1;
    local_78 = (char *)lVar31;
    if (*(long **)(lVar31 + 0x28) == (long *)0x0) {
      local_6f = 0;
    }
    else {
      puVar21 = (undefined8 *)**(long **)(lVar31 + 0x28);
      local_6f = 0;
      if (puVar21 != (undefined8 *)0x0) {
        local_6f = (**(code **)*puVar21)();
      }
    }
    local_6f = local_6f & 1;
    local_80 = (undefined **)(PTR_DAT_04bb67a0 + 0x10);
    lVar31 = *(long *)(lVar31 + 0x10) + *(long *)(lVar31 + 8);
    uVar11 = *(ushort *)(lVar31 + 0x13154);
    if (-1 < (short)uVar11) {
      local_b8 = PTR_DAT_04bb2020 + 0x10;
      uStack_b0 = "CookingInDIYSchedule";
      iVar15 = FUN_02749340(lVar31 + 0x1267c,&local_b8);
      if (iVar15 == 0) {
        FUN_0262eb00(&local_b8,lVar28,uVar11,lVar28 + 0xe98e0);
LAB_00b48ac4:
        *(undefined4 *)param_1 = (undefined4)local_b8;
        *(uint *)((long)param_1 + 4) = local_b8._4_4_;
      }
      else if (uVar11 < 0x800) {
        uVar17 = 1 << (ulong)(uVar11 & 7) &
                 (uint)*(byte *)(*(long *)puVar2 + (ulong)(uVar11 >> 3) + 0xe99e0);
        uVar6 = 0x4c7b;
        if (uVar17 != 0) {
          uVar6 = uVar11;
        }
        local_98 = (undefined *)CONCAT62(local_98._2_6_,uVar6);
        if (uVar17 != 0) {
          FUN_026126cc(&local_b8,&local_98);
          goto LAB_00b48ac4;
        }
      }
    }
LAB_00b48b00:
    FUN_02640184(&local_80);
    break;
  case 0x11:
    lVar31 = 0xde88;
    goto LAB_00b47b08;
  case 0x12:
    lVar28 = *(long *)PTR_DAT_04bb27c0;
    if (lVar28 == 0) {
      return;
    }
    uVar17 = *(uint *)(lVar31 + 0xa20);
    if (((uVar17 == 0) ||
        (plVar30 = *(long **)(*(long *)(*(long *)(lVar28 + 0x1c0) + 8) +
                             ((ulong)(uVar17 >> 0x11) & 0x7ff8)), plVar30 == (long *)0x0)) ||
       (((*(uint *)(plVar30 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar30 + 0x46) != uVar17)))) {
      plVar30 = (long *)0x0;
    }
    if (*(int *)(lVar28 + 0x288) == 1 || *(int *)(lVar28 + 0x288) == -1) {
      plVar20 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar31 = *(long *)puVar2;
      iVar15 = (**(code **)(*plVar20 + 0x60))();
      if (iVar15 < 0x11) {
        uVar17 = 1;
      }
      else {
        if (4 < *(uint *)(lVar31 + 0x5e8)) goto LAB_00b481cc;
        uVar17 = 0x1aU >> (ulong)(*(uint *)(lVar31 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_00b481cc:
      uVar17 = 0;
    }
    if (plVar30 == (long *)0x0) {
      return;
    }
    lVar31 = plVar30[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar15 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar15 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar32 = (**(code **)(*plVar30 + 0x20))(plVar30,PTR_DAT_04bb37d0);
    uVar18 = 0;
    if ((int)lVar31 == 1) {
      uVar18 = uVar17;
    }
    if ((uVar32 & 1) == 0) {
      return;
    }
    if (uVar18 == 0) {
      return;
    }
    uVar19 = FUN_021d6100((int)plVar30[0xa1]);
    FUN_021e2c70(&local_80,uVar19);
    goto LAB_00b47ba4;
  case 0x13:
    FUN_021c55a0(&local_80,&DAT_05453f60);
    goto LAB_00b47ba4;
  case 0x14:
    FUN_021c57b0(&local_80,&DAT_05453f60);
    goto LAB_00b47ba4;
  case 0x15:
    FUN_021c5c40(&local_80,&DAT_05453f60);
    goto LAB_00b47ba4;
  case 0x16:
    FUN_021c5ea0(&local_80,&DAT_05453f60);
    goto LAB_00b47ba4;
  case 0x17:
    lVar28 = *(long *)PTR_DAT_04bb27c0;
    if (lVar28 == 0) {
      return;
    }
    uVar17 = *(uint *)(lVar31 + 0xa20);
    if ((((uVar17 == 0) ||
         (plVar30 = *(long **)(*(long *)(*(long *)(lVar28 + 0x1c0) + 8) +
                              ((ulong)(uVar17 >> 0x11) & 0x7ff8)), plVar30 == (long *)0x0)) ||
        ((*(uint *)(plVar30 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar30 + 0x46) != uVar17)) {
      plVar30 = (long *)0x0;
    }
    if (*(int *)(lVar28 + 0x288) == 1 || *(int *)(lVar28 + 0x288) == -1) {
      plVar20 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar31 = *(long *)puVar2;
      iVar15 = (**(code **)(*plVar20 + 0x60))();
      if (iVar15 < 0x11) {
        uVar17 = 1;
      }
      else {
        if (4 < *(uint *)(lVar31 + 0x5e8)) goto LAB_00b481d4;
        uVar17 = 0x1aU >> (ulong)(*(uint *)(lVar31 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_00b481d4:
      uVar17 = 0;
    }
    if (plVar30 == (long *)0x0) {
      return;
    }
    lVar31 = plVar30[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar15 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar15 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar32 = (**(code **)(*plVar30 + 0x20))(plVar30,PTR_DAT_04bb37d0);
    uVar18 = 0;
    if ((int)lVar31 == 1) {
      uVar18 = uVar17;
    }
    if ((uVar32 & 1) == 0) {
      return;
    }
    if (uVar18 == 0) {
      return;
    }
    lVar31 = FUN_00b48e78(plVar30);
    if (lVar31 != 0) {
      *(undefined2 *)param_1 = *(undefined2 *)(lVar31 + 0xaf3c);
      *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)(lVar31 + 0xaf3e);
      *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)(lVar31 + 0xaf3f);
      *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)(lVar31 + 0xaf40);
    }
    lVar31 = FUN_00b48f08(plVar30);
    if (lVar31 == 0) {
      return;
    }
    puVar26 = (undefined4 *)(lVar31 + 0xaf3c);
    goto LAB_00b47b14;
  case 0x18:
    lVar31 = *(long *)PTR_DAT_04bb46b0;
    if (lVar31 == 0) {
LAB_00b47fe8:
      lVar31 = 0;
    }
    else {
      puVar21 = *(undefined8 **)(lVar31 + 0x10);
      if ((*(byte *)(lVar31 + 0x453) & 1) == 0) {
        lVar28 = (**(code **)(*(long *)*puVar21 + 0x38))();
        lVar31 = 0;
        if (lVar28 != 0) {
          lVar31 = lVar28 + 0x70;
        }
      }
      else {
        if (puVar21 == (undefined8 *)0x0) goto LAB_00b47fe8;
        lVar31 = 0;
        if ((long *)puVar21[0x26] != (long *)0x0) {
          lVar31 = (**(code **)(*(long *)puVar21[0x26] + 0x38))();
        }
      }
    }
    plVar30 = (long *)(lVar31 + 0x1c2d88);
    if ((*(long **)(lVar31 + 0x1c2da8) == (long *)0x0) ||
       (puVar21 = (undefined8 *)**(long **)(lVar31 + 0x1c2da8), puVar21 == (undefined8 *)0x0)) {
      uVar17 = 1;
    }
    else {
      uVar17 = (**(code **)*puVar21)();
      uVar17 = uVar17 ^ 1;
    }
    puVar23 = (undefined2 *)(*(long *)(lVar31 + 0x1c2d90) + *plVar30);
    *(undefined2 *)param_1 = *puVar23;
    *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)(puVar23 + 1);
    *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar23 + 3);
    uVar19 = *(undefined4 *)(puVar23 + 2);
    goto LAB_00b48164;
  case 0x19:
    lVar31 = *(long *)PTR_DAT_04bb46b0;
    if (lVar31 == 0) {
LAB_00b48060:
      lVar31 = 0;
    }
    else {
      puVar21 = *(undefined8 **)(lVar31 + 0x10);
      if ((*(byte *)(lVar31 + 0x453) & 1) == 0) {
        lVar28 = (**(code **)(*(long *)*puVar21 + 0x38))();
        lVar31 = 0;
        if (lVar28 != 0) {
          lVar31 = lVar28 + 0x70;
        }
      }
      else {
        if (puVar21 == (undefined8 *)0x0) goto LAB_00b48060;
        lVar31 = 0;
        if ((long *)puVar21[0x26] != (long *)0x0) {
          lVar31 = (**(code **)(*(long *)puVar21[0x26] + 0x38))();
        }
      }
    }
    if ((*(long **)(lVar31 + 0x1c2da8) == (long *)0x0) ||
       (puVar21 = (undefined8 *)**(long **)(lVar31 + 0x1c2da8), puVar21 == (undefined8 *)0x0)) {
      FUN_026219b0(*(undefined8 *)PTR_DAT_04bb46f0,param_1,
                   *(long *)(lVar31 + 0x1c2d90) + *(long *)(lVar31 + 0x1c2d88));
      return;
    }
    uVar32 = (**(code **)*puVar21)();
    FUN_026219b0(*(undefined8 *)PTR_DAT_04bb46f0,param_1,
                 *(long *)(lVar31 + 0x1c2d90) + *(long *)(lVar31 + 0x1c2d88));
    if ((uVar32 & 1) == 0) {
      return;
    }
    lVar31 = *(long *)(lVar31 + 0x1c2da8);
    if (lVar31 == 0) {
      return;
    }
    goto LAB_00b48174;
  case 0x1a:
    puVar26 = (undefined4 *)&DAT_05405f64;
    goto LAB_00b47b14;
  case 0x1c:
    puVar26 = &DAT_05405f6c;
    goto LAB_00b47b14;
  case 0x1d:
    local_84[0] = *param_3;
    if (7 < local_84[0]) {
      local_84[0] = 0xff;
    }
    lVar31 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_84,1);
    if (lVar31 != 0) {
      lVar28 = lVar31 + 0x194b0;
      if (*(long *)(lVar31 + 0x194b8) == 0) {
        lVar28 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
      }
      local_78 = (char *)(lVar28 + 0x2a268);
      local_70 = 1;
      if (*(long **)(lVar28 + 0x2a290) == (long *)0x0) {
        local_6f = 0;
      }
      else {
        puVar21 = (undefined8 *)**(long **)(lVar28 + 0x2a290);
        if (puVar21 == (undefined8 *)0x0) {
          local_6f = 0;
        }
        else {
          local_6f = (**(code **)*puVar21)();
        }
      }
      local_6f = local_6f & 1;
      local_80 = &PTR_FUN_04938278;
      lVar31 = *(long *)(lVar28 + 0x2a278) + *(long *)(lVar28 + 0x2a270);
      uVar19 = *(undefined4 *)(lVar31 + 0x7c);
      uVar7 = *(undefined4 *)(lVar31 + 0x80);
      FUN_02640184(&local_80);
      *(undefined4 *)param_1 = uVar19;
      *(undefined4 *)((long)param_1 + 4) = uVar7;
    }
    break;
  case 0x1e:
    lVar31 = 0xdf30;
    goto LAB_00b47b08;
  case 0x1f:
    lVar31 = 0xdf38;
    goto LAB_00b47b08;
  case 0x20:
    lVar28 = *(long *)PTR_DAT_04bb27c0;
    if (lVar28 == 0) {
      plVar30 = (long *)0x0;
      bVar13 = false;
      uVar32 = 0;
    }
    else {
      uVar17 = *(uint *)(lVar31 + 0xa20);
      if ((((uVar17 == 0) ||
           (plVar30 = *(long **)(*(long *)(*(long *)(lVar28 + 0x1c0) + 8) +
                                ((ulong)(uVar17 >> 0x11) & 0x7ff8)), plVar30 == (long *)0x0)) ||
          ((*(uint *)(plVar30 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar30 + 0x46) != uVar17)) {
        plVar30 = (long *)0x0;
      }
      if (*(int *)(lVar28 + 0x288) == 1 || *(int *)(lVar28 + 0x288) == -1) {
        plVar20 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar31 = *(long *)puVar2;
        iVar15 = (**(code **)(*plVar20 + 0x60))();
        if (iVar15 < 0x11) {
          uVar32 = 1;
        }
        else {
          if (4 < *(uint *)(lVar31 + 0x5e8)) goto LAB_00b481dc;
          uVar32 = 0x101000100 >> (((ulong)*(uint *)(lVar31 + 0x5e8) & 7) << 3);
        }
      }
      else {
LAB_00b481dc:
        uVar32 = 0;
      }
      if (plVar30 == (long *)0x0) {
        bVar13 = false;
      }
      else {
        bVar13 = (int)plVar30[0x2a] == 1;
        if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar15 != 0)) {
          *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb37d8);
        }
        uVar22 = (**(code **)(*plVar30 + 0x20))(plVar30,PTR_DAT_04bb37d0);
        uVar17 = (uint)uVar32;
        if ((uVar22 & 1) == 0) {
          uVar17 = 0;
        }
        uVar32 = (ulong)uVar17;
      }
    }
    if (((plVar30 != (long *)0x0) && (bVar13)) &&
       (((uVar32 & 0xff) != 0 &&
        ((*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0 && ((int)plVar30[0xea] == 1)))))) {
      local_b8 = (undefined *)((ulong)local_b8 & 0xffffffff00000000);
      fVar35 = *(float *)(plVar30[0xd] + 0x278);
      local_80 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
      fVar36 = *(float *)(plVar30[0xd] + 0x280);
      local_78 = (char *)CONCAT44((int)((float)(int)fVar36 / 5.0) - (uint)(fVar36 < 0.0),
                                  (int)((float)(int)fVar35 / 5.0) - (uint)(fVar35 < 0.0));
      lVar31 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0xd0);
      if (lVar31 == 0) {
        puVar23 = (undefined2 *)PTR_DAT_04bb37e0;
      }
      else {
        lVar28 = lVar31 + 0x130 + (ulong)*(uint *)(lVar31 + 0x198) * 0x30;
        if (1 < *(uint *)(lVar31 + 0x198)) {
          lVar28 = lVar31 + 0x130;
        }
        puVar23 = (undefined2 *)FUN_012eb21c(lVar28,&local_80,0);
      }
      uVar32 = FUN_0277d9a8(puVar23);
      if ((uVar32 & 1) != 0) {
        *(undefined2 *)param_1 = *puVar23;
        *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)(puVar23 + 1);
        *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar23 + 3);
        *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)(puVar23 + 2);
      }
    }
    break;
  case 0x21:
    lVar31 = 0xdf40;
    goto LAB_00b47b08;
  case 0x22:
    lVar31 = *(long *)PTR_DAT_04bb46b0;
    if (lVar31 == 0) {
LAB_00b4810c:
      lVar31 = 0;
    }
    else {
      puVar21 = *(undefined8 **)(lVar31 + 0x10);
      if ((*(byte *)(lVar31 + 0x453) & 1) == 0) {
        lVar28 = (**(code **)(*(long *)*puVar21 + 0x38))();
        lVar31 = 0;
        if (lVar28 != 0) {
          lVar31 = lVar28 + 0x70;
        }
      }
      else {
        if (puVar21 == (undefined8 *)0x0) goto LAB_00b4810c;
        lVar31 = 0;
        if ((long *)puVar21[0x26] != (long *)0x0) {
          lVar31 = (**(code **)(*(long *)puVar21[0x26] + 0x38))();
        }
      }
    }
    plVar30 = (long *)(lVar31 + 0x1b9008);
    if ((*(long **)(lVar31 + 0x1b9028) == (long *)0x0) ||
       (puVar21 = (undefined8 *)**(long **)(lVar31 + 0x1b9028), puVar21 == (undefined8 *)0x0)) {
      uVar17 = 1;
    }
    else {
      uVar17 = (**(code **)*puVar21)();
      uVar17 = uVar17 ^ 1;
    }
    lVar31 = *(long *)(lVar31 + 0x1b9010) + *plVar30;
    *(undefined2 *)param_1 = *(undefined2 *)(lVar31 + 0x188);
    *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)(lVar31 + 0x18a);
    *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)(lVar31 + 0x18b);
    uVar19 = *(undefined4 *)(lVar31 + 0x18c);
LAB_00b48164:
    *(undefined4 *)((long)param_1 + 4) = uVar19;
    if (((uVar17 & 1) == 0) && (lVar31 = plVar30[4], lVar31 != 0)) {
LAB_00b48174:
      if (*(undefined8 **)(lVar31 + 8) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b481a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)**(undefined8 **)(lVar31 + 8))();
        return;
      }
    }
    break;
  case 0x23:
    if (*(long *)PTR_DAT_04bb2230 == 0) {
      lVar31 = 0;
    }
    else {
      lVar31 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
    }
    if (*(char *)(lVar31 + 0x1d38) == '\0') {
      bVar14 = 1;
    }
    else {
      bVar14 = (**(code **)(*(long *)(lVar31 + 0x1d30) + 0x18))(lVar31 + 0x1d30);
      *(char *)(lVar31 + 0x1d38) = '\0';
    }
    *(byte *)(lVar31 + 0x1d39) = bVar14 & 1;
    *(undefined2 *)param_1 = *(undefined2 *)(lVar31 + 0x1d3c);
    *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)(lVar31 + 0x1d3e);
    *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)(lVar31 + 0x1d3f);
    *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)(lVar31 + 0x1d40);
    break;
  case 0x24:
    bVar14 = *param_3;
    if (7 < bVar14) {
      bVar14 = 0xff;
    }
    local_b8 = (undefined *)CONCAT71(local_b8._1_7_,bVar14);
    lVar31 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_b8,1);
    if (lVar31 == 0) {
      uVar17 = 0;
    }
    else {
      puVar2 = PTR_DAT_04bb2020 + 0x10;
      local_78 = "UpgradePocket40";
      local_80 = (undefined **)puVar2;
      iVar15 = FUN_0274b8d0(lVar31,&local_80);
      if (iVar15 == 0) {
        local_78 = "UpgradePocket30";
        local_80 = (undefined **)puVar2;
        iVar15 = FUN_0274b8d0(lVar31,&local_80);
        uVar17 = (uint)(iVar15 != 0);
      }
      else {
        uVar17 = 2;
      }
    }
    puVar2 = PTR_DAT_04bb43c0;
    local_80 = (undefined **)CONCAT44(local_80._4_4_,uVar17);
    lVar31 = 0;
    lVar28 = 0x1e;
    if (uVar17 != 1) {
      lVar28 = 0x14;
    }
    lVar29 = 0x28;
    if (uVar17 != 2) {
      lVar29 = lVar28;
    }
    do {
      puVar21 = (undefined8 *)FUN_02677ea0(param_3,lVar31);
      uVar10 = *(undefined2 *)puVar21;
      uVar8 = *(undefined1 *)((long)puVar21 + 2);
      uVar9 = *(undefined1 *)((long)puVar21 + 3);
      uVar19 = *(undefined4 *)((long)puVar21 + 4);
      local_80 = (undefined **)*puVar21;
      lVar28 = *(long *)puVar2;
      uVar17 = FUN_0277d6c4(&local_80);
      if (*(long *)puVar2 != 0) {
        lVar28 = *(long *)(lVar28 + 0x57e58);
        uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
        if ((uVar17 < *(uint *)(lVar28 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) {
          *(undefined2 *)param_1 = uVar10;
          *(undefined1 *)((long)param_1 + 2) = uVar8;
          *(undefined1 *)((long)param_1 + 3) = uVar9;
          *(undefined4 *)((long)param_1 + 4) = uVar19;
          return;
        }
      }
      lVar31 = lVar31 + 1;
    } while (lVar29 != lVar31);
    break;
  case 0x25:
    if (*param_3 < 8) {
      local_b8 = (undefined *)CONCAT71(local_b8._1_7_,*param_3);
      iVar15 = FUN_02582fe0(&local_b8);
      if (iVar15 != -1) {
        local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
        uVar32 = FUN_02b5e950(&local_80,iVar15);
        if ((uVar32 & 1) != 0) {
          local_c8 = FUN_01383880((ulong)local_80 & 0xffffffff);
          puVar2 = PTR_DAT_04bb43c0;
          uVar17 = (uint)(local_c8 >> 0x20);
          if ((uint)local_c8 != uVar17) {
            puVar3 = PTR_DAT_04bbfe68 + 0x10;
            puVar26 = (undefined4 *)(PTR_DAT_04bbbf90 + 8);
            puVar4 = PTR_DAT_04bb2010 + 0x10;
            do {
              uVar18 = (uint)local_c8;
              puVar5 = puVar26 + (local_c8 & 0xffffffff);
              if (0x38 < uVar18) {
                puVar5 = puVar26;
              }
              local_78 = (char *)CONCAT44(*puVar5,uVar18);
              local_80 = (undefined **)puVar3;
              local_70 = FUN_017baf44();
              local_70 = local_70 & 1;
              lVar31 = FUN_01a4fa00(&local_80);
              iVar15 = *(int *)(lVar31 + 0x10);
              iVar25 = 0;
              do {
                iVar24 = *(int *)(lVar31 + 0x24) + 1;
                iVar33 = *(int *)(lVar31 + 0x14);
                if (iVar24 != iVar33) {
                  iVar34 = iVar15;
                  do {
                    local_98 = puVar4;
                    local_90 = iVar34;
                    iStack_8c = iVar33;
                    FUN_01a50240(&local_a0,&local_80,iVar25,&local_98);
                    lVar28 = *(long *)puVar2;
                    uVar16 = FUN_0277d6c4(&local_a0);
                    if (*(long *)puVar2 != 0) {
                      lVar28 = *(long *)(lVar28 + 0x57e58);
                      uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
                      if ((uVar16 < *(uint *)(lVar28 + 0x1d8)) &&
                         (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
                        FUN_01ad5d04(&local_b8,&local_a0);
                        uVar32 = FUN_01ad6a30(&local_b8,0xa0);
                        if ((uVar32 & 1) == 0) {
                          local_c0 = local_a0;
                          local_be = local_9e;
                          local_bd = local_9d;
                          local_bc = local_9c;
                        }
                        else {
                          FUN_01b0a398(&local_c0,&local_b8);
                        }
                        *(undefined2 *)param_1 = local_c0;
                        *(undefined1 *)((long)param_1 + 2) = local_be;
                        *(undefined1 *)((long)param_1 + 3) = local_bd;
                        *(undefined4 *)((long)param_1 + 4) = local_bc;
                        return;
                      }
                    }
                    if (iVar34 < *(int *)(lVar31 + 0x20)) {
                      iVar34 = iVar34 + 1;
                    }
                    else {
                      iVar33 = iVar33 + 1;
                      iVar34 = *(int *)(lVar31 + 0x10);
                    }
                  } while ((iVar15 != iVar34) || (iVar24 != iVar33));
                  iVar15 = *(int *)(lVar31 + 0x10);
                }
                iVar24 = 8;
                if (iVar25 < 8) {
                  iVar24 = iVar25 + 1;
                }
                iVar25 = iVar24;
              } while (iVar24 != 8);
              uVar16 = 0x39;
              if ((int)uVar18 < 0x39) {
                uVar16 = uVar18 + 1;
              }
              local_c8 = (ulong)uVar16;
            } while (uVar16 != uVar17);
          }
        }
      }
    }
    break;
  case 0x26:
    if (*param_3 < 8) {
      uVar17 = FUN_02582d8c(param_3,1);
      puVar2 = PTR_DAT_04bb4fb8;
      if ((((uVar17 < 8) &&
           (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar17 * 0x13f0 + 0x13d4) != '\0')) &&
          (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar17 * 0x13f0 + 0x13d6) != '\0')) &&
         ((uVar17 = FUN_02582d8c(param_3,1), uVar17 < 8 &&
          (lVar31 = *(long *)puVar2, *(char *)(lVar31 + (ulong)uVar17 * 0x13f0 + 0x13d4) != '\0'))))
      {
        uVar18 = FUN_027f9664(param_3);
        puVar2 = PTR_DAT_04bb43c0;
        if (uVar18 != 0) {
          lVar31 = lVar31 + (ulong)uVar17 * 0x13f0;
          uVar32 = 0;
          plVar30 = (long *)(lVar31 + 0x11f8);
          do {
            uVar17 = *(uint *)(lVar31 + 0x1298);
            if (0x13 < uVar17) {
              uVar17 = 0x14;
            }
            if ((uint)uVar32 < uVar17) {
              sVar12 = (short)*plVar30;
              plVar1 = plVar30;
joined_r0x00b47cc0:
              plVar20 = plVar1;
              if (sVar12 != -2) {
                lVar28 = *(long *)puVar2;
                uVar17 = FUN_0277d6c4(plVar1);
                if (*(long *)puVar2 == 0) goto LAB_00b47d20;
                lVar28 = *(long *)(lVar28 + 0x57e58);
                uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
                plVar20 = (long *)PTR_DAT_04bb37e0;
                if (uVar17 < *(uint *)(lVar28 + 0x1d8)) {
                  if (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar17 * 8) != 0) {
                    plVar20 = plVar1;
                  }
                }
              }
            }
            else {
              uVar16 = (uint)(uVar32 + -uVar17);
              if ((int)uVar16 < 0) {
LAB_00b47d20:
                plVar20 = (long *)PTR_DAT_04bb37e0;
              }
              else {
                uVar27 = *(uint *)(lVar31 + 0x11e0);
                if (0x13 < uVar27) {
                  uVar27 = 0x14;
                }
                plVar20 = (long *)PTR_DAT_04bb37e0;
                if (uVar16 < uVar27) {
                  plVar1 = (long *)(lVar31 + 0x1140 + (uVar32 + -uVar17 & 0xffffffff) * 8);
                  sVar12 = (short)*plVar1;
                  goto joined_r0x00b47cc0;
                }
              }
            }
            lVar28 = *plVar20;
            uVar8 = *(undefined1 *)((long)plVar20 + 2);
            uVar9 = *(undefined1 *)((long)plVar20 + 3);
            uVar19 = *(undefined4 *)((long)plVar20 + 4);
            local_80 = (undefined **)*plVar20;
            lVar29 = *(long *)puVar2;
            uVar17 = FUN_0277d6c4(&local_80);
            if (*(long *)puVar2 != 0) {
              lVar29 = *(long *)(lVar29 + 0x57e58);
              uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
              if ((uVar17 < *(uint *)(lVar29 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) {
                *(short *)param_1 = (short)lVar28;
                *(undefined1 *)((long)param_1 + 2) = uVar8;
                *(undefined1 *)((long)param_1 + 3) = uVar9;
                *(undefined4 *)((long)param_1 + 4) = uVar19;
                return;
              }
            }
            uVar32 = uVar32 + 1;
            plVar30 = plVar30 + 1;
          } while (uVar18 != uVar32);
        }
      }
    }
    break;
  case 0x27:
    lVar31 = 0xdf6c;
LAB_00b47b08:
    puVar26 = (undefined4 *)(*(long *)PTR_DAT_04bb3240 + lVar31);
LAB_00b47b14:
    *(undefined2 *)param_1 = *(undefined2 *)puVar26;
    *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)((long)puVar26 + 2);
    *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar26 + 3);
    *(undefined4 *)((long)param_1 + 4) = puVar26[1];
    break;
  case 0x28:
    local_b8 = (undefined *)((ulong)uVar17 << 0x20);
    goto LAB_00b47b98;
  case 0x29:
    uVar19 = 1;
    goto LAB_00b47b94;
  case 0x2a:
    uVar19 = 2;
    goto LAB_00b47b94;
  case 0x2b:
    uVar19 = 3;
    goto LAB_00b47b94;
  case 0x2c:
    uVar19 = 4;
    goto LAB_00b47b94;
  case 0x2d:
    uVar19 = 5;
    goto LAB_00b47b94;
  case 0x2e:
    uVar19 = 6;
    goto LAB_00b47b94;
  case 0x2f:
    uVar19 = 7;
    goto LAB_00b47b94;
  case 0x30:
    uVar19 = 8;
    goto LAB_00b47b94;
  case 0x31:
    uVar19 = 9;
    goto LAB_00b47b94;
  case 0x32:
    uVar19 = 10;
    goto LAB_00b47b94;
  case 0x33:
    uVar19 = 0xb;
LAB_00b47b94:
    local_b8 = (undefined *)CONCAT44(uVar17,uVar19);
LAB_00b47b98:
    FUN_00b7b700(&local_80,&local_b8);
LAB_00b47ba4:
LAB_00b47ba8:
    *(undefined4 *)param_1 = (undefined4)local_80;
    *(undefined4 *)((long)param_1 + 4) = local_80._4_4_;
    break;
  case 0x35:
    if (*(long *)PTR_DAT_04bb2230 == 0) {
      lVar31 = 0;
    }
    else {
      lVar31 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
    }
    if (*(char *)(lVar31 + 0x1f18) == '\0') {
      bVar14 = 1;
    }
    else {
      bVar14 = (**(code **)(*(long *)(lVar31 + 0x1f10) + 0x18))(lVar31 + 0x1f10);
      *(char *)(lVar31 + 0x1f18) = '\0';
    }
    *(byte *)(lVar31 + 0x1f19) = bVar14 & 1;
    uVar10 = *(undefined2 *)(lVar31 + 0x1f1c);
    uVar19 = *(undefined4 *)(lVar31 + 0x1f20);
    *(undefined2 *)((long)param_1 + 2) = *(undefined2 *)(lVar31 + 0x1f1e);
    *(undefined4 *)((long)param_1 + 4) = uVar19;
    *(undefined2 *)param_1 = uVar10;
  }
  return;
}


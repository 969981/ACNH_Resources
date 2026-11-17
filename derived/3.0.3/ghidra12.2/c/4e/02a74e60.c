
/* WARNING: Removing unreachable block (ram,0x02a74eb4) */
/* WARNING: Removing unreachable block (ram,0x02a74ec4) */

void FUN_02a74e60(long param_1,int param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  ulong extraout_x11;
  ulong extraout_x11_00;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  undefined4 *puVar17;
  bool bVar18;
  undefined *local_d0;
  undefined1 local_c8;
  int local_c4;
  undefined *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined *local_a8;
  int local_a0;
  undefined **local_98;
  undefined **ppuStack_90;
  undefined1 *local_88;
  undefined4 local_78 [10];
  
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x6efba09b) {
    return;
  }
  local_78[0] = 0;
  puVar1 = &DAT_05636dd8;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
    puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0x148);
  }
  if (puVar1[1] == 0) {
    return;
  }
  local_a8 = PTR_DAT_04bc43f8 + 0x10;
  local_d0 = PTR_DAT_04bc4608 + 0x10;
  local_c8 = PTR_DAT_04bbc570[8];
  local_c4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
  uVar13 = *(ulong *)(PTR_DAT_04bbc570 + 0x18);
  local_c0 = PTR_DAT_04bb2010 + 0x10;
  local_b0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
  local_ac = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
  local_b8 = uVar13;
  local_a0 = param_2;
  if (param_2 != 0) {
    ppuStack_90 = &local_a8;
    local_98 = &PTR_FUN_04a9b150;
    local_88 = (undefined1 *)&local_d0;
    if (puVar1[1] != 0) {
      local_88 = (undefined1 *)&local_d0;
      plVar6 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
      iVar5 = (**(code **)(*plVar6 + 0x18))();
      uVar13 = extraout_x11;
      if (0 < iVar5) {
        iVar15 = 0;
        do {
          FUN_01360490(local_78,puVar1[1],iVar15);
          uVar7 = (*(code *)*local_98)(&local_98,local_78);
          uVar13 = extraout_x11_00;
          if ((uVar7 & 1) != 0) break;
          bVar4 = iVar5 + -1 != iVar15;
          iVar15 = iVar15 + 1;
        } while (bVar4);
      }
    }
  }
  puVar3 = PTR_DAT_04bc4410;
  uVar12 = (uint)uVar13;
  if (local_c4 == 0) {
    return;
  }
  if (puVar1[1] == 0) {
LAB_02a75044:
    uVar16 = 0xffffffff;
LAB_02a7504c:
    bVar4 = true;
    uVar12 = *(uint *)PTR_DAT_04bb3238;
  }
  else {
    if (0x11f < (uint)local_b8) goto LAB_02a75044;
    if (0xff < local_b8._4_4_) goto LAB_02a75044;
    uVar16 = *(uint *)(puVar1[1] + (local_b8 & 0xffffffff) * 0x400 + (ulong)local_b8._4_4_ * 4 +
                      0x30);
    if (0x35 < uVar16) goto LAB_02a7504c;
    uVar11 = 0;
    do {
      uVar2 = *(uint *)(param_1 + 0x10 + ((long)((ulong)uVar11 << 0x20) >> 0x1d) + 4);
      if (uVar2 == uVar16) {
        uVar12 = *(uint *)(param_1 + 0x10 + (long)(int)uVar11 * 8);
        break;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != 0x36);
    bVar4 = false;
    if (uVar2 != uVar16) {
      uVar12 = *(uint *)PTR_DAT_04bb3238;
    }
  }
  if (uVar12 == 0) {
    return;
  }
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    plVar6 = (long *)0x0;
  }
  else {
    plVar6 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) + (ulong)(uVar12 >> 0x14) * 8);
    if (((plVar6 == (long *)0x0) || ((*(uint *)(plVar6 + 0x49) >> 1 & 1) != 0)) ||
       (*(uint *)(plVar6 + 0x46) != uVar12)) {
      plVar6 = (long *)0x0;
    }
    if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
      plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      (**(code **)(*plVar8 + 0x60))();
    }
    if (plVar6 != (long *)0x0) {
      if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4410), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bc4408 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4410);
      }
      (**(code **)(*plVar6 + 0x20))(plVar6,PTR_DAT_04bc4408);
      bVar18 = false;
      goto LAB_02a7510c;
    }
  }
  bVar18 = true;
LAB_02a7510c:
  if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4410), iVar5 != 0)) {
    *(undefined **)PTR_DAT_04bc4408 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4410);
  }
  if ((plVar6 != (long *)0x0) &&
     (uVar13 = (**(code **)(*plVar6 + 0x20))(plVar6,PTR_DAT_04bc4408), (uVar13 & 1) != 0)) {
    if (!bVar4) {
      lVar9 = param_1 + 8 + (ulong)uVar16 * 8;
      *(undefined4 *)(lVar9 + 8) = *(undefined4 *)PTR_DAT_04bb3238;
      *(undefined4 *)(lVar9 + 0xc) = 0xffffffff;
    }
    puVar3 = PTR_DAT_04bb3238;
    iVar5 = 0;
    param_1 = param_1 + 0x1c8;
    uVar16 = *(uint *)PTR_DAT_04bb3238;
    do {
      puVar14 = (uint *)(param_1 + (long)iVar5 * 0x14);
      if (((short)puVar14[1] != 0) && (*puVar14 == uVar12)) {
        *(undefined2 *)(puVar14 + 1) = 0;
        lVar9 = param_1 + (long)iVar5 * 0x14;
        *puVar14 = uVar16;
        *(undefined8 *)(lVar9 + 8) = 0;
        *(undefined4 *)(lVar9 + 0x10) = 0;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0x24);
    lVar9 = plVar6[0x11];
    if (lVar9 != 0) {
      iVar5 = 0;
      do {
        puVar17 = (undefined4 *)(param_1 + (long)iVar5 * 0x14);
        uVar13 = FUN_00714920(lVar9,puVar17);
        if ((uVar13 & 1) != 0) {
          lVar10 = param_1 + (long)iVar5 * 0x14;
          *puVar17 = *(undefined4 *)puVar3;
          *(undefined2 *)(lVar10 + 4) = 0;
          *(undefined8 *)(lVar10 + 8) = 0;
          *(undefined4 *)(lVar10 + 0x10) = 0;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 != 0x24);
      if (bVar18) {
        return;
      }
    }
    FUN_006fb3d0(plVar6);
  }
  return;
}


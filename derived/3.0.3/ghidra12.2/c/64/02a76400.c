
/* WARNING: Removing unreachable block (ram,0x02a76438) */
/* WARNING: Removing unreachable block (ram,0x02a76448) */

void FUN_02a76400(long param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  ulong extraout_x11;
  ulong extraout_x11_00;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  undefined4 *puVar18;
  bool bVar19;
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
  int local_78 [10];
  
  puVar1 = &DAT_05636dd8;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
    puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0x148);
  }
  if (puVar1[1] == 0) {
    return;
  }
  local_a0 = 0;
  local_78[0] = 0;
  local_a8 = PTR_DAT_04bc43f8 + 0x10;
  uVar7 = FUN_02b674f0(local_78,param_2);
  if ((uVar7 & 1) != 0) {
    local_a0 = local_78[0];
  }
  local_d0 = PTR_DAT_04bc4608 + 0x10;
  local_c8 = PTR_DAT_04bbc570[8];
  local_c4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
  uVar7 = *(ulong *)(PTR_DAT_04bbc570 + 0x18);
  local_c0 = PTR_DAT_04bb2010 + 0x10;
  local_b0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
  local_ac = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
  local_b8 = uVar7;
  if (local_a0 != 0) {
    ppuStack_90 = &local_a8;
    local_98 = &PTR_FUN_04a9b150;
    local_88 = (undefined1 *)&local_d0;
    if (puVar1[1] != 0) {
      local_88 = (undefined1 *)&local_d0;
      plVar8 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
      iVar6 = (**(code **)(*plVar8 + 0x18))();
      uVar7 = extraout_x11;
      if (0 < iVar6) {
        iVar16 = 0;
        do {
          FUN_01360490(local_78,puVar1[1],iVar16);
          uVar9 = (*(code *)*local_98)(&local_98,local_78);
          uVar7 = extraout_x11_00;
          if ((uVar9 & 1) != 0) break;
          bVar5 = iVar6 + -1 != iVar16;
          iVar16 = iVar16 + 1;
        } while (bVar5);
      }
    }
  }
  puVar4 = PTR_DAT_04bc4410;
  uVar14 = (uint)uVar7;
  if (local_c4 == 0) {
    return;
  }
  if (puVar1[1] == 0) {
LAB_02a765e4:
    uVar17 = 0xffffffff;
LAB_02a765ec:
    bVar5 = true;
    uVar14 = *(uint *)PTR_DAT_04bb3238;
  }
  else {
    if (0x11f < (uint)local_b8) goto LAB_02a765e4;
    if (0xff < local_b8._4_4_) goto LAB_02a765e4;
    uVar17 = *(uint *)(puVar1[1] + (local_b8 & 0xffffffff) * 0x400 + (ulong)local_b8._4_4_ * 4 +
                      0x30);
    if (0x35 < uVar17) goto LAB_02a765ec;
    uVar13 = 0;
    do {
      uVar3 = *(uint *)(param_1 + 0x10 + ((long)((ulong)uVar13 << 0x20) >> 0x1d) + 4);
      if (uVar3 == uVar17) {
        uVar14 = *(uint *)(param_1 + 0x10 + (long)(int)uVar13 * 8);
        break;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != 0x36);
    bVar5 = false;
    if (uVar3 != uVar17) {
      uVar14 = *(uint *)PTR_DAT_04bb3238;
    }
  }
  if (uVar14 == 0) {
    return;
  }
  lVar11 = *(long *)PTR_DAT_04bb27c0;
  if (lVar11 == 0) {
    plVar8 = (long *)0x0;
  }
  else {
    plVar8 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) + (ulong)(uVar14 >> 0x14) * 8);
    if (((plVar8 == (long *)0x0) || ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) ||
       (*(uint *)(plVar8 + 0x46) != uVar14)) {
      plVar8 = (long *)0x0;
    }
    if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
      plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      (**(code **)(*plVar10 + 0x60))();
    }
    if (plVar8 != (long *)0x0) {
      if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc4410), iVar6 != 0)) {
        *(undefined **)PTR_DAT_04bc4408 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4410);
      }
      (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bc4408);
      bVar19 = false;
      bVar2 = *puVar4;
      goto joined_r0x02a766b8;
    }
  }
  bVar19 = true;
  bVar2 = *puVar4;
joined_r0x02a766b8:
  if (((bVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc4410), iVar6 != 0)) {
    *(undefined **)PTR_DAT_04bc4408 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4410);
  }
  if ((plVar8 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bc4408), (uVar7 & 1) != 0)) {
    if (!bVar5) {
      lVar11 = param_1 + 8 + (ulong)uVar17 * 8;
      *(undefined4 *)(lVar11 + 8) = *(undefined4 *)PTR_DAT_04bb3238;
      *(undefined4 *)(lVar11 + 0xc) = 0xffffffff;
    }
    puVar4 = PTR_DAT_04bb3238;
    iVar6 = 0;
    param_1 = param_1 + 0x1c8;
    uVar17 = *(uint *)PTR_DAT_04bb3238;
    do {
      puVar15 = (uint *)(param_1 + (long)iVar6 * 0x14);
      if (((short)puVar15[1] != 0) && (*puVar15 == uVar14)) {
        *(undefined2 *)(puVar15 + 1) = 0;
        lVar11 = param_1 + (long)iVar6 * 0x14;
        *puVar15 = uVar17;
        *(undefined8 *)(lVar11 + 8) = 0;
        *(undefined4 *)(lVar11 + 0x10) = 0;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0x24);
    lVar11 = plVar8[0x11];
    if (lVar11 != 0) {
      iVar6 = 0;
      do {
        puVar18 = (undefined4 *)(param_1 + (long)iVar6 * 0x14);
        uVar7 = FUN_00714920(lVar11,puVar18);
        if ((uVar7 & 1) != 0) {
          lVar12 = param_1 + (long)iVar6 * 0x14;
          *puVar18 = *(undefined4 *)puVar4;
          *(undefined2 *)(lVar12 + 4) = 0;
          *(undefined8 *)(lVar12 + 8) = 0;
          *(undefined4 *)(lVar12 + 0x10) = 0;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 != 0x24);
      if (bVar19) {
        return;
      }
    }
    FUN_006fb3d0(plVar8);
  }
  return;
}


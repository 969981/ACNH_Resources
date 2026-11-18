
void FUN_0324f6d0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  uint uVar9;
  uint uVar10;
  size_t __size;
  int iVar11;
  long lVar12;
  long *plVar13;
  void *pvVar14;
  ulong uVar15;
  long lVar16;
  byte bVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  undefined8 *puVar22;
  uint uVar23;
  undefined *local_f0;
  undefined1 *puStack_e8;
  undefined *local_e0;
  undefined4 local_d8;
  undefined2 local_d4;
  byte local_d2;
  undefined4 local_d0;
  long local_c8;
  undefined *local_c0;
  undefined1 *local_b8;
  undefined4 local_b0;
  undefined1 local_ac [63];
  undefined1 local_6d;
  
  uVar10 = *(uint *)(*(long *)(param_1 + 0x218) + 0x2f8);
  if ((int)uVar10 < 1) {
    return;
  }
  lVar19 = *(long *)(param_1 + 0x98);
  __size = (ulong)(uVar10 * 6) << 3;
  lVar20 = *(long *)PTR_DAT_04bb2698;
  if (lVar20 == 0) {
    pvVar14 = malloc(__size);
  }
  else {
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar13 = (long *)(lVar20 + 8);
    if (lVar12 != 0) {
      plVar13 = (long *)(lVar12 + 0xa8);
    }
    plVar13 = (long *)*plVar13;
    if (plVar13 == (long *)0x0) goto LAB_0324f770;
    pvVar14 = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,__size,8);
  }
  if (pvVar14 != (void *)0x0) {
    *(uint *)(param_1 + 0x230) = uVar10 * 6;
    *(void **)(param_1 + 0x238) = pvVar14;
  }
LAB_0324f770:
  local_b0 = 0x40;
  local_6d = 0;
  local_b8 = local_ac;
  iVar21 = 0;
  uVar18 = 0;
  puVar1 = PTR_DAT_04bc4da0 + 0x10;
  local_c0 = PTR_DAT_04bb2bc0 + 0x10;
  puVar2 = PTR_DAT_04bc8400 + 0x10;
  local_ac[0] = 0;
  puVar3 = PTR_DAT_04bb2020 + 0x10;
  puVar4 = PTR_DAT_04bc5668 + 0x10;
  puVar5 = PTR_DAT_04bd4738 + 0x10;
  puVar6 = PTR_DAT_04bc8428 + 0x10;
  puVar7 = PTR_DAT_04bc83d8 + 0x10;
  do {
    uVar23 = *(uint *)(*(long *)(param_1 + 0x218) + 0x208);
    if ((long)uVar18 < (long)(int)uVar23 && uVar18 < uVar23) {
      puVar22 = *(undefined8 **)(*(long *)(*(long *)(param_1 + 0x218) + 0x210) + uVar18 * 8);
    }
    else {
      puVar22 = (undefined8 *)0x0;
    }
    if (((*PTR_DAT_04bc4d98 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar11 != 0)) {
      *(undefined **)PTR_DAT_04bc4d90 = puVar1;
      __cxa_guard_release(PTR_DAT_04bc4d98);
    }
    if ((puVar22 != (undefined8 *)0x0) &&
       (uVar15 = (**(code **)*puVar22)(puVar22,PTR_DAT_04bc4d90), (uVar15 & 1) != 0)) {
      uVar23 = 0;
      do {
        FUN_038d1270(&local_c0,"StampCtrlSeq%02d%02d",uVar18 & 0xffffffff,uVar23);
        local_d8 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
        local_d0 = 0xffffffff;
        local_d4 = 1;
        local_d2 = *(byte *)(param_1 + 0x1f8);
        if (7 < local_d2) {
          local_d2 = 0xff;
        }
        uVar9 = uVar23;
        if (*(uint *)(puVar22 + 0x68) <= uVar23) {
          uVar9 = 0;
        }
        local_c8 = *(long *)(puVar22[0x69] + (ulong)uVar9 * 8);
        local_e0 = puVar2;
        (**(code **)(local_c0 + 0x18))(&local_c0);
        lVar20 = *(long *)(lVar19 + 0xb8);
        puStack_e8 = local_b8;
        local_f0 = puVar3;
        if (lVar20 == 0) {
          lVar12 = 1;
          lVar20 = *(long *)PTR_DAT_04bb2698;
          if (lVar20 == 0) goto LAB_0324f9f0;
LAB_0324f9a4:
          lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar13 = (long *)(lVar20 + 8);
          if (lVar16 != 0) {
            plVar13 = (long *)(lVar16 + 0xa8);
          }
          plVar13 = (long *)*plVar13;
          if (plVar13 != (long *)0x0) goto LAB_0324f9d0;
          plVar13 = (long *)0x0;
        }
        else {
          lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar12 = *(long *)(lVar16 + 0xa8);
          *(long *)(lVar16 + 0xa8) = lVar20;
          lVar20 = *(long *)PTR_DAT_04bb2698;
          if (lVar20 == 0) {
LAB_0324f9f0:
            plVar13 = malloc(0x228);
          }
          else {
            plVar13 = *(long **)(lVar19 + 0xb8);
            if (plVar13 == (long *)0x0) goto LAB_0324f9a4;
LAB_0324f9d0:
            plVar13 = (long *)(**(code **)(*plVar13 + 0x30))(plVar13,0x228,8);
          }
        }
        FUN_03868244(plVar13,&local_f0,&local_e0);
        plVar13[0x37] = 0xffffffff;
        plVar13[0x38] = 0xffffffff;
        *(undefined2 *)(plVar13 + 0x39) = 0;
        *(undefined4 *)(plVar13 + 0x3a) = 0;
        plVar13[0x3b] = 0;
        *(undefined4 *)(plVar13 + 0x3c) = 0;
        *(undefined2 *)(plVar13 + 0x40) = 0;
        *(undefined1 *)((long)plVar13 + 0x202) = 0;
        plVar13[0x41] = 0;
        *plVar13 = (long)puVar4;
        *(undefined4 *)(plVar13 + 0x43) = 0xffffffff;
        *(undefined1 *)((long)plVar13 + 0x21c) = 0;
        plVar13[0x35] = (long)puVar5;
        plVar13[0x36] = 0xffffffff;
        bVar17 = local_d2;
        if (7 < local_d2) {
          bVar17 = 0xff;
        }
        *(byte *)(plVar13 + 0x3f) = bVar17;
        *(undefined4 *)((long)plVar13 + 0x1fc) = local_d0;
        plVar13[0x3d] = 0;
        plVar13[0x3e] = -1;
        *plVar13 = (long)puVar6;
        plVar13[0x42] = local_c8;
        *plVar13 = (long)puVar7;
        plVar13[0x44] = local_c8;
        nn::os::LockMutex((MutexType *)(param_1 + 0x188));
        plVar8 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar13);
        lVar20 = *(long *)(param_1 + 0x50);
        *(long **)(param_1 + 0x50) = plVar8;
        *plVar8 = lVar20;
        plVar8[1] = param_1 + 0x50;
        if (lVar20 != 0) {
          *(long **)(lVar20 + 8) = plVar8;
        }
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
        plVar13[9] = param_1;
        nn::os::UnlockMutex((MutexType *)(param_1 + 0x188));
        plVar13[0x13] = lVar19;
        *(undefined4 *)(plVar13 + 0x15) = 1;
        FUN_0386890c(plVar13,&local_e0);
        *(undefined4 *)(plVar13 + 0x15) = 2;
        (**(code **)(*plVar13 + 0x48))(plVar13);
        if (lVar12 != 1) {
          lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          *(long *)(lVar20 + 0xa8) = lVar12;
        }
        uVar9 = iVar21 + uVar23;
        uVar23 = uVar23 + 1;
        if (*(uint *)(param_1 + 0x230) <= uVar9) {
          uVar9 = 0;
        }
        *(long **)(*(long *)(param_1 + 0x238) + (ulong)uVar9 * 8) = plVar13;
      } while (uVar23 != 6);
    }
    uVar18 = uVar18 + 1;
    iVar21 = iVar21 + 6;
    if (uVar18 == uVar10) {
      return;
    }
  } while( true );
}


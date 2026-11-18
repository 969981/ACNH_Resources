
void FUN_03249f50(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  uint uVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  void *pvVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  byte bVar17;
  size_t __size;
  ulong uVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined *local_f8;
  undefined1 *puStack_f0;
  undefined **local_e8;
  undefined4 local_e0;
  undefined2 local_dc;
  byte local_da;
  undefined4 local_d8;
  undefined8 *local_d0;
  undefined *local_c8;
  undefined1 *local_c0;
  undefined4 local_b8;
  undefined1 local_b4 [63];
  undefined1 local_75;
  undefined4 local_6c;
  
  puVar8 = PTR_DAT_04bb3350;
  lVar16 = *(long *)(*(long *)(param_1 + 0x210) + 0x578);
  if (lVar16 == 0) {
    return;
  }
  uVar7 = *(uint *)(lVar16 + 0x2f8);
  if ((int)uVar7 < 1) {
    return;
  }
  lVar20 = *(long *)(param_1 + 0x98);
  __size = (ulong)uVar7 << 3;
  lVar19 = *(long *)PTR_DAT_04bb2698;
  if (lVar19 == 0) {
    pvVar13 = malloc(__size);
  }
  else {
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar12 = (long *)(lVar19 + 8);
    if (lVar11 != 0) {
      plVar12 = (long *)(lVar11 + 0xa8);
    }
    plVar12 = (long *)*plVar12;
    if (plVar12 == (long *)0x0) goto LAB_03249ff8;
    pvVar13 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,__size,8);
  }
  if (pvVar13 != (void *)0x0) {
    *(uint *)(param_1 + 0x218) = uVar7;
    *(void **)(param_1 + 0x220) = pvVar13;
  }
LAB_03249ff8:
  local_75 = 0;
  local_b4[0] = 0;
  local_b8 = 0x40;
  local_c0 = local_b4;
  uVar18 = 0;
  local_c8 = PTR_DAT_04bb2bc0 + 0x10;
  puVar1 = PTR_DAT_04bc4f48 + 0x10;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  puVar3 = PTR_DAT_04bc5668 + 0x10;
  puVar4 = PTR_DAT_04bd4738 + 0x10;
  puVar5 = PTR_DAT_04bc83f8 + 0x10;
  do {
    FUN_038d1270(&local_c8,"SonkatsuResultWindowBtnCtrlSeq%d",uVar18 & 0xffffffff);
    local_da = *(byte *)(param_1 + 0x1f8);
    local_e8 = &PTR_LAB_04b146d0;
    puVar21 = (undefined8 *)0x0;
    if (7 < local_da) {
      local_da = 0xff;
    }
    local_e0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_dc = 1;
    local_d8 = 0xffffffff;
    local_d0 = (undefined8 *)0x0;
    if (((long)uVar18 < (long)(int)*(uint *)(lVar16 + 0x208)) &&
       (uVar18 < *(uint *)(lVar16 + 0x208))) {
      puVar21 = *(undefined8 **)(*(long *)(lVar16 + 0x210) + uVar18 * 8);
    }
    if (((*PTR_DAT_04bc83f0 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04bc83f0), iVar10 != 0)) {
      *(undefined **)PTR_DAT_04bc83e8 = puVar1;
      __cxa_guard_release(PTR_DAT_04bc83f0);
    }
    if (puVar21 == (undefined8 *)0x0) {
      puVar21 = (undefined8 *)0x0;
    }
    else {
      uVar14 = (**(code **)*puVar21)(puVar21,PTR_DAT_04bc83e8);
      if ((uVar14 & 1) == 0) {
        puVar21 = (undefined8 *)0x0;
      }
    }
    local_d0 = puVar21;
    (**(code **)(local_c8 + 0x18))(&local_c8);
    lVar19 = *(long *)(lVar20 + 0xb8);
    puStack_f0 = local_c0;
    local_f8 = puVar2;
    if (lVar19 == 0) {
      lVar11 = 1;
      lVar19 = *(long *)PTR_DAT_04bb2698;
      if (lVar19 == 0) goto LAB_0324a220;
LAB_0324a1e4:
      lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar8 + 0x68));
      plVar12 = (long *)(lVar19 + 8);
      if (lVar15 != 0) {
        plVar12 = (long *)(lVar15 + 0xa8);
      }
      plVar12 = (long *)*plVar12;
      if (plVar12 != (long *)0x0) goto LAB_0324a208;
      plVar12 = (long *)0x0;
    }
    else {
      lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar8 + 0x68));
      lVar11 = *(long *)(lVar15 + 0xa8);
      *(long *)(lVar15 + 0xa8) = lVar19;
      lVar19 = *(long *)PTR_DAT_04bb2698;
      if (lVar19 == 0) {
LAB_0324a220:
        plVar12 = malloc(0x238);
      }
      else {
        plVar12 = *(long **)(lVar20 + 0xb8);
        if (plVar12 == (long *)0x0) goto LAB_0324a1e4;
LAB_0324a208:
        plVar12 = (long *)(**(code **)(*plVar12 + 0x30))(plVar12,0x238,8);
      }
    }
    FUN_03868244(plVar12,&local_f8,&local_e8);
    *(undefined2 *)(plVar12 + 0x39) = 0;
    plVar12[0x37] = 0xffffffff;
    plVar12[0x38] = 0xffffffff;
    *(undefined4 *)(plVar12 + 0x3a) = 0;
    plVar12[0x3b] = 0;
    *(undefined4 *)(plVar12 + 0x3c) = 0;
    *(undefined2 *)(plVar12 + 0x40) = 0;
    *(undefined1 *)((long)plVar12 + 0x202) = 0;
    plVar12[0x41] = 0;
    *plVar12 = (long)puVar3;
    *(undefined4 *)(plVar12 + 0x43) = 0;
    plVar12[0x44] = 0;
    *(undefined4 *)(plVar12 + 0x46) = 0xffffffff;
    *(undefined2 *)((long)plVar12 + 0x234) = 0;
    *(undefined1 *)((long)plVar12 + 0x236) = 0;
    local_6c = 1;
    plVar12[0x35] = (long)puVar4;
    plVar12[0x36] = 0xffffffff;
    bVar17 = local_da;
    if (7 < local_da) {
      bVar17 = 0xff;
    }
    *(byte *)(plVar12 + 0x3f) = bVar17;
    *plVar12 = (long)puVar5;
    *(undefined4 *)((long)plVar12 + 0x1fc) = local_d8;
    plVar12[0x45] = -1;
    plVar12[0x3d] = 0;
    plVar12[0x3e] = -1;
    plVar12[0x42] = (long)local_d0;
    *(uint *)(plVar12 + 0x24) = *(uint *)(plVar12 + 0x24) | 2;
    nn::os::LockMutex((MutexType *)(param_1 + 0x188));
    plVar6 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar12);
    lVar19 = *(long *)(param_1 + 0x50);
    *(long **)(param_1 + 0x50) = plVar6;
    *plVar6 = lVar19;
    plVar6[1] = param_1 + 0x50;
    if (lVar19 != 0) {
      *(long **)(lVar19 + 8) = plVar6;
    }
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    plVar12[9] = param_1;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x188));
    *(undefined4 *)(plVar12 + 0x15) = 1;
    plVar12[0x13] = lVar20;
    FUN_0386890c(plVar12,&local_e8);
    *(undefined4 *)(plVar12 + 0x15) = 2;
    (**(code **)(*plVar12 + 0x48))(plVar12);
    if (lVar11 != 1) {
      lVar19 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar8 + 0x68));
      *(long *)(lVar19 + 0xa8) = lVar11;
    }
    uVar14 = uVar18 & 0xffffffff;
    bVar9 = *(uint *)(param_1 + 0x218) <= uVar18;
    uVar18 = uVar18 + 1;
    if (bVar9) {
      uVar14 = 0;
    }
    *(long **)(*(long *)(param_1 + 0x220) + uVar14 * 8) = plVar12;
    if (uVar7 == uVar18) {
      return;
    }
  } while( true );
}



void FUN_036e1900(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  undefined4 *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  long *plVar17;
  uint uVar18;
  undefined **local_2610;
  long *local_2608;
  long **local_2600;
  long **local_25f8;
  long *local_25f0 [5];
  long alStack_25c8 [990];
  undefined8 local_6d8;
  long local_6b0 [200];
  undefined4 local_6c [3];
  
  local_6c[0] = 0;
  lVar12 = *(long *)PTR_DAT_04bb4e28;
  if (lVar12 != 0) {
    uVar18 = *(uint *)(lVar12 + 0x123c8);
    if (uVar18 == 0xffffffff) {
      puVar13 = (undefined4 *)PTR_DAT_04bb3238;
    }
    else {
      if (uVar18 < *(uint *)(lVar12 + 0xe0)) {
        lVar12 = *(long *)(*(long *)(lVar12 + 0xe8) + (long)(int)uVar18 * 8);
      }
      else {
        lVar12 = 0;
      }
      puVar13 = (undefined4 *)(lVar12 + 8);
    }
    local_6c[0] = *puVar13;
  }
  if ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
     (uVar3 = **(ushort **)PTR_DAT_04bc3a48, (uVar3 & 1) == 0)) {
    bVar8 = *(int *)(param_1 + 0x10) == 1;
  }
  else {
    bVar8 = ((uVar3 ^ 0xffff) & 3) == 0;
  }
  local_2608 = (long *)CONCAT71(local_2608._1_7_,bVar8);
  local_2600 = (long **)local_6c;
  local_2610 = &PTR_FUN_04b45448;
  iVar9 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
  if (iVar9 != 0) {
    lVar12 = (long)iVar9 << 3;
    puVar16 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
    do {
      (*(code *)*local_2610)(&local_2610,*puVar16);
      lVar12 = lVar12 + -8;
      puVar16 = puVar16 + 1;
    } while (lVar12 != 0);
  }
  lVar12 = 0xc6;
  local_2600 = local_25f0;
  local_25f0[0] = alStack_25c8;
  local_2610 = (undefined **)0x0;
  local_2608 = (long *)0x0;
  plVar15 = local_25f0[0];
  do {
    lVar12 = lVar12 + -2;
    *plVar15 = (long)(plVar15 + 5);
    plVar15[5] = (long)(plVar15 + 10);
    plVar15 = plVar15 + 10;
  } while (lVar12 != 0);
  local_6d8 = 0;
  if (local_6b0 != (long *)0x0) {
    local_2610 = (undefined **)0xc800000000;
    local_2608 = local_6b0;
  }
  local_25f8 = local_2600;
  FUN_01521078(&local_2610);
  puVar7 = PTR_DAT_04bb5928;
  puVar6 = PTR_DAT_04bb5920;
  puVar5 = PTR_DAT_04bb3350;
  puVar4 = PTR_DAT_04bb27c0;
  if ((int)local_2610 != 0) {
    lVar12 = (long)(int)local_2610 << 3;
    puVar1 = PTR_DAT_04bb3290 + 0x10;
    plVar15 = local_2608;
    do {
      uVar18 = *(uint *)(*plVar15 + 0x20);
      if ((uVar18 != 0) && (lVar14 = *(long *)puVar4, lVar14 != 0)) {
        plVar17 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                            ((ulong)(uVar18 >> 0x11) & 0x7ff8));
        if ((plVar17 == (long *)0x0) ||
           (((*(uint *)(plVar17 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar17 + 0x46) != uVar18)))) {
          plVar17 = (long *)0x0;
        }
        if (*(int *)(lVar14 + 0x288) == 1 || *(int *)(lVar14 + 0x288) == -1) {
          plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
          lVar14 = *(long *)puVar4;
          iVar9 = (**(code **)(*plVar11 + 0x60))();
          if (iVar9 < 0x11) {
            uVar18 = 1;
          }
          else {
            uVar18 = *(uint *)(lVar14 + 0x5e8);
            if (4 < uVar18) goto LAB_036e1b48;
            uVar18 = 0x1aU >> (ulong)(uVar18 & 0x1f) & 1;
          }
        }
        else {
LAB_036e1b48:
          uVar18 = 0;
        }
        if (plVar17 != (long *)0x0) {
          lVar14 = plVar17[0x2a];
          uVar2 = *(uint *)(plVar17 + 0x49);
          if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
            *(undefined **)puVar6 = puVar1;
            __cxa_guard_release(puVar7);
          }
          uVar10 = (**(code **)(*plVar17 + 0x20))(plVar17,puVar6);
          if ((((int)lVar14 == 1) && ((uVar10 & uVar18) != 0)) && ((uVar2 >> 4 & 1) != 0)) {
            FUN_014858d0(plVar17[0x150]);
          }
        }
      }
      plVar15 = plVar15 + 1;
      lVar12 = lVar12 + -8;
    } while (lVar12 != 0);
  }
  return;
}


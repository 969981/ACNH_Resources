
void FUN_018acf30(long param_1,undefined8 param_2,long *param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  undefined2 *puVar9;
  long lVar10;
  void *pvVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined1 *puVar18;
  ulong uVar19;
  long *plVar20;
  undefined8 uVar21;
  ulong uVar22;
  long lVar23;
  undefined *local_78;
  long local_70;
  undefined1 local_68;
  byte local_67;
  
  puVar3 = PTR_DAT_04bb4008;
  puVar2 = PTR_DAT_04bb27c0;
  if (*(long *)PTR_DAT_04bb4008 == 0) {
    return;
  }
  lVar14 = *(long *)PTR_DAT_04bb27c0;
  if (lVar14 == 0) {
    return;
  }
  uVar7 = *(uint *)PTR_DAT_04bbea10;
  if ((((uVar7 == 0) ||
       (plVar20 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                            ((ulong)(uVar7 >> 0x11) & 0x7ff8)), plVar20 == (long *)0x0)) ||
      ((*(uint *)(plVar20 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar20 + 0x46) != uVar7)) {
    plVar20 = (long *)0x0;
  }
  if (*(int *)(lVar14 + 0x288) == 1 || *(int *)(lVar14 + 0x288) == -1) {
    plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar14 = *(long *)puVar2;
    iVar5 = (**(code **)(*plVar8 + 0x60))();
    if (iVar5 < 0x11) {
      uVar7 = 1;
    }
    else {
      if (4 < *(uint *)(lVar14 + 0x5e8)) goto LAB_018ad014;
      uVar7 = 0x1aU >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_018ad014:
    uVar7 = 0;
  }
  if (plVar20 == (long *)0x0) {
    return;
  }
  if (((*PTR_DAT_04bbe9f0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbe9f0), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bbe9e8 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbe9f0);
  }
  uVar6 = (**(code **)(*plVar20 + 0x20))(plVar20,PTR_DAT_04bbe9e8);
  puVar2 = PTR_DAT_04bb4800;
  if ((uVar7 & uVar6) != 1) {
    return;
  }
  lVar14 = FUN_019db1e0(*(undefined8 *)PTR_DAT_04bb4800);
  if ((*(long *)puVar3 != 0) && (lVar15 = *(long *)PTR_DAT_04bb46b0, lVar15 != 0)) {
    puVar16 = *(undefined8 **)(lVar15 + 0x10);
    if ((*(byte *)(lVar15 + 0x453) & 1) == 0) {
      lVar15 = (**(code **)(*(long *)*puVar16 + 0x38))();
      if (lVar15 != 0) {
        lVar15 = lVar15 + 0x70;
        goto LAB_018ad0f0;
      }
    }
    else if (((puVar16 != (undefined8 *)0x0) && ((long *)puVar16[0x26] != (long *)0x0)) &&
            (lVar15 = (**(code **)(*(long *)puVar16[0x26] + 0x38))(), lVar15 != 0)) {
LAB_018ad0f0:
      local_70 = lVar15 + 0x1bf190;
      local_68 = 1;
      plVar20 = *(long **)(lVar15 + 0x1bf1b8);
      if ((plVar20 == (long *)0x0) ||
         (puVar16 = (undefined8 *)*plVar20, puVar16 == (undefined8 *)0x0)) {
        bVar4 = 0;
      }
      else {
        bVar4 = (**(code **)*puVar16)();
      }
      local_67 = bVar4 & 1;
      local_78 = PTR_DAT_04bb64a8 + 0x10;
      if (0 < *(int *)(lVar14 + 0x78)) {
        lVar23 = 0;
        uVar22 = 0;
        do {
          uVar21 = *(undefined8 *)puVar3;
          puVar9 = (undefined2 *)
                   (**(code **)(*(long *)(*(long *)(*(long *)(lVar14 + 0x60) + lVar23 * 8) + 0x30) +
                               0xf0))();
          uVar7 = FUN_01a12390(uVar21,3,*puVar9);
          lVar23 = lVar23 + 1;
          uVar7 = (int)uVar22 + (uVar7 & 1);
          uVar22 = (ulong)uVar7;
        } while (lVar23 < *(int *)(lVar14 + 0x78));
        if (uVar7 != 0) {
          if ((int)uVar7 < 1) {
LAB_018ad21c:
            uVar22 = (ulong)*(uint *)(param_1 + 0x300);
            if ((int)*(uint *)(param_1 + 0x300) < 1) goto LAB_018ad29c;
          }
          else {
            lVar23 = *(long *)PTR_DAT_04bb2698;
            if (lVar23 == 0) {
              pvVar11 = malloc(uVar22 << 2);
            }
            else {
              lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              plVar20 = (long *)(lVar23 + 8);
              if (lVar10 != 0) {
                plVar20 = (long *)(lVar10 + 0xa8);
              }
              plVar20 = (long *)*plVar20;
              if (plVar20 == (long *)0x0) goto LAB_018ad21c;
              pvVar11 = (void *)(**(code **)(*plVar20 + 0x30))(plVar20,uVar22 << 2,8);
            }
            if (pvVar11 == (void *)0x0) goto LAB_018ad21c;
            *(uint *)(param_1 + 0x300) = uVar7;
            *(void **)(param_1 + 0x308) = pvVar11;
          }
          uVar17 = uVar22 & 3;
          uVar19 = 0;
          if (2 < uVar22 - 1) {
            do {
              lVar23 = uVar19 * 4;
              uVar19 = uVar19 + 4;
              *(undefined4 *)(*(long *)(param_1 + 0x308) + lVar23) = 0xffffffff;
              *(undefined4 *)(*(long *)(param_1 + 0x308) + lVar23 + 4) = 0xffffffff;
              *(undefined4 *)(*(long *)(param_1 + 0x308) + lVar23 + 8) = 0xffffffff;
              *(undefined4 *)(*(long *)(param_1 + 0x308) + lVar23 + 0xc) = 0xffffffff;
            } while ((uVar22 & 0xfffffffc) != uVar19);
          }
          if (uVar17 != 0) {
            lVar23 = uVar19 << 2;
            do {
              uVar17 = uVar17 - 1;
              *(undefined4 *)(*(long *)(param_1 + 0x308) + lVar23) = 0xffffffff;
              lVar23 = lVar23 + 4;
            } while (uVar17 != 0);
          }
        }
      }
LAB_018ad29c:
      FUN_018af900(param_1,&local_78,lVar14);
      if ((((bVar4 & 1) != 0) && (lVar15 = *(long *)(lVar15 + 0x1bf1b8), lVar15 != 0)) &&
         (puVar16 = *(undefined8 **)(lVar15 + 8), puVar16 != (undefined8 *)0x0)) {
        (**(code **)*puVar16)();
      }
    }
  }
  lVar15 = *(long *)puVar2;
  if (*(char *)(lVar15 + 0x80c) == '\0') {
    uVar7 = *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064) - 0x12;
    *(uint *)(lVar15 + 0x808) = (uint)(uVar7 < 0xfffffff4);
    *(undefined1 *)(lVar15 + 0x80c) = 1;
    if (uVar7 < 0xfffffff4) goto LAB_018ad31c;
  }
  else if (*(int *)(lVar15 + 0x808) == 1) {
LAB_018ad31c:
    lVar15 = *(long *)PTR_DAT_04bb2698;
    if (lVar15 == 0) {
      puVar12 = malloc(0x100);
LAB_018ad380:
      if (puVar12 != (undefined4 *)0x0) {
        *(undefined8 *)(puVar12 + 1) = 0;
        puVar2 = PTR_DAT_04bb3238;
        *(undefined8 *)(puVar12 + 3) = 0;
        uVar1 = *(undefined4 *)puVar2;
        *(undefined8 *)(puVar12 + 5) = 0;
        *(undefined8 *)(puVar12 + 9) = 0;
        *(undefined8 *)(puVar12 + 0xb) = 0;
        *(undefined8 *)(puVar12 + 0xd) = 0;
        *(undefined8 *)(puVar12 + 0x11) = 0;
        *(undefined8 *)(puVar12 + 0x13) = 0;
        *(undefined8 *)(puVar12 + 0x15) = 0;
        *(undefined8 *)(puVar12 + 0x1d) = 0;
        *(undefined8 *)(puVar12 + 0x1b) = 0;
        *(undefined8 *)(puVar12 + 0x19) = 0;
        *(undefined8 *)(puVar12 + 0x25) = 0;
        *(undefined8 *)(puVar12 + 0x23) = 0;
        *(undefined8 *)(puVar12 + 0x21) = 0;
        *(undefined8 *)(puVar12 + 0x2d) = 0;
        *(undefined8 *)(puVar12 + 0x2b) = 0;
        *(undefined8 *)(puVar12 + 0x29) = 0;
        *(undefined8 *)(puVar12 + 0x35) = 0;
        *(undefined8 *)(puVar12 + 0x33) = 0;
        *(undefined8 *)(puVar12 + 0x31) = 0;
        *(undefined8 *)(puVar12 + 0x3d) = 0;
        *(undefined8 *)(puVar12 + 0x3b) = 0;
        *(undefined8 *)(puVar12 + 0x39) = 0;
        *puVar12 = uVar1;
        uVar1 = *(undefined4 *)puVar2;
        *(undefined2 *)(puVar12 + 7) = 1;
        *(undefined2 *)(puVar12 + 0xf) = 1;
        *(undefined2 *)(puVar12 + 0x17) = 1;
        *(undefined2 *)(puVar12 + 0x1f) = 1;
        *(undefined2 *)(puVar12 + 0x27) = 1;
        *(undefined2 *)(puVar12 + 0x2f) = 1;
        *(undefined2 *)(puVar12 + 0x37) = 1;
        *(undefined2 *)(puVar12 + 0x3f) = 1;
        puVar12[8] = uVar1;
        puVar12[0x10] = uVar1;
        puVar12[0x18] = uVar1;
        puVar12[0x20] = uVar1;
        puVar12[0x28] = uVar1;
        puVar12[0x30] = uVar1;
        puVar12[0x38] = uVar1;
        *(undefined4 *)(param_1 + 0x2c0) = 8;
        *(undefined4 **)(param_1 + 0x2c8) = puVar12;
      }
    }
    else {
      if (param_3 != (long *)0x0) {
LAB_018ad35c:
        puVar12 = (undefined4 *)(**(code **)(*param_3 + 0x30))(param_3,0x100,8);
        goto LAB_018ad380;
      }
      lVar23 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar16 = (undefined8 *)(lVar15 + 8);
      if (lVar23 != 0) {
        puVar16 = (undefined8 *)(lVar23 + 0xa8);
      }
      param_3 = (long *)*puVar16;
      if (param_3 != (long *)0x0) goto LAB_018ad35c;
    }
    FUN_018ad7b0(param_1,lVar14);
  }
  if (*(long *)(param_1 + 0x2c8) != 0) {
    uVar7 = *(uint *)(param_1 + 0x2c0);
    uVar22 = (ulong)uVar7;
    if ((int)uVar7 < 1) {
LAB_018ad4d4:
      uVar22 = (ulong)*(uint *)(param_1 + 0x2e0);
      if ((int)*(uint *)(param_1 + 0x2e0) < 1) goto LAB_018ad564;
    }
    else {
      lVar15 = *(long *)PTR_DAT_04bb2698;
      if (lVar15 == 0) {
        pvVar11 = malloc(uVar22 << 2);
      }
      else {
        lVar23 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar20 = (long *)(lVar15 + 8);
        if (lVar23 != 0) {
          plVar20 = (long *)(lVar23 + 0xa8);
        }
        plVar20 = (long *)*plVar20;
        if (plVar20 == (long *)0x0) goto LAB_018ad4d4;
        pvVar11 = (void *)(**(code **)(*plVar20 + 0x30))(plVar20,uVar22 << 2,8);
      }
      if (pvVar11 == (void *)0x0) goto LAB_018ad4d4;
      *(uint *)(param_1 + 0x2e0) = uVar7;
      *(void **)(param_1 + 0x2e8) = pvVar11;
    }
    uVar19 = uVar22 & 3;
    if (uVar22 - 1 < 3) {
      uVar17 = 0;
    }
    else {
      uVar17 = 0;
      do {
        lVar15 = uVar17 * 4;
        uVar17 = uVar17 + 4;
        *(undefined4 *)(*(long *)(param_1 + 0x2e8) + lVar15) = 0xffffffff;
        *(undefined4 *)(*(long *)(param_1 + 0x2e8) + lVar15 + 4) = 0xffffffff;
        *(undefined4 *)(*(long *)(param_1 + 0x2e8) + lVar15 + 8) = 0xffffffff;
        *(undefined4 *)(*(long *)(param_1 + 0x2e8) + lVar15 + 0xc) = 0xffffffff;
      } while ((uVar22 & 0xfffffffc) != uVar17);
    }
    if (uVar19 != 0) {
      lVar15 = uVar17 << 2;
      do {
        uVar19 = uVar19 - 1;
        *(undefined4 *)(*(long *)(param_1 + 0x2e8) + lVar15) = 0xffffffff;
        lVar15 = lVar15 + 4;
      } while (uVar19 != 0);
    }
  }
LAB_018ad564:
  puVar2 = PTR_DAT_04bb2698;
  uVar7 = *(uint *)(lVar14 + 0x78);
  uVar22 = (ulong)uVar7;
  if ((int)uVar7 < 1) goto LAB_018ad754;
  lVar15 = *(long *)PTR_DAT_04bb2698;
  if (lVar15 == 0) {
    puVar13 = malloc(uVar22 << 3);
LAB_018ad5d0:
    if (puVar13 != (undefined1 *)0x0) {
      uVar19 = uVar22 & 3;
      puVar18 = puVar13;
      if ((uVar7 & 3) != 0) {
        do {
          *puVar18 = 0;
          uVar19 = uVar19 - 1;
          *(undefined4 *)(puVar18 + 4) = 0xffffffff;
          puVar18 = puVar18 + 8;
        } while (uVar19 != 0);
      }
      if (2 < (uVar22 - 1 & 0x1fffffffffffffff)) {
        do {
          *puVar18 = 0;
          *(undefined4 *)(puVar18 + 4) = 0xffffffff;
          puVar18[8] = 0;
          *(undefined4 *)(puVar18 + 0xc) = 0xffffffff;
          puVar18[0x10] = 0;
          *(undefined4 *)(puVar18 + 0x14) = 0xffffffff;
          puVar18[0x18] = 0;
          *(undefined4 *)(puVar18 + 0x1c) = 0xffffffff;
          puVar18 = puVar18 + 0x20;
        } while (puVar18 != puVar13 + uVar22 * 8);
      }
      *(uint *)(param_1 + 0x2d0) = uVar7;
      *(undefined1 **)(param_1 + 0x2d8) = puVar13;
    }
  }
  else {
    lVar23 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar20 = (long *)(lVar15 + 8);
    if (lVar23 != 0) {
      plVar20 = (long *)(lVar23 + 0xa8);
    }
    plVar20 = (long *)*plVar20;
    if (plVar20 != (long *)0x0) {
      puVar13 = (undefined1 *)(**(code **)(*plVar20 + 0x30))(plVar20,uVar22 << 3,8);
      goto LAB_018ad5d0;
    }
  }
  uVar7 = *(uint *)(lVar14 + 0x78);
  uVar22 = (ulong)uVar7;
  if ((int)uVar7 < 1) {
LAB_018ad6bc:
    uVar22 = (ulong)*(uint *)(param_1 + 0x2f0);
    if ((int)*(uint *)(param_1 + 0x2f0) < 1) goto LAB_018ad754;
  }
  else {
    lVar14 = *(long *)puVar2;
    if (lVar14 == 0) {
      pvVar11 = malloc(uVar22 << 2);
    }
    else {
      lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar20 = (long *)(lVar14 + 8);
      if (lVar15 != 0) {
        plVar20 = (long *)(lVar15 + 0xa8);
      }
      plVar20 = (long *)*plVar20;
      if (plVar20 == (long *)0x0) goto LAB_018ad6bc;
      pvVar11 = (void *)(**(code **)(*plVar20 + 0x30))(plVar20,uVar22 << 2,8);
    }
    if (pvVar11 == (void *)0x0) goto LAB_018ad6bc;
    *(uint *)(param_1 + 0x2f0) = uVar7;
    *(void **)(param_1 + 0x2f8) = pvVar11;
  }
  uVar19 = uVar22 & 3;
  if (uVar22 - 1 < 3) {
    uVar17 = 0;
  }
  else {
    uVar17 = 0;
    do {
      lVar14 = uVar17 * 4;
      uVar17 = uVar17 + 4;
      *(undefined4 *)(*(long *)(param_1 + 0x2f8) + lVar14) = 0xffffffff;
      *(undefined4 *)(*(long *)(param_1 + 0x2f8) + lVar14 + 4) = 0xffffffff;
      *(undefined4 *)(*(long *)(param_1 + 0x2f8) + lVar14 + 8) = 0xffffffff;
      *(undefined4 *)(*(long *)(param_1 + 0x2f8) + lVar14 + 0xc) = 0xffffffff;
    } while ((uVar22 & 0xfffffffc) != uVar17);
  }
  if (uVar19 != 0) {
    lVar14 = uVar17 << 2;
    do {
      uVar19 = uVar19 - 1;
      *(undefined4 *)(*(long *)(param_1 + 0x2f8) + lVar14) = 0xffffffff;
      lVar14 = lVar14 + 4;
    } while (uVar19 != 0);
  }
LAB_018ad754:
  FUN_018ae010(param_1);
  return;
}


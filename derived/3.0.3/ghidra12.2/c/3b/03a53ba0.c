
void FUN_03a53ba0(long param_1,uint *param_2,long *param_3,long param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined *puVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  void *pvVar15;
  undefined8 *puVar16;
  ulong *puVar17;
  ulong uVar18;
  undefined1 *puVar19;
  ulong uVar20;
  uint uVar21;
  long *plVar22;
  uint uVar23;
  size_t __size;
  long lVar24;
  undefined *local_478;
  undefined1 *puStack_470;
  undefined4 local_468;
  undefined1 local_464 [1023];
  undefined1 local_65;
  
  uVar23 = *param_2;
  uVar18 = (ulong)uVar23;
  uVar12 = param_2[1];
  *(uint *)(param_1 + 0x780) = uVar12;
  puVar10 = PTR_DAT_04bb2698;
  lVar24 = *(long *)PTR_DAT_04bb2698;
  if (lVar24 == 0) {
    pvVar15 = malloc((ulong)uVar12 * 0x110);
  }
  else {
    plVar14 = param_3;
    if (param_3 == (long *)0x0) {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar14 = (long *)(lVar24 + 8);
      if (lVar13 != 0) {
        plVar14 = (long *)(lVar13 + 0xa8);
      }
      plVar14 = (long *)*plVar14;
      pvVar15 = (void *)0x0;
      if (plVar14 == (long *)0x0) goto LAB_03a53c44;
    }
    pvVar15 = (void *)(**(code **)(*plVar14 + 0x30))(plVar14,(ulong)uVar12 * 0x110,8);
  }
LAB_03a53c44:
  *(void **)(param_1 + 0x778) = pvVar15;
  *(void **)(param_1 + 0x788) = pvVar15;
  uVar9 = *(int *)(param_1 + 0x780) - 1;
  if (1 < *(int *)(param_1 + 0x780)) {
    if (uVar9 == 1) {
      uVar20 = 0;
    }
    else {
      uVar20 = 0;
      plVar14 = (long *)((long)pvVar15 + 0x110);
      do {
        uVar20 = uVar20 + 2;
        plVar14[-0x22] = (long)plVar14;
        *plVar14 = (long)(plVar14 + 0x22);
        plVar14 = plVar14 + 0x44;
      } while (((ulong)uVar9 & 0xfffffffe) != uVar20);
    }
    if ((uVar9 & 1) != 0) {
      plVar14 = (long *)((long)pvVar15 + uVar20 * 0x110);
      *plVar14 = (long)(plVar14 + 0x22);
    }
  }
  *(undefined8 *)((long)pvVar15 + (long)(int)(uVar9 * 0x22) * 8) = 0;
  *(void **)(param_1 + 0x790) = pvVar15;
  lVar24 = *(long *)puVar10;
  __size = (ulong)(uVar12 * 5) * 0x18;
  *(uint *)(param_1 + 0x7a8) = uVar12 * 5;
  if (lVar24 == 0) {
    pvVar15 = malloc(__size);
  }
  else {
    plVar14 = param_3;
    if (param_3 == (long *)0x0) {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar14 = (long *)(lVar24 + 8);
      if (lVar13 != 0) {
        plVar14 = (long *)(lVar13 + 0xa8);
      }
      plVar14 = (long *)*plVar14;
      pvVar15 = (void *)0x0;
      if (plVar14 == (long *)0x0) goto LAB_03a53d30;
    }
    pvVar15 = (void *)(**(code **)(*plVar14 + 0x30))(plVar14,__size,8);
  }
LAB_03a53d30:
  *(void **)(param_1 + 0x7a0) = pvVar15;
  *(void **)(param_1 + 0x7b0) = pvVar15;
  uVar12 = *(int *)(param_1 + 0x7a8) - 1;
  if (1 < *(int *)(param_1 + 0x7a8)) {
    if (uVar12 == 1) {
      uVar20 = 0;
    }
    else {
      uVar20 = 0;
      plVar14 = (long *)((long)pvVar15 + 0x18);
      do {
        uVar20 = uVar20 + 2;
        plVar14[-3] = (long)plVar14;
        *plVar14 = (long)(plVar14 + 3);
        plVar14 = plVar14 + 6;
      } while (((ulong)uVar12 & 0xfffffffe) != uVar20);
    }
    if ((uVar12 & 1) != 0) {
      plVar14 = (long *)((long)pvVar15 + uVar20 * 0x18);
      *plVar14 = (long)(plVar14 + 3);
    }
  }
  *(undefined8 *)((long)pvVar15 + (long)(int)(uVar12 * 3) * 8) = 0;
  *(void **)(param_1 + 0x7b8) = pvVar15;
  *(undefined4 *)(param_1 + 0x798) = 0;
  lVar24 = *(long *)puVar10;
  *(undefined4 *)(param_1 + 0x7c0) = 0;
  if (lVar24 == 0) {
    puVar16 = malloc(0x310);
joined_r0x03a54174:
    if (puVar16 != (undefined8 *)0x0) {
      *puVar16 = 0;
      *(undefined4 *)(puVar16 + 1) = 0;
      puVar16[2] = 0;
      *(undefined4 *)(puVar16 + 3) = 0;
      puVar16[4] = 0;
      *(undefined4 *)(puVar16 + 5) = 0;
      puVar16[6] = 0;
      *(undefined4 *)(puVar16 + 7) = 0;
      puVar16[8] = 0;
      *(undefined4 *)(puVar16 + 9) = 0;
      puVar16[10] = 0;
      *(undefined4 *)(puVar16 + 0xb) = 0;
      puVar16[0xc] = 0;
      *(undefined4 *)(puVar16 + 0xd) = 0;
      puVar16[0xe] = 0;
      *(undefined4 *)(puVar16 + 0xf) = 0;
      puVar16[0x10] = 0;
      *(undefined4 *)(puVar16 + 0x11) = 0;
      puVar16[0x12] = 0;
      *(undefined4 *)(puVar16 + 0x13) = 0;
      puVar16[0x14] = 0;
      *(undefined4 *)(puVar16 + 0x15) = 0;
      puVar16[0x16] = 0;
      *(undefined4 *)(puVar16 + 0x17) = 0;
      puVar16[0x18] = 0;
      *(undefined4 *)(puVar16 + 0x19) = 0;
      puVar16[0x1a] = 0;
      *(undefined4 *)(puVar16 + 0x1b) = 0;
      puVar16[0x1c] = 0;
      *(undefined4 *)(puVar16 + 0x1d) = 0;
      puVar16[0x1e] = 0;
      *(undefined4 *)(puVar16 + 0x1f) = 0;
      puVar16[0x20] = 0;
      *(undefined4 *)(puVar16 + 0x21) = 0;
      puVar16[0x22] = 0;
      *(undefined4 *)(puVar16 + 0x23) = 0;
      puVar16[0x24] = 0;
      *(undefined4 *)(puVar16 + 0x25) = 0;
      puVar16[0x26] = 0;
      *(undefined4 *)(puVar16 + 0x27) = 0;
      puVar16[0x28] = 0;
      *(undefined4 *)(puVar16 + 0x29) = 0;
      puVar16[0x2a] = 0;
      *(undefined4 *)(puVar16 + 0x2b) = 0;
      puVar16[0x2c] = 0;
      *(undefined4 *)(puVar16 + 0x2d) = 0;
      puVar16[0x2e] = 0;
      *(undefined4 *)(puVar16 + 0x2f) = 0;
      puVar16[0x30] = 0;
      *(undefined4 *)(puVar16 + 0x31) = 0;
      puVar16[0x32] = 0;
      *(undefined4 *)(puVar16 + 0x33) = 0;
      puVar16[0x34] = 0;
      *(undefined4 *)(puVar16 + 0x35) = 0;
      puVar16[0x36] = 0;
      *(undefined4 *)(puVar16 + 0x37) = 0;
      puVar16[0x38] = 0;
      *(undefined4 *)(puVar16 + 0x39) = 0;
      puVar16[0x3a] = 0;
      *(undefined4 *)(puVar16 + 0x3b) = 0;
      puVar16[0x3c] = 0;
      *(undefined4 *)(puVar16 + 0x3d) = 0;
      puVar16[0x3e] = 0;
      *(undefined4 *)(puVar16 + 0x3f) = 0;
      puVar16[0x40] = 0;
      *(undefined4 *)(puVar16 + 0x41) = 0;
      puVar16[0x42] = 0;
      *(undefined4 *)(puVar16 + 0x43) = 0;
      puVar16[0x44] = 0;
      *(undefined4 *)(puVar16 + 0x45) = 0;
      puVar16[0x46] = 0;
      *(undefined4 *)(puVar16 + 0x47) = 0;
      puVar16[0x48] = 0;
      *(undefined4 *)(puVar16 + 0x49) = 0;
      puVar16[0x4a] = 0;
      *(undefined4 *)(puVar16 + 0x4b) = 0;
      puVar16[0x4c] = 0;
      *(undefined4 *)(puVar16 + 0x4d) = 0;
      puVar16[0x4e] = 0;
      *(undefined4 *)(puVar16 + 0x4f) = 0;
      puVar16[0x50] = 0;
      *(undefined4 *)(puVar16 + 0x51) = 0;
      puVar16[0x52] = 0;
      *(undefined4 *)(puVar16 + 0x53) = 0;
      puVar16[0x54] = 0;
      *(undefined4 *)(puVar16 + 0x55) = 0;
      puVar16[0x56] = 0;
      *(undefined4 *)(puVar16 + 0x57) = 0;
      puVar16[0x58] = 0;
      *(undefined4 *)(puVar16 + 0x59) = 0;
      puVar16[0x5a] = 0;
      *(undefined4 *)(puVar16 + 0x5b) = 0;
      puVar16[0x5c] = 0;
      *(undefined4 *)(puVar16 + 0x5d) = 0;
      puVar16[0x5e] = 0;
      *(undefined4 *)(puVar16 + 0x5f) = 0;
      puVar16[0x60] = 0;
      *(undefined4 *)(puVar16 + 0x61) = 0;
      *(undefined4 *)(param_1 + 0x7d8) = 0x31;
      *(undefined8 **)(param_1 + 0x7e0) = puVar16;
    }
  }
  else {
    plVar14 = param_3;
    if (param_3 != (long *)0x0) {
LAB_03a53de0:
      puVar16 = (undefined8 *)(**(code **)(*plVar14 + 0x30))(plVar14,0x310,8);
      goto joined_r0x03a54174;
    }
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar14 = (long *)(lVar24 + 8);
    if (lVar13 != 0) {
      plVar14 = (long *)(lVar13 + 0xa8);
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 != (long *)0x0) goto LAB_03a53de0;
  }
  if (0 < (int)uVar23) {
    lVar24 = *(long *)puVar10;
    uVar20 = uVar18 * 0x600 | 8;
    if (lVar24 == 0) {
      puVar17 = malloc(uVar20);
      puVar10 = PTR_DAT_04bb2120;
    }
    else {
      plVar14 = param_3;
      if (param_3 == (long *)0x0) {
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar14 = (long *)(lVar24 + 8);
        if (lVar13 != 0) {
          plVar14 = (long *)(lVar13 + 0xa8);
        }
        plVar14 = (long *)*plVar14;
        if (plVar14 == (long *)0x0) goto LAB_03a54188;
      }
      puVar17 = (ulong *)(**(code **)(*plVar14 + 0x30))(plVar14,uVar20,8);
      puVar10 = PTR_DAT_04bb2120;
    }
    PTR_DAT_04bb2120 = puVar10;
    if (puVar17 != (ulong *)0x0) {
      puVar2 = PTR_DAT_04bb2d88 + 0x10;
      puVar3 = PTR_DAT_04bbd6c8 + 0x10;
      puVar4 = PTR_DAT_04bb2020 + 0x10;
      *puVar17 = uVar18;
      lVar24 = 0;
      do {
        lVar13 = lVar24 + 0x600;
        puVar19 = (undefined1 *)((long)puVar17 + lVar24 + 0x1c);
        *puVar19 = 0;
        *(undefined1 **)((long)puVar17 + lVar24 + 0x10) = puVar19;
        *(undefined4 *)((long)puVar17 + lVar24 + 0x18) = 0x80;
        *(long *)((long)puVar17 + lVar24 + 0xa8) = (long)puVar17 + lVar24 + 0xb0;
        *(undefined8 *)((long)puVar17 + lVar24 + 0x238) = 0x400000000;
        *(undefined8 *)((long)puVar17 + lVar24 + 0x268) = 0x400000000;
        *(long *)((long)puVar17 + lVar24 + 0x240) = (long)puVar17 + lVar24 + 0x248;
        *(undefined8 *)((long)puVar17 + lVar24 + 0x430) = 0;
        *(undefined8 *)((long)puVar17 + lVar24 + 0x440) = 0;
        *(undefined8 *)((long)puVar17 + lVar24 + 0x458) = 0;
        *(long *)((long)puVar17 + lVar24 + 0x270) = (long)puVar17 + lVar24 + 0x278;
        *(undefined8 *)((long)puVar17 + lVar24 + 0x468) = 0;
        lVar5 = (long)puVar17 + lVar24 + 0x478;
        *(long *)((long)puVar17 + lVar24 + 0x480) = lVar5;
        *(long *)lVar5 = lVar5;
        lVar5 = (long)puVar17 + lVar24 + 0x490;
        *(long *)((long)puVar17 + lVar24 + 0x498) = lVar5;
        *(long *)lVar5 = lVar5;
        *(undefined **)((long)puVar17 + lVar24 + 0x4c0) = puVar3;
        *(undefined **)((long)puVar17 + lVar24 + 0x5d8) = puVar4;
        *(undefined **)((long)puVar17 + lVar24 + 0x5e0) = puVar10;
        *(undefined **)((long)puVar17 + lVar24 + 0x5e8) = puVar4;
        *(undefined1 *)((long)puVar17 + lVar24 + 0x9b) = 0;
        *(undefined **)((long)puVar17 + lVar24 + 8) = puVar2;
        *(undefined8 *)((long)puVar17 + lVar24 + 0xa0) = 0x3100000000;
        *(undefined4 *)((long)puVar17 + lVar24 + 0x428) = 0;
        *(undefined4 *)((long)puVar17 + lVar24 + 0x438) = 0;
        *(undefined4 *)((long)puVar17 + lVar24 + 0x450) = 0;
        *(undefined4 *)((long)puVar17 + lVar24 + 0x460) = 0;
        *(undefined4 *)((long)puVar17 + lVar24 + 0x488) = 0;
        *(undefined4 *)((long)puVar17 + lVar24 + 0x48c) = 0xffffffff;
        *(undefined8 *)((long)puVar17 + lVar24 + 0x4a0) = 0xffffffff00000000;
        *(undefined4 *)((long)puVar17 + lVar24 + 0x4d0) = 0x104;
        *(undefined1 *)((long)puVar17 + lVar24 + 0x5d7) = 0;
        *(undefined1 *)((long)puVar17 + lVar24 + 0x4d4) = 0;
        *(undefined **)((long)puVar17 + lVar24 + 0x5f0) = puVar10;
        *(long *)((long)puVar17 + lVar24 + 0x4c8) = (long)puVar17 + lVar24 + 0x4d4;
        *(undefined **)((long)puVar17 + lVar24 + 0x5f8) = puVar4;
        *(undefined **)((long)puVar17 + lVar24 + 0x600) = puVar10;
        lVar24 = lVar13;
      } while (uVar18 * 0x600 != lVar13);
      *(uint *)(param_1 + 0x7c8) = uVar23;
      *(ulong **)(param_1 + 2000) = puVar17 + 1;
      goto joined_r0x03a54190;
    }
  }
LAB_03a54188:
  uVar23 = *(uint *)(param_1 + 0x7c8);
  uVar18 = (ulong)uVar23;
joined_r0x03a54190:
  if (0 < (int)uVar23) {
    uVar23 = 0;
    do {
      uVar12 = uVar23;
      if ((uint)uVar18 <= uVar23) {
        uVar12 = 0;
      }
      FUN_038d1270(*(long *)(param_1 + 2000) + (ulong)uVar12 * 0x600,"DataSet %d",uVar23);
      uVar12 = uVar23;
      if (*(uint *)(param_1 + 0x7c8) <= uVar23) {
        uVar12 = 0;
      }
      FUN_03a543c0(param_1,*(long *)(param_1 + 2000) + (ulong)uVar12 * 0x600,param_2,param_3);
      uVar18 = (ulong)*(uint *)(param_1 + 0x7c8);
      uVar23 = uVar23 + 1;
    } while ((int)uVar23 < (int)*(uint *)(param_1 + 0x7c8));
  }
  *(undefined4 *)(param_1 + 0x980) = 0;
  *(undefined4 *)(param_1 + 0x970) = DAT_05aea760;
  iVar11 = *(int *)(*(long *)(param_1 + 2000) + 0x98);
  if (iVar11 != 0) {
    puVar16 = *(undefined8 **)(*(long *)(param_1 + 2000) + 0xa0);
    puVar6 = puVar16 + iVar11;
    do {
      iVar11 = (**(code **)(*(long *)*puVar16 + 0x10))();
      if (iVar11 != 0) {
        uVar18 = (**(code **)(*(long *)*puVar16 + 0x10))();
        uVar12 = (**(code **)(*(long *)*puVar16 + 0x10))();
        uVar9 = *(uint *)(param_1 + 0x970);
        uVar23 = -uVar12;
        if (-1 < (int)uVar12) {
          uVar23 = uVar12;
        }
        uVar23 = uVar23 + 0xfff & 0x7ffff000;
        uVar21 = -uVar23;
        if ((int)uVar12 < 1) {
          uVar21 = uVar23;
        }
        if ((uVar18 & 0x80000000) != 0) {
          uVar12 = uVar21;
        }
        if (uVar12 == 0 || uVar9 == 0) {
          iVar11 = 0;
        }
        else {
          uVar23 = uVar12;
          if (uVar9 != uVar12) {
            uVar21 = uVar12;
            uVar23 = uVar9;
            do {
              uVar7 = uVar21;
              if ((int)uVar23 <= (int)uVar21) {
                uVar7 = 0;
              }
              uVar8 = 0;
              if ((int)uVar23 <= (int)uVar21) {
                uVar8 = uVar23;
              }
              uVar23 = uVar23 - uVar7;
              uVar21 = uVar21 - uVar8;
            } while (uVar23 != uVar21);
          }
          iVar11 = 0;
          if (uVar23 != 0) {
            iVar11 = (int)uVar9 / (int)uVar23;
          }
          iVar11 = iVar11 * uVar12;
        }
        *(int *)(param_1 + 0x970) = iVar11;
      }
      puVar16 = puVar16 + 1;
    } while (puVar16 != puVar6);
  }
  lVar24 = *(long *)(*(long *)(param_1 + 0xc00) + 2000);
  uVar23 = *(uint *)(lVar24 + 0x98);
  if (uVar23 != 0) {
    plVar22 = *(long **)(lVar24 + 0xa0);
    lVar24 = param_1 + 0xc08;
    plVar14 = plVar22;
    if ((uVar23 & 1) != 0) {
      plVar14 = plVar22 + 1;
      uVar12 = *(uint *)(*plVar22 + 0x10);
      uVar18 = (ulong)uVar12;
      if (0x30 < uVar12) {
        uVar18 = 0;
      }
      *(long *)(lVar24 + uVar18 * 8) = *plVar22;
    }
    if (((long)(int)uVar23 - 1U & 0x1fffffffffffffff) != 0) {
      do {
        uVar12 = *(uint *)(*plVar14 + 0x10);
        uVar18 = (ulong)uVar12;
        if (0x30 < uVar12) {
          uVar18 = 0;
        }
        *(long *)(lVar24 + uVar18 * 8) = *plVar14;
        plVar1 = plVar14 + 1;
        plVar14 = plVar14 + 2;
        uVar12 = *(uint *)(*plVar1 + 0x10);
        uVar18 = (ulong)uVar12;
        if (0x30 < uVar12) {
          uVar18 = 0;
        }
        *(long *)(lVar24 + uVar18 * 8) = *plVar1;
      } while (plVar14 != plVar22 + (int)uVar23);
    }
  }
  *(long *)(param_1 + 0x9b8) = param_4;
  if (param_4 != 0) {
    local_65 = 0;
    local_468 = 0x400;
    puStack_470 = local_464;
    local_464[0] = 0;
    local_478 = PTR_DAT_04bb2f40 + 0x10;
    FUN_038d1270(&local_478,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",&DAT_040cc559);
  }
  return;
}


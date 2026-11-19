
void FUN_0388c7b0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  void *pvVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  size_t __size;
  ulong uVar13;
  long lVar14;
  int iVar15;
  uint uVar16;
  undefined8 *puVar17;
  int *piVar18;
  
  iVar15 = *(int *)(param_1 + 0x1a0);
  iVar2 = iVar15 * 2;
  uVar3 = iVar2 - 1;
  uVar13 = (ulong)uVar3;
  if (0 < iVar15) {
    lVar14 = *(long *)PTR_DAT_04bb2698;
    if (lVar14 == 0) {
      pvVar6 = malloc(uVar13 << 7);
    }
    else {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar14 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) goto LAB_0388c8a4;
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,uVar13 << 7,8);
    }
    if (pvVar6 != (void *)0x0) {
      uVar9 = (ulong)(iVar2 - 2U);
      *(void **)(param_1 + 0x18) = pvVar6;
      if (uVar3 != 1) {
        plVar5 = (long *)((long)pvVar6 + 0x78);
        do {
          plVar5[-0xf] = (long)plVar5;
          uVar9 = uVar9 - 2;
          *plVar5 = (long)(plVar5 + 0xf);
          plVar5 = plVar5 + 0x1e;
        } while (uVar9 != 0);
      }
      *(undefined8 *)((long)pvVar6 + (long)(int)((iVar2 - 2U) * 0xf) * 8) = 0;
      *(void **)(param_1 + 0x20) = pvVar6;
      if ((0 < (int)uVar3) &&
         (pvVar6 = (void *)((long)pvVar6 + uVar13 * 0x78), pvVar6 != (void *)0x0)) {
        *(void **)(param_1 + 0x10) = pvVar6;
        *(undefined4 *)(param_1 + 8) = 0;
        *(uint *)(param_1 + 0xc) = uVar3;
      }
    }
  }
LAB_0388c8a4:
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x80) = 6;
  *(undefined2 *)(param_1 + 0x90) = 0;
  *(undefined2 *)(param_1 + 0x98) = 0xffff;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0x9a) = 0xff;
  **(undefined2 **)(param_1 + 0xb8) = 0;
  if ((0 < iVar15) && (iVar8 = *(int *)(param_1 + 8), iVar8 < *(int *)(param_1 + 0xc))) {
    uVar16 = uVar3;
    if ((int)uVar3 < 2) {
      uVar16 = 1;
    }
    puVar1 = PTR_DAT_04bcba80 + 0x10;
    do {
      if (iVar8 < *(int *)(param_1 + 0xc)) {
        plVar5 = *(long **)(param_1 + 0x18);
        if (plVar5 != (long *)0x0) {
          *(long *)(param_1 + 0x18) = *plVar5;
        }
        *plVar5 = (long)puVar1;
        *(undefined4 *)(plVar5 + 1) = 0;
        plVar5[2] = 0;
        *(undefined2 *)(plVar5 + 3) = 0;
        lVar14 = nn::os::GetSystemTick();
        plVar5[5] = lVar14;
        *(undefined2 *)((long)plVar5 + 0x4c) = 0;
        *(undefined4 *)(plVar5 + 9) = 0x15;
        *(undefined2 *)((long)plVar5 + 0x74) = 0;
        plVar5[7] = (long)&DAT_04a5a568;
        plVar5[8] = (long)plVar5 + 0x4c;
        (**(code **)*plVar5)(plVar5);
        iVar8 = *(int *)(param_1 + 8);
        if (iVar8 < *(int *)(param_1 + 0xc)) {
          *(long **)(*(long *)(param_1 + 0x10) + (long)iVar8 * 8) = plVar5;
          iVar8 = *(int *)(param_1 + 8) + 1;
          *(int *)(param_1 + 8) = iVar8;
        }
      }
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  lVar14 = DAT_05ae7600;
  uVar16 = *(uint *)(param_1 + 0x1a0);
  if (0 < (int)uVar16) {
    if (DAT_05ae7600 == 0) {
      pvVar6 = malloc((ulong)uVar16);
joined_r0x0388ca6c:
      if (pvVar6 != (void *)0x0) {
        *(uint *)(param_1 + 0x158) = uVar16;
        *(void **)(param_1 + 0x160) = pvVar6;
      }
    }
    else {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar14 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 != (long *)0x0) {
        pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,(ulong)uVar16,8);
        goto joined_r0x0388ca6c;
      }
    }
    lVar14 = DAT_05ae7600;
    uVar16 = *(uint *)(param_1 + 0x1a0);
    if (0 < (int)uVar16) {
      if (DAT_05ae7600 == 0) {
        pvVar6 = malloc((ulong)uVar16);
      }
      else {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar5 = (long *)(lVar14 + 8);
        if (lVar4 != 0) {
          plVar5 = (long *)(lVar4 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) goto LAB_0388ca88;
        pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,(ulong)uVar16,8);
      }
      if (pvVar6 != (void *)0x0) {
        *(uint *)(param_1 + 0x168) = uVar16;
        *(void **)(param_1 + 0x170) = pvVar6;
      }
    }
  }
LAB_0388ca88:
  lVar14 = DAT_05ae7600;
  if (0 < (int)uVar3) {
    __size = (size_t)(int)(uVar3 * 8);
    if (DAT_05ae7600 == 0) {
      pvVar6 = malloc(__size);
joined_r0x0388cea0:
      if (pvVar6 != (void *)0x0) {
        *(void **)(param_1 + 0x30) = pvVar6;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(uint *)(param_1 + 0x2c) = uVar3;
      }
    }
    else {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar14 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 != (long *)0x0) {
        pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,__size,8);
        goto joined_r0x0388cea0;
      }
    }
    lVar14 = DAT_05ae7600;
    if (DAT_05ae7600 == 0) {
      pvVar6 = malloc(__size);
joined_r0x0388ceb0:
      if (pvVar6 != (void *)0x0) {
        *(void **)(param_1 + 0x40) = pvVar6;
        *(undefined4 *)(param_1 + 0x38) = 0;
        *(uint *)(param_1 + 0x3c) = uVar3;
      }
    }
    else {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar14 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 != (long *)0x0) {
        pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,__size,8);
        goto joined_r0x0388ceb0;
      }
    }
    lVar14 = DAT_05ae7600;
    if (DAT_05ae7600 == 0) {
      pvVar6 = malloc(__size);
joined_r0x0388cec0:
      if (pvVar6 != (void *)0x0) {
        *(void **)(param_1 + 0x50) = pvVar6;
        *(undefined4 *)(param_1 + 0x48) = 0;
        *(uint *)(param_1 + 0x4c) = uVar3;
      }
    }
    else {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar14 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 != (long *)0x0) {
        pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,__size,8);
        goto joined_r0x0388cec0;
      }
    }
    lVar14 = DAT_05ae7600;
    if (DAT_05ae7600 == 0) {
      pvVar6 = malloc(__size);
joined_r0x0388ced0:
      if (pvVar6 != (void *)0x0) {
        *(void **)(param_1 + 0x60) = pvVar6;
        *(undefined4 *)(param_1 + 0x58) = 0;
        *(uint *)(param_1 + 0x5c) = uVar3;
      }
    }
    else {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar14 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 != (long *)0x0) {
        pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,__size,8);
        goto joined_r0x0388ced0;
      }
    }
    lVar14 = DAT_05ae7600;
    if (DAT_05ae7600 == 0) {
      pvVar6 = malloc(__size);
joined_r0x0388cee0:
      if (pvVar6 != (void *)0x0) {
        *(void **)(param_1 + 0x70) = pvVar6;
        *(undefined4 *)(param_1 + 0x68) = 0;
        *(uint *)(param_1 + 0x6c) = uVar3;
      }
    }
    else {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar14 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 != (long *)0x0) {
        pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,__size,8);
        goto joined_r0x0388cee0;
      }
    }
    lVar14 = DAT_05ae7600;
    if (DAT_05ae7600 == 0) {
      pvVar6 = malloc(__size);
joined_r0x0388cef0:
      if (pvVar6 != (void *)0x0) {
        *(void **)(param_1 + 0x130) = pvVar6;
        *(undefined4 *)(param_1 + 0x128) = 0;
        *(uint *)(param_1 + 300) = uVar3;
      }
    }
    else {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar14 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 != (long *)0x0) {
        pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,__size,8);
        goto joined_r0x0388cef0;
      }
    }
    lVar14 = DAT_05ae7600;
    if (DAT_05ae7600 == 0) {
      pvVar6 = malloc(__size);
joined_r0x0388cf00:
      if (pvVar6 != (void *)0x0) {
        *(void **)(param_1 + 0x140) = pvVar6;
        *(undefined4 *)(param_1 + 0x138) = 0;
        *(uint *)(param_1 + 0x13c) = uVar3;
      }
    }
    else {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar14 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 != (long *)0x0) {
        pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,__size,8);
        goto joined_r0x0388cf00;
      }
    }
    lVar14 = DAT_05ae7600;
    if (DAT_05ae7600 == 0) {
      pvVar6 = malloc(__size);
    }
    else {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar14 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) goto LAB_0388cd84;
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,__size,8);
    }
    if (pvVar6 != (void *)0x0) {
      *(void **)(param_1 + 0x150) = pvVar6;
      *(undefined4 *)(param_1 + 0x148) = 0;
      *(uint *)(param_1 + 0x14c) = uVar3;
    }
  }
LAB_0388cd84:
  lVar14 = DAT_05ae7600;
  if (iVar15 < 1) {
LAB_0388cf28:
    if (*(int *)(param_1 + 0x1a8) == 0) goto LAB_0388d0d8;
    pvVar6 = *(void **)(param_1 + 0x1b0);
  }
  else {
    if (DAT_05ae7600 == 0) {
      pvVar6 = malloc(uVar13 * 0x30);
    }
    else {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar14 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) goto LAB_0388cf28;
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,uVar13 * 0x30,8);
    }
    if (pvVar6 == (void *)0x0) goto LAB_0388cf28;
    lVar14 = 0;
    do {
      lVar4 = lVar14;
      lVar14 = lVar4 + 0x30;
      *(undefined8 *)((long)pvVar6 + lVar4 + 0x20) = 0;
      *(undefined8 *)((long)pvVar6 + lVar4 + 0x28) = 0;
      *(undefined8 *)((long)pvVar6 + lVar4 + 0x10) = 0;
      *(undefined8 *)((long)pvVar6 + lVar4 + 0x18) = 0;
    } while ((ulong)(iVar2 + 6U & 6) * 0x30 + 0x30 != lVar14);
    if (6 < iVar2 - 2U) {
      puVar17 = (undefined8 *)((long)pvVar6 + lVar4 + 0x100);
      lVar14 = ((ulong)(iVar2 - 2U) * 0x30 - lVar14) + 0x30;
      do {
        puVar17[-0x16] = 0;
        puVar17[-0x15] = 0;
        lVar14 = lVar14 + -0x180;
        puVar17[-0x18] = 0;
        puVar17[-0x17] = 0;
        puVar17[-0x12] = 0;
        puVar17[-0x11] = 0;
        puVar17[-0x10] = 0;
        puVar17[-0xf] = 0;
        puVar17[-0xc] = 0;
        puVar17[-0xb] = 0;
        puVar17[-10] = 0;
        puVar17[-9] = 0;
        puVar17[-6] = 0;
        puVar17[-5] = 0;
        puVar17[-4] = 0;
        puVar17[-3] = 0;
        puVar17[2] = 0;
        puVar17[3] = 0;
        *puVar17 = 0;
        puVar17[1] = 0;
        puVar17[8] = 0;
        puVar17[9] = 0;
        puVar17[6] = 0;
        puVar17[7] = 0;
        puVar17[0xe] = 0;
        puVar17[0xf] = 0;
        puVar17[0xc] = 0;
        puVar17[0xd] = 0;
        puVar17[0x14] = 0;
        puVar17[0x15] = 0;
        puVar17[0x12] = 0;
        puVar17[0x13] = 0;
        puVar17 = puVar17 + 0x30;
      } while (lVar14 != 0);
    }
    *(uint *)(param_1 + 0x1a8) = uVar3;
    *(void **)(param_1 + 0x1b0) = pvVar6;
  }
  iVar15 = 0;
  do {
    puVar17 = (undefined8 *)((long)pvVar6 + (long)iVar15 * 0x30);
    *puVar17 = 0;
    *(undefined1 *)(puVar17 + 1) = 0;
    piVar18 = (int *)(puVar17 + 2);
    if (0 < *piVar18) {
      lVar14 = 0;
      puVar10 = (undefined8 *)((long)pvVar6 + (long)iVar15 * 0x30 + 0x20);
      puVar11 = (undefined8 *)*puVar10;
      do {
        puVar12 = *(undefined8 **)
                   (*(long *)((long)pvVar6 + (long)iVar15 * 0x30 + 0x18) + lVar14 * 8);
        lVar14 = lVar14 + 1;
        *puVar12 = puVar11;
        *puVar10 = puVar12;
        puVar11 = puVar12;
      } while (lVar14 < *piVar18);
    }
    *piVar18 = 0;
    iVar2 = *(int *)(param_1 + 0x1a0);
    uVar3 = iVar2 - 1;
    if (uVar3 != 0 && 0 < iVar2) {
      lVar14 = *(long *)PTR_DAT_04bb2698;
      if (lVar14 == 0) {
        pvVar7 = malloc((ulong)uVar3 << 5);
      }
      else {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar5 = (long *)(lVar14 + 8);
        if (lVar4 != 0) {
          plVar5 = (long *)(lVar4 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) goto LAB_0388cf40;
        pvVar7 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,(ulong)uVar3 << 5,8);
      }
      if (pvVar7 != (void *)0x0) {
        *(void **)((long)pvVar6 + (long)iVar15 * 0x30 + 0x20) = pvVar7;
        uVar16 = iVar2 - 2;
        uVar13 = (ulong)uVar16;
        if (1 < uVar3) {
          if (uVar13 - 1 < 3) {
            lVar14 = 0;
          }
          else {
            lVar14 = 0;
            puVar11 = (undefined8 *)((long)pvVar7 + 0x30);
            do {
              puVar11[-3] = puVar11;
              puVar11[3] = puVar11 + 6;
              lVar14 = lVar14 + -4;
              puVar11[-6] = puVar11 + -3;
              *puVar11 = puVar11 + 3;
              puVar11 = puVar11 + 0xc;
            } while (-lVar14 != (uVar13 & 0xfffffffc));
            lVar14 = -lVar14;
          }
          if ((uVar16 & 3) != 0) {
            uVar13 = uVar13 & 3;
            puVar11 = (undefined8 *)((long)pvVar7 + lVar14 * 0x18);
            do {
              *puVar11 = puVar11 + 3;
              uVar13 = uVar13 - 1;
              puVar11 = puVar11 + 3;
            } while (uVar13 != 0);
          }
        }
        *(undefined8 *)((long)pvVar7 + (long)(int)(uVar16 * 3) * 8) = 0;
        *(void **)((long)pvVar6 + (long)iVar15 * 0x30 + 0x28) = pvVar7;
        pvVar7 = (void *)((long)pvVar7 + (ulong)uVar3 * 0x18);
        if (pvVar7 != (void *)0x0) {
          puVar17[3] = pvVar7;
          *piVar18 = 0;
          *(uint *)((long)puVar17 + 0x14) = uVar3;
        }
      }
    }
LAB_0388cf40:
    iVar15 = iVar15 + 1;
  } while (*(int *)(param_1 + 0x1a8) != iVar15);
LAB_0388d0d8:
  lVar14 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar17 = malloc(0x20);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar5 = (long *)(lVar14 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
      return;
    }
    puVar17 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x20,8);
  }
  if (puVar17 != (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 0x110) = puVar17;
    *puVar17 = 0;
    *(undefined8 **)(param_1 + 0x118) = puVar17;
    if (puVar17 + 3 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x100) = 0x100000000;
      *(undefined8 **)(param_1 + 0x108) = puVar17 + 3;
    }
  }
  return;
}



void FUN_01d82870(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined2 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  undefined8 *puVar13;
  
  puVar3 = PTR_DAT_04bb2698;
  lVar12 = *(long *)PTR_DAT_04bb2698;
  if (lVar12 == 0) {
    pvVar7 = malloc(0x7080);
    if (pvVar7 != (void *)0x0) goto LAB_01d828f4;
LAB_01d82950:
    iVar10 = *(int *)(param_1 + 8);
    if (iVar10 != 0) {
      pvVar7 = *(void **)(param_1 + 0x10);
      goto LAB_01d8295c;
    }
  }
  else {
    plVar6 = param_2;
    if (param_2 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar12 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) goto LAB_01d82950;
    }
    pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0x7080,8);
    if (pvVar7 == (void *)0x0) goto LAB_01d82950;
LAB_01d828f4:
    puVar1 = PTR_DAT_04bb3170;
    iVar10 = 100;
    puVar9 = (undefined1 *)((long)pvVar7 + 0xf8);
    lVar12 = 100;
    do {
      puVar9[-0xf0] = 0;
      lVar12 = lVar12 + -1;
      *(undefined8 *)(puVar9 + -0xf8) = 0;
      uVar2 = *(undefined2 *)puVar1;
      *puVar9 = 0xff;
      *(undefined2 *)(puVar9 + 8) = 0;
      *(undefined2 *)(puVar9 + -0xee) = uVar2;
      *(undefined8 *)(puVar9 + 0x18) = 0;
      *(undefined8 *)(puVar9 + 0x20) = 0;
      puVar9 = puVar9 + 0x120;
    } while (lVar12 != 0);
    *(undefined4 *)(param_1 + 8) = 100;
    *(void **)(param_1 + 0x10) = pvVar7;
LAB_01d8295c:
    iVar11 = 0;
    do {
      plVar6 = (long *)((long)pvVar7 + (long)*(int *)(param_1 + 0x2c) + (long)iVar11 * 0x120);
      lVar12 = *(long *)(param_1 + 0x18);
      *(long **)(param_1 + 0x18) = plVar6;
      *plVar6 = lVar12;
      plVar6[1] = param_1 + 0x18;
      if (lVar12 != 0) {
        *(long **)(lVar12 + 8) = plVar6;
      }
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      iVar11 = iVar11 + 1;
    } while (iVar10 != iVar11);
  }
  lVar12 = *(long *)puVar3;
  if (lVar12 == 0) {
    puVar8 = malloc(0x1f8);
    if (puVar8 != (undefined8 *)0x0) goto LAB_01d82a08;
LAB_01d82ad4:
    iVar10 = *(int *)(param_1 + 0xb8);
    if (iVar10 != 0) {
      puVar13 = *(undefined8 **)(param_1 + 0xc0);
      goto LAB_01d82ae0;
    }
  }
  else {
    plVar6 = param_2;
    if (param_2 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar12 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) goto LAB_01d82ad4;
    }
    puVar8 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0x1f8,8);
    if (puVar8 == (undefined8 *)0x0) goto LAB_01d82ad4;
LAB_01d82a08:
    puVar8[4] = 0;
    iVar10 = 2;
    *(undefined4 *)(puVar8 + 5) = 0;
    puVar4 = PTR_DAT_04bb2df8;
    *(undefined1 *)((long)puVar8 + 0x2c) = 0;
    *puVar8 = 2;
    puVar13 = puVar8 + 1;
    *puVar13 = 0;
    puVar8[6] = 0xffffffff;
    puVar8[7] = 0xffffffff00000000;
    *(undefined4 *)(puVar8 + 8) = 0xffffffff;
    *(undefined4 *)(puVar8 + 0xb) = 0x40;
    *(undefined1 *)((long)puVar8 + 0x5c) = 0;
    puVar8[2] = 0;
    puVar8[3] = puVar4 + 0x10;
    puVar1 = PTR_DAT_04bb2bc0 + 0x10;
    *(undefined1 *)((long)puVar8 + 0x9b) = 0;
    *(undefined4 *)(puVar8 + 0x16) = 0x40;
    *(undefined1 *)((long)puVar8 + 0xf3) = 0;
    *(undefined1 *)((long)puVar8 + 0xb4) = 0;
    *(undefined4 *)(puVar8 + 0x24) = 0;
    *(undefined1 *)((long)puVar8 + 0x124) = 0;
    *(undefined4 *)(puVar8 + 0x27) = 0xffffffff;
    *(undefined4 *)(puVar8 + 0x2a) = 0x40;
    *(undefined1 *)((long)puVar8 + 0x193) = 0;
    *(undefined1 *)((long)puVar8 + 0x154) = 0;
    *(undefined4 *)(puVar8 + 0x35) = 0x40;
    *(undefined1 *)((long)puVar8 + 0x1eb) = 0;
    *(undefined1 *)((long)puVar8 + 0x1ac) = 0;
    puVar8[0x22] = puVar4 + 0x10;
    puVar8[0x23] = 0;
    puVar8[9] = puVar1;
    puVar8[10] = (undefined1 *)((long)puVar8 + 0x5c);
    puVar8[0x28] = puVar1;
    puVar8[0x29] = (long)puVar8 + 0x154;
    puVar8[0x14] = puVar1;
    puVar8[0x15] = (long)puVar8 + 0xb4;
    puVar8[0x20] = 0;
    puVar8[0x21] = 0;
    puVar8[0x25] = 0xffffffff;
    puVar8[0x26] = 0xffffffff00000000;
    puVar8[0x33] = puVar1;
    puVar8[0x34] = (long)puVar8 + 0x1ac;
    *(undefined4 *)(param_1 + 0xb8) = 2;
    *(undefined8 **)(param_1 + 0xc0) = puVar13;
LAB_01d82ae0:
    iVar11 = 0;
    puVar1 = PTR_DAT_04bc0ba0 + 0x10;
    do {
      lVar12 = *(long *)puVar3;
      if (lVar12 == 0) {
        puVar9 = malloc(0x68);
      }
      else {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar6 = (long *)(lVar12 + 8);
        if (lVar5 != 0) {
          plVar6 = (long *)(lVar5 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
        puVar9 = (undefined1 *)0x0;
        if (plVar6 != (long *)0x0) {
          puVar9 = (undefined1 *)(**(code **)(*plVar6 + 0x30))(plVar6,0x68,8);
        }
      }
      lVar12 = (long)iVar11;
      iVar11 = iVar11 + 1;
      *puVar9 = 0;
      *(undefined8 *)(puVar9 + 8) = 0;
      puVar9[0x10] = 0;
      *(undefined8 *)(puVar9 + 0x18) = 0;
      *(undefined4 *)(puVar9 + 0x20) = 0;
      *(undefined8 *)(puVar9 + 0x38) = 0;
      *(undefined8 *)(puVar9 + 0x40) = 0;
      *(undefined **)(puVar9 + 0x28) = puVar1;
      *(undefined8 *)(puVar9 + 0x30) = 0;
      *(undefined ***)(puVar9 + 0x48) = &PTR_FUN_04ba93e0;
      *(undefined8 *)(puVar9 + 0x50) = 0;
      *(undefined8 *)(puVar9 + 0x58) = 0;
      *(undefined8 *)(puVar9 + 0x60) = 0;
      puVar13[lVar12 * 0x1f] = puVar9;
    } while (iVar10 != iVar11);
  }
  lVar12 = *(long *)puVar3;
  if (lVar12 == 0) {
    pvVar7 = malloc(800);
joined_r0x01d82c20:
    if (pvVar7 != (void *)0x0) {
      *(undefined8 *)(param_1 + 0x78) = 0x6400000000;
      *(void **)(param_1 + 0x80) = pvVar7;
    }
    lVar12 = *(long *)puVar3;
    if (lVar12 == 0) goto LAB_01d82c90;
    plVar6 = param_2;
    if (param_2 != (long *)0x0) {
LAB_01d82c5c:
      pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,20000,8);
      goto joined_r0x01d82c70;
    }
LAB_01d82c30:
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar6 = (long *)(lVar12 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 != (long *)0x0) goto LAB_01d82c5c;
    lVar12 = *(long *)puVar3;
    if (lVar12 != 0) goto LAB_01d82ca8;
  }
  else {
    plVar6 = param_2;
    if (param_2 != (long *)0x0) {
LAB_01d82be0:
      pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,800,8);
      goto joined_r0x01d82c20;
    }
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar6 = (long *)(lVar12 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 != (long *)0x0) goto LAB_01d82be0;
    lVar12 = *(long *)puVar3;
    if (lVar12 != 0) goto LAB_01d82c30;
LAB_01d82c90:
    pvVar7 = malloc(20000);
joined_r0x01d82c70:
    if (pvVar7 != (void *)0x0) {
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(void **)(param_1 + 0x88) = pvVar7;
      *(undefined8 *)(param_1 + 0x90) = 100;
    }
    lVar12 = *(long *)puVar3;
    if (lVar12 != 0) {
      if (param_2 == (long *)0x0) {
LAB_01d82ca8:
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar8 = (undefined8 *)(lVar12 + 8);
        if (lVar5 != 0) {
          puVar8 = (undefined8 *)(lVar5 + 0xa8);
        }
        param_2 = (long *)*puVar8;
        if (param_2 == (long *)0x0) {
          return;
        }
      }
      pvVar7 = (void *)(**(code **)(*param_2 + 0x30))(param_2,400,8);
      goto joined_r0x01d82d24;
    }
  }
  pvVar7 = malloc(400);
joined_r0x01d82d24:
  if (pvVar7 != (void *)0x0) {
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(void **)(param_1 + 0xa0) = pvVar7;
    *(undefined8 *)(param_1 + 0xa8) = 100;
  }
  return;
}


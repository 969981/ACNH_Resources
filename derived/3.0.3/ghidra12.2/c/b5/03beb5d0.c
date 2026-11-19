
void FUN_03beb5d0(long param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  
  *(undefined8 *)(param_1 + 0xc0) = param_3;
  puVar1 = PTR_DAT_04bb2698;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    puVar4 = malloc(0x578);
  }
  else {
    plVar3 = param_2;
    if (param_2 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar8 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      puVar4 = (undefined8 *)0x0;
      if (plVar3 == (long *)0x0) goto LAB_03beb658;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x578,8);
  }
LAB_03beb658:
  *(undefined4 *)(puVar4 + 1) = 0;
  puVar4[0x19] = puVar4 + 0x2c;
  puVar4[0x2c] = puVar4 + 0x3f;
  puVar7 = puVar4 + 6;
  *puVar7 = puVar4 + 0x19;
  puVar4[0x8b] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = puVar7;
  puVar4[5] = puVar7;
  *puVar4 = &PTR_LAB_04b7be38;
  puVar4[0x3f] = puVar4 + 0x52;
  puVar4[0x52] = puVar4 + 0x65;
  puVar4[0x65] = puVar4 + 0x78;
  puVar4[0x78] = puVar4 + 0x8b;
  if (puVar4 + 0x9e != (undefined8 *)0x0) {
    puVar4[3] = puVar4 + 0x9e;
    *(undefined4 *)((long)puVar4 + 0x14) = 8;
  }
  lVar8 = *(long *)puVar1;
  puVar4[0xa6] = 0;
  *(undefined4 *)(puVar4 + 0xa7) = 0;
  *(undefined4 *)((long)puVar4 + 0x56c) = 0;
  *(undefined1 *)(puVar4 + 0xae) = 0;
  puVar4[0xa8] = 0;
  puVar4[0xa9] = 0;
  puVar4[0xaa] = 0;
  puVar4[0xab] = 0;
  puVar4[0xac] = 0;
  *(undefined8 **)(param_1 + 8) = puVar4;
  *(undefined4 *)(param_1 + 0x2c) = param_4;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (lVar8 == 0) {
    pvVar5 = malloc(0x300);
joined_r0x03beb76c:
    if (pvVar5 != (void *)0x0) {
      *(undefined8 *)(param_1 + 0x90) = 0x6000000000;
      *(void **)(param_1 + 0x98) = pvVar5;
    }
    lVar8 = *(long *)puVar1;
    if (lVar8 == 0) goto LAB_03beb7bc;
    plVar3 = param_2;
    if (param_2 == (long *)0x0) {
LAB_03beb77c:
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar8 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
    }
    pvVar5 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,0x5910,8);
  }
  else {
    plVar3 = param_2;
    if (param_2 != (long *)0x0) {
LAB_03beb730:
      pvVar5 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,0x300,8);
      goto joined_r0x03beb76c;
    }
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar3 = (long *)(lVar8 + 8);
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0xa8);
    }
    plVar3 = (long *)*plVar3;
    if (plVar3 != (long *)0x0) goto LAB_03beb730;
    lVar8 = *(long *)puVar1;
    if (lVar8 != 0) goto LAB_03beb77c;
LAB_03beb7bc:
    pvVar5 = malloc(0x5910);
  }
  FUN_03bf0a10(pvVar5,param_1);
  *(void **)(param_1 + 0x68) = pvVar5;
  lVar8 = *(long *)puVar1;
  if (lVar8 == 0) {
    plVar3 = malloc(0x1888);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar4 = (undefined8 *)(lVar8 + 8);
      if (lVar2 != 0) {
        puVar4 = (undefined8 *)(lVar2 + 0xa8);
      }
      param_2 = (long *)*puVar4;
      plVar3 = (long *)0x0;
      if (param_2 == (long *)0x0) goto LAB_03beb834;
    }
    plVar3 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0x1888,8);
  }
LAB_03beb834:
  *plVar3 = (long)(PTR_DAT_04bd2448 + 0x10);
  plVar3[1] = param_1;
  FUN_038e18e4(plVar3 + 2);
  plVar6 = plVar3 + 0x1c;
  *(undefined4 *)(plVar3 + 0xc) = 0;
  plVar3[10] = (long)(plVar3 + 10);
  plVar3[0xb] = (long)(plVar3 + 10);
  plVar3[0xd] = (long)(plVar3 + 0x10);
  for (lVar8 = 0x7e; plVar6[-0xc] = (long)(plVar6 + -6), lVar8 != 0; lVar8 = lVar8 + -2) {
    plVar6[-6] = (long)plVar6;
    plVar6 = plVar6 + 0xc;
  }
  plVar3[0xe] = (long)(plVar3 + 0x10);
  *(undefined4 *)(plVar3 + 0xf) = 0x80;
  plVar3[0x30a] = 0;
  *(undefined1 *)(plVar3 + 0x310) = 1;
  *(long **)(param_1 + 0x70) = plVar3;
  return;
}


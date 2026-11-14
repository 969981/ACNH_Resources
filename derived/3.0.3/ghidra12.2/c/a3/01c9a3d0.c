
void FUN_01c9a3d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined *local_40;
  char *pcStack_38;
  
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "NetStatusMgr";
  plVar2 = (long *)FUN_038c6d48(0,&local_40,param_2,8,1,0);
  *(long **)(param_1 + 8) = plVar2;
  puVar1 = PTR_DAT_04bb2698;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    pvVar5 = malloc(0x498);
joined_r0x01c9a4d8:
    if (pvVar5 != (void *)0x0) {
      lVar9 = 0;
      do {
        puVar8 = (undefined4 *)((long)pvVar5 + lVar9);
        lVar9 = lVar9 + 0x38;
        *puVar8 = 0;
        *(undefined8 *)(puVar8 + 2) = 0;
        *(undefined8 *)(puVar8 + 4) = 0;
        *(undefined8 *)(puVar8 + 10) = 0x100000000;
        *(undefined1 *)(puVar8 + 0xc) = 1;
        *(undefined8 *)(puVar8 + 6) = 0;
        *(undefined8 *)(puVar8 + 8) = 0;
      } while (lVar9 != 0x498);
      *(void **)(param_1 + 0x28) = pvVar5;
      *(undefined4 *)(param_1 + 0x20) = 0x15;
      lVar9 = *(long *)puVar1;
      goto joined_r0x01c9a524;
    }
  }
  else {
    plVar4 = plVar2;
    if (plVar2 != (long *)0x0) {
LAB_01c9a468:
      pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x498,8);
      goto joined_r0x01c9a4d8;
    }
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar4 = (long *)(lVar9 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 != (long *)0x0) goto LAB_01c9a468;
  }
  lVar9 = *(long *)puVar1;
joined_r0x01c9a524:
  if (lVar9 == 0) {
    puVar6 = malloc(0x1c);
  }
  else {
    plVar4 = *(long **)(param_1 + 8);
    if (plVar4 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar9 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
    }
    puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x1c,8);
  }
  *(undefined4 *)(puVar6 + 3) = 0;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  lVar9 = *(long *)puVar1;
  *(undefined8 **)(param_1 + 0x58) = puVar6;
  if (lVar9 == 0) {
    puVar7 = malloc(2);
  }
  else {
    plVar4 = *(long **)(param_1 + 8);
    if (plVar4 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar9 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
    }
    puVar7 = (undefined2 *)(**(code **)(*plVar4 + 0x30))(plVar4,2,8);
  }
  *puVar7 = 0;
  lVar9 = *(long *)puVar1;
  *(undefined2 **)(param_1 + 0x60) = puVar7;
  if (lVar9 == 0) {
    puVar8 = malloc(0x1c);
  }
  else {
    plVar4 = *(long **)(param_1 + 8);
    if (plVar4 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar9 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
    }
    puVar8 = (undefined4 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x1c,8);
  }
  *puVar8 = 0;
  *(undefined8 *)(puVar8 + 1) = 0;
  *(undefined1 *)(puVar8 + 6) = 2;
  *(undefined8 *)(puVar8 + 3) = 0;
  puVar8[5] = 0;
  *(undefined4 **)(param_1 + 0x68) = puVar8;
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}



undefined8 FUN_03b3cd50(long param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_04bb2698;
  if (*(char *)(param_1 + 8) != '\0') {
    return 1;
  }
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    pvVar4 = malloc(0x18);
  }
  else {
    plVar3 = param_3;
    if (param_3 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar5 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) goto LAB_03b3ceb4;
    }
    pvVar4 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,0x18,8);
  }
  if (pvVar4 == (void *)0x0) {
LAB_03b3ceb4:
    *(undefined8 *)(param_1 + 0x60) = 0;
    return 0;
  }
  *(void **)pvVar4 = pvVar4;
  *(void **)((long)pvVar4 + 8) = pvVar4;
  lVar5 = *(long *)puVar1;
  *(undefined4 *)((long)pvVar4 + 0x10) = 0;
  *(void **)(param_1 + 0x60) = pvVar4;
  *(undefined4 *)((long)pvVar4 + 0x14) = 0x228;
  if (lVar5 == 0) {
    pvVar4 = malloc(0x18);
    *(void **)(param_1 + 0xa8) = pvVar4;
  }
  else {
    plVar3 = param_3;
    if (param_3 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar5 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        *(undefined8 *)(param_1 + 0xa8) = 0;
        pvVar4 = *(void **)(param_1 + 0x60);
        goto joined_r0x03b3cf14;
      }
    }
    pvVar4 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,0x18,8);
    *(void **)(param_1 + 0xa8) = pvVar4;
  }
  if (pvVar4 != (void *)0x0) {
    FUN_03b3c120(*(undefined8 *)(*(long *)PTR_DAT_04bc3ee8 + 0x90),param_3,param_1 + 0x10);
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined2 *)(param_1 + 0xfc) = 0x101;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined1 *)(param_1 + 0xfe) = 0;
    *(undefined4 *)(param_1 + 0x128) = 0xffff000d;
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined8 **)(param_1 + 0x100) = (undefined8 *)(param_1 + 0xc0);
    *(undefined1 *)(param_1 + 8) = 1;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 **)(param_1 + 0x108) = (undefined8 *)(param_1 + 0xf0);
    *(undefined8 *)(param_1 + 0x110) = 0;
    return 1;
  }
  pvVar4 = *(void **)(param_1 + 0x60);
joined_r0x03b3cf14:
  if (pvVar4 != (void *)0x0) {
    lVar5 = *(long *)puVar1;
    if (lVar5 == 0) {
      free(pvVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(lVar5,pvVar4);
      if (plVar3 == (long *)0x0) {
        return 0;
      }
      (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
    }
  }
  return 0;
}


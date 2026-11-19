
void FUN_03b0c40c(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_04bb2698;
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    pvVar5 = malloc(0x4000);
  }
  else {
    plVar4 = param_2;
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar6 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      pvVar5 = (void *)0x0;
      if (plVar4 == (long *)0x0) goto LAB_03b0c488;
    }
    pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x4000,0x40);
  }
LAB_03b0c488:
  *(void **)(param_1 + 0x30) = pvVar5;
  *(void **)(param_1 + 0x38) = pvVar5;
  *(undefined4 *)(param_1 + 0x40) = 0x800;
  *(undefined4 *)(param_1 + 0x44) = 0;
  lVar6 = *(long *)puVar2;
  if (lVar6 == 0) {
    pvVar5 = malloc(0x4000);
  }
  else {
    plVar4 = param_2;
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar6 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      pvVar5 = (void *)0x0;
      if (plVar4 == (long *)0x0) goto LAB_03b0c4f4;
    }
    pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x4000,0x40);
  }
LAB_03b0c4f4:
  *(void **)(param_1 + 0x70) = pvVar5;
  *(void **)(param_1 + 0x78) = pvVar5;
  *(undefined4 *)(param_1 + 0x80) = 0x800;
  *(undefined4 *)(param_1 + 0x84) = 0;
  lVar6 = *(long *)puVar2;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x60) = 1;
  if (lVar6 == 0) {
    pvVar5 = malloc(0x4000);
joined_r0x03b0c584:
    if (pvVar5 != (void *)0x0) {
      *(undefined8 *)(param_1 + 0x88) = 0x80000000000;
      *(void **)(param_1 + 0x90) = pvVar5;
    }
    lVar6 = *(long *)puVar2;
    if (lVar6 != 0) {
      if (param_2 == (long *)0x0) {
LAB_03b0c594:
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar1 = (undefined8 *)(lVar6 + 8);
        if (lVar3 != 0) {
          puVar1 = (undefined8 *)(lVar3 + 0xa8);
        }
        param_2 = (long *)*puVar1;
        if (param_2 == (long *)0x0) {
          return;
        }
      }
      pvVar5 = (void *)(**(code **)(*param_2 + 0x30))(param_2,0x4000,8);
      goto joined_r0x03b0c5d8;
    }
  }
  else {
    plVar4 = param_2;
    if (param_2 != (long *)0x0) {
LAB_03b0c54c:
      pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x4000,8);
      goto joined_r0x03b0c584;
    }
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar4 = (long *)(lVar6 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 != (long *)0x0) goto LAB_03b0c54c;
    lVar6 = *(long *)puVar2;
    if (lVar6 != 0) goto LAB_03b0c594;
  }
  pvVar5 = malloc(0x4000);
joined_r0x03b0c5d8:
  if (pvVar5 != (void *)0x0) {
    *(void **)(param_1 + 0xa0) = pvVar5;
    *(undefined4 *)(param_1 + 0x98) = 0x800;
  }
  return;
}


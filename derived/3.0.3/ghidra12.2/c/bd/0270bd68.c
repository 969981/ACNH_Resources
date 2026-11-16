
void FUN_0270bd68(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  puVar1 = PTR_DAT_04bb2698;
  pvVar3 = *(void **)(param_1 + 0x10);
  if (pvVar3 == (void *)0x0) {
LAB_0270be38:
    pvVar3 = *(void **)(param_1 + 0x18);
  }
  else {
    FUN_027c10a4((long)pvVar3 + 0x97d3f4);
    FUN_027c10a4((long)pvVar3 + 0x97d390);
    FUN_028321ec((long)pvVar3 + 0x96ef80);
    FUN_0282cba8((long)pvVar3 + 0x92f788);
    FUN_0282cba8((long)pvVar3 + 0x8bad48);
    FUN_0282cba8((long)pvVar3 + 0x846308);
    FUN_0282cba8((long)pvVar3 + 0x7d18c8);
    FUN_0282cba8((long)pvVar3 + 0x75ce88);
    FUN_0282cba8((long)pvVar3 + 0x6e8448);
    FUN_0282cba8((long)pvVar3 + 0x673a08);
    FUN_0282cba8((long)pvVar3 + 0x5fefc8);
    if (*(long *)puVar1 != 0) {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
      goto LAB_0270be38;
    }
    free(pvVar3);
    pvVar3 = *(void **)(param_1 + 0x18);
  }
  if (pvVar3 != (void *)0x0) {
    FUN_027c10a4((long)pvVar3 + 0x97d3f4);
    FUN_027c10a4((long)pvVar3 + 0x97d390);
    FUN_028321ec((long)pvVar3 + 0x96ef80);
    FUN_0282cba8((long)pvVar3 + 0x92f788);
    FUN_0282cba8((long)pvVar3 + 0x8bad48);
    FUN_0282cba8((long)pvVar3 + 0x846308);
    FUN_0282cba8((long)pvVar3 + 0x7d18c8);
    FUN_0282cba8((long)pvVar3 + 0x75ce88);
    FUN_0282cba8((long)pvVar3 + 0x6e8448);
    FUN_0282cba8((long)pvVar3 + 0x673a08);
    FUN_0282cba8((long)pvVar3 + 0x5fefc8);
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
  }
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 8))();
  }
  pvVar3 = *(void **)(param_1 + 0x28);
  if (pvVar3 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
      plVar2 = *(long **)(param_1 + 0x30);
      goto joined_r0x0270bf50;
    }
    plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
    }
  }
  plVar2 = *(long **)(param_1 + 0x30);
joined_r0x0270bf50:
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x18))();
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



void FUN_033081e0(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  
  *(undefined8 *)(param_1 + 0x1bf0) = 0;
  FUN_0330833c(param_1 + 0x1bc0);
  puVar2 = PTR_DAT_04bb2698;
  pvVar7 = *(void **)(param_1 + 0x1bb8);
  if (pvVar7 != (void *)0x0) {
    FUN_03286c9c(pvVar7);
    lVar4 = *(long *)puVar2;
    if (lVar4 == 0) {
      free(pvVar7);
    }
    else {
      plVar5 = (long *)FUN_038cb610(lVar4,pvVar7);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
      }
    }
  }
  lVar4 = 0;
  do {
    pvVar7 = *(void **)(param_1 + lVar4 + 0x1bb0);
    if (pvVar7 != (void *)0x0) {
      if (*(long **)((long)pvVar7 + 0x5a0) != (long *)0x0) {
        (**(code **)(**(long **)((long)pvVar7 + 0x5a0) + 8))();
      }
      FUN_03286c9c(pvVar7);
      lVar6 = *(long *)puVar2;
      if (lVar6 == 0) {
        free(pvVar7);
      }
      else {
        plVar5 = (long *)FUN_038cb610(lVar6,pvVar7);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
        }
      }
    }
    bVar3 = lVar4 != -0x1b0;
    lVar4 = lVar4 + -8;
  } while (bVar3);
  puVar1 = (undefined8 *)(param_1 + 0x19a8);
  FUN_032c6840(puVar1);
  plVar5 = *(long **)(param_1 + 0x19a8);
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  if (plVar5 != (long *)0x0) {
    lVar4 = *(long *)(param_1 + 0x19b8);
    lVar6 = *(long *)(param_1 + 0x19b0);
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x19b0) = 0;
    if ((undefined8 *)*plVar5 == puVar1) {
      *plVar5 = lVar4;
    }
    if (lVar4 != 0) {
      *(long *)(lVar4 + 8) = lVar6;
    }
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x10) = lVar4;
    }
  }
  memset((void *)(param_1 + 0x17f0),0,0x1d0);
  FUN_0331a35c(param_1);
  return;
}


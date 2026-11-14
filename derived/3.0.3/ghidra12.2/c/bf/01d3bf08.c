
undefined8 * FUN_01d3bf08(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *__ptr;
  void *__dest;
  long *plVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_04bb2698;
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    __ptr = malloc(0x28);
  }
  else {
    plVar2 = (long *)*param_1;
    if (plVar2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar2 = (long *)(lVar5 + 8);
      if (lVar3 != 0) {
        plVar2 = (long *)(lVar3 + 0xa8);
      }
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) {
        return (undefined8 *)0x0;
      }
    }
    __ptr = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x28,8);
  }
  if (__ptr == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  __ptr[3] = 0;
  __ptr[4] = 0;
  *__ptr = 0;
  __ptr[1] = 0;
  __ptr[2] = 0;
  __dest = (void *)(**(code **)(*(long *)*param_1 + 0x30))((long *)*param_1,param_2[1],8);
  if (__dest != (void *)0x0) {
    memcpy(__dest,(void *)*param_2,param_2[1]);
    *__ptr = __dest;
    __ptr[1] = param_2[1];
    plVar4 = param_1 + 1;
    lVar5 = *plVar4;
    plVar2 = (long *)((long)*(int *)((long)param_1 + 0x1c) + (long)__ptr);
    *plVar4 = (long)plVar2;
    *plVar2 = lVar5;
    plVar2[1] = (long)plVar4;
    if (lVar5 != 0) {
      *(long **)(lVar5 + 8) = plVar2;
    }
    *(int *)(param_1 + 3) = (int)param_1[3] + 1;
    return __ptr;
  }
  if (*(long *)puVar1 == 0) {
    free(__ptr);
  }
  else {
    plVar2 = (long *)FUN_038cb610(*(long *)puVar1,__ptr);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
    }
  }
  return (undefined8 *)0x0;
}


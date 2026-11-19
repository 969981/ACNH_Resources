
void FUN_03890080(int *param_1,void *param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  void *__s;
  long lVar6;
  
  param_1[0] = 0;
  param_1[1] = 2;
  *(int **)(param_1 + 2) = param_1 + 4;
  puVar2 = PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb2698;
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    puVar5 = malloc(0x18);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar4 = (long *)(lVar6 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x18,8);
    }
  }
  *puVar5 = param_2;
  *(uint *)(puVar5 + 1) = param_3;
  *(undefined1 *)(puVar5 + 2) = 0;
  __s = param_2;
  if (param_2 == (void *)0x0) {
    lVar6 = *(long *)puVar1;
    if (lVar6 == 0) {
      __s = malloc((ulong)(param_3 + 1));
    }
    else {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
      plVar4 = (long *)(lVar6 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      __s = (void *)0x0;
      if (plVar4 != (long *)0x0) {
        __s = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,(ulong)(param_3 + 1),8);
      }
    }
    *puVar5 = __s;
    *(undefined1 *)(puVar5 + 2) = 1;
  }
  memset(__s,0,(ulong)param_3);
  *(undefined4 *)((long)puVar5 + 0xc) = 0;
  if (*param_1 < param_1[1]) {
    *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar5;
    *param_1 = *param_1 + 1;
  }
  lVar6 = *(long *)puVar1;
  if (lVar6 == 0) {
    puVar5 = malloc(0x18);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar4 = (long *)(lVar6 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x18,8);
    }
  }
  *puVar5 = param_2;
  *(uint *)(puVar5 + 1) = param_3;
  *(undefined1 *)(puVar5 + 2) = 0;
  if (param_2 == (void *)0x0) {
    lVar6 = *(long *)puVar1;
    if (lVar6 == 0) {
      param_2 = malloc((ulong)(param_3 + 1));
    }
    else {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
      plVar4 = (long *)(lVar6 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        param_2 = (void *)0x0;
      }
      else {
        param_2 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,(ulong)(param_3 + 1),8);
      }
    }
    *puVar5 = param_2;
    *(undefined1 *)(puVar5 + 2) = 1;
  }
  memset(param_2,0,(ulong)param_3);
  *(undefined4 *)((long)puVar5 + 0xc) = 0;
  if (*param_1 < param_1[1]) {
    *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar5;
    *param_1 = *param_1 + 1;
  }
  param_1[8] = 0;
  return;
}


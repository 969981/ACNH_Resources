
undefined1 * FUN_0250b4c0(undefined1 *param_1,undefined1 *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  long *plVar6;
  
  pvVar4 = *(void **)(param_1 + 0x18);
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  plVar6 = (long *)(param_2 + 0x10);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  pvVar5 = *(void **)(param_2 + 0x18);
  if (pvVar4 != pvVar5) {
    (**(code **)(*(long *)(param_2 + 0x10) + 0x18))(plVar6);
    lVar3 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 0x18) + lVar3) == '\0') goto LAB_0250b58c;
      lVar1 = *(long *)(param_2 + 0x18) + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_0250b58c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_0250b58c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_0250b58c:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 0x20) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 0x20) + -1;
    }
    memcpy(pvVar4,pvVar5,(long)iVar2);
    *(undefined1 *)((long)pvVar4 + (long)iVar2) = 0;
  }
  pvVar4 = *(void **)(param_1 + 0x70);
  plVar6 = (long *)(param_2 + 0x68);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  pvVar5 = *(void **)(param_2 + 0x70);
  if (pvVar4 != pvVar5) {
    (**(code **)(*(long *)(param_2 + 0x68) + 0x18))(plVar6);
    lVar3 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 0x70) + lVar3) == '\0') goto LAB_0250b62c;
      lVar1 = *(long *)(param_2 + 0x70) + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_0250b62c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_0250b62c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_0250b62c:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 0x78) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 0x78) + -1;
    }
    memcpy(pvVar4,pvVar5,(long)iVar2);
    *(undefined1 *)((long)pvVar4 + (long)iVar2) = 0;
  }
  FUN_02478400(param_1 + 0xc0,param_2 + 0xc0);
  FUN_02478400(param_1 + 0x210,param_2 + 0x210);
  FUN_02478400(param_1 + 0x360,param_2 + 0x360);
  return param_1;
}


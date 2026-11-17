
void FUN_030b4090(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  void *__s;
  int iVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  
  if (param_2 != (long *)0x0) {
    plVar1 = param_1 + 0x15f94;
    if (DAT_05ae7600 == 0) {
      __s = malloc(0x4ce780);
    }
    else {
      __s = (void *)(**(code **)(*param_2 + 0x30))(param_2,0x4ce780,8);
    }
    memset(__s,0,0x4ce780);
    lVar4 = 0;
    do {
      puVar2 = (undefined8 *)((long)__s + lVar4);
      lVar4 = lVar4 + 0x38;
      *(undefined8 *)((long)puVar2 + 0xd) = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined4 *)((long)puVar2 + 0x15) = 0x10001;
      *(undefined8 *)((long)puVar2 + 0x1c) = 0xffffffff00000000;
      puVar2[5] = 0;
      puVar2[6] = 0;
    } while (lVar4 != 0x4ce780);
    iVar6 = *(int *)(param_1 + 0x15f96);
    iVar3 = 0;
    *param_1 = __s;
    do {
      *(int *)((long)__s + (long)iVar3 * 0x38 + 0x20) = iVar6;
      plVar5 = (long *)((long)__s + (long)*(int *)((long)param_1 + 0xafcb4) + (long)iVar3 * 0x38);
      lVar4 = *plVar1;
      *plVar1 = (long)plVar5;
      *plVar5 = lVar4;
      plVar5[1] = (long)plVar1;
      if (lVar4 != 0) {
        *(long **)(lVar4 + 8) = plVar5;
      }
      iVar3 = iVar3 + 1;
      iVar6 = *(int *)(param_1 + 0x15f96) + 1;
      *(int *)(param_1 + 0x15f96) = iVar6;
    } while (iVar3 != 90000);
    while (0 < *(int *)(param_1 + 0x15f99)) {
      plVar5 = (long *)param_1[0x15f98];
      if (*plVar5 != 0) {
        *(long *)(*plVar5 + 8) = plVar5[1];
      }
      if ((long *)plVar5[1] != (long *)0x0) {
        *(long *)plVar5[1] = *plVar5;
      }
      *plVar5 = 0;
      plVar5[1] = 0;
      *(int *)(param_1 + 0x15f99) = *(int *)(param_1 + 0x15f99) + -1;
      if ((plVar5 == (long *)0x0) ||
         (lVar4 = (long)plVar5 - (long)*(int *)((long)param_1 + 0xafccc), lVar4 == 0)) break;
      *(undefined1 *)(lVar4 + 0x14) = 0;
      plVar5 = (long *)(lVar4 + *(int *)((long)param_1 + 0xafcb4));
      lVar4 = *plVar1;
      *plVar1 = (long)plVar5;
      *plVar5 = lVar4;
      plVar5[1] = (long)plVar1;
      if (lVar4 != 0) {
        *(long **)(lVar4 + 8) = plVar5;
      }
      *(int *)(param_1 + 0x15f96) = *(int *)(param_1 + 0x15f96) + 1;
    }
    param_1[0x15f9a] = 0;
    *(undefined8 *)((long)param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x15f9b) = 0;
  }
  return;
}


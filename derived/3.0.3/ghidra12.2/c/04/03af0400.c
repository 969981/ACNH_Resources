
void FUN_03af0400(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  void *__ptr;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  
  puVar4 = *(undefined8 **)(param_1 + 0x20);
  if (1 < (int)*(uint *)(param_1 + 4)) {
    lVar6 = (ulong)*(uint *)(param_1 + 4) - 1;
    puVar5 = puVar4;
    do {
      puVar5 = puVar5 + 0x27;
      (**(code **)*puVar5)(puVar5);
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  (**(code **)*puVar4)(puVar4);
  puVar1 = PTR_DAT_04bb2698;
  __ptr = *(void **)(param_1 + 0x20);
  if (__ptr != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
      lVar6 = *(long *)(param_1 + 0x18);
      goto joined_r0x03af0494;
    }
    plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
    }
  }
  lVar6 = *(long *)(param_1 + 0x18);
joined_r0x03af0494:
  if (lVar6 != 0) {
    plVar2 = (long *)(lVar6 + -8);
    if (*plVar2 != 0) {
      lVar7 = *plVar2 * 0x50;
      do {
        FUN_03af01d0(lVar6 + -0x50 + lVar7);
        lVar7 = lVar7 + -0x50;
      } while (lVar7 != 0);
    }
    if (*(long *)puVar1 == 0) {
      free(plVar2);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,plVar2);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,plVar2);
      }
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  FUN_038e1a84(param_1 + 0x68);
  FUN_038e1a84(param_1 + 0x28);
  return;
}


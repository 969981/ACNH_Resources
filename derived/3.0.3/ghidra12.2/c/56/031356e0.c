
void FUN_031356e0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  void *__ptr;
  long *plVar6;
  long lVar7;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar1 = (undefined8 *)(param_1 + 8);
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    while (puVar2 != puVar1) {
      puVar4 = (undefined8 *)puVar2[1];
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = puVar4;
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined8 **)(param_1 + 8) = puVar1;
    *(undefined8 **)(param_1 + 0x10) = puVar1;
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    if (0 < *(int *)(param_1 + 0x90)) {
      lVar7 = 0;
      do {
        plVar5 = *(long **)(*(long *)(param_1 + 0x98) + lVar7 * 8);
        (**(code **)(*plVar5 + 0x10))(plVar5);
        lVar7 = lVar7 + 1;
        *plVar5 = *(long *)(param_1 + 0xa0);
        *(long **)(param_1 + 0xa0) = plVar5;
      } while (lVar7 < *(int *)(param_1 + 0x90));
    }
    __ptr = *(void **)(param_1 + 0xa8);
    *(undefined4 *)(param_1 + 0x90) = 0;
    if (__ptr != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(__ptr);
      }
      else {
        plVar5 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,__ptr);
        }
      }
    }
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(undefined8 *)(param_1 + 0xa4) = 0;
    *(undefined8 *)(param_1 + 0x9c) = 0;
    *(undefined8 *)(param_1 + 0x94) = 0;
  }
  (**(code **)(*(long *)(param_1 + 0xb8) + 0x28))();
  *(undefined8 *)(param_1 + 0xc0) = 0;
  plVar6 = (long *)(param_1 + 0xe8);
  (**(code **)(*plVar6 + 0x28))(plVar6);
  puVar3 = PTR_DAT_04bcb4e0;
  plVar5 = *(long **)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *plVar6 = (long)(puVar3 + 0x10);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  plVar5 = *(long **)(param_1 + 200);
  *(undefined **)(param_1 + 0xb8) = puVar3 + 0x10;
  *(long *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  *(long *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  return;
}


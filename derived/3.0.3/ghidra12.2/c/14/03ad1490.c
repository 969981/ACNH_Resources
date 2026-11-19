
void FUN_03ad1490(uint *param_1)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  void *pvVar6;
  void *__ptr;
  uint uVar7;
  
  puVar2 = PTR_DAT_04bb2698;
  uVar5 = *param_1;
  if (0 < (int)uVar5) {
    uVar7 = 0;
    do {
      uVar1 = uVar7;
      if (uVar5 <= uVar7) {
        uVar1 = 0;
      }
      pvVar6 = *(void **)(*(long *)(param_1 + 2) + (ulong)uVar1 * 8);
      if (pvVar6 != (void *)0x0) {
        __ptr = *(void **)((long)pvVar6 + 8);
        if (__ptr == (void *)0x0) {
LAB_03ad151c:
          lVar4 = *(long *)puVar2;
          if (lVar4 != 0) goto LAB_03ad1524;
LAB_03ad14c4:
          free(pvVar6);
        }
        else {
          if (*(long *)puVar2 != 0) {
            plVar3 = (long *)FUN_038cb610(*(long *)puVar2,__ptr);
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
            }
            goto LAB_03ad151c;
          }
          free(__ptr);
          lVar4 = *(long *)puVar2;
          if (lVar4 == 0) goto LAB_03ad14c4;
LAB_03ad1524:
          plVar3 = (long *)FUN_038cb610(lVar4,pvVar6);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
          }
        }
        uVar5 = *param_1;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)uVar5);
  }
  pvVar6 = *(void **)(param_1 + 2);
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
  }
  return;
}


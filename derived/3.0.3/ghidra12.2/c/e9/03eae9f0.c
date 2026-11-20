
void FUN_03eae9f0(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long *__ptr;
  void *__ptr_00;
  
  *param_1 = &PTR_FUN_04ba4a10;
  puVar2 = PTR_DAT_04bb2698;
  iVar1 = *(int *)(param_1 + 3);
  do {
    if (iVar1 < 1) {
      return;
    }
    __ptr = (long *)param_1[1];
    if (*__ptr != 0) {
      *(long *)(*__ptr + 8) = __ptr[1];
    }
    if ((long *)__ptr[1] != (long *)0x0) {
      *(long *)__ptr[1] = *__ptr;
    }
    *__ptr = 0;
    __ptr[1] = 0;
    *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + -1;
    __ptr[3] = 0;
    __ptr_00 = (void *)__ptr[2];
    if (__ptr_00 == (void *)0x0) {
LAB_03eaeaa8:
      lVar4 = *(long *)puVar2;
      if (lVar4 != 0) goto LAB_03eaeab0;
LAB_03eaea30:
      free(__ptr);
    }
    else {
      if (*(long *)puVar2 != 0) {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar2,__ptr_00);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,__ptr_00);
        }
        goto LAB_03eaeaa8;
      }
      free(__ptr_00);
      lVar4 = *(long *)puVar2;
      if (lVar4 == 0) goto LAB_03eaea30;
LAB_03eaeab0:
      plVar3 = (long *)FUN_038cb610(lVar4,__ptr);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
      }
    }
    iVar1 = *(int *)(param_1 + 3);
  } while( true );
}


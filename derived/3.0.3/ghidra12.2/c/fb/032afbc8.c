
void FUN_032afbc8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  void *__ptr;
  
  __ptr = *(void **)(param_1 + 0x90);
  if (__ptr != (void *)0x0) {
    puVar1 = (undefined8 *)((long)__ptr + 8);
    FUN_032c6840(puVar1);
    plVar4 = *(long **)((long)__ptr + 8);
    *(undefined8 *)((long)__ptr + 0x28) = 0;
    *(undefined8 *)((long)__ptr + 0x30) = 0;
    *(undefined8 *)((long)__ptr + 0x20) = 0;
    if (plVar4 != (long *)0x0) {
      lVar2 = *(long *)((long)__ptr + 0x10);
      lVar3 = *(long *)((long)__ptr + 0x18);
      *(undefined8 *)((long)__ptr + 0x18) = 0;
      *puVar1 = 0;
      *(undefined8 *)((long)__ptr + 0x10) = 0;
      if ((undefined8 *)*plVar4 == puVar1) {
        *plVar4 = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 8) = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = lVar3;
      }
    }
    *(undefined8 *)((long)__ptr + 0x10) = 0;
    *(undefined8 *)((long)__ptr + 0x18) = 0;
    *puVar1 = 0;
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  FUN_032af950(param_1 + 8);
  return;
}


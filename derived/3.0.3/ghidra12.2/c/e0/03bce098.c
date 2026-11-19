
void FUN_03bce098(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  void *__ptr;
  
  puVar4 = *(undefined8 **)(*(long *)PTR_DAT_04bd2340 + 8);
  if (((*PTR_DAT_04bd2308 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd2308), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bd2300 = PTR_DAT_04bd2310 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd2308);
  }
  uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bd2300);
  if ((uVar2 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  if (*(char *)(puVar4 + 0x33) != '\0') {
    if (*(char *)(param_1 + 0x260) != '\0') {
      FUN_003e015c(param_1);
      *(undefined1 *)(param_1 + 0x260) = 0;
    }
    if (*(long **)(param_1 + 0x240) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x240) + 0x18))();
    }
    __ptr = *(void **)(param_1 + 0x248);
    *(undefined8 *)(param_1 + 0x240) = 0;
    if (__ptr != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(__ptr);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
        }
      }
      *(undefined8 *)(param_1 + 0x248) = 0;
    }
  }
  return;
}



void FUN_02e279b0(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  void *__ptr;
  
  puVar4 = (undefined8 *)**(undefined8 **)(param_1 + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if ((puVar4 != (undefined8 *)0x0) &&
     (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4e58), (uVar2 & 1) != 0)) {
    puVar4[0x36] = *(undefined8 *)(param_1 + 0x570);
  }
  __ptr = *(void **)(param_1 + 0x578);
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
    *(undefined8 *)(param_1 + 0x578) = 0;
  }
  FUN_038596b8(param_1);
  return;
}


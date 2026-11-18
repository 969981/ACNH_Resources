
void FUN_032d25d0(long param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *local_18;
  
  param_2 = (long *)*param_2;
  if ((*PTR_DAT_04bc8f58 & 1) == 0) goto LAB_032d2694;
  do {
    if (param_2 != (long *)0x0) {
      puVar4 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2);
      if (puVar4 != (undefined8 *)PTR_DAT_04bc8f50) {
        do {
          puVar4 = (undefined8 *)*puVar4;
        } while (puVar4 != (undefined8 *)PTR_DAT_04bc8f50 && puVar4 != (undefined8 *)0x0);
        if (puVar4 == (undefined8 *)0x0) goto LAB_032d2640;
      }
      *(ushort *)((long)param_2 + 0x114) = *(ushort *)((long)param_2 + 0x114) | 4;
    }
LAB_032d2640:
    plVar1 = param_2 + 4;
    param_2 = (long *)param_2[5];
    while( true ) {
      if (param_2 == plVar1) {
        return;
      }
      local_18 = param_2 + -1;
      plVar5 = *(long **)(*(long *)(param_1 + 8) + 0x20);
      if (plVar5 == (long *)0x0) break;
      (**(code **)(*plVar5 + 0x30))(plVar5,&local_18);
      param_2 = (long *)param_2[1];
    }
    FUN_032d2700();
LAB_032d2694:
    iVar3 = __cxa_guard_acquire(PTR_DAT_04bc8f58);
    puVar2 = PTR_DAT_04bc8f30;
    if (iVar3 != 0) {
      if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar3 != 0)) {
        *(undefined8 *)puVar2 = 0;
        __cxa_guard_release(PTR_DAT_04bc8f38);
      }
      *(undefined **)PTR_DAT_04bc8f50 = puVar2;
      __cxa_guard_release(PTR_DAT_04bc8f58);
    }
  } while( true );
}


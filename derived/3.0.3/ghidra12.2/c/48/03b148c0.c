
void FUN_03b148c0(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  if (((*PTR_DAT_04bd1bd0 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd1bd0), puVar1 = PTR_DAT_04bc8f30, iVar2 != 0)) {
    if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar2 != 0)) {
      *(undefined8 *)puVar1 = 0;
      __cxa_guard_release(PTR_DAT_04bc8f38);
    }
    *(undefined **)PTR_DAT_04bd1bc8 = puVar1;
    __cxa_guard_release(PTR_DAT_04bd1bd0);
  }
  if (param_1 != (long *)0x0) {
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1);
    if (puVar3 != (undefined8 *)PTR_DAT_04bd1bc8) {
      do {
        puVar3 = (undefined8 *)*puVar3;
      } while (puVar3 != (undefined8 *)PTR_DAT_04bd1bc8 && puVar3 != (undefined8 *)0x0);
      if (puVar3 == (undefined8 *)0x0) goto LAB_03b14920;
    }
    *(undefined1 *)((long)param_1 + 0xd3) = 1;
  }
LAB_03b14920:
  for (plVar4 = (long *)param_1[5]; plVar4 != param_1 + 4; plVar4 = (long *)plVar4[1]) {
    FUN_03b148c0(plVar4 + -1);
  }
  return;
}


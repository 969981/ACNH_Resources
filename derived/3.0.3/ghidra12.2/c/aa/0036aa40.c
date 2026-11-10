
void FUN_0036aa40(long *param_1,long param_2)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  ushort uVar5;
  long *plVar6;
  
  if (((*PTR_DAT_04bc8f58 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc8f58), puVar2 = PTR_DAT_04bc8f30, iVar3 != 0)) {
    if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar3 != 0)) {
      *(undefined8 *)puVar2 = 0;
      __cxa_guard_release(PTR_DAT_04bc8f38);
    }
    *(undefined **)PTR_DAT_04bc8f50 = puVar2;
    __cxa_guard_release(PTR_DAT_04bc8f58);
  }
  if (param_1 != (long *)0x0) {
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1);
    if (puVar4 != (undefined8 *)PTR_DAT_04bc8f50) {
      do {
        puVar4 = (undefined8 *)*puVar4;
      } while (puVar4 != (undefined8 *)PTR_DAT_04bc8f50 && puVar4 != (undefined8 *)0x0);
      if (puVar4 == (undefined8 *)0x0) goto LAB_0036aadc;
    }
    uVar1 = *(ushort *)((long)param_1 + 0x114) >> 2 & 1;
    if (param_1[0x21] != param_2) {
      uVar1 = 1;
    }
    uVar5 = 4;
    if (uVar1 == 0) {
      uVar5 = 0;
    }
    *(ushort *)((long)param_1 + 0x114) = uVar5 | *(ushort *)((long)param_1 + 0x114) & 0xfffb;
    if (param_1[0x21] != param_2) {
      param_1[0x21] = param_2;
    }
  }
LAB_0036aadc:
  for (plVar6 = (long *)param_1[5]; plVar6 != param_1 + 4; plVar6 = (long *)plVar6[1]) {
    FUN_0036aa40(plVar6 + -1,param_2);
  }
  return;
}



void FUN_02db58f0(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = (long *)**(undefined8 **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if (((plVar4 != (long *)0x0) &&
      (uVar2 = (**(code **)*plVar4)(plVar4,PTR_DAT_04bc4e58), (uVar2 & 1) != 0)) &&
     ((long *)plVar4[0x36] != (long *)0x0)) {
    (**(code **)(*(long *)plVar4[0x36] + 0x50))();
    (**(code **)(*(long *)plVar4[0x36] + 0x20))((long *)plVar4[0x36],0);
    plVar3 = (long *)plVar4[0x36];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      (**(code **)(*plVar4 + 0xa8))(plVar4);
    }
  }
  *(undefined4 *)(param_1 + 600) = 1;
  return;
}



void FUN_02bb14c0(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  puVar4 = *(undefined8 **)(param_2 + 8);
  if (((*PTR_DAT_04bc51b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc51b0), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc51a8 = PTR_DAT_04bc51b8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc51b0);
  }
  if (((puVar4 != (undefined8 *)0x0) &&
      (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc51a8), (uVar2 & 1) != 0)) &&
     (plVar5 = (long *)puVar4[0x2f], plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x120))(plVar5,param_1,*(undefined8 *)(param_2 + 0x10));
    (**(code **)(*plVar5 + 0x128))(plVar5,*(undefined8 *)(param_2 + 0x10));
  }
  if (((DAT_05642ff8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05642ff8), iVar1 != 0)) {
    DAT_05642ff0 = '\x01';
    __cxa_guard_release(&DAT_05642ff8);
  }
  uVar3 = 5;
  if (DAT_05642ff0 == '\0') {
    uVar3 = 0;
  }
  uVar3 = FUN_0385ad38(param_1,*(undefined8 *)(param_2 + 0x10),uVar3,0);
  *(undefined8 *)(param_1 + 0x570) = uVar3;
  return;
}


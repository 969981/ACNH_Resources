
uint FUN_01256b54(long param_1,undefined4 param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long *local_30;
  char local_28;
  char local_27;
  undefined4 local_4;
  
  if ((*(int *)(param_1 + 0x60) - 1U < 2) && ((*(ushort *)(param_1 + 0x68) >> 6 & 1) != 0)) {
    local_4 = param_2;
    FUN_0071c8d0(&local_30,param_1 + 8,&local_4,0);
    plVar1 = local_30;
    if (local_30 != (long *)0x0) {
      if ((*PTR_DAT_04bbbb50 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(PTR_DAT_04bbbb50);
        if (iVar3 != 0) {
          *(undefined **)PTR_DAT_04bbbb48 = PTR_DAT_04bbbaf0 + 0x10;
          __cxa_guard_release(PTR_DAT_04bbbb50);
        }
      }
      uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bbbb48);
      if ((uVar4 & 1) == 0) {
        local_27 = '\0';
      }
    }
    uVar2 = 0;
    if (((local_30 == (long *)0x0) || (local_28 == '\0')) || (local_27 == '\0')) goto LAB_01256c14;
    if ((*(ushort *)(param_1 + 0x68) >> 0xd & 1) == 0) {
      plVar1 = local_30 + 0x4f + (ulong)*(uint *)(param_1 + 0x58) * 0x24;
      if (999 < *(uint *)(param_1 + 0x58)) {
        plVar1 = local_30 + 0x4f;
      }
      uVar2 = FUN_011c8f48(plVar1);
      goto LAB_01256c14;
    }
  }
  uVar2 = 0;
LAB_01256c14:
  return uVar2 & 1;
}


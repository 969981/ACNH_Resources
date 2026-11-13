
bool FUN_01257368(undefined4 param_1,long param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  long lVar5;
  long *local_40;
  char local_38;
  char local_37;
  
  if (1 < *(int *)(param_2 + 0x60) - 1U) {
    return false;
  }
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)((long)param_4 + 0xc);
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)((long)param_4 + 0x1c);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)((long)param_4 + 0x2c);
  FUN_0071c8d0(&local_40,param_2 + 8,param_3,0);
  plVar1 = local_40;
  if (local_40 != (long *)0x0) {
    if (((*PTR_DAT_04bbbb50 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bbbb50), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bbbb48 = PTR_DAT_04bbbaf0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbbb50);
    }
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bbbb48);
    if ((uVar3 & 1) == 0) {
      local_37 = '\0';
    }
  }
  if ((local_40 != (long *)0x0 && local_38 != '\0') && local_37 != '\0') {
    plVar1 = local_40 + 0x4f + (ulong)*(uint *)(param_2 + 0x58) * 0x24;
    if (999 < *(uint *)(param_2 + 0x58)) {
      plVar1 = local_40 + 0x4f;
    }
    if (*(int *)((long)plVar1 + 0xfc) != 4) {
      *(undefined4 *)(plVar1 + 0x17) = *(undefined4 *)((long)param_4 + 0xc);
      *(undefined4 *)((long)plVar1 + 0xbc) = *(undefined4 *)((long)param_4 + 0x1c);
      uVar4 = *(undefined4 *)((long)param_4 + 0x2c);
      *(undefined4 *)((long)plVar1 + 0xec) = param_1;
      *(undefined8 *)((long)plVar1 + 0xc4) = 0;
      *(undefined4 *)((long)plVar1 + 0xcc) = 0;
      *(undefined4 *)(plVar1 + 0x18) = uVar4;
      lVar5 = *param_4;
      plVar1[2] = param_4[1];
      plVar1[1] = lVar5;
      lVar5 = param_4[2];
      plVar1[4] = param_4[3];
      plVar1[3] = lVar5;
      lVar5 = param_4[4];
      plVar1[6] = param_4[5];
      plVar1[5] = lVar5;
    }
  }
  return (local_40 != (long *)0x0 && local_38 != '\0') && local_37 != '\0';
}


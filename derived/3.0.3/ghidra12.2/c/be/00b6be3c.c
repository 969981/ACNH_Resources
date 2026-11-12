
int FUN_00b6be3c(long param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 8) == 0) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = *(long **)(*(long *)(param_1 + 8) + 0x48);
  }
  if (((*PTR_DAT_04bb37d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  if ((plVar5 == (long *)0x0) ||
     (uVar4 = (**(code **)(*plVar5 + 0x20))(plVar5,PTR_DAT_04bb37d0), (uVar4 & 1) == 0)) {
    uVar2 = nn::os::GetSystemTick();
    uVar1 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 1;
    uVar2 = uVar1 ^ uVar1 * 0x800;
    uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2;
    uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
    uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 4;
    uVar2 = uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2 ^ uVar1;
  }
  else {
    uVar2 = *(uint *)(plVar5 + 0x51);
    *(undefined4 *)(plVar5 + 0x51) = *(undefined4 *)((long)plVar5 + 0x28c);
    uVar2 = uVar2 ^ uVar2 << 0xb;
    *(int *)((long)plVar5 + 0x28c) = (int)plVar5[0x52];
    uVar1 = *(uint *)((long)plVar5 + 0x294);
    *(uint *)(plVar5 + 0x52) = uVar1;
    uVar2 = uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2 ^ uVar1;
    *(uint *)((long)plVar5 + 0x294) = uVar2;
  }
  return param_3 - (int)((ulong)uVar2 * (ulong)(uint)(param_3 - param_2) >> 0x20);
}


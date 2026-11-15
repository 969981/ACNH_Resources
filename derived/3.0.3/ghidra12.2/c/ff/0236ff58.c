
void FUN_0236ff58(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined *local_30;
  char *pcStack_28;
  
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "PlayerStungByBee";
  FUN_0274bfe8(param_1 + 0x1ee8,&local_30,0);
  plVar3 = *(long **)(param_1 + 0x60);
  if (plVar3 != (long *)0x0) {
    if (((*PTR_DAT_04bb37a0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb37a0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb3798 = PTR_DAT_04bb37a8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37a0);
    }
    uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,PTR_DAT_04bb3798);
    if ((uVar2 & 1) != 0) {
      FUN_0234bdd4(plVar3,*(undefined1 *)((long)plVar3 + 0xc1aa));
      *(undefined2 *)(param_1 + 0xc24) = 0;
    }
  }
  return;
}



byte FUN_016fbfc8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long *local_30;
  char local_28;
  char local_26;
  undefined4 local_8;
  undefined4 uStack_4;
  
  local_8 = param_2;
  uStack_4 = param_1;
  FUN_0071cb58(&local_30,&uStack_4,&local_8,0);
  plVar3 = local_30;
  if (local_30 != (long *)0x0) {
    if (((DAT_05247a80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05247a80), iVar1 != 0)) {
      DAT_05247a78 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(&DAT_05247a80);
    }
    uVar2 = (**(code **)(*plVar3 + 0x20))(plVar3,&DAT_05247a78);
    if ((uVar2 & 1) == 0) {
      local_26 = '\0';
    }
  }
  if ((((local_30 != (long *)0x0) && (local_28 != '\0')) && (local_26 != '\0')) &&
     (plVar3 = (long *)local_30[0x12], plVar3 != (long *)0x0)) {
    if (((*PTR_DAT_04bb5b58 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb5b58), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb5b50 = PTR_DAT_04bb5b60 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5b58);
    }
    uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,PTR_DAT_04bb5b50);
    if ((uVar2 & 1) != 0) {
      return *(byte *)(plVar3[0x4f] + 0x18) >> 1 & 1;
    }
  }
  return 0;
}


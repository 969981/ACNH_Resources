
undefined8 FUN_033cdabc(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_05744038 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_05744038);
    if (iVar1 != 0) {
      DAT_05744030 = PTR_DAT_04bb3028 + 0x10;
      __cxa_guard_release(&DAT_05744038);
    }
  }
  if ((undefined **)param_2 == &DAT_05744030) {
    return 1;
  }
  uVar2 = FUN_006fea14(param_2);
  return uVar2;
}


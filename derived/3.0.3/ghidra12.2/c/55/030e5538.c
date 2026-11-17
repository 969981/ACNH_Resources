
undefined8 FUN_030e5538(undefined8 param_1,undefined *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_04bc7628 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bc7628);
    if (iVar1 != 0) {
      *(undefined **)PTR_DAT_04bc7620 = PTR_DAT_04bc4d20 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc7628);
    }
  }
  if (param_2 == PTR_DAT_04bc7620) {
    return 1;
  }
  uVar2 = FUN_030bbe3c(param_2);
  return uVar2;
}


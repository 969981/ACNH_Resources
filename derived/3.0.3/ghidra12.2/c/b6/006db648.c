
uint FUN_006db648(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  
  nn::os::GetSystemTick();
  uVar2 = FUN_006d63a4(param_1);
  uVar1 = (uint)(byte)*PTR_DAT_04bb2958;
  if ((uVar2 & 0xff) != 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}



ulong FUN_006967a0(undefined8 *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined1 local_2c [4];
  ulong local_28;
  
  if (-1 < (long)param_2) {
    uVar2 = FUN_006965e8(param_1,param_2);
    return uVar2;
  }
  local_2c[0] = 0xcf;
  uVar2 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,local_2c,1);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  uVar2 = (param_2 & 0xff00ff00ff00ff00) >> 8 | (param_2 & 0xff00ff00ff00ff) << 8;
  uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
  local_28 = uVar2 >> 0x20 | uVar2 << 0x20;
  uVar1 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,&local_28,8);
  return (ulong)(uVar1 & 1);
}


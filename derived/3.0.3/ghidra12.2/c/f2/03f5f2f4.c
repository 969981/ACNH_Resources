
ulong FUN_03f5f2f4(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  
  uVar1 = param_1[(param_2 & 0xff) * 0x10 + (ulong)(param_3 >> 0xc & 0xf) + 4];
  if (99 < uVar1) {
    return (ulong)*(byte *)(uVar1 + ((ulong)param_3 & 0xfff));
  }
  switch(uVar1) {
  case 1:
    break;
  default:
    *(int *)param_1[0x280f] = *(int *)param_1[0x280f] + 1;
    return (ulong)*(byte *)((long)param_1 + 0xc);
  case 7:
    if ((param_3 & 0xfff) < 0x800) {
      return (ulong)*(byte *)(param_1[3] + (ulong)(param_3 & 0xfff));
    }
    *(int *)param_1[0x280f] = *(int *)param_1[0x280f] + 1;
    return (ulong)*(byte *)((long)param_1 + 0xc);
  case 8:
    return (ulong)*(byte *)(param_1[0x2809] +
                           ((ulong)*(uint *)(param_1 + 0x280c) &
                           ((ulong)param_3 & 0xffff | (param_2 & 3) << 0x10)));
  case 9:
                    /* WARNING: Could not recover jumptable at 0x03f5f3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 8))();
    return uVar1;
  case 10:
                    /* WARNING: Could not recover jumptable at 0x03f5f3cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)*param_1)(param_1,param_3);
    return uVar1;
  }
  if ((param_3 >> 9 & 0x7f) < 0x11) {
    return (ulong)*(byte *)((long)param_1 + 0xc);
  }
                    /* WARNING: Could not recover jumptable at 0x03f5f354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_3);
  return uVar1;
}


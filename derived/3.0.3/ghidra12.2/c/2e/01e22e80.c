
ulong FUN_01e22e80(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *param_1;
  if (uVar1 == 0) {
    return 0;
  }
  if (param_2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01e22ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)*param_2)(param_2,param_1);
    return uVar2;
  }
  uVar2 = (ulong)uVar1 & 0x3fffff;
  if (uVar2 == 0xa073) {
    return 1;
  }
  uVar3 = 1;
  uVar4 = (ulong)uVar1 & 0x3ff1ff;
  if ((uVar4 != 0xc073) && (uVar4 != 0x16073)) {
    uVar2 = uVar2 - 0x10073;
    uVar3 = uVar2 >> 0xc;
    if (7 < (uVar3 | uVar2 << 0x34)) {
      return 0;
    }
    uVar3 = (ulong)(0xb1U >> (ulong)((uint)uVar3 & 0x1f) & 1);
  }
  return uVar3;
}


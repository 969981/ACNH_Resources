
ulong FUN_03f83578(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  
  if (*(uint *)((long)param_1 + 0x14) < param_2) {
    uVar2 = 0;
  }
  else {
    uVar4 = (ulong)param_2;
    uVar2 = (**(code **)(*(long *)*param_1 + 0x10))();
    plVar3 = (long *)*param_1;
    if ((uVar2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x03f835fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 8))(plVar3,uVar4);
      return uVar2;
    }
    uVar1 = (**(code **)(*plVar3 + 0x18))(plVar3,uVar4);
    uVar2 = (ulong)((uVar1 & 3) << 6 | (*(byte *)((long)param_1 + uVar4 + 0xf) & 3) << 4 | 1);
  }
  return uVar2;
}


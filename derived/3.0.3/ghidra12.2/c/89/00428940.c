
void FUN_00428940(undefined8 *param_1,ulong *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong *puVar1;
  uint uVar2;
  
  puVar1 = param_2;
  while( true ) {
    uVar2 = (uint)*puVar1;
    if ((uVar2 >> 6 & 1) != 0) break;
    if (((*puVar1 & 1) != 0) || (puVar1 = (ulong *)puVar1[1], puVar1 == (ulong *)0x0))
    goto LAB_004289e8;
  }
  if ((puVar1 != (ulong *)0x0) &&
     (uVar2 = (uVar2 & 0x3f) - (uVar2 >> 1 & 0x15),
     uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333),
     UNRECOVERED_JUMPTABLE =
          (code *)puVar1[(ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    FUN_0044e160(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x004289e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*param_1,param_2,1);
    return;
  }
LAB_004289e8:
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}


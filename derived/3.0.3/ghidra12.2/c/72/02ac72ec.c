
undefined8 FUN_02ac72ec(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 0x528);
  uVar2 = (**(code **)(*(long *)(param_1 + 0x528) + 8))(puVar1);
  if ((uVar2 & 1) == 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x02ac7324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)*puVar1)(puVar1);
  return uVar3;
}



void FUN_003b3cc4(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_04bd0ab8;
  if (*(short *)(param_1 + 0x52) != -1 && *(long *)(param_1 + 0x58) != 0) {
    puVar1 = PTR_PTR_04bd0ac0;
  }
                    /* WARNING: Could not recover jumptable at 0x003b3cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar1 + ((ulong)*(byte *)(param_1 + 9) & 3) * 0x10))();
  return;
}


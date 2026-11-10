
void FUN_001e2b80(long param_1)

{
  undefined8 *puVar1;
  
  *(undefined2 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  puVar1 = *(undefined8 **)(*(long *)(param_1 + 0xb0) + 0x10);
                    /* WARNING: Could not recover jumptable at 0x001e2ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar1)(puVar1,*(undefined4 *)(param_1 + 0x9c));
  return;
}


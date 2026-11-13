
void FUN_01485d28(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0073da08(param_1,2);
  if (((uVar1 & 1) == 0) || (*(long *)(param_1 + 0x1138) == 0)) {
    return;
  }
  FUN_038501b0(0,*(long *)(param_1 + 0x1138),2);
  FUN_0384fab0(*(undefined8 *)(param_1 + 0x1138),2,1);
  return;
}


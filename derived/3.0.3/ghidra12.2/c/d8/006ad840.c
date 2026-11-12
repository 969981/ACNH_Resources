
void FUN_006ad840(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 600) = param_2[1];
  *(undefined8 *)(param_1 + 0x250) = uVar1;
  return;
}


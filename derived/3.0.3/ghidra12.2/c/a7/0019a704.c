
void FUN_0019a704(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_18;
  
  FUN_00187810(&local_18);
  *(undefined8 *)(param_1 + 0x68) = local_18;
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  return;
}


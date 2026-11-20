
void FUN_03d1c388(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_38 [2];
  undefined2 local_36;
  undefined2 local_34 [2];
  
  lVar1 = param_2 + 0x100;
  *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0x108);
  (**(code **)(*(long *)(param_2 + 0x100) + 0x20))(local_34,lVar1);
  (**(code **)(*(long *)(param_2 + 0x100) + 0x20))(auStack_38,lVar1);
  *(undefined2 *)(param_1 + 0x10) = local_34[0];
  *(undefined2 *)(param_1 + 0x12) = local_36;
  uVar2 = (**(code **)(*(long *)(param_2 + 0x100) + 0x28))(lVar1);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  return;
}


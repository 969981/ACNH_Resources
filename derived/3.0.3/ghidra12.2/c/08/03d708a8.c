
void FUN_03d708a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  (**(code **)(*(long *)(param_1 + 0x30) + 0x18))();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  (**(code **)(*(long *)(param_1 + 0x68) + 0x18))((long *)(param_1 + 0x68));
  FUN_038d1270(param_2,"%s/%s",uVar1,*(undefined8 *)(param_1 + 0x70));
  return;
}


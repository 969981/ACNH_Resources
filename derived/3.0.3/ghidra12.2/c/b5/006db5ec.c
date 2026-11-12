
void FUN_006db5ec(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x370);
  (**(code **)(*(long *)(param_1 + 0x378) + 0x18))(param_1 + 0x378);
  FUN_00698340(param_2,param_1 + 0x50,uVar1,*(undefined8 *)(param_1 + 0x380),
               *(long *)(param_1 + 0x30) + 8,*(long *)(param_1 + 0x28) + 0x20);
  return;
}



void FUN_01923b88(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x528) + 0xf0))(param_1 + 0x528);
  *puVar2 = *(undefined4 *)(param_2 + 0x10);
  *(uint *)(param_1 + 0x548) = *(uint *)(param_1 + 0x548) | 0x1000000;
  uVar1 = *(undefined1 *)(param_2 + 0x14);
  puVar3 = (undefined1 *)(**(code **)(*(long *)(param_1 + 0x590) + 0xf0))(param_1 + 0x590);
  *puVar3 = uVar1;
  *(uint *)(param_1 + 0x5b0) = *(uint *)(param_1 + 0x5b0) | 0x1000000;
  return;
}


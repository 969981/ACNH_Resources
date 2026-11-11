
undefined4 FUN_003a4c1c(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x88) = uVar2;
  *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) & 0xffffff9f;
  uVar1 = FUN_003a49f0(param_1,uVar2);
  (**(code **)(PTR_PTR_04bd0a68 + ((ulong)(*(uint *)(param_1 + 0x7c) >> 5) & 3) * 0x10))
            (param_1,uVar2);
  return uVar1;
}


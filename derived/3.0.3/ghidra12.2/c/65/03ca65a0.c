
undefined8 FUN_03ca65a0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = (**(code **)(**(long **)(param_2 + 0xc9) + 0x28))();
  FUN_03ca6490(uVar2,uVar1,0);
  return 0;
}


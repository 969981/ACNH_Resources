
void FUN_01bbdd58(long *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar1 = (**(code **)(*param_1 + 0x48))();
  uVar2 = (**(code **)(*param_1 + 0x58))(param_1);
  uVar3 = FUN_01bb3518(param_1 + 0x47,uVar1,uVar2);
  FUN_01bbda80(param_1,uVar3);
  return;
}


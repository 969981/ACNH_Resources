
undefined8
thunk_FUN_003c4960(long *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_003c5b84();
  lVar2 = FUN_003cbb70(uVar1,0x40,1);
  *(undefined4 *)(lVar2 + 0x18) = param_3;
  *(undefined4 *)(lVar2 + 8) = 0x46;
  *(undefined8 *)(lVar2 + 0x20) = param_2;
  *(undefined8 *)(lVar2 + 0x28) = param_4;
  *(undefined8 *)(lVar2 + 0x30) = param_5;
  *(long **)(lVar2 + 0x38) = param_1;
  FUN_003cc15c(uVar1,lVar2);
  (**(code **)(*param_1 + 0x18))(param_1,1);
  return 1;
}


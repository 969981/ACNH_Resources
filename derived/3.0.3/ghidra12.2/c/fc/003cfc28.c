
void FUN_003cfc28(long *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_003c5b84();
  lVar2 = FUN_003cbb70(uVar1,0x28,1);
  *(undefined4 *)(lVar2 + 8) = 4;
  uVar3 = (**(code **)(*param_1 + 0x40))(param_1);
  *(undefined8 *)(lVar2 + 0x18) = uVar3;
  *(undefined1 *)(lVar2 + 0x20) = param_2;
  FUN_003cc15c(uVar1,lVar2);
  return;
}


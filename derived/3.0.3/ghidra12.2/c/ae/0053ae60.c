
void FUN_0053ae60(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_0053ad50();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  *(undefined4 *)(lVar1 + 0x48) = 0;
  *(undefined1 *)(lVar1 + 0x4c) = 0;
  return;
}


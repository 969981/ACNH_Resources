
void FUN_001595ec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x1e8);
  *(undefined8 *)(lVar1 + 0x228) = 0;
  *(undefined1 *)(lVar1 + 0x21c) = 0;
  *(undefined4 *)(lVar1 + 0x238) = 0xffffffff;
  *(undefined8 *)(lVar1 + 0x240) = 0;
  *(undefined8 *)(lVar1 + 0x248) = 0;
  *(undefined2 *)(lVar1 + 0x250) = 0;
  *(undefined8 *)(lVar1 + 600) = *(undefined8 *)(param_1 + 0x1150);
  uVar2 = *(undefined8 *)(param_1 + 0xc30);
  *(undefined8 *)(lVar1 + 0x268) = 0;
  *(undefined8 *)(lVar1 + 0x260) = uVar2;
  return;
}


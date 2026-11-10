
void FUN_0019742c(long param_1)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(lVar2 + 0x18) = 0;
  bVar1 = *(byte *)(lVar2 + 0x30);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined2 *)(lVar2 + 0x31) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(byte *)(lVar2 + 0x30) = bVar1 & 4;
  return;
}


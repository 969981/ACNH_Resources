
void FUN_032c3460(long param_1)

{
  long lVar1;
  
  FUN_032c2ec0(*(undefined8 *)(param_1 + 0x20),param_1 + 0x30);
  FUN_032c2ec0(*(undefined8 *)(param_1 + 0x28),param_1 + 0x40);
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    FUN_032c3460();
  }
  return;
}


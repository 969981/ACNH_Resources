
void FUN_003b6d00(long param_1)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 200); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x38)) {
    *(undefined4 *)(lVar1 + 0x34) = 3;
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(long *)(param_1 + 200) = 0;
  return;
}


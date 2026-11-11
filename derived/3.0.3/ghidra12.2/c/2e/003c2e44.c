
void FUN_003c2e44(long param_1)

{
  long lVar1;
  
  *(undefined4 *)(param_1 + 4) = 1;
  if (*(long *)(param_1 + 0xd8) != 0) {
    lVar1 = FUN_03b38a74();
    FUN_003b7a10(lVar1 + 0x530,*(undefined8 *)(param_1 + 0xd8));
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  return;
}


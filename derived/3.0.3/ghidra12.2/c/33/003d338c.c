
void FUN_003d338c(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x3b) = 1;
  if (*(char *)(param_1 + 0x16e) != '\0') {
    uVar1 = FUN_003ca198();
    FUN_003ca594(uVar1,param_1 + 0xd8);
    *(undefined1 *)(param_1 + 0x16e) = 0;
  }
  if (*(char *)(param_1 + 0x39) != '\0') {
    *(undefined1 *)(param_1 + 0x39) = 0;
  }
  return;
}



void FUN_03b4c504(char *param_1)

{
  long lVar1;
  
  if (*param_1 != '\0') {
    if (*(long *)(param_1 + 0xf0) != 0) {
      FUN_03b7f690();
    }
    if (DAT_05aebc10 != 0) {
      FUN_03b6d3d4();
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_03bb05b8();
    }
    if (*(char *)(*(long *)(param_1 + 8) + 0x128) == '\0') {
      FUN_03b3df50();
      lVar1 = *(long *)(param_1 + 0x10);
    }
    else {
      FUN_03b3da90();
      lVar1 = *(long *)(param_1 + 0x10);
    }
    if (lVar1 != 0) {
      FUN_03b41c5c();
    }
    if (*(long *)(param_1 + 0x118) != 0) {
      FUN_03b7e5f0();
    }
    if (*(long *)(param_1 + 0x130) != 0) {
      FUN_03b7b9b0();
    }
    if (*(long *)(param_1 + 0xd8) != 0) {
      FUN_03b7a9b0();
    }
    if (*(long *)(param_1 + 0xf8) != 0) {
      FUN_03b7b580();
      return;
    }
  }
  return;
}


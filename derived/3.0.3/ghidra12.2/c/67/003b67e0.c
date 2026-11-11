
void FUN_003b67e0(long param_1)

{
  long lVar1;
  undefined1 uStack_11;
  
  if (*(char *)(param_1 + 0x950) != '\0') {
    FUN_003b4ea8(&uStack_11);
    for (lVar1 = *(long *)(param_1 + 0x898); lVar1 != param_1 + 0x890; lVar1 = *(long *)(lVar1 + 8))
    {
      FUN_003c4a60(lVar1 + -0x40);
    }
    FUN_003b4ec0(&uStack_11);
    FUN_003c4a60(param_1 + 0x558);
  }
  return;
}


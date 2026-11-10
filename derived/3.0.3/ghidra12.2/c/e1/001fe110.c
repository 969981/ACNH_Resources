
void FUN_001fe110(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  
  cVar2 = *(char *)(param_1 + 0x69);
  *(undefined1 *)(param_2 + 8) = 0;
  if (cVar2 == '\0') {
    lVar1 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar1 + 0x18) == *(long *)(param_1 + 0x18)) {
      *(undefined1 *)(param_1 + 8) = 1;
      *(undefined1 *)(param_2 + 8) = 0;
      cVar2 = *(char *)(param_1 + 8);
    }
    else {
      *(undefined1 *)(param_2 + 8) =
           *(undefined1 *)
            (*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 0x28) + *(long *)(param_1 + 0x18));
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
      cVar2 = *(char *)(param_1 + 8);
    }
    if (cVar2 == '\0') {
      if ((ulong)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) - *(long *)(param_1 + 0x18)) < 4) {
        *(undefined1 *)(param_1 + 8) = 1;
        return;
      }
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 4;
      return;
    }
  }
  return;
}


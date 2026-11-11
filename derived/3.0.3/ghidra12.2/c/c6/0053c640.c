
void FUN_0053c640(long param_1,ulong param_2)

{
  long lVar1;
  char cVar2;
  
  cVar2 = *(char *)(param_1 + 0x268);
  if (((param_2 & 1) == 0) || (*(char *)(*(long *)(param_1 + 0x18) + 0x13d) == '\0')) {
    *(undefined1 *)(param_1 + 0x268) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x268) = 1;
    if ((*(char *)(param_1 + 0x269) != '\0') && (*(long *)(param_1 + 0x198) != 0)) {
      lVar1 = *(long *)(param_1 + 0x18) + 0x140;
      if (*(long *)(param_1 + 600) != 0) {
        lVar1 = *(long *)(param_1 + 600);
      }
      *(bool *)(*(long *)(param_1 + 0x198) + 0x9d) = *(char *)(lVar1 + 0xc) != '\0';
      if (*(char *)(*(long *)(param_1 + 0x198) + 0x9d) != '\0') {
        *(undefined1 *)(*(long *)(param_1 + 0x198) + 0x9c) = *(undefined1 *)(lVar1 + 0xd);
        *(undefined4 *)(*(long *)(param_1 + 0x198) + 0x98) = *(undefined4 *)(lVar1 + 0x10);
      }
    }
  }
  if ((cVar2 != '\0') == (*(char *)(param_1 + 0x268) != '\0')) {
    return;
  }
  FUN_0053b440(*(long *)(param_1 + 0x270) + 0x100,param_1,*(char *)(param_1 + 0x268) != '\0');
  return;
}


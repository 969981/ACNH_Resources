
long FUN_00351c78(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    return 0;
  }
  if ((*(char *)(lVar1 + 0x39) != '\x01') &&
     ((*(long *)(lVar1 + 0x20) == 0 || (*(char *)(*(long *)(lVar1 + 0x20) + 0x39) != '\x01')))) {
    *(bool *)(param_1 + 0x39) = *(char *)(param_1 + 0x39) == '\0';
    *(bool *)(lVar1 + 0x39) = *(char *)(lVar1 + 0x39) == '\0';
    *(bool *)(*(long *)(param_1 + 0x28) + 0x39) =
         *(char *)(*(long *)(param_1 + 0x28) + 0x39) == '\0';
    lVar2 = *(long *)(param_1 + 0x28);
    lVar1 = *(long *)(lVar2 + 0x20);
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0x39) == '\x01')) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar1 + 0x28);
      *(long *)(lVar1 + 0x28) = lVar2;
      *(undefined1 *)(lVar1 + 0x39) = *(undefined1 *)(lVar2 + 0x39);
      *(undefined1 *)(lVar2 + 0x39) = 1;
      *(long *)(param_1 + 0x28) = lVar1;
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar1 + 0x20);
      *(long *)(lVar1 + 0x20) = param_1;
      *(undefined1 *)(lVar1 + 0x39) = *(undefined1 *)(param_1 + 0x39);
      *(undefined1 *)(param_1 + 0x39) = 1;
      *(bool *)(lVar1 + 0x39) = *(char *)(lVar1 + 0x39) == '\0';
      *(bool *)(*(long *)(lVar1 + 0x20) + 0x39) = *(char *)(*(long *)(lVar1 + 0x20) + 0x39) == '\0';
      *(bool *)(*(long *)(lVar1 + 0x28) + 0x39) = *(char *)(*(long *)(lVar1 + 0x28) + 0x39) == '\0';
      lVar2 = FUN_00351c78(*(undefined8 *)(lVar1 + 0x20));
      lVar3 = *(long *)(lVar1 + 0x28);
      *(long *)(lVar1 + 0x20) = lVar2;
      goto joined_r0x00351d94;
    }
  }
  lVar2 = FUN_00351c78(*(undefined8 *)(param_1 + 0x20));
  lVar3 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 0x20) = lVar2;
  lVar1 = param_1;
joined_r0x00351d94:
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0x39) == '\x01')) {
    *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar3 + 0x20);
    *(long *)(lVar3 + 0x20) = lVar1;
    *(undefined1 *)(lVar3 + 0x39) = *(undefined1 *)(lVar1 + 0x39);
    *(undefined1 *)(lVar1 + 0x39) = 1;
    lVar2 = *(long *)(lVar3 + 0x20);
    lVar1 = lVar3;
  }
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x39) != '\x01') {
      return lVar1;
    }
    if ((*(long *)(lVar2 + 0x20) == 0) || (*(char *)(*(long *)(lVar2 + 0x20) + 0x39) != '\x01')) {
      lVar3 = lVar2;
    }
    else {
      *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar2 + 0x28);
      *(long *)(lVar2 + 0x28) = lVar1;
      *(undefined1 *)(lVar2 + 0x39) = *(undefined1 *)(lVar1 + 0x39);
      *(undefined1 *)(lVar1 + 0x39) = 1;
      lVar3 = *(long *)(lVar2 + 0x20);
      if (lVar3 == 0) {
        return lVar2;
      }
      lVar1 = lVar2;
      if (*(char *)(lVar3 + 0x39) != '\x01') {
        return lVar2;
      }
    }
    if ((*(long *)(lVar1 + 0x28) != 0) && (*(char *)(*(long *)(lVar1 + 0x28) + 0x39) == '\x01')) {
      *(bool *)(lVar1 + 0x39) = *(char *)(lVar1 + 0x39) == '\0';
      *(bool *)(lVar3 + 0x39) = *(char *)(lVar3 + 0x39) == '\0';
      *(bool *)(*(long *)(lVar1 + 0x28) + 0x39) = *(char *)(*(long *)(lVar1 + 0x28) + 0x39) == '\0';
      return lVar1;
    }
  }
  return lVar1;
}


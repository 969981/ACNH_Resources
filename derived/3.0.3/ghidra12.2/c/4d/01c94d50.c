
undefined8 * FUN_01c94d50(long param_1,char *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  
  cVar2 = *param_2;
  if (cVar2 == -1) {
    return &DAT_053565d0;
  }
  if ((*(char *)(param_1 + 0x28) == cVar2) && (*(char *)(param_1 + 0x20) == '\0')) {
    return (undefined8 *)(param_1 + 0x18);
  }
  if ((*(char *)(param_1 + 0x48) == cVar2) && (*(char *)(param_1 + 0x40) == '\0')) {
    return (undefined8 *)(param_1 + 0x38);
  }
  if ((*(char *)(param_1 + 0x68) == cVar2) && (*(char *)(param_1 + 0x60) == '\0')) {
    return (undefined8 *)(param_1 + 0x58);
  }
  if ((*(char *)(param_1 + 0x88) == cVar2) && (*(char *)(param_1 + 0x80) == '\0')) {
    return (undefined8 *)(param_1 + 0x78);
  }
  if ((*(char *)(param_1 + 0xa8) == cVar2) && (*(char *)(param_1 + 0xa0) == '\0')) {
    return (undefined8 *)(param_1 + 0x98);
  }
  if ((*(char *)(param_1 + 200) == cVar2) && (*(char *)(param_1 + 0xc0) == '\0')) {
    return (undefined8 *)(param_1 + 0xb8);
  }
  if ((*(char *)(param_1 + 0xe8) == cVar2) && (*(char *)(param_1 + 0xe0) == '\0')) {
    return (undefined8 *)(param_1 + 0xd8);
  }
  puVar1 = (undefined8 *)(param_1 + 0xf8);
  if (*(char *)(param_1 + 0x100) != '\0' || *(char *)(param_1 + 0x108) != cVar2) {
    puVar1 = &DAT_053565d0;
  }
  return puVar1;
}


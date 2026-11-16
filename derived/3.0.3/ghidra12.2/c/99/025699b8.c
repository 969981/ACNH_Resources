
void FUN_025699b8(long param_1)

{
  uint *puVar1;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    puVar1 = (uint *)(param_1 + 0x20);
    *(undefined8 *)puVar1 = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = *puVar1 & 0xbfffffff;
    *(undefined1 *)(param_1 + 0x28) = 1;
    return;
  }
  return;
}


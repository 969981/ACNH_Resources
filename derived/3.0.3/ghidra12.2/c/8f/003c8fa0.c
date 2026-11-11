
void FUN_003c8fa0(long param_1)

{
  char cVar1;
  ulong uVar2;
  
  cVar1 = *(char *)(param_1 + 0x18);
  for (uVar2 = 0; (cVar1 != '\0' && (uVar2 < **(uint **)(param_1 + 8))); uVar2 = uVar2 + 1) {
    *(undefined8 *)(*(long *)(param_1 + 0x10) + uVar2 * 8) = 0;
    cVar1 = *(char *)(param_1 + 0x18);
  }
  return;
}


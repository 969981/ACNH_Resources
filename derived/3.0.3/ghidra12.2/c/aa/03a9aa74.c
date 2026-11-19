
void FUN_03a9aa74(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if ((((*(char *)(*(long *)(param_1 + 8) + 0x8b0) != '\0') &&
       (lVar1 = *(long *)(param_1 + 0x288), lVar1 != 0)) && (*(char *)(lVar1 + 0x7d8) != '\0')) &&
     ((*(uint *)(lVar1 + 8) >> (ulong)(*(byte *)(param_3 + 8) & 0x1f) & 1) != 0)) {
    FUN_03a2e270();
  }
  return;
}


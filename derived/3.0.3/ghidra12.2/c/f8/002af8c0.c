
void FUN_002af8c0(long param_1,long param_2,uint param_3)

{
  if ((*(char *)(param_2 + 0x10) == '\0') ||
     ((*(uint *)(param_2 + ((ulong)(*(byte *)(param_1 + 0x10) >> 3) & 0x1c) + 0x14) >>
       (ulong)(*(byte *)(param_1 + 0x10) & 0x1f) & 1) != 0)) {
    param_1 = param_1 + (ulong)(param_3 >> 5 & 7) * 4;
    *(uint *)(param_1 + 0x674) =
         *(uint *)(param_1 + 0x674) & (1 << (ulong)(param_3 & 0x1f) ^ 0xffffffffU);
  }
  return;
}


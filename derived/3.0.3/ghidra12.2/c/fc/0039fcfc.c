
uint FUN_0039fcfc(long param_1,long param_2)

{
  return (*(uint *)(param_1 + 0x20) & *(uint *)(param_2 + (ulong)*(byte *)(param_1 + 0x1e) * 4)) >>
         (ulong)(*(byte *)(param_1 + 0x1f) & 0x1f);
}



void FUN_01ea5bd8(long param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  if ((*(byte *)(param_1 + 0xad5b) >> 4 & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    uVar1 = *(byte *)(lVar2 + 0x290) & 0xffffffef;
    *(char *)(lVar2 + 0x290) = (char)uVar1;
    uVar3 = 3;
    if (((uVar1 >> 3 & 1) == 0) && (uVar3 = 2, (uVar1 >> 2 & 1) == 0)) {
      uVar3 = uVar1 >> 1 & 1;
    }
    *(uint *)(lVar2 + 0x294) = uVar3;
    *(ulong *)(param_1 + 0xad58) = *(ulong *)(param_1 + 0xad58) & 0xffffffffefffffff;
  }
  return;
}


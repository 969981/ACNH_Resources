
bool FUN_008a6b24(byte *param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  long lVar5;
  
  if ((*param_1 >> 2 & 0xf) < 5) {
    return false;
  }
  if ((DAT_0537d558 == (long *)0x0) || (*(uint *)(DAT_0537d558 + 0x10) < 2)) {
    return true;
  }
  lVar5 = *DAT_0537d558;
  bVar2 = *(byte *)(lVar5 + 0x473);
  pbVar4 = PTR_DAT_04bc1220;
  if ((long)(char)bVar2 != 0xffffffffffffffff) {
    puVar1 = (uint *)(lVar5 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
    if (7 < bVar2) {
      puVar1 = (uint *)(lVar5 + 0x48);
    }
    if ((*puVar1 & 8) != 0) {
      pbVar4 = (byte *)(lVar5 + 0x473);
    }
  }
  if (*(int *)(DAT_04cd19d8 + 0x15c) == 0) {
    return (bool)(param_1[0x88] >> (ulong)(*pbVar4 & 0x1f) & 1);
  }
  uVar3 = (uint)param_1[0x88] - (param_1[0x88] >> 1 & 0x55555555);
  uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
  uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
  uVar3 = uVar3 + (uVar3 >> 8);
  return (uVar3 + (uVar3 >> 0x10) & 0x3f) != 0;
}


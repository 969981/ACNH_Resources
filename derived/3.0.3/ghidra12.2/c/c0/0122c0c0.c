
int FUN_0122c0c0(uint param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  if (DAT_05146e18 == '\0') {
    return 0;
  }
  lVar5 = 0;
  iVar4 = 0;
  puVar1 = PTR_DAT_04bbbb68 + (ulong)param_1 * 0x1008;
  if (0x12 < param_1) {
    puVar1 = PTR_DAT_04bbbb68;
  }
  do {
    lVar3 = lVar5 + 8;
    lVar5 = lVar5 + 4;
    uVar2 = *(uint *)(puVar1 + lVar3) - (*(uint *)(puVar1 + lVar3) >> 1 & 0x55555555);
    uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
    uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
    uVar2 = uVar2 + (uVar2 >> 8);
    iVar4 = (uVar2 + (uVar2 >> 0x10) & 0x3f) + iVar4;
  } while (lVar5 != 0x1000);
  return iVar4;
}


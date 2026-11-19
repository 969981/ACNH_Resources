
long FUN_03be8e5c(undefined8 param_1,uint param_2,uint param_3)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  
  puVar5 = (ulong *)(*(ulong *)PTR_DAT_04bb38c8 | (ulong)param_2);
  puVar1 = puVar5 + 0x20000000;
  if (*(ulong *)PTR_DAT_04bb38c0 <= (ulong)param_2) {
    puVar1 = puVar5;
  }
  if ((*puVar1 >> ((ulong)param_3 & 0x3f) & 1) == 0) {
    return 0;
  }
  uVar4 = *puVar1 & 0xffffffffffffffffU >> (~(ulong)param_3 & 0x3f);
  uVar2 = (int)uVar4 - ((uint)(uVar4 >> 1) & 0x55555555);
  uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
  uVar3 = (uint)(uVar4 >> 0x20);
  uVar3 = uVar3 - (uVar3 >> 1 & 0x55555555);
  uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
  uVar2 = uVar2 + (uVar2 >> 8);
  uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
  uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
  uVar3 = uVar3 + (uVar3 >> 8);
  return (long)puVar1 +
         (long)(int)((uVar2 + (uVar2 >> 0x10) & 0x3f) + (uVar3 + (uVar3 >> 0x10) & 0x3f) + -1) * 4 +
         8;
}


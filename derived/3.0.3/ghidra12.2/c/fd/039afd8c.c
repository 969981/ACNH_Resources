
void FUN_039afd8c(long *param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  
  if (*(uint *)(param_2 + 0x48) <= param_3) {
    param_3 = 0;
  }
  puVar3 = (uint *)(*(long *)(param_2 + 0x50) + (long)(int)param_3 * 0x30);
  if (((short)*puVar3 == -1 || *(short *)((long)puVar3 + 2) == -1) ||
     (uVar1 = *puVar3, (~uVar1 & 0xffff) == 0 || (uVar1 & 0xffff0000) == 0xffff0000)) {
    lVar4 = *(long *)(PTR_PTR_04bb2238 + 8);
    *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
    param_1[1] = lVar4;
    return;
  }
  uVar2 = (int)uVar1 >> 0x10;
  if (uVar1 << 0x10 != 0) {
    uVar2 = uVar2 + *(ushort *)(param_2 + (long)((int)(uVar1 << 0x10) >> 0x10) * 2 + 0x9e);
  }
  if (*(uint *)(param_2 + 0x90) <= uVar2) {
    uVar2 = 0;
  }
  lVar4 = *(long *)(*(long *)(*(long *)(param_2 + 0x98) + (long)(int)uVar2 * 0x18) + 0x10);
  *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
  param_1[1] = lVar4;
  return;
}


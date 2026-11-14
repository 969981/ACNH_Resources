
bool FUN_01afceb4(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  bool bVar5;
  uint *puVar6;
  uint *puVar7;
  uint local_20 [2];
  int local_18;
  
  puVar6 = *(uint **)(param_1 + 0x10);
  if (puVar6 == (uint *)0x0) {
    local_20[0] = 0xbc;
  }
  else {
    uVar3 = *puVar6;
    if (uVar3 != 0 && puVar6 != (uint *)(ulong)uVar3) {
      puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar3);
      if (((*puVar7 != 0) && (uVar3 = puVar7[1], uVar3 != 0)) && ((ulong)(ushort)puVar7[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar3 != 0) {
            uVar2 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar3);
          }
          if (*puVar7 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_05326ec0) &&
             (uVar4 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), local_20[0] = (uint)uVar4,
             uVar4 < 0xbd)) goto LAB_01afcf4c;
        }
      }
    }
    local_20[0] = 0;
  }
LAB_01afcf4c:
  if (((local_20[0] & 0xfffffffd) == 0xa4) && ((*(byte *)(param_1 + 10) >> 3 & 1) == 0)) {
    local_18 = 0;
    FUN_01afb1a0(param_1,local_20);
    bVar5 = local_18 == 4;
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}


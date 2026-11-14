
bool FUN_01b0b03c(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  bool bVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 local_1c [2];
  uint local_14;
  
  local_1c[0] = 0xb8;
  puVar6 = *(uint **)(param_1 + 0x10);
  if (puVar6 == (uint *)0x0) {
    local_14 = 0xbc;
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
             (uVar4 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), local_14 = (uint)uVar4,
             uVar4 < 0xbd)) goto LAB_01b0b0e8;
        }
      }
    }
    local_14 = 0;
  }
LAB_01b0b0e8:
  if (local_14 == 0xb8) {
    FUN_01b0b124(local_1c);
    bVar5 = (short)local_1c[0] != -2;
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}


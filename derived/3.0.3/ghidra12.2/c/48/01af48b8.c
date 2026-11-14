
uint FUN_01af48b8(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  uint *puVar5;
  uint uVar6;
  uint *in_x9;
  uint *puVar7;
  
  puVar5 = *(uint **)(param_1 + 0x10);
  if (puVar5 == (uint *)0x0) {
    uVar4 = 0xbc;
  }
  else {
    in_x9 = (uint *)(ulong)*puVar5;
    if (*puVar5 != 0 && puVar5 != in_x9) {
      puVar7 = (uint *)((long)puVar5 - (long)in_x9);
      uVar6 = *puVar7;
      in_x9 = (uint *)(ulong)uVar6;
      if (((uVar6 != 0) && (uVar3 = puVar7[1], uVar3 != 0)) && ((ulong)(ushort)puVar7[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar3 != 0) {
            uVar2 = (uint)((ulong)((long)puVar5 - lVar1) / (ulong)uVar3);
          }
          if (uVar6 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          in_x9 = &DAT_05326ec0;
          if ((uVar2 < DAT_05326ec0) &&
             (uVar4 = *(ushort *)((long)DAT_05326ec8 + (long)(int)uVar2 * 2), in_x9 = DAT_05326ec8,
             uVar4 < 0xbd)) goto LAB_01af4950;
        }
      }
    }
    uVar4 = 0;
  }
LAB_01af4950:
  uVar6 = (uint)in_x9;
  if (uVar4 == 0xb1) {
    uVar6 = *(uint *)(param_1 + 0xc);
    if ((uVar6 & 0xf800) == 0) {
      uVar6 = *(byte *)(*(long *)PTR_DAT_04bb46f0 + ((ulong)(uVar6 >> 3) & 0x1fff) + 0xe99e0) >>
              (ulong)(uVar6 & 7) & 1;
    }
    else {
      uVar6 = 0;
    }
  }
  return uVar4 == 0xb1 & uVar6;
}


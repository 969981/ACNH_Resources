
undefined4 FUN_01ae1100(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  byte local_30 [16];
  
  local_30[0] = 0;
  local_30[1] = 0;
  FUN_01adab50(param_1,local_30);
  uVar3 = 0;
  do {
    if ((uVar3 != 0) && (uVar3 < 0xe)) {
      uVar4 = uVar3 + 7;
      if (-1 < (int)uVar3) {
        uVar4 = uVar3;
      }
      if (((uint)((int)uVar4 >> 3) < 2) &&
         ((local_30[(uint)((int)uVar4 >> 3)] >> (ulong)(uVar3 & 7) & 1) != 0)) goto LAB_01ae1198;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != 0xe);
  uVar3 = 0;
LAB_01ae1198:
  if (uVar3 == 5) {
    return 5;
  }
  puVar5 = *(uint **)(param_1 + 0x10);
  if (puVar5 != (uint *)0x0) {
    uVar3 = *puVar5;
    uVar4 = 0;
    if ((uVar3 == 0) || (puVar5 == (uint *)(ulong)uVar3)) goto LAB_01ae1244;
    puVar6 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
    uVar4 = 0;
    if (*puVar6 == 0) goto LAB_01ae1244;
    uVar3 = puVar6[1];
    if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar1 != 0) {
        uVar4 = 0;
        if ((ulong)uVar3 != 0) {
          uVar4 = (uint)((ulong)((long)puVar5 - lVar1) / (ulong)uVar3);
        }
        if (*puVar6 <= uVar4) {
          uVar4 = 0xffffffff;
        }
        if ((uVar4 < DAT_05326c20) &&
           (uVar4 = (uint)*(ushort *)(DAT_05326c28 + (long)(int)uVar4 * 2), uVar4 < 0x15))
        goto LAB_01ae1244;
      }
    }
  }
  uVar4 = 0;
LAB_01ae1244:
  if (uVar4 - 1 < 0x14) {
    uVar2 = *(undefined4 *)(&DAT_0417797c + (long)(int)(uVar4 - 1) * 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


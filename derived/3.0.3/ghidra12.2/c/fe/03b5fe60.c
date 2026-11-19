
undefined8 FUN_03b5fe60(long param_1,undefined8 *param_2)

{
  byte *pbVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  ulong __n;
  uint uVar14;
  ulong uVar15;
  undefined4 uVar16;
  int local_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  byte abStack_68 [8];
  undefined4 local_58;
  undefined2 local_54;
  
  if (*(char *)(param_1 + 8) == '\0') {
    return 10;
  }
  if ((*(byte *)((long)param_2 + 0x11) >> 5 & 1) == 0) {
    iVar8 = FUN_02a0c760(*(undefined1 *)(param_2 + 2));
    local_70 = 0;
    if (iVar8 != -1) {
      local_70 = iVar8;
    }
    iVar8 = FUN_03b471ec(&local_70);
    if (iVar8 != 0) {
      if (iVar8 != 1) {
        return 6;
      }
      if ((*(ushort *)(*(long *)(DAT_05aebb78 + 0x10) + 0x192) & 1) == 0) {
        return 4;
      }
    }
  }
  lVar4 = param_2[1];
  *(undefined8 *)(param_1 + 0x20) = *param_2;
  *(long *)(param_1 + 0x28) = lVar4;
  uVar3 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[5];
  *(undefined8 *)(param_1 + 0x40) = param_2[4];
  *(undefined8 *)(param_1 + 0x48) = uVar6;
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  if (lVar4 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = (uint)*(byte *)(lVar4 + 0x30);
  }
  if (7 < uVar10) {
    uVar10 = 8;
  }
  *(char *)(param_1 + 0x50) = (char)uVar10;
  if (uVar10 != 0) {
    uVar15 = 0;
    do {
      uVar16 = 0;
      __n = 0;
      local_54 = 0;
      local_58 = 0;
      abStack_68[0] = 0;
      abStack_68[1] = 0;
      abStack_68[2] = 0;
      abStack_68[3] = 0;
      abStack_68[4] = 0;
      abStack_68[5] = 0;
      local_70 = 0;
      uStack_6c = 0;
      uStack_6a = 0;
      uVar14 = (uint)uVar15;
      if ((-1 < (int)uVar14) && (lVar4 != 0)) {
        if (uVar14 < *(byte *)(lVar4 + 0x30)) {
          pbVar9 = (byte *)(lVar4 + 0x31);
          if ((((uVar14 != 0) &&
               (pbVar9 = (byte *)(lVar4 + 0x32 + (ulong)*(byte *)(lVar4 + 0x31) * 2), uVar14 != 1))
              && (pbVar9 = pbVar9 + (ulong)*pbVar9 * 2 + 1, uVar14 != 2)) &&
             (((pbVar9 = pbVar9 + (ulong)*pbVar9 * 2 + 1, uVar14 != 3 &&
               (pbVar9 = pbVar9 + (ulong)*pbVar9 * 2 + 1, uVar14 != 4)) &&
              ((pbVar9 = pbVar9 + (ulong)*pbVar9 * 2 + 1, uVar14 != 5 &&
               (pbVar9 = pbVar9 + (ulong)*pbVar9 * 2 + 1, uVar14 != 6)))))) {
            pbVar9 = pbVar9 + (ulong)*pbVar9 * 2 + 1;
          }
          bVar7 = *pbVar9;
          __n = (ulong)bVar7;
          if (bVar7 != 0) {
            if (bVar7 < 4) {
              uVar11 = 0;
            }
            else {
              pbVar13 = pbVar9 + 3;
              uVar12 = 0;
              do {
                uVar11 = uVar12 + 4;
                abStack_68[uVar12] = pbVar13[-2];
                abStack_68[uVar12 + 1] = *pbVar13;
                abStack_68[uVar12 + 2] = pbVar13[2];
                pbVar1 = pbVar13 + 4;
                pbVar13 = pbVar13 + 8;
                abStack_68[uVar12 + 3] = *pbVar1;
                uVar12 = uVar11;
              } while ((__n & 0xfc) != uVar11);
            }
            uVar12 = __n & 3;
            if ((bVar7 & 3) != 0) {
              pbVar9 = pbVar9 + uVar11 * 2 + 1;
              pbVar13 = abStack_68 + uVar11;
              do {
                uVar12 = uVar12 - 1;
                *pbVar13 = *pbVar9;
                pbVar9 = pbVar9 + 2;
                pbVar13 = pbVar13 + 1;
              } while (uVar12 != 0);
            }
            memcpy(&local_58,abStack_68,__n);
          }
          uVar16 = 0x3f800000;
        }
        else {
          __n = 0;
        }
      }
      lVar2 = param_1 + uVar15 * 0x10;
      uVar15 = uVar15 + 1;
      *(int *)(lVar2 + 0x54) = (int)__n;
      *(undefined4 *)(lVar2 + 0x58) = uVar16;
      *(undefined4 *)(lVar2 + 0x5c) = local_58;
      *(undefined2 *)(lVar2 + 0x60) = local_54;
    } while (uVar15 != uVar10);
  }
  return 0;
}


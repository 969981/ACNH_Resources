
void FUN_002828b0(undefined8 param_1,long param_2,long param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined4 local_30;
  ErrorResultVariant aEStack_2c [12];
  undefined4 local_14;
  
  uVar3 = *(ushort *)(param_2 + 0x3c);
  uVar9 = (ulong)uVar3;
  uVar7 = (uint)uVar3 * (uint)*(byte *)(param_2 + 0x3f) * (uint)uVar3;
  if ((uVar7 & 7) != 0) {
    uVar7 = (uVar7 & 0x7ffffff8) + 8;
  }
  uVar7 = uVar7 >> 3;
  if ((param_4 < uVar7 + (uint)uVar3 * 4 + 4) || (param_3 == 0)) {
    local_30 = 0x10c07;
  }
  else {
    if (uVar3 != 0) {
      uVar14 = 0;
      uVar11 = 0;
      uVar17 = 0;
      uVar13 = 0;
      do {
        uVar19 = 0;
        uVar18 = 0;
        do {
          iVar2 = *(byte *)(param_2 + 0x3f) + uVar17;
          uVar4 = 8 - iVar2;
          uVar8 = (uint)(char)uVar4;
          if ((uVar4 >> 7 & 1) == 0) {
            cVar6 = '\0';
          }
          else {
            pbVar15 = (byte *)(param_3 + uVar13);
            uVar17 = 0;
            uVar13 = (ulong)((int)uVar13 + 1);
            cVar6 = (char)(((uint)*pbVar15 &
                           (-1 << (ulong)(uVar8 + *(byte *)(param_2 + 0x3f) & 0x1f) ^ 0xffffffffU))
                          << (ulong)(-uVar8 & 0x1f));
            uVar8 = 0x10 - iVar2;
          }
          pbVar15 = (byte *)(param_3 + uVar13);
          lVar10 = uVar19 + uVar14 * uVar9;
          bVar5 = (uVar8 & 0xff) == 0;
          uVar4 = (int)uVar18 + 1;
          uVar18 = (ulong)uVar4;
          uVar12 = (uint)uVar13;
          if (bVar5) {
            uVar12 = uVar12 + 1;
          }
          uVar13 = (ulong)uVar12;
          uVar19 = uVar18 & 0xff;
          uVar12 = 8 - (int)(char)uVar8;
          *(byte *)(*(long *)(param_2 + 8) + lVar10) =
               (*pbVar15 >> (ulong)((int)(char)uVar8 & 0x1f) &
               ((byte)(-1 << (ulong)(uVar12 - (uVar17 & 0xff) & 0x1f)) ^ 0xff)) + cVar6;
          uVar17 = 0;
          if (!bVar5) {
            uVar17 = uVar12;
          }
          uVar3 = *(ushort *)(param_2 + 0x3c);
          uVar9 = (ulong)uVar3;
          uVar8 = (uint)uVar3;
        } while ((uVar4 & 0xff) < uVar8);
        uVar4 = (int)uVar11 + 1;
        uVar11 = (ulong)uVar4;
        uVar14 = uVar11 & 0xff;
      } while ((uVar4 & 0xff) < (uint)uVar3);
      if (uVar8 != 0) {
        lVar10 = *(long *)(param_2 + 0x18);
        uVar9 = 0;
        do {
          uVar11 = (ulong)uVar7;
          uVar4 = uVar7 + 1;
          uVar12 = uVar7 + 2;
          uVar1 = uVar7 + 3;
          uVar7 = uVar7 + 4;
          uVar13 = uVar9 & 0xff;
          uVar17 = (int)uVar9 + 1;
          uVar9 = (ulong)uVar17;
          uVar17 = uVar17 & 0xff;
          *(uint *)(lVar10 + uVar13 * 4) =
               (uint)*(byte *)(param_3 + uVar11) << 0x18 |
               (uint)*(byte *)(param_3 + (ulong)uVar4) << 0x10 |
               (uint)*(byte *)(param_3 + (ulong)uVar12) << 8 |
               (uint)*(byte *)(param_3 + (ulong)uVar1);
        } while (uVar17 <= uVar8 && uVar3 != uVar17);
      }
    }
    memcpy((void *)(param_2 + 0x48),(void *)(param_3 + (ulong)uVar7),4);
    uVar3 = *(ushort *)(param_2 + 0x3c);
    uVar9 = (ulong)uVar3;
    *(undefined4 *)(param_2 + 0x44) = 0;
    if (uVar9 != 0) {
      uVar11 = 0;
      uVar7 = 0;
      pbVar15 = *(byte **)(param_2 + 8);
      do {
        pbVar16 = pbVar15;
        uVar13 = uVar9;
        do {
          if ((uint)uVar11 != (uint)*pbVar16) {
            uVar7 = 1 << (ulong)((uint)uVar11 & 0x1f) | uVar7;
            *(uint *)(param_2 + 0x44) = uVar7;
            break;
          }
          uVar13 = uVar13 - 1;
          pbVar16 = pbVar16 + 1;
        } while (uVar13 != 0);
        uVar11 = uVar11 + 1;
        pbVar15 = pbVar15 + uVar9;
      } while (uVar11 != uVar9);
    }
    memcpy(*(void **)(param_2 + 0x50),*(byte **)(param_2 + 8),(ulong)((uint)uVar3 * (uint)uVar3));
    local_30 = 0;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)&local_14);
  FUN_002296c4(param_1,&local_30);
  return;
}


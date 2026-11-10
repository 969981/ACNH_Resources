
undefined8
FUN_0011b280(undefined8 param_1,long param_2,uint param_3,undefined8 param_4,uint param_5,
            short *param_6,undefined2 *param_7,char *param_8)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  short sVar12;
  short sVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ushort *puVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  byte local_64 [4];
  
  uVar11 = param_3 - 3;
  if ((uVar11 & 0xff) < 4) {
    uVar17 = -((ulong)(uVar11 >> 7) & 1) & 0xfffffffffffff800 | ((ulong)uVar11 & 0xff) << 3;
    lVar16 = *(long *)(&DAT_04058500 + uVar17);
    lVar14 = *(long *)(&DAT_04057680 + uVar17);
    lVar15 = *(long *)(&DAT_040577e0 + uVar17);
    lVar18 = *(long *)(&DAT_04057d80 + uVar17);
  }
  else {
    lVar18 = 0x3f;
    lVar15 = 0x3e;
    lVar14 = 0x3d;
    lVar16 = 0x3c;
  }
  bVar5 = *(byte *)(param_2 + lVar16);
  bVar3 = *(byte *)(param_2 + 0x26);
  bVar6 = *(byte *)(param_2 + lVar14);
  bVar7 = *(byte *)(param_2 + lVar15);
  bVar8 = *(byte *)(param_2 + lVar18);
  bVar4 = *(byte *)(param_2 + 0x27);
  *param_8 = '\0';
  if (6 < (param_3 & 0xff)) {
    return 0x8920;
  }
  if ((param_3 & 0xff) == 4) {
    return 0x8920;
  }
  uVar11 = (int)(short)((ushort)bVar3 << 8) | (uint)bVar4;
  iVar22 = (int)(short)((short)uVar11 + -1);
  if (-1 < iVar22) {
    lVar14 = param_2 + ((ulong)bVar5 << 0x18 | (ulong)bVar6 << 0x10 | (ulong)bVar7 << 8 |
                       (ulong)bVar8);
    uVar2 = param_5 & 0xffff;
    if ((param_3 & 0xff) == 3) {
      iVar20 = 0;
      do {
        while( true ) {
          sVar13 = (short)iVar20;
          uVar10 = (int)(short)iVar22 - (int)sVar13;
          if ((int)uVar10 < 0) {
            uVar10 = uVar10 + 1;
          }
          sVar12 = sVar13 + (short)(uVar10 >> 1);
          uVar9 = *(ushort *)(lVar14 + (long)sVar12 * 2);
          lVar15 = FUN_00119c10(param_1,param_2,uVar9 >> 8 | uVar9 << 8,local_64,1);
          if (lVar15 == 0) {
            return 0xa220;
          }
          iVar21 = (int)sVar12;
          sVar12 = FUN_00100470(param_4,lVar15,param_5);
          if (sVar12 != 0) break;
          if ((*param_8 == '\0') && (uVar2 <= local_64[0])) {
            *param_8 = '\x01';
          }
          if (local_64[0] < uVar2) goto LAB_0011b420;
          if (local_64[0] == uVar2) goto LAB_0011b570;
LAB_0011b438:
          iVar22 = iVar21 + -1;
          if (iVar21 < 1) {
            return 0;
          }
          if ((short)iVar22 < sVar13) {
            return 0;
          }
        }
        if (sVar12 < 0) goto LAB_0011b438;
LAB_0011b420:
        iVar20 = iVar21 + 1;
      } while ((short)iVar20 <= (short)iVar22);
    }
    else {
      iVar20 = 0;
      do {
        while( true ) {
          sVar13 = (short)iVar20;
          uVar10 = (int)(short)iVar22 - (int)sVar13;
          if ((int)uVar10 < 0) {
            uVar10 = uVar10 + 1;
          }
          sVar12 = sVar13 + (short)(uVar10 >> 1);
          uVar9 = *(ushort *)(lVar14 + (long)sVar12 * 2);
          uVar9 = uVar9 >> 8 | uVar9 << 8;
          if (((param_3 & 0xff) < 7) && ((1 << (ulong)(param_3 & 0x1f) & 0x68U) != 0)) {
            lVar15 = FUN_00119c10(param_1,param_2,uVar9,local_64,1);
          }
          else {
            lVar15 = FUN_00119860(param_1,param_2,uVar9,local_64,1);
          }
          if (lVar15 == 0) {
            return 0xa220;
          }
          iVar21 = (int)sVar12;
          sVar12 = FUN_00100470(param_4,lVar15,param_5);
          if (((param_3 & 0xff) == 1) || ((param_3 & 0xff) == 6)) break;
          if (sVar12 != 0) goto LAB_0011b50c;
          if ((*param_8 == '\0') && (uVar2 <= local_64[0])) {
            *param_8 = '\x01';
          }
          if (local_64[0] < uVar2) goto LAB_0011b510;
          if (local_64[0] <= uVar2) goto LAB_0011b570;
LAB_0011b550:
          iVar22 = iVar21 + -1;
          if (iVar21 < 1) {
            return 0;
          }
          if ((short)iVar22 < sVar13) {
            return 0;
          }
        }
        if (sVar12 == 0) goto LAB_0011b570;
LAB_0011b50c:
        if (sVar12 < 0) goto LAB_0011b550;
LAB_0011b510:
        iVar20 = iVar21 + 1;
      } while ((short)iVar20 <= (short)iVar22);
    }
  }
  return 0;
LAB_0011b768:
  sVar13 = (short)iVar22 + 1;
  goto LAB_0011b784;
LAB_0011b570:
  iVar22 = iVar21 + -1;
  if (iVar21 < 1) {
    iVar21 = 0;
  }
  else {
    puVar19 = (ushort *)(lVar14 + iVar22 * 2);
    if ((param_3 & 0xff) == 3) {
      do {
        lVar15 = FUN_00119c10(param_1,param_2,*puVar19 >> 8 | *puVar19 << 8,local_64,1);
        if (lVar15 == 0) {
          return 0xa220;
        }
        sVar13 = FUN_00100470(param_4,lVar15,param_5);
        if (sVar13 == 0) {
          if (local_64[0] < uVar2) goto LAB_0011b768;
        }
        else if (0 < sVar13) goto LAB_0011b768;
        puVar19 = puVar19 + -1;
        bVar1 = 0 < iVar22;
        iVar22 = iVar22 + -1;
      } while (bVar1);
    }
    else if ((param_3 & 0xff) == 5) {
      do {
        lVar15 = FUN_00119c10(param_1,param_2,*puVar19 >> 8 | *puVar19 << 8,local_64,1);
        if (lVar15 == 0) {
          return 0xa220;
        }
        sVar13 = FUN_00100470(param_4,lVar15,param_5);
        if (sVar13 == 0) {
          if (local_64[0] < uVar2) goto LAB_0011b768;
        }
        else if (0 < sVar13) goto LAB_0011b768;
        puVar19 = puVar19 + -1;
        bVar1 = 0 < iVar22;
        iVar22 = iVar22 + -1;
      } while (bVar1);
    }
    else {
      do {
        uVar9 = *puVar19 >> 8 | *puVar19 << 8;
        if (((param_3 & 0xff) < 7) && ((1 << (ulong)(param_3 & 0x1f) & 0x68U) != 0)) {
          lVar15 = FUN_00119c10(param_1,param_2,uVar9,local_64,1);
        }
        else {
          lVar15 = FUN_00119860(param_1,param_2,uVar9,local_64,1);
        }
        if (lVar15 == 0) {
          return 0xa220;
        }
        if (((param_3 & 0xff) == 1) || ((param_3 & 0xff) == 6)) {
          sVar13 = FUN_00100470(param_4,lVar15,param_5);
          if (sVar13 != 0) goto LAB_0011b768;
        }
        else {
          sVar13 = FUN_00100470(param_4,lVar15,param_5);
          if (sVar13 == 0) {
            if (local_64[0] < uVar2) goto LAB_0011b768;
          }
          else if (0 < sVar13) goto LAB_0011b768;
        }
        puVar19 = puVar19 + -1;
        bVar1 = 0 < iVar22;
        iVar22 = iVar22 + -1;
      } while (bVar1);
    }
  }
  sVar13 = 0;
LAB_0011b784:
  *param_6 = sVar13;
  iVar22 = iVar21 + 1;
  if (iVar22 < (int)uVar11) {
    iVar21 = (int)(short)iVar22;
    if (iVar21 < (int)uVar11) {
      puVar19 = (ushort *)(lVar14 + iVar22 * 2);
      iVar21 = iVar22;
      if ((param_3 & 0xff) == 3) {
        do {
          lVar14 = FUN_00119c10(param_1,param_2,*puVar19 >> 8 | *puVar19 << 8,local_64,1);
          if (lVar14 == 0) {
            return 0xa220;
          }
          sVar13 = FUN_00100470(param_4,lVar14,param_5);
          if (sVar13 == 0) {
            if (uVar2 < local_64[0]) break;
          }
          else if (sVar13 < 0) break;
          iVar21 = (int)(short)((short)iVar21 + 1);
          puVar19 = puVar19 + 1;
        } while (iVar21 < (int)uVar11);
      }
      else if ((param_3 & 0xff) == 5) {
        do {
          lVar14 = FUN_00119c10(param_1,param_2,*puVar19 >> 8 | *puVar19 << 8,local_64,1);
          if (lVar14 == 0) {
            return 0xa220;
          }
          sVar13 = FUN_00100470(param_4,lVar14,param_5);
          if (sVar13 == 0) {
            if (uVar2 < local_64[0]) break;
          }
          else if (sVar13 < 0) break;
          iVar21 = (int)(short)((short)iVar21 + 1);
          puVar19 = puVar19 + 1;
        } while (iVar21 < (int)uVar11);
      }
      else {
        do {
          uVar9 = *puVar19 >> 8 | *puVar19 << 8;
          if (((param_3 & 0xff) < 7) && ((1 << (ulong)(param_3 & 0x1f) & 0x68U) != 0)) {
            lVar14 = FUN_00119c10(param_1,param_2,uVar9,local_64,1);
          }
          else {
            lVar14 = FUN_00119860(param_1,param_2,uVar9,local_64,1);
          }
          if (lVar14 == 0) {
            return 0xa220;
          }
          if (((param_3 & 0xff) == 1) || ((param_3 & 0xff) == 6)) {
            sVar13 = FUN_00100470(param_4,lVar14,param_5);
            if (sVar13 != 0) break;
          }
          else {
            sVar13 = FUN_00100470(param_4,lVar14,param_5);
            if (sVar13 == 0) {
              if (uVar2 < local_64[0]) break;
            }
            else if (sVar13 < 0) break;
          }
          iVar21 = (int)(short)((short)iVar21 + 1);
          puVar19 = puVar19 + 1;
        } while (iVar21 < (int)uVar11);
      }
    }
    iVar21 = iVar21 + -1;
  }
  *param_7 = (short)iVar21;
  return 1;
}


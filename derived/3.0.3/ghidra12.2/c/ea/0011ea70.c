
undefined8
FUN_0011ea70(undefined8 param_1,long param_2,uint param_3,undefined8 param_4,undefined4 param_5,
            uint param_6,uint param_7,short *param_8,short *param_9,undefined1 *param_10)

{
  bool bVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  short sVar10;
  short sVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ushort *puVar17;
  uint uVar18;
  int iVar19;
  undefined1 auStack_64 [4];
  
  uVar18 = param_3 - 3;
  if ((uVar18 & 0xff) < 4) {
    uVar16 = -((ulong)(uVar18 >> 7) & 1) & 0xfffffffffffff800 | ((ulong)uVar18 & 0xff) << 3;
    lVar15 = *(long *)(&DAT_04058500 + uVar16);
    lVar12 = *(long *)(&DAT_04057680 + uVar16);
    lVar13 = *(long *)(&DAT_040577e0 + uVar16);
    lVar14 = *(long *)(&DAT_04057d80 + uVar16);
  }
  else {
    lVar14 = 0x3f;
    lVar13 = 0x3e;
    lVar12 = 0x3d;
    lVar15 = 0x3c;
  }
  bVar5 = *(byte *)(param_2 + lVar15);
  uVar3 = *(undefined1 *)(param_2 + 0x27);
  bVar6 = *(byte *)(param_2 + lVar12);
  bVar7 = *(byte *)(param_2 + lVar13);
  bVar8 = *(byte *)(param_2 + lVar14);
  uVar4 = *(undefined1 *)(param_2 + 0x26);
  *param_10 = 0;
  if ((param_7 & 0xffff) < (param_6 & 0xffff)) {
    return 0;
  }
  lVar12 = param_2 + ((ulong)bVar5 << 0x18 | (ulong)bVar6 << 0x10 | (ulong)bVar7 << 8 | (ulong)bVar8
                     );
  if ((param_3 & 0xff) == 6) {
    do {
      while( true ) {
        uVar18 = (param_7 & 0xffff) - (param_6 & 0xffff);
        if ((int)uVar18 < 0) {
          uVar18 = uVar18 + 1;
        }
        uVar18 = param_6 + (uVar18 >> 1);
        uVar16 = (ulong)uVar18;
        uVar9 = *(ushort *)(lVar12 + (uVar16 & 0xffff) * 2);
        lVar13 = FUN_00119c10(param_1,param_2,uVar9 >> 8 | uVar9 << 8,auStack_64,1);
        if (lVar13 == 0) {
          return 0xa220;
        }
        sVar10 = FUN_00100470(param_4,lVar13,param_5);
        if (sVar10 == 0) goto LAB_0011ec78;
        if (-1 < sVar10) break;
        if ((uVar18 & 0xffff) == 0) {
          return 0;
        }
        param_7 = uVar18 - 1;
        if ((param_7 & 0xffff) < (param_6 & 0xffff)) {
          return 0;
        }
      }
      param_6 = uVar18 + 1;
    } while ((param_6 & 0xffff) <= (param_7 & 0xffff));
  }
  else {
    do {
      while( true ) {
        uVar18 = (param_7 & 0xffff) - (param_6 & 0xffff);
        if ((int)uVar18 < 0) {
          uVar18 = uVar18 + 1;
        }
        uVar18 = param_6 + (uVar18 >> 1);
        uVar16 = (ulong)uVar18;
        uVar9 = *(ushort *)(lVar12 + (uVar16 & 0xffff) * 2);
        lVar13 = FUN_00119860(param_1,param_2,uVar9 >> 8 | uVar9 << 8,auStack_64,1);
        if (lVar13 == 0) {
          return 0xa220;
        }
        sVar10 = FUN_00100470(param_4,lVar13,param_5);
        if (sVar10 == 0) goto LAB_0011ec78;
        if (-1 < sVar10) break;
        if ((uVar18 & 0xffff) == 0) {
          return 0;
        }
        param_7 = uVar18 - 1;
        if ((param_7 & 0xffff) < (param_6 & 0xffff)) {
          return 0;
        }
      }
      param_6 = uVar18 + 1;
    } while ((param_6 & 0xffff) <= (param_7 & 0xffff));
  }
  return 0;
LAB_0011ed4c:
  sVar11 = (short)iVar19 + 1;
  goto LAB_0011ed54;
LAB_0011ec78:
  sVar10 = (short)uVar16;
  uVar18 = (uint)uVar16 & 0xffff;
  if ((uVar16 & 0xffff) == 0) {
    sVar11 = 0;
  }
  else {
    iVar19 = uVar18 - 1;
    puVar17 = (ushort *)(lVar12 + iVar19 * 2);
    if ((param_3 & 0xff) == 6) {
      do {
        lVar13 = FUN_00119c10(param_1,param_2,*puVar17 >> 8 | *puVar17 << 8,auStack_64,1);
        if (lVar13 == 0) {
          return 0xa220;
        }
        sVar11 = FUN_00100470(param_4,lVar13,param_5);
        if (sVar11 != 0) goto LAB_0011ed4c;
        puVar17 = puVar17 + -1;
        bVar1 = 0 < iVar19;
        iVar19 = iVar19 + -1;
      } while (bVar1);
    }
    else {
      do {
        lVar13 = FUN_00119860(param_1,param_2,*puVar17 >> 8 | *puVar17 << 8,auStack_64,1);
        if (lVar13 == 0) {
          return 0xa220;
        }
        sVar11 = FUN_00100470(param_4,lVar13,param_5);
        if (sVar11 != 0) goto LAB_0011ed4c;
        puVar17 = puVar17 + -1;
        bVar1 = 0 < iVar19;
        iVar19 = iVar19 + -1;
      } while (bVar1);
    }
    sVar11 = 0;
  }
LAB_0011ed54:
  uVar2 = (uint)CONCAT11(uVar4,uVar3);
  uVar18 = uVar18 + 1;
  *param_8 = sVar11;
  if (uVar18 < uVar2) {
    if (((uint)uVar16 + 1 & 0xffff) < uVar2) {
      puVar17 = (ushort *)(lVar12 + (ulong)(uVar18 * 2));
      if ((param_3 & 0xff) == 6) {
        do {
          lVar12 = FUN_00119c10(param_1,param_2,*puVar17 >> 8 | *puVar17 << 8,auStack_64,1);
          if (lVar12 == 0) {
            return 0xa220;
          }
          sVar10 = FUN_00100470(param_4,lVar12,param_5);
          if (sVar10 != 0) break;
          uVar18 = uVar18 + 1;
          puVar17 = puVar17 + 1;
        } while ((uVar18 & 0xffff) < uVar2);
      }
      else {
        do {
          lVar12 = FUN_00119860(param_1,param_2,*puVar17 >> 8 | *puVar17 << 8,auStack_64,1);
          if (lVar12 == 0) {
            return 0xa220;
          }
          sVar10 = FUN_00100470(param_4,lVar12,param_5);
          if (sVar10 != 0) break;
          uVar18 = uVar18 + 1;
          puVar17 = puVar17 + 1;
        } while ((uVar18 & 0xffff) < uVar2);
      }
    }
    sVar10 = (short)uVar18 + -1;
  }
  *param_9 = sVar10;
  return 1;
}


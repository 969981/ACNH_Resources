
undefined8
FUN_0011e2d0(undefined8 param_1,long param_2,byte *param_3,uint param_4,short *param_5,
            short *param_6)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  ushort uVar8;
  int iVar9;
  ushort uVar10;
  ulong uVar11;
  int iVar12;
  ushort *puVar13;
  byte *pbVar15;
  byte *pbVar14;
  ulong uVar16;
  int iVar17;
  long lVar18;
  short sVar19;
  undefined2 local_d0 [56];
  
  if ((param_4 & 0xffff) != 0) {
    uVar3 = (int)(short)((ushort)*(byte *)(param_2 + 0x26) << 8) | (uint)*(byte *)(param_2 + 0x27);
    iVar9 = (int)(short)((short)uVar3 + -1);
    if (-1 < iVar9) {
      uVar16 = 0;
      lVar2 = param_2 + ((ulong)*(byte *)(param_2 + 0x3c) << 0x18 |
                         (ulong)*(byte *)(param_2 + 0x3d) << 0x10 |
                         (ulong)*(byte *)(param_2 + 0x3e) << 8 | (ulong)*(byte *)(param_2 + 0x3f));
      pbVar14 = param_3;
      do {
        if ((*pbVar14 & 0xfc) == 0xd8) {
          uVar8 = 1;
          if (*(short *)(pbVar14 + 2) != 0) {
            uVar8 = 2;
          }
        }
        else {
          uVar8 = 1;
        }
        uVar10 = 0;
        pbVar15 = pbVar14;
        do {
          pbVar14 = pbVar15 + 2;
          uVar10 = uVar10 + 1;
          uVar11 = uVar16 & 0xffff;
          uVar1 = (int)uVar16 + 1;
          uVar16 = (ulong)uVar1;
          local_d0[uVar11] = *(undefined2 *)pbVar15;
          pbVar15 = pbVar14;
        } while (uVar10 < uVar8);
        iVar17 = 0;
        local_d0[uVar16 & 0xffff] = 0;
        iVar12 = iVar9;
        do {
          while( true ) {
            sVar7 = (short)iVar17;
            uVar4 = (int)(short)iVar12 - (int)sVar7;
            if ((int)uVar4 < 0) {
              uVar4 = uVar4 + 1;
            }
            sVar19 = sVar7 + (short)(uVar4 >> 1);
            lVar18 = (long)sVar19;
            uVar8 = *(ushort *)(lVar2 + lVar18 * 2);
            sVar6 = FUN_0011dd00(param_1,param_2,local_d0,uVar16,uVar8 >> 8 | uVar8 << 8,1,0);
            if (sVar6 < 0) {
              return 0xa254;
            }
            iVar5 = (int)sVar19;
            if (sVar6 != 0) break;
            if ((iVar5 == 0) || (iVar12 = iVar5 + -1, (short)iVar12 < sVar7)) goto LAB_0011e434;
          }
          if (sVar6 == 1) {
            if ((iVar5 == 0) || (iVar5 < 1)) goto LAB_0011e524;
            uVar11 = lVar18 - 1;
            puVar13 = (ushort *)(lVar2 + uVar11 * 2);
            goto LAB_0011e4d8;
          }
          iVar17 = iVar5 + 1;
        } while ((short)iVar17 <= (short)iVar12);
LAB_0011e434:
        if ((param_4 & 0xffff) <= (uVar1 & 0xffff)) {
          return 0;
        }
      } while( true );
    }
    uVar16 = 0;
    do {
      if ((*param_3 & 0xfc) == 0xd8) {
        uVar8 = 1;
        if (*(short *)(param_3 + 2) != 0) {
          uVar8 = 2;
        }
      }
      else {
        uVar8 = 1;
      }
      uVar10 = 0;
      pbVar14 = param_3;
      do {
        param_3 = pbVar14 + 2;
        uVar10 = uVar10 + 1;
        uVar11 = uVar16 & 0xffff;
        uVar3 = (int)uVar16 + 1;
        uVar16 = (ulong)uVar3;
        local_d0[uVar11] = *(undefined2 *)pbVar14;
        pbVar14 = param_3;
      } while (uVar10 < uVar8);
      local_d0[uVar16 & 0xffff] = 0;
    } while ((uVar3 & 0xffff) < (param_4 & 0xffff));
  }
  return 0;
  while( true ) {
    puVar13 = puVar13 + -1;
    uVar11 = (ulong)(iVar9 - 1);
    if (iVar9 < 1) break;
LAB_0011e4d8:
    sVar7 = FUN_0011dd00(param_1,param_2,local_d0,uVar16,*puVar13 >> 8 | *puVar13 << 8,1,0);
    if (sVar7 < 0) {
      return 0xa254;
    }
    iVar9 = (int)uVar11;
    if (sVar7 == 2) {
      sVar7 = (short)uVar11 + 1;
      goto LAB_0011e528;
    }
  }
LAB_0011e524:
  sVar7 = 0;
LAB_0011e528:
  *param_5 = sVar7;
  lVar18 = lVar18 + 1;
  iVar9 = (int)lVar18;
  if (iVar9 < (int)uVar3) {
    sVar19 = (short)lVar18;
    if ((int)sVar19 < (int)uVar3) {
      puVar13 = (ushort *)(lVar2 + lVar18 * 2);
      do {
        sVar19 = (short)iVar9;
        sVar7 = FUN_0011dd00(param_1,param_2,param_3,param_4,*puVar13 >> 8 | *puVar13 << 8,1,0);
        if (sVar7 < 0) {
          return 0xa254;
        }
        if (sVar7 == 0) break;
        sVar19 = sVar19 + 1;
        iVar9 = (int)sVar19;
        puVar13 = puVar13 + 1;
      } while (iVar9 < (int)uVar3);
    }
    sVar19 = sVar19 + -1;
  }
  *param_6 = sVar19;
  return 1;
}


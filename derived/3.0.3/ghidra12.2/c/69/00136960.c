
undefined8 FUN_00136960(long param_1,long param_2,short *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  short sVar4;
  bool bVar5;
  uint uVar6;
  char cVar7;
  short sVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  uint local_68;
  uint uStack_64;
  
  local_68 = 0;
  uStack_64 = 0;
  bVar1 = *(byte *)(param_2 + 0x50);
  if (bVar1 - 3 < 4) {
    if (bVar1 - 5 < 2) {
      lVar14 = *(long *)(param_3 + 0xc);
      if (lVar14 != 0) goto LAB_001369bc;
    }
    else {
      lVar14 = *(long *)(param_3 + 0x10);
      if (lVar14 == 0) {
        lVar14 = *(long *)(param_3 + 4);
        uVar11 = (uint)*(byte *)(lVar14 + 0x60) << 0x18 | (uint)*(byte *)(lVar14 + 0x61) << 0x10;
        lVar18 = lVar14 + ((ulong)*(byte *)(lVar14 + 0x38) << 0x18 |
                           (ulong)*(byte *)(lVar14 + 0x39) << 0x10 |
                           (ulong)*(byte *)(lVar14 + 0x3a) << 8 | (ulong)*(byte *)(lVar14 + 0x3b));
        bVar2 = *(byte *)(lVar14 + 0x62);
        pbVar15 = (byte *)(lVar14 + 99);
      }
      else {
LAB_001369bc:
        uVar11 = (uint)*(byte *)(lVar14 + 0x18) << 0x18 | (uint)*(byte *)(lVar14 + 0x19) << 0x10;
        lVar18 = lVar14 + ((ulong)*(byte *)(lVar14 + 0x10) << 0x18 |
                           (ulong)*(byte *)(lVar14 + 0x11) << 0x10 |
                           (ulong)*(byte *)(lVar14 + 0x12) << 8 | (ulong)*(byte *)(lVar14 + 0x13));
        bVar2 = *(byte *)(lVar14 + 0x1a);
        pbVar15 = (byte *)(lVar14 + 0x1b);
      }
      uVar11 = uVar11 | (uint)bVar2 << 8 | (uint)*pbVar15;
      if (*(short *)(param_2 + 0x4c) == 0) {
        uStack_64 = 1;
        local_68 = uVar11;
        if (uVar11 == 0) {
          sVar8 = -1;
          goto joined_r0x00136bcc;
        }
      }
      else {
        sVar8 = FUN_0013c470(param_3,bVar1,*(undefined8 *)(param_2 + 0x30),
                             *(short *)(param_2 + 0x4c),1,uVar11,0,&uStack_64,&local_68);
        if (sVar8 < 0) {
          bVar1 = *(byte *)(param_2 + 0x50);
joined_r0x00136bcc:
          if (((bVar1 == 5) || (bVar1 == 3)) && (sVar8 == -2)) {
            uVar10 = 3;
            goto LAB_00136ce0;
          }
          goto LAB_00136cdc;
        }
      }
      uVar6 = uStack_64;
      uVar11 = local_68;
      bVar1 = *(byte *)(param_2 + 0x50);
      if ((*(char *)(param_2 + 0x51) != '\0') || ((bVar1 | 2) != 6)) {
        uVar12 = (ulong)(uStack_64 * 4 - 4);
        if (bVar1 - 5 < 2) {
          uVar16 = *(byte *)(lVar18 + uVar12) & 0x3f;
        }
        else {
          uVar16 = *(byte *)(lVar18 + uVar12) & 0x7f;
        }
        uVar17 = uStack_64;
        goto LAB_00136b38;
      }
      if (bVar1 == 4) {
        if (uStack_64 <= local_68) {
          bVar5 = false;
          uVar17 = 0;
          uVar11 = uStack_64 * 4 - 4;
          uVar16 = 0xffffd8f0;
          uVar13 = uStack_64;
          do {
            uVar12 = (ulong)uVar11;
            uVar11 = uVar11 + 4;
            uVar19 = *(byte *)(lVar18 + uVar12) & 0x7f;
            if ((int)uVar16 < (int)uVar19) {
              bVar5 = true;
              uVar16 = uVar19;
              uVar17 = uVar13;
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 <= local_68);
          goto LAB_00136ccc;
        }
      }
      else if (uStack_64 <= local_68) {
        if (*(char *)(param_2 + 0x53) < '\0') {
          bVar5 = false;
          uVar17 = 0;
          uVar11 = uStack_64 * 4 - 4;
          uVar16 = 0xffffd8f0;
          uVar13 = uStack_64;
          do {
            uVar12 = (ulong)uVar11;
            uVar11 = uVar11 + 4;
            uVar19 = *(byte *)(lVar18 + uVar12) & 0x3f;
            if ((int)uVar16 < (int)uVar19) {
              bVar5 = true;
              uVar16 = uVar19;
              uVar17 = uVar13;
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 <= local_68);
        }
        else {
          bVar5 = false;
          uVar17 = 0;
          uVar16 = 0xffffd8f0;
          uVar13 = uStack_64;
          do {
            uVar19 = uVar13 * 4 - 4;
            while( true ) {
              pbVar15 = (byte *)(lVar18 + (ulong)uVar19);
              bVar1 = *pbVar15;
              if (((char)bVar1 < '\0') &&
                 (cVar7 = FUN_0013cbb0(*(undefined8 *)(param_3 + 4),
                                       (uint)pbVar15[1] << 0x10 | (uint)pbVar15[2] << 8 |
                                       (uint)pbVar15[3],*(undefined1 *)(param_1 + 0x6d648),
                                       *(undefined1 *)(param_1 + 0x6d649)), cVar7 != '\0')) break;
              uVar13 = uVar13 + 1;
              uVar19 = uVar19 + 4;
              if (uVar11 < uVar13) goto LAB_00136ccc;
            }
            uVar19 = bVar1 & 0x3f;
            if ((int)uVar16 < (int)uVar19) {
              bVar5 = true;
              uVar16 = uVar19;
              uVar17 = uVar13;
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 <= uVar11);
        }
LAB_00136ccc:
        if (bVar5) {
          uVar12 = (ulong)(uVar17 * 4 - 4);
LAB_00136b38:
          *(uint *)(param_3 + 0x1c) = uVar17;
          lVar18 = lVar18 + uVar12;
          uVar9 = FUN_0013be30(*(undefined8 *)(param_3 + 4),
                               (uint)*(byte *)(lVar18 + 1) << 0x10 |
                               (uint)*(byte *)(lVar18 + 2) << 8 | (uint)*(byte *)(lVar18 + 3));
          *(undefined4 *)(param_3 + 0x2c) = uVar9;
          *(uint *)(param_3 + 0x1e) = uVar6;
          *(uint *)(param_3 + 0x20) = local_68;
          iVar3 = ((uint)(ushort)param_3[3] - (uint)(ushort)param_3[2]) * uVar16;
          sVar4 = param_3[2] +
                  ((short)((ulong)((long)iVar3 * 0x51eb851f) >> 0x25) - (short)(iVar3 >> 0x1f));
          *param_3 = sVar4;
          sVar8 = param_3[0x35];
          if ((sVar8 <= sVar4) && (sVar8 = param_3[0x34], sVar4 <= param_3[0x34])) {
            sVar8 = sVar4;
          }
          *param_3 = sVar8;
          return 1;
        }
      }
    }
  }
LAB_00136cdc:
  uVar10 = 4;
LAB_00136ce0:
  *(undefined1 *)((long)param_3 + 0x5f) = uVar10;
  return 0;
}


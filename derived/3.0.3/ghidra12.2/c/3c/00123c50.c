
undefined8 FUN_00123c50(long param_1,short *param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  short sVar9;
  bool bVar10;
  uint uVar11;
  short sVar12;
  undefined4 uVar13;
  undefined1 uVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  uint uVar21;
  uint local_48;
  uint uStack_44;
  
  local_48 = 0;
  uStack_44 = 0;
  if (*(long *)(param_2 + 8) == 0) {
    lVar16 = 0;
    bVar2 = *(byte *)(param_1 + 0x50);
  }
  else {
    lVar16 = *(long *)(*(long *)(param_2 + 4) + 8);
    lVar16 = *(long *)(param_2 + 8) +
             ((ulong)*(byte *)(lVar16 + 0x10) << 0x18 | (ulong)*(byte *)(lVar16 + 0x11) << 0x10 |
              (ulong)*(byte *)(lVar16 + 0x12) << 8 | (ulong)*(byte *)(lVar16 + 0x13)) + 0x3c;
    bVar2 = *(byte *)(param_1 + 0x50);
  }
  if (bVar2 - 3 < 2) {
    lVar20 = *(long *)(param_2 + 0x10);
    bVar3 = *(byte *)(lVar20 + 0x10);
    bVar4 = *(byte *)(lVar20 + 0x11);
    bVar5 = *(byte *)(lVar20 + 0x12);
    bVar6 = *(byte *)(lVar20 + 0x13);
    uVar8 = (*(uint *)(lVar20 + 0x18) & 0xff00ff00) >> 8 |
            (*(uint *)(lVar20 + 0x18) & 0xff00ff) << 8;
    uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
    if (*(short *)(param_1 + 0x4c) == 0) {
      uStack_44 = 1;
      local_48 = uVar8;
      if (uVar8 != 0) goto LAB_00123d44;
      sVar12 = -1;
    }
    else {
      sVar12 = FUN_0012bab0(param_2,bVar2,*(undefined8 *)(param_1 + 0x30),*(short *)(param_1 + 0x4c)
                            ,1,uVar8,0,&uStack_44,&local_48);
      if (-1 < sVar12) {
LAB_00123d44:
        uVar11 = uStack_44;
        uVar8 = local_48;
        lVar20 = lVar20 + ((ulong)bVar3 << 0x18 | (ulong)bVar4 << 0x10 | (ulong)bVar5 << 8 |
                          (ulong)bVar6);
        if ((*(char *)(param_1 + 0x51) != '\0') || (*(char *)(param_1 + 0x50) != '\x04')) {
          uVar17 = (ulong)(uStack_44 * 4 - 4);
          uVar21 = *(byte *)(lVar20 + uVar17) & 0x3f;
          uVar15 = uStack_44;
LAB_00123e20:
          *(uint *)(param_2 + 0x1c) = uVar15;
          lVar20 = lVar20 + uVar17;
          uVar13 = FUN_0012a960(*(undefined8 *)(param_2 + 4),
                                (uint)*(byte *)(lVar20 + 1) << 0x10 |
                                (uint)*(byte *)(lVar20 + 2) << 8 | (uint)*(byte *)(lVar20 + 3));
          iVar7 = ((uint)(ushort)param_2[3] - (uint)(ushort)param_2[2]) * uVar21;
          sVar9 = param_2[2] +
                  ((short)((ulong)((long)iVar7 * 0x51eb851f) >> 0x25) - (short)(iVar7 >> 0x1f));
          *(undefined4 *)(param_2 + 0x2c) = uVar13;
          *(uint *)(param_2 + 0x1e) = uVar11;
          *(uint *)(param_2 + 0x20) = uVar8;
          *param_2 = sVar9;
          sVar12 = param_2[0x35];
          if ((sVar12 <= sVar9) && (sVar12 = param_2[0x34], sVar9 <= param_2[0x34])) {
            sVar12 = sVar9;
          }
          *param_2 = sVar12;
          return 1;
        }
        if (uStack_44 <= local_48) {
          bVar10 = false;
          uVar15 = 0;
          uVar18 = uStack_44 * 4 - 4;
          uVar21 = 0xffffd8f0;
          uVar19 = uStack_44;
          if (lVar16 == 0) {
            do {
              uVar17 = (ulong)uVar18;
              uVar18 = uVar18 + 4;
              uVar1 = *(byte *)(lVar20 + uVar17) & 0x3f;
              if ((int)uVar21 < (int)uVar1) {
                bVar10 = true;
                uVar21 = uVar1;
                uVar15 = uVar19;
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 <= local_48);
          }
          else {
            do {
              uVar1 = (*(byte *)(lVar16 + (ulong)(uVar19 - 1)) & 0x3f) +
                      (*(byte *)(lVar20 + (ulong)uVar18) & 0x3f);
              if ((int)uVar21 < (int)uVar1) {
                bVar10 = true;
                uVar21 = uVar1;
                uVar15 = uVar19;
              }
              uVar19 = uVar19 + 1;
              uVar18 = uVar18 + 4;
            } while (uVar19 <= local_48);
          }
          if (bVar10) {
            uVar17 = (ulong)(uVar15 * 4 - 4);
            goto LAB_00123e20;
          }
        }
        goto LAB_00123eb4;
      }
      bVar2 = *(byte *)(param_1 + 0x50);
    }
    if ((bVar2 == 3) && (sVar12 == -2)) {
      uVar14 = 3;
      goto LAB_00123eb8;
    }
  }
LAB_00123eb4:
  uVar14 = 4;
LAB_00123eb8:
  *(undefined1 *)((long)param_2 + 0x5f) = uVar14;
  return 0;
}



bool FUN_02b5f7a0(undefined4 param_1,byte *param_2)

{
  uint *puVar1;
  uint *puVar2;
  byte *pbVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  ulong uVar10;
  short sVar11;
  long *plVar12;
  byte bVar13;
  long lVar14;
  short *psVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  uint *puVar18;
  uint uVar19;
  byte bVar20;
  undefined *local_78;
  undefined8 local_70;
  ushort local_64 [2];
  
  uVar10 = FUN_02b5fa90(local_64,param_1);
  puVar7 = PTR_DAT_04bc1220;
  puVar6 = PTR_DAT_04bb6298;
  puVar5 = PTR_DAT_04bb32e0;
  puVar4 = PTR_DAT_04bb27d0;
  if ((uVar10 & 1) == 0) {
    bVar8 = false;
  }
  else {
    local_78 = PTR_DAT_04bc4730 + 0x10;
    local_70 = 0;
    if (local_64[0] != 0) {
      lVar14 = *(long *)PTR_DAT_04bb5008;
      if ((*(long *)(lVar14 + 0x2a8) != 0) && (*(long *)(*(long *)(lVar14 + 0x2a8) + 8) != 0)) {
        uVar19 = (uint)local_64[0] - (uint)*(ushort *)(lVar14 + 0x3f0);
        if (uVar19 < *(uint *)(lVar14 + 0x3d0)) {
          local_70 = *(undefined8 *)(*(long *)(lVar14 + 0x3d8) + (long)(int)uVar19 * 8);
        }
        else {
          local_70 = 0;
        }
      }
    }
    uVar19 = 0;
    bVar8 = true;
    do {
      if (*param_2 < 8) {
        plVar12 = *(long **)puVar4;
        lVar14 = *plVar12;
        bVar13 = *(byte *)(lVar14 + 0x473);
        puVar18 = (uint *)puVar5;
        if ((long)(char)bVar13 == 0xffffffffffffffff) {
LAB_02b5f90c:
          puVar18 = (uint *)PTR_DAT_04bb5038;
          if ((uint)(byte)*puVar7 != (uVar19 & 0xff)) {
            puVar18 = (uint *)puVar5;
          }
        }
        else {
          puVar1 = (uint *)(lVar14 + 0x48);
          puVar2 = puVar1 + ((long)(char)bVar13 & 0xffffffffU) * 0x20;
          if (7 < bVar13) {
            puVar2 = puVar1;
          }
          if ((*puVar2 >> 3 & 1) == 0) goto LAB_02b5f90c;
          if (((uVar19 ^ 0xffffffff) & 0xff) != 0) {
            puVar2 = puVar1 + ((long)(char)uVar19 & 0xffffffffU) * 0x20;
            if ((uVar19 & 0xf8) != 0) {
              puVar2 = puVar1;
            }
            if ((*puVar2 & 1) != 0) {
              puVar18 = puVar2 + 0x1e;
            }
          }
        }
        bVar20 = (byte)*puVar18;
        if (7 < bVar20) {
          bVar20 = 0xff;
        }
        if (bVar20 != *param_2) goto LAB_02b5f978;
      }
      else {
        plVar12 = *(long **)puVar4;
        lVar14 = *plVar12;
        bVar13 = *(byte *)(lVar14 + 0x473);
LAB_02b5f978:
        psVar15 = (short *)puVar6;
        if (bVar13 == 0xff) {
          if ((uint)(byte)*puVar7 == (uVar19 & 0xff)) goto LAB_02b5fa14;
        }
        else {
          puVar18 = (uint *)(lVar14 + 0x48);
          puVar1 = puVar18 + ((long)(char)bVar13 & 0xffffffffU) * 0x20;
          if (7 < bVar13) {
            puVar1 = puVar18;
          }
          pbVar3 = puVar7;
          if ((*puVar1 & 8) != 0) {
            pbVar3 = (byte *)(lVar14 + 0x473);
          }
          if ((uint)*pbVar3 == (uVar19 & 0xff)) {
LAB_02b5fa14:
            sVar11 = *psVar15;
            if (sVar11 != -1) {
              bVar9 = DAT_055c1b60 == &DAT_055c1b58;
              puVar17 = DAT_055c1b60 + -8;
              if ((sVar11 != 0) && (puVar16 = DAT_055c1b60, puVar17 != &DAT_055c1b18)) {
                do {
                  puVar16 = (undefined8 *)puVar16[1];
                  sVar11 = sVar11 + -1;
                  bVar9 = puVar16 == &DAT_055c1b58;
                } while (!bVar9 && sVar11 != 0);
                puVar17 = puVar16 + -8;
              }
              puVar16 = &DAT_055c04a0;
              if (!bVar9) {
                puVar16 = puVar17;
              }
              uVar10 = FUN_02acce10(&local_78,*(undefined4 *)(puVar16 + 7));
              if ((uVar10 & 1) != 0) {
                return bVar8;
              }
            }
          }
          else if ((((uVar19 ^ 0xffffffff) & 0xff) != 0) && ((*puVar1 >> 3 & 1) != 0)) {
            puVar1 = puVar18 + ((long)(char)uVar19 & 0xffffffffU) * 0x20;
            if ((uVar19 & 0xf8) != 0) {
              puVar1 = puVar18;
            }
            if (((byte)*puVar1 >> 3 & 1) != 0) {
              lVar14 = plVar12[2];
              if ((*(byte *)(lVar14 + 0x1e2) == 0xff) ||
                 ((uint)*(byte *)(lVar14 + 0x1e2) != (uVar19 & 0xff))) {
                if (7 < (uVar19 & 0xff)) goto LAB_02b5f8b4;
                psVar15 = (short *)(lVar14 + ((ulong)uVar19 & 0xff) * 0xc + 0x108);
              }
              else {
                psVar15 = (short *)(lVar14 + 0x1e0);
              }
              goto LAB_02b5fa14;
            }
          }
        }
      }
LAB_02b5f8b4:
      bVar8 = uVar19 < 7;
      uVar19 = uVar19 + 1;
    } while (uVar19 != 8);
  }
  return bVar8;
}


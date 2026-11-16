
int FUN_02679690(byte *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  short sVar4;
  long lVar5;
  short sVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  short *psVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  short *psVar21;
  long lVar22;
  ulong uVar23;
  undefined *local_88;
  short local_80;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined4 local_7c;
  long local_78;
  short local_6c;
  undefined1 local_6a;
  undefined1 local_69;
  undefined4 local_68;
  byte local_64 [4];
  
  if ((*param_1 < 8) &&
     ((((uVar8 = FUN_02582d8c(param_1,1), uVar8 < 8 &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar8 * 0x13f0 + 0x13d4) != '\0')) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar8 * 0x13f0 + 0x13d6) != '\0')) ||
      (((*param_1 < 8 && (uVar8 = FUN_02582d8c(param_1,1), uVar8 < 8)) &&
       ((lVar13 = *(long *)PTR_DAT_04bb4fb8,
        *(char *)(lVar13 + (ulong)uVar8 * 0x13f0 + 0x13d4) != '\0' &&
        ((*(char *)(lVar13 + (ulong)uVar8 * 0x13f0 + 0x13d6) != '\0' &&
         (*(int *)(lVar13 + (ulong)uVar8 * 0x13f0 + 0x13d0) == 1)))))))))) {
    local_64[0] = *param_1;
    if (7 < local_64[0]) {
      local_64[0] = 0xff;
    }
    lVar13 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_64,1);
    if (lVar13 != 0) {
      lVar22 = lVar13 + 0x194b0;
      if (*(long *)(lVar13 + 0x194b8) == 0) {
        lVar22 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
      }
      if ((*(long **)(lVar22 + 0x98) == (long *)0x0) ||
         (puVar14 = (undefined8 *)**(long **)(lVar22 + 0x98), puVar14 == (undefined8 *)0x0)) {
        uVar8 = 1;
      }
      else {
        uVar8 = (**(code **)*puVar14)();
        uVar8 = uVar8 ^ 1;
      }
      uVar9 = FUN_027f9664(param_1);
      puVar7 = PTR_DAT_04bb43c0;
      if ((int)uVar9 < 1) {
        iVar20 = 0;
      }
      else {
        uVar23 = 0;
        iVar20 = 0;
        lVar13 = 0xb8;
        puVar1 = PTR_DAT_04bc0510 + 0x10;
        do {
          lVar19 = *(long *)(lVar22 + 0x80) + *(long *)(lVar22 + 0x78);
          uVar10 = *(uint *)(lVar19 + 0x158);
          if (0x13 < uVar10) {
            uVar10 = 0x14;
          }
          lVar5 = lVar13;
          if ((uint)uVar23 < uVar10) {
LAB_026798e0:
            psVar21 = (short *)(lVar19 + lVar5);
            psVar16 = psVar21;
            if (*psVar21 != -2) {
              lVar19 = *(long *)puVar7;
              uVar10 = FUN_0277d6c4(psVar21);
              if (*(long *)puVar7 == 0) goto LAB_02679950;
              lVar19 = *(long *)(lVar19 + 0x57e58);
              uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
              psVar16 = (short *)PTR_DAT_04bb37e0;
              if (uVar10 < *(uint *)(lVar19 + 0x1d8)) {
                if (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar10 * 8) != 0) {
                  psVar16 = psVar21;
                }
              }
            }
          }
          else {
            uVar17 = (uint)(uVar23 + -uVar10);
            if ((int)uVar17 < 0) {
LAB_02679950:
              psVar16 = (short *)PTR_DAT_04bb37e0;
            }
            else {
              uVar18 = *(uint *)(lVar19 + 0xa0);
              if (0x13 < uVar18) {
                uVar18 = 0x14;
              }
              psVar16 = (short *)PTR_DAT_04bb37e0;
              if (uVar17 < uVar18) {
                lVar5 = (uVar23 + -uVar10 & 0xffffffff) * 8;
                goto LAB_026798e0;
              }
            }
          }
          sVar4 = *psVar16;
          sVar6 = psVar16[1];
          uVar3 = *(undefined1 *)((long)psVar16 + 3);
          uVar2 = *(undefined4 *)(psVar16 + 2);
          lVar19 = *(long *)puVar7;
          local_6c = sVar4;
          local_6a = (char)sVar6;
          local_69 = uVar3;
          local_68 = uVar2;
          uVar10 = FUN_0277d6c4(&local_6c);
          if (*(long *)puVar7 != 0) {
            lVar19 = *(long *)(lVar19 + 0x57e58);
            uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
            if ((uVar10 < *(uint *)(lVar19 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
              iVar11 = FUN_0277d6c4(&local_6c);
              iVar12 = FUN_0277d6c4(param_2);
              if (iVar11 == iVar12) {
                lVar19 = *(long *)puVar7;
                local_78 = 0;
                local_88 = puVar1;
                local_80 = sVar4;
                local_7e = (char)sVar6;
                local_7d = uVar3;
                local_7c = uVar2;
                uVar10 = FUN_0277d6c4(&local_80);
                if (*(long *)puVar7 != 0) {
                  lVar19 = *(long *)(lVar19 + 0x57e58);
                  uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
                  if ((uVar10 < *(uint *)(lVar19 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                    lVar19 = *(long *)PTR_DAT_04bc0428;
                    uVar10 = FUN_0277d6c4(&local_6c);
                    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
                    if ((uVar10 < *(uint *)(lVar19 + 0x1d8)) &&
                       (lVar19 = *(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar10 * 8),
                       lVar19 != 0)) {
                      local_78 = lVar19;
                    }
                  }
                }
                uVar15 = FUN_01af0020(&local_88);
                if ((uVar15 & 1) == 0) {
                  iVar11 = 1;
                }
                else {
                  iVar11 = FUN_01af02d0(&local_88);
                }
                iVar20 = iVar11 + iVar20;
              }
            }
          }
          uVar23 = uVar23 + 1;
          lVar13 = lVar13 + 8;
        } while (uVar9 != uVar23);
      }
      if ((uVar8 & 1) != 0) {
        return iVar20;
      }
      if (*(long *)(lVar22 + 0x98) == 0) {
        return iVar20;
      }
      puVar14 = *(undefined8 **)(*(long *)(lVar22 + 0x98) + 8);
      if (puVar14 == (undefined8 *)0x0) {
        return iVar20;
      }
      (**(code **)*puVar14)();
      return iVar20;
    }
  }
  return 0;
}


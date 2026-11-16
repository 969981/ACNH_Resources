
ulong FUN_02678e00(byte *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  short sVar3;
  short sVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  short *psVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  short *psVar17;
  long lVar18;
  long lVar19;
  uint local_ac;
  short local_80;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined4 local_7c;
  undefined8 local_78;
  short local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  byte local_68 [4];
  uint local_64;
  
  if ((*param_1 < 8) &&
     ((((local_64 = param_2, uVar6 = FUN_02582d8c(param_1,1), uVar6 < 8 &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar6 * 0x13f0 + 0x13d4) != '\0')) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar6 * 0x13f0 + 0x13d6) != '\0')) ||
      (((*param_1 < 8 && (uVar6 = FUN_02582d8c(param_1,1), uVar6 < 8)) &&
       ((lVar8 = *(long *)PTR_DAT_04bb4fb8,
        *(char *)(lVar8 + (ulong)uVar6 * 0x13f0 + 0x13d4) != '\0' &&
        ((*(char *)(lVar8 + (ulong)uVar6 * 0x13f0 + 0x13d6) != '\0' &&
         (*(int *)(lVar8 + (ulong)uVar6 * 0x13f0 + 0x13d0) == 1)))))))))) {
    local_68[0] = *param_1;
    if (7 < local_68[0]) {
      local_68[0] = 0xff;
    }
    lVar8 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_68,1);
    if (lVar8 != 0) {
      lVar18 = lVar8 + 0x194b0;
      if (*(long *)(lVar8 + 0x194b8) == 0) {
        lVar18 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
      }
      if ((*(long **)(lVar18 + 0x98) == (long *)0x0) ||
         (puVar9 = (undefined8 *)**(long **)(lVar18 + 0x98), puVar9 == (undefined8 *)0x0)) {
        local_ac = 0;
      }
      else {
        local_ac = (**(code **)*puVar9)();
      }
      uVar6 = FUN_027f9664(param_1);
      puVar5 = PTR_DAT_04bb43c0;
      if (0 < (int)uVar6) {
        uVar15 = 0;
        lVar8 = 0xb8;
        do {
          lVar16 = *(long *)(lVar18 + 0x80) + *(long *)(lVar18 + 0x78);
          uVar7 = *(uint *)(lVar16 + 0x158);
          if (0x13 < uVar7) {
            uVar7 = 0x14;
          }
          lVar19 = lVar8;
          if ((uint)uVar15 < uVar7) {
LAB_02679020:
            psVar17 = (short *)(lVar16 + lVar19);
            psVar10 = psVar17;
            if (*psVar17 != -2) {
              lVar16 = *(long *)puVar5;
              uVar7 = FUN_0277d6c4(psVar17);
              if (*(long *)puVar5 == 0) goto LAB_02679090;
              lVar16 = *(long *)(lVar16 + 0x57e58);
              uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
              psVar10 = (short *)PTR_DAT_04bb37e0;
              if (uVar7 < *(uint *)(lVar16 + 0x1d8)) {
                if (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar7 * 8) != 0) {
                  psVar10 = psVar17;
                }
              }
            }
          }
          else {
            uVar12 = (uint)(uVar15 + -uVar7);
            if ((int)uVar12 < 0) {
LAB_02679090:
              psVar10 = (short *)PTR_DAT_04bb37e0;
            }
            else {
              uVar14 = *(uint *)(lVar16 + 0xa0);
              if (0x13 < uVar14) {
                uVar14 = 0x14;
              }
              psVar10 = (short *)PTR_DAT_04bb37e0;
              if (uVar12 < uVar14) {
                lVar19 = (uVar15 + -uVar7 & 0xffffffff) * 8;
                goto LAB_02679020;
              }
            }
          }
          sVar3 = *psVar10;
          sVar4 = psVar10[1];
          uVar2 = *(undefined1 *)((long)psVar10 + 3);
          uVar1 = *(undefined4 *)(psVar10 + 2);
          lVar19 = *(long *)puVar5;
          local_70 = sVar3;
          local_6e = (char)sVar4;
          local_6d = uVar2;
          local_6c = uVar1;
          uVar7 = FUN_0277d6c4(&local_70);
          lVar16 = *(long *)puVar5;
          if (lVar16 != 0) {
            lVar19 = *(long *)(lVar19 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
            if ((uVar7 < *(uint *)(lVar19 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
              local_78 = 0;
              local_80 = sVar3;
              local_7e = (char)sVar4;
              local_7d = uVar2;
              local_7c = uVar1;
              uVar7 = FUN_0277d6c4(&local_80);
              if (*(long *)puVar5 == 0) {
LAB_0267921c:
                uVar7 = 0xbc;
              }
              else {
                lVar16 = *(long *)(lVar16 + 0x57e58);
                uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
                if ((*(uint *)(lVar16 + 0x1d8) <= uVar7) ||
                   (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar7 * 8) == 0))
                goto LAB_0267921c;
                lVar16 = *(long *)PTR_DAT_04bc0428;
                uVar7 = FUN_0277d6c4(&local_70);
                uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
                if ((*(uint *)(lVar16 + 0x1d8) <= uVar7) ||
                   (puVar11 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar7 * 8),
                   puVar11 == (uint *)0x0)) goto LAB_0267921c;
                uVar12 = *puVar11;
                uVar7 = 0;
                if ((uVar12 != 0) && (puVar11 != (uint *)(ulong)uVar12)) {
                  puVar13 = (uint *)((long)puVar11 - (long)(ulong)uVar12);
                  uVar7 = 0;
                  if (*puVar13 != 0) {
                    uVar7 = puVar13[1];
                    if ((uVar7 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
                      lVar16 = 0xc;
                      if (*(char *)((long)puVar13 + 10) != '\0') {
                        lVar16 = 0x1c;
                      }
                      lVar16 = (long)puVar13 + lVar16 + (ulong)(ushort)puVar13[2] * 8;
                      if (lVar16 != 0) {
                        uVar12 = 0;
                        if ((ulong)uVar7 != 0) {
                          uVar12 = (uint)((ulong)((long)puVar11 - lVar16) / (ulong)uVar7);
                        }
                        if (*puVar13 <= uVar12) {
                          uVar12 = 0xffffffff;
                        }
                        if ((uVar12 < *(uint *)PTR_DAT_04bc00c8) &&
                           (uVar7 = (uint)*(ushort *)
                                           (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar12 * 2)
                           , uVar7 < 0xbd)) goto LAB_02679220;
                      }
                    }
                    uVar7 = 0;
                  }
                }
              }
LAB_02679220:
              if (uVar7 == local_64) {
                if ((((local_ac & 1) != 0) && (*(long *)(lVar18 + 0x98) != 0)) &&
                   (puVar9 = *(undefined8 **)(*(long *)(lVar18 + 0x98) + 8),
                   puVar9 != (undefined8 *)0x0)) {
                  (**(code **)*puVar9)();
                }
                goto LAB_0267928c;
              }
            }
          }
          uVar15 = uVar15 + 1;
          lVar8 = lVar8 + 8;
        } while (uVar6 != uVar15);
      }
      if ((((local_ac & 1) != 0) && (*(long *)(lVar18 + 0x98) != 0)) &&
         (puVar9 = *(undefined8 **)(*(long *)(lVar18 + 0x98) + 8), puVar9 != (undefined8 *)0x0)) {
        (**(code **)*puVar9)();
      }
    }
  }
  uVar15 = (ulong)*(uint *)PTR_DAT_04bb4e20;
LAB_0267928c:
  return uVar15 & 0xffffffff;
}


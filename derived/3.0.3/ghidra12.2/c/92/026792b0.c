
ulong FUN_026792b0(undefined4 *param_1,uint param_2)

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
  long *plVar10;
  short *psVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  short *psVar18;
  long lVar19;
  long lVar20;
  uint local_ac;
  short local_80;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined4 local_7c;
  undefined8 local_78;
  short local_6c;
  undefined1 local_6a;
  undefined1 local_69;
  undefined4 local_68;
  uint local_64;
  
  puVar5 = PTR_DAT_04bb46b0;
  if ((*(long *)PTR_DAT_04bb46b0 == 0) ||
     (local_64 = param_2, lVar8 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,*param_1), lVar8 == 0))
  goto LAB_02679660;
  lVar19 = lVar8 + 0x194b0;
  if (*(long *)(lVar8 + 0x194b8) == 0) {
    lVar19 = *(long *)(*(long *)puVar5 + 0x20);
    plVar10 = *(long **)(lVar19 + 0x98);
    if (plVar10 != (long *)0x0) goto LAB_02679324;
LAB_02679340:
    local_ac = 0;
  }
  else {
    plVar10 = *(long **)(lVar8 + 0x19548);
    if (plVar10 == (long *)0x0) goto LAB_02679340;
LAB_02679324:
    if ((undefined8 *)*plVar10 == (undefined8 *)0x0) goto LAB_02679340;
    local_ac = (*(code *)**(undefined8 **)*plVar10)();
  }
  uVar6 = FUN_027f9730(lVar8);
  puVar5 = PTR_DAT_04bb43c0;
  if (0 < (int)uVar6) {
    uVar16 = 0;
    lVar8 = 0xb8;
    do {
      lVar17 = *(long *)(lVar19 + 0x80) + *(long *)(lVar19 + 0x78);
      uVar7 = *(uint *)(lVar17 + 0x158);
      if (0x13 < uVar7) {
        uVar7 = 0x14;
      }
      lVar20 = lVar8;
      if ((uint)uVar16 < uVar7) {
LAB_02679400:
        psVar18 = (short *)(lVar17 + lVar20);
        psVar11 = psVar18;
        if (*psVar18 != -2) {
          lVar17 = *(long *)puVar5;
          uVar7 = FUN_0277d6c4(psVar18);
          if (*(long *)puVar5 == 0) goto LAB_02679470;
          lVar17 = *(long *)(lVar17 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
          psVar11 = (short *)PTR_DAT_04bb37e0;
          if (uVar7 < *(uint *)(lVar17 + 0x1d8)) {
            if (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar7 * 8) != 0) {
              psVar11 = psVar18;
            }
          }
        }
      }
      else {
        uVar13 = (uint)(uVar16 + -uVar7);
        if ((int)uVar13 < 0) {
LAB_02679470:
          psVar11 = (short *)PTR_DAT_04bb37e0;
        }
        else {
          uVar15 = *(uint *)(lVar17 + 0xa0);
          if (0x13 < uVar15) {
            uVar15 = 0x14;
          }
          psVar11 = (short *)PTR_DAT_04bb37e0;
          if (uVar13 < uVar15) {
            lVar20 = (uVar16 + -uVar7 & 0xffffffff) * 8;
            goto LAB_02679400;
          }
        }
      }
      sVar3 = *psVar11;
      sVar4 = psVar11[1];
      uVar2 = *(undefined1 *)((long)psVar11 + 3);
      uVar1 = *(undefined4 *)(psVar11 + 2);
      lVar20 = *(long *)puVar5;
      local_6c = sVar3;
      local_6a = (char)sVar4;
      local_69 = uVar2;
      local_68 = uVar1;
      uVar7 = FUN_0277d6c4(&local_6c);
      lVar17 = *(long *)puVar5;
      if (lVar17 != 0) {
        lVar20 = *(long *)(lVar20 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar20 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          local_78 = 0;
          local_80 = sVar3;
          local_7e = (char)sVar4;
          local_7d = uVar2;
          local_7c = uVar1;
          uVar7 = FUN_0277d6c4(&local_80);
          if (*(long *)puVar5 == 0) {
LAB_026795fc:
            uVar7 = 0xbc;
          }
          else {
            lVar17 = *(long *)(lVar17 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
            if ((*(uint *)(lVar17 + 0x1d8) <= uVar7) ||
               (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar7 * 8) == 0))
            goto LAB_026795fc;
            lVar17 = *(long *)PTR_DAT_04bc0428;
            uVar7 = FUN_0277d6c4(&local_6c);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
            if ((*(uint *)(lVar17 + 0x1d8) <= uVar7) ||
               (puVar12 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar7 * 8),
               puVar12 == (uint *)0x0)) goto LAB_026795fc;
            uVar13 = *puVar12;
            uVar7 = 0;
            if ((uVar13 != 0) && (puVar12 != (uint *)(ulong)uVar13)) {
              puVar14 = (uint *)((long)puVar12 - (long)(ulong)uVar13);
              uVar7 = 0;
              if (*puVar14 != 0) {
                uVar7 = puVar14[1];
                if ((uVar7 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
                  lVar17 = 0xc;
                  if (*(char *)((long)puVar14 + 10) != '\0') {
                    lVar17 = 0x1c;
                  }
                  lVar17 = (long)puVar14 + lVar17 + (ulong)(ushort)puVar14[2] * 8;
                  if (lVar17 != 0) {
                    uVar13 = 0;
                    if ((ulong)uVar7 != 0) {
                      uVar13 = (uint)((ulong)((long)puVar12 - lVar17) / (ulong)uVar7);
                    }
                    if (*puVar14 <= uVar13) {
                      uVar13 = 0xffffffff;
                    }
                    if ((uVar13 < *(uint *)PTR_DAT_04bc00c8) &&
                       (uVar7 = (uint)*(ushort *)
                                       (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar13 * 2),
                       uVar7 < 0xbd)) goto LAB_02679600;
                  }
                }
                uVar7 = 0;
              }
            }
          }
LAB_02679600:
          if (uVar7 == local_64) {
            if ((((local_ac & 1) != 0) && (*(long *)(lVar19 + 0x98) != 0)) &&
               (puVar9 = *(undefined8 **)(*(long *)(lVar19 + 0x98) + 8), puVar9 != (undefined8 *)0x0
               )) {
              (**(code **)*puVar9)();
            }
            goto LAB_0267966c;
          }
        }
      }
      uVar16 = uVar16 + 1;
      lVar8 = lVar8 + 8;
    } while (uVar6 != uVar16);
  }
  if ((((local_ac & 1) != 0) && (*(long *)(lVar19 + 0x98) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar19 + 0x98) + 8), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
LAB_02679660:
  uVar16 = (ulong)*(uint *)PTR_DAT_04bb4e20;
LAB_0267966c:
  return uVar16 & 0xffffffff;
}


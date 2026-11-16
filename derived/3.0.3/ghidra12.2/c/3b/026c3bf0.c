
undefined8 FUN_026c3bf0(long param_1,int param_2)

{
  uint uVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint *puVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  uint *puVar16;
  undefined *local_50;
  char *pcStack_48;
  
  puVar8 = PTR_DAT_04bc39f8;
  puVar7 = PTR_DAT_04bb6298;
  puVar6 = PTR_DAT_04bb27d0;
  puVar5 = PTR_DAT_04bb2020;
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 != -1) {
    puVar12 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar12 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar12 >> 0xb & 1) != 0) &&
       ((param_2 == 3 ||
        (((((*(long *)PTR_DAT_04bb2118 != 0 && (*(long *)PTR_DAT_04bb2720 != 0)) &&
           (lVar13 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330), lVar13 != 0)) &&
          (*(int *)(lVar13 + 8) == 4)) &&
         (((*(long *)PTR_DAT_04bb2808 == 0 ||
           (lVar13 = *(long *)(*(long *)PTR_DAT_04bb2808 + 8), lVar13 == 0)) ||
          (*(uint *)(lVar13 + 0x1b0) < 2)))))))) {
      if (*(long *)PTR_DAT_04bb27d0 != 0) {
        lVar13 = *(long *)(*(long *)PTR_DAT_04bb27d0 + 0x10);
        iVar9 = *(int *)(lVar13 + 0x380);
        if (iVar9 - 0x25U < 2) {
          return 0;
        }
        if (iVar9 == 0x23) {
          return 0;
        }
        if (iVar9 == 0x24) {
          if (*(long *)(lVar13 + 0x3c8) == 0) {
            return 0;
          }
          if ((int)*(uint *)(lVar13 + 0x3d8) < 0) {
            return 0;
          }
          lVar14 = (ulong)*(uint *)(lVar13 + 0x3d8) + 1;
          plVar15 = (long *)(*(long *)(lVar13 + 0x3c8) + 8);
          while ((undefined *)plVar15[-1] != PTR_LAB_04bc12b0 || *plVar15 != 0) {
            plVar15 = plVar15 + 4;
            lVar14 = lVar14 + -1;
            if (lVar14 == 0) {
              return 0;
            }
          }
        }
      }
      if ((((*puVar12 >> 0x11 & 1) != 0) &&
          (uVar4 = (uint)*(ushort *)(*(long *)PTR_DAT_04bb4928 + 8) - (uint)DAT_0534f428,
          uVar4 < DAT_0534f408)) &&
         ((puVar12 = *(uint **)(DAT_0534f410 + (long)(int)uVar4 * 8), puVar12 != (uint *)0x0 &&
          (uVar4 = *puVar12, uVar4 != 0 && puVar12 != (uint *)(ulong)uVar4)))) {
        puVar16 = (uint *)((long)puVar12 - (long)(ulong)uVar4);
        if (((*puVar16 != 0) && (uVar4 = puVar16[1], uVar4 != 0)) &&
           ((ulong)(ushort)puVar16[2] != 0)) {
          lVar13 = 0xc;
          if (*(char *)((long)puVar16 + 10) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar16 + lVar13 + (ulong)(ushort)puVar16[2] * 8;
          if (lVar13 != 0) {
            uVar1 = 0;
            if ((ulong)uVar4 != 0) {
              uVar1 = (uint)((ulong)((long)puVar12 - lVar13) / (ulong)uVar4);
            }
            if (*puVar16 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < *(uint *)PTR_DAT_04bc0e98) &&
               (*(short *)(*(long *)(PTR_DAT_04bc0e98 + 8) + (long)(int)uVar1 * 2) == 1)) {
              return 0;
            }
          }
        }
      }
      local_50 = PTR_DAT_04bb2020 + 0x10;
      pcStack_48 = "JuneBrideCeremonyDemoAfterNow";
      iVar9 = FUN_02743000(&local_50);
      if ((((iVar9 == 0) || (*(long *)PTR_DAT_04bb5ce0 == 0)) ||
          (*(char *)(*(long *)PTR_DAT_04bb5ce0 + 0xf5c) == '\0')) &&
         (((lVar13 = *(long *)puVar6, lVar13 == 0 || (*(long *)(lVar13 + 0x28) == 0)) ||
          (*(int *)(lVar13 + 0x80) != 1)))) {
        uVar3 = *(ushort *)puVar7;
        if ((long)(short)uVar3 != 0xffffffffffffffff) {
          local_50 = (undefined *)CONCAT44(local_50._4_4_,0x19);
          puVar12 = (uint *)(puVar8 + ((long)(short)uVar3 & 0xffffffffU) * 8);
          if (0xff < uVar3) {
            puVar12 = (uint *)puVar8;
          }
          if ((*puVar12 >> 0x19 & 1) != 0) {
            local_50 = puVar5 + 0x10;
            pcStack_48 = "OtgGetStartingSalary";
            uVar10 = FUN_02758850(&local_50);
            if ((int)uVar10 == 0) {
              return uVar10;
            }
          }
        }
        lVar13 = *(long *)PTR_DAT_04bb27f8;
        if ((((lVar13 == 0) || (*(int *)(lVar13 + 0x18) != 1)) ||
            ((*(int *)(lVar13 + 0x14) < 7 || (8 < *(int *)(lVar13 + 0x14))))) &&
           ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0 ||
            ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)))) {
          if (*(long *)PTR_DAT_04bb2800 != 0) {
            local_50 = puVar5 + 0x10;
            pcStack_48 = "NpcInteriorCoordinate";
            iVar9 = FUN_02743000(&local_50);
            if (iVar9 != 0) {
              return 0;
            }
          }
          if ((((param_2 == 3) && ((*(byte *)(param_1 + 0x43d) >> 5 & 1) != 0)) ||
              (((*(long *)PTR_DAT_04bb3240 == 0 ||
                ((lVar13 = *(long *)(*(long *)PTR_DAT_04bb3240 + 0x1da0), lVar13 == 0 ||
                 (*(char *)(lVar13 + 0x520d) == '\0')))) &&
               ((*(byte *)(param_1 + 0x43c) >> 6 & 1) == 0)))) &&
             ((uVar11 = FUN_026c45e0(), (uVar11 & 1) != 0 &&
              ((*(byte *)(param_1 + 0x43c) & 0x38) == 0)))) {
            local_50 = puVar5 + 0x10;
            pcStack_48 = "InPlayerBirthday";
            iVar9 = FUN_02743000(&local_50);
            if ((iVar9 == 0) &&
               ((*(long *)PTR_DAT_04bb2118 == 0 || (uVar11 = FUN_007c2ad0(), (uVar11 & 1) == 0)))) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}


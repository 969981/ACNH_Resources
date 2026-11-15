
uint FUN_021dd800(uint *param_1,uint *param_2)

{
  short sVar1;
  int iVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined *puVar11;
  uint *puVar12;
  ulong *puVar13;
  char cVar14;
  char *pcVar15;
  uint *puVar16;
  int *piVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined *local_60;
  char *local_58;
  undefined8 local_50;
  long local_48;
  
  puVar4 = PTR_DAT_04bb30a0;
  uVar7 = *param_1;
  if ((uVar7 < 10) && ((&DAT_053fee41)[(ulong)uVar7 * 0xba0] != '\0')) {
    sVar1 = *(short *)PTR_DAT_04bb6298;
    if (sVar1 == -1) {
LAB_021dd908:
      uVar10 = FUN_021ddf10(param_1);
      if (((((uVar10 & 1) != 0) && (*(long *)PTR_DAT_04bb2720 != 0)) &&
          (lVar8 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330), lVar8 != 0)) &&
         (*(int *)(lVar8 + 8) == 1)) {
        return 10;
      }
    }
    else {
      local_60 = (undefined *)CONCAT44(local_60._4_4_,1);
      puVar12 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar1 * 8);
      if (0xff < (uint)(int)sVar1) {
        puVar12 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar12 >> 1 & 1) == 0) goto LAB_021dd908;
      if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
        if (((&DAT_053fea30)[(ulong)uVar7 * 0xba0] & 1) == 0) goto LAB_021dd8d4;
LAB_021dd950:
        uVar7 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0);
        if ((uVar7 & 0xfffffffe) == 4) {
          return 0x12;
        }
        uVar7 = FUN_00a86724(*(undefined8 *)puVar4);
        if ((uVar7 & 0xfffffffe) == 6) {
          local_60 = PTR_DAT_04bb2020 + 0x10;
          local_58 = "EquipChristmasWear";
          iVar6 = FUN_0265c700(*param_1,&local_60);
          return (uint)(iVar6 == 0);
        }
      }
      else {
        if ((*(byte *)(*(long *)PTR_DAT_04bb3968 + (ulong)uVar7 * 0x28 + 0xe23) & 0x30) == 0x10)
        goto LAB_021dd950;
LAB_021dd8d4:
        if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
          if ((int)(&DAT_053fe898)[(ulong)uVar7 * 0x2e8] < 1) {
            puVar12 = (uint *)PTR_DAT_04bc15a0;
          }
          else {
            uVar10 = (ulong)uVar7;
            iVar2 = (&DAT_053fe898)[(ulong)uVar7 * 0x2e8] + (&DAT_053fe894)[uVar10 * 0x2e8] + -1;
            iVar6 = 0;
            if ((int)(&DAT_053fe890)[uVar10 * 0x2e8] <= iVar2) {
              iVar6 = (&DAT_053fe890)[uVar10 * 0x2e8];
            }
            puVar12 = (uint *)((&DAT_053fe888)[uVar10 * 0x174] + (long)(iVar2 - iVar6) * 0x14 + 8);
          }
          uVar18 = *puVar12;
        }
        else {
          uVar18 = *(byte *)(*(long *)PTR_DAT_04bb3968 + (ulong)uVar7 * 0x28 + 0xe23) & 3;
        }
        if (((uVar18 == 1) ||
            (((&DAT_053fede8)[(ulong)uVar7 * 0x174] != 0 &&
             (*(int *)((&DAT_053fede8)[(ulong)uVar7 * 0x174] + 4) == 1)))) &&
           (lVar8 = FUN_0265c2a0(), lVar8 != 0)) {
          if ((*(long **)(lVar8 + 0x28) == (long *)0x0) ||
             (puVar9 = (undefined8 *)**(long **)(lVar8 + 0x28), puVar9 == (undefined8 *)0x0)) {
            uVar7 = (uint)*(byte *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x1315b);
          }
          else {
            uVar10 = (**(code **)*puVar9)();
            uVar7 = (uint)*(byte *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x1315b);
            if ((((uVar10 & 1) != 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
               (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 8), puVar9 != (undefined8 *)0x0)
               ) {
              (**(code **)*puVar9)();
            }
          }
          puVar4 = PTR_DAT_04bb32e8;
          if (uVar7 == 1) {
            return 0;
          }
          if (uVar7 == 0x12) {
            return 0;
          }
          if ((uVar7 & 0xfe) != 0x16) {
            return uVar7;
          }
          local_60 = PTR_DAT_04bb2020 + 0x10;
          uVar19 = *(undefined8 *)PTR_DAT_04bb32f0;
          local_58 = "HarvestFestival";
          puVar13 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
          if (*(short *)puVar13 == 0) {
            local_50 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
            if ((char)(local_50 >> 0x20) < '\x05') {
              lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_50);
              local_48 = lVar8 + -0x15180;
              local_50 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
            }
            puVar13 = &local_50;
            uVar10 = local_50 >> 0x30;
            local_50._0_6_ = CONCAT24(5,(undefined4)local_50);
            local_50 = CONCAT26((short)uVar10,(undefined6)local_50) & 0xff00ffffffffffff;
          }
          uVar10 = *puVar13;
          uVar10 = FUN_00879dd0(uVar19,&local_60,uVar10,uVar10 >> 0x10,uVar10 >> 0x18,0);
          if ((uVar10 & 1) == 0) {
            return uVar7;
          }
          if (*(char *)(*(long *)puVar4 + 0x4064) < '\x05') {
            uVar7 = 0;
          }
          return uVar7;
        }
      }
    }
    if (param_2 == (uint *)0x0) {
      uVar7 = FUN_021dcc90(param_1);
    }
    else {
      uVar7 = *param_2;
    }
    puVar5 = PTR_DAT_04bc1568;
    puVar4 = PTR_DAT_04bc1560;
    local_48 = CONCAT44(local_48._4_4_,uVar7);
    if ((9 < *param_1) ||
       (lVar8 = (ulong)*param_1 * 0xba0, puVar11 = &DAT_053fe348 + lVar8,
       (&DAT_053fee41)[lVar8] == '\0')) {
      puVar11 = (undefined *)0x0;
    }
    piVar17 = (int *)PTR_DAT_04bc2838;
    if (puVar11 != (undefined *)0x0) {
      piVar17 = (int *)(puVar11 + 0x524);
    }
    iVar6 = *piVar17;
    if (iVar6 == 2) {
      if ((uVar7 - 6 < 9) && ((0x189U >> (ulong)(uVar7 - 6 & 0x1f) & 1) != 0)) {
        uVar18 = 0x11;
        goto LAB_021ddde4;
      }
    }
    else if (iVar6 == 4) {
      if ((uVar7 | 4) == 0x15) {
        uVar18 = 6;
        goto LAB_021ddde4;
      }
    }
    else if ((iVar6 == 3) && ((uVar18 = 9, uVar7 == 4 || (uVar7 == 0xf)))) goto LAB_021ddde4;
    lVar8 = *(long *)PTR_DAT_04bb3968;
    if (lVar8 == 0) {
LAB_021ddc00:
      puVar12 = (uint *)PTR_DAT_04bc2828;
    }
    else {
      if ((int)*(uint *)(lVar8 + 0x16ac8) < 1) {
        if ((((*(long *)(lVar8 + 0x169b8) != 0) &&
             (puVar12 = *(uint **)(*(long *)(lVar8 + 0x169b8) + 8), puVar12 != (uint *)0x0)) &&
            ((*(uint *)(lVar8 + 0x169d0) <= uVar7 ||
             (*(char *)(*(long *)(lVar8 + 0x169d8) + (long)(int)uVar7) != '\0')))) &&
           (((uVar7 < *puVar12 && (puVar12[1] != 0)) && ((ushort)puVar12[2] != 0)))) {
          iVar6 = 0xc;
          if (*(char *)((long)puVar12 + 10) != '\0') {
            iVar6 = 0x1c;
          }
          puVar12 = (uint *)((ulong)(puVar12[1] * uVar7 + (uint)(ushort)puVar12[2] * 8 + iVar6) +
                            (long)puVar12);
          if (puVar12 != (uint *)0x0) goto LAB_021ddc08;
        }
        goto LAB_021ddc00;
      }
      if (*(uint *)(lVar8 + 0x16ac8) <= uVar7) goto LAB_021ddc00;
      if (*(uint *)(lVar8 + 0x16ab8) <= uVar7) {
        uVar7 = 0;
      }
      puVar12 = *(uint **)(*(long *)(lVar8 + 0x16ac0) + (ulong)uVar7 * 8);
      if (puVar12 == (uint *)0x0) goto LAB_021ddc00;
    }
LAB_021ddc08:
    if (*puVar12 != 0) {
      cVar14 = *PTR_DAT_04bc1560;
      do {
        if (cVar14 == '\0') {
          cVar14 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x98) = 0xffffffffffffffff;
        }
        else {
          uVar7 = *(uint *)(puVar5 + 0x10);
          if (-1 < (int)uVar7) {
            pcVar15 = (char *)((ulong)uVar7 + (long)puVar12);
            goto LAB_021ddcf8;
          }
          if (uVar7 != 0xffffffff) break;
        }
        puVar16 = (uint *)(ulong)*puVar12;
        pcVar15 = (char *)0x0;
        if ((*puVar12 == 0) || (puVar12 == puVar16)) goto LAB_021ddcf8;
        lVar8 = 0xc;
        if (*(char *)((long)puVar12 + (10 - (long)puVar16)) != '\0') {
          lVar8 = 0x1c;
        }
        lVar8 = (long)puVar12 + (lVar8 - (long)puVar16);
        if (lVar8 == 0) break;
        uVar10 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar16));
        *(undefined4 *)(puVar5 + 0x10) = 0xfffffffe;
        pcVar15 = (char *)0x0;
        if (uVar10 == 0) goto LAB_021ddcf8;
        piVar17 = (int *)(lVar8 + 4);
        while (piVar17[-1] != -0x26be24ee) {
          piVar17 = piVar17 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) {
            pcVar15 = (char *)0x0;
            goto LAB_021ddcf8;
          }
        }
        iVar6 = 0;
        if (*piVar17 != -1) {
          iVar6 = *piVar17;
        }
        *(int *)(puVar5 + 0x10) = iVar6;
      } while (*puVar12 != 0);
    }
    pcVar15 = (char *)0x0;
LAB_021ddcf8:
    local_58 = "";
    if (pcVar15 != (char *)0x0) {
      local_58 = pcVar15;
    }
    local_60 = PTR_DAT_04bb2020 + 0x10;
    uVar18 = 0;
    do {
      pcVar15 = "";
      if (uVar18 < 0x1b) {
        pcVar15 = (&PTR_s_cUsually_04a76f30)[uVar18];
      }
      (**(code **)(local_60 + 0x18))(&local_60);
      if (pcVar15 == local_58) goto LAB_021ddde4;
      if (*pcVar15 == *local_58) {
        if (*pcVar15 == '\0') goto LAB_021ddde4;
        lVar8 = 0x7fffe;
        pcVar3 = local_58;
        while( true ) {
          if (pcVar15[1] != pcVar3[1]) break;
          if (pcVar15[1] == '\0') goto LAB_021ddde4;
          if (pcVar15[2] != pcVar3[2]) break;
          if (pcVar15[2] == '\0') goto LAB_021ddde4;
          if ((lVar8 == 0) || (cVar14 = pcVar15[3], cVar14 != pcVar3[3])) break;
          lVar8 = lVar8 + -3;
          pcVar15 = pcVar15 + 3;
          pcVar3 = pcVar3 + 3;
          if (cVar14 == '\0') goto LAB_021ddde4;
        }
      }
      uVar7 = 0x1b;
      if ((int)uVar18 < 0x1b) {
        uVar7 = uVar18 + 1;
      }
      uVar18 = uVar7;
    } while (uVar7 != 0x1b);
  }
  uVar18 = 0;
LAB_021ddde4:
  uVar7 = FUN_021de320(param_1,uVar18);
  return uVar7;
}


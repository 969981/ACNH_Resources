
/* WARNING: Removing unreachable block (ram,0x0202bc68) */

undefined8 FUN_0202ba80(long param_1,float *param_2,uint *param_3,uint param_4)

{
  byte *pbVar1;
  int iVar2;
  ushort *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  int iVar7;
  char cVar8;
  byte bVar9;
  byte bVar10;
  ushort uVar11;
  short sVar12;
  ushort uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  uint *puVar22;
  short sVar23;
  undefined4 uVar24;
  undefined *puVar25;
  ushort uVar26;
  int *piVar27;
  ulong uVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  undefined8 local_d0;
  char *pcStack_c8;
  
  uVar28 = (ulong)param_4;
  param_2[0] = 10.0;
  param_2[1] = 0.0;
  param_2[2] = 10.0;
  uVar24 = 0;
  puVar3 = (ushort *)(param_1 + 0x5858);
  *param_3 = 0;
  if (9 < param_4) goto switchD_0202bd94_caseD_8;
  lVar19 = FUN_0265c2a0(uVar28);
  if (lVar19 == 0) {
LAB_0202bb6c:
    puVar25 = &DAT_053fe348 + uVar28 * 0xba0;
    cVar8 = (&DAT_053fee41)[uVar28 * 0xba0];
    if (cVar8 == '\0') {
      puVar25 = (undefined *)0x0;
LAB_0202bb98:
      iVar17 = 0x22;
    }
    else {
      if ((&DAT_053fede8)[uVar28 * 0x174] == 0) goto LAB_0202bb98;
      iVar17 = *(int *)((&DAT_053fede8)[uVar28 * 0x174] + 4);
    }
    local_d0 = (undefined *)CONCAT44(local_d0._4_4_,param_4);
    uVar13 = *(ushort *)(param_1 + 0x2b4);
    pbVar4 = *(byte **)PTR_DAT_04bb4760 + (ulong)param_4 * 0x15;
    if (0x6c < param_4) {
      pbVar4 = *(byte **)PTR_DAT_04bb4760;
    }
    if (uVar13 == 0xffff) {
LAB_0202bc60:
      uVar26 = 0xffff;
    }
    else {
      local_d0 = (undefined *)CONCAT44(local_d0._4_4_,3);
      puVar22 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar13 * 8);
      if (0xff < uVar13) {
        puVar22 = (uint *)PTR_DAT_04bc39f8;
      }
      uVar26 = uVar13;
      if ((*puVar22 >> 3 & 1) != 0) {
        if (DAT_055c1b60 != &DAT_055c1b58) {
          uVar26 = 0;
          puVar20 = DAT_055c1b60;
          do {
            if (*(int *)(puVar20 + -1) == 0x6622bd46) goto LAB_0202bc6c;
            puVar20 = (undefined8 *)puVar20[1];
            uVar26 = uVar26 + 1;
          } while (puVar20 != &DAT_055c1b58);
        }
        goto LAB_0202bc60;
      }
    }
LAB_0202bc6c:
    uVar11 = (ushort)pbVar4[4] | (pbVar4[5] & 3) << 8;
    if (0x1ff < uVar11) {
      uVar11 = uVar11 | 0xfc00;
    }
    if (uVar11 != uVar26) goto LAB_0202c084;
    if (iVar17 == 5) {
      if (cVar8 != '\0') goto LAB_0202bca8;
LAB_0202bd44:
      lVar19 = **(long **)PTR_DAT_04bb27d0;
      if (1 < *(byte *)(lVar19 + 0x476)) {
        local_d0 = (undefined *)
                   (CONCAT44(local_d0._4_4_,(uint)(pbVar4[7] >> 2)) & 0xffffffff00000003);
        if ((uint)local_d0 != 1) {
          bVar9 = pbVar4[1];
          uVar18 = (uint)*pbVar4 | (bVar9 & 0xf) << 8;
          bVar10 = pbVar4[2];
          uVar15 = uVar18 | 0xfffff000;
          if ((bVar9 & 8) == 0) {
            uVar15 = uVar18;
          }
          uVar14 = (uint)(bVar9 >> 4) | (uint)bVar10 << 4;
          uVar18 = uVar14 | 0xfffff000;
          if (-1 < (char)bVar10) {
            uVar18 = uVar14;
          }
          uVar26 = *puVar3;
          uVar15 = (int)((float)(int)(float)(int)uVar15 / 5.0) - (uint)(7 < (bVar9 & 0xf));
          if (((uint)uVar26 <= (uVar15 & 0xffff)) &&
             ((uVar15 & 0xffff) <=
              (((uint)uVar26 + (uint)*(ushort *)(param_1 + 0x5864)) - 1 & 0xffff))) {
            uVar18 = (int)((float)(int)(float)(int)uVar18 / 5.0) + ((int)(char)bVar10 >> 7);
            uVar11 = *(ushort *)(param_1 + 0x585a);
            if (((uint)uVar11 <= (uVar18 & 0xffff)) &&
               (((uVar18 & 0xffff) <=
                 (((uint)uVar11 + (uint)*(ushort *)(param_1 + 0x5868)) - 1 & 0xffff) &&
                (uVar18 = (*(int *)(*(long *)(param_1 + 0x5898) + 0x1c) *
                           ((uVar18 & 0xffff) - (uint)uVar11) - (uint)uVar26) + (uVar15 & 0xffff),
                (*(uint *)(*(long *)(*(long *)(param_1 + 0x5898) + 0x10) +
                          (long)((int)uVar18 >> 5) * 4) >> (ulong)(uVar18 & 0x1f) & 1) != 0)))) {
              uVar24 = 4;
              goto switchD_0202bd94_caseD_8;
            }
          }
        }
      }
      uVar24 = 6;
      switch(iVar17) {
      case 7:
        local_d0 = (undefined *)((ulong)local_d0._4_4_ << 0x20);
        uVar28 = FUN_02b67a30(&local_d0,uVar28);
        uVar24 = 0;
        if ((uVar28 & 1) != 0) {
          if ((uint)local_d0 < 10) {
            puVar20 = *(undefined8 **)
                       (PTR_s_NpcHouse0_04bb7e48 + ((ulong)local_d0 & 0xffffffff) * 8 + 0x68);
          }
          else {
            puVar20 = &DAT_0407ebb1;
          }
          sVar12 = *(short *)(param_1 + 0x2b4);
          iVar17 = FUN_006bd550(puVar20,0);
          if (DAT_055c1b60 != &DAT_055c1b58) {
            sVar23 = 0;
            puVar20 = DAT_055c1b60;
            do {
              if (*(int *)(puVar20 + -1) == iVar17) goto LAB_0202c984;
              puVar20 = (undefined8 *)puVar20[1];
              sVar23 = sVar23 + 1;
            } while (puVar20 != &DAT_055c1b58);
          }
          sVar23 = -1;
LAB_0202c984:
          bVar16 = sVar12 == sVar23;
          uVar24 = 3;
LAB_0202c9f4:
          if (!bVar16) {
            uVar24 = 0;
          }
        }
        break;
      case 0xe:
      case 0xf:
        bVar9 = *(byte *)(lVar19 + 0x473);
        uVar18 = DAT_05407630;
        if ((long)(char)bVar9 != 0xffffffffffffffff) {
          pbVar4 = (byte *)(lVar19 + 0x48) + ((long)(char)bVar9 & 0xffffffffU) * 0x80;
          if (7 < bVar9) {
            pbVar4 = (byte *)(lVar19 + 0x48);
          }
          if (((*pbVar4 >> 3 & 1) != 0) && (*(byte *)(lVar19 + 0x472) != bVar9)) {
            uVar18 = DAT_05407634;
          }
        }
        if ((int)uVar18 < 0) goto LAB_0202c084;
        if (uVar18 < 10) {
          puVar20 = *(undefined8 **)(PTR_s_NpcHouse0_04bb7e48 + (ulong)uVar18 * 8 + 0x68);
        }
        else {
          puVar20 = &DAT_0407ebb1;
        }
        iVar17 = FUN_006bd550(puVar20,0);
        if (DAT_055c1b60 != &DAT_055c1b58) {
          uVar26 = 0;
          puVar20 = DAT_055c1b60;
          do {
            if (*(int *)(puVar20 + -1) == iVar17) goto LAB_0202bff4;
            puVar20 = (undefined8 *)puVar20[1];
            uVar26 = uVar26 + 1;
          } while (puVar20 != &DAT_055c1b58);
        }
        uVar26 = 0xffff;
LAB_0202bff4:
        if (uVar13 != uVar26) goto LAB_0202bd3c;
        uVar24 = 2;
        break;
      case 0x10:
      case 0x11:
        local_d0 = PTR_DAT_04bb2020 + 0x10;
        pcStack_c8 = "CanSetPlayerBirthdayCallNpc";
        iVar17 = FUN_02743000(&local_d0);
        uVar18 = DAT_0540762c;
        if (iVar17 == 0) {
          uVar18 = 0xffffffff;
        }
        if ((int)uVar18 < 0) goto LAB_0202c084;
        if (uVar18 < 10) {
          puVar20 = *(undefined8 **)(PTR_s_NpcHouse0_04bb7e48 + (ulong)uVar18 * 8 + 0x68);
        }
        else {
          puVar20 = &DAT_0407ebb1;
        }
        sVar12 = *(short *)(param_1 + 0x2b4);
        iVar17 = FUN_006bd550(puVar20,0);
        if (DAT_055c1b60 != &DAT_055c1b58) {
          sVar23 = 0;
          puVar20 = DAT_055c1b60;
          do {
            if (*(int *)(puVar20 + -1) == iVar17) goto LAB_0202c064;
            puVar20 = (undefined8 *)puVar20[1];
            sVar23 = sVar23 + 1;
          } while (puVar20 != &DAT_055c1b58);
        }
        sVar23 = -1;
LAB_0202c064:
        if (sVar12 != sVar23) goto LAB_0202bd3c;
        uVar24 = 1;
        break;
      case 0x1e:
        local_d0 = (undefined *)((ulong)local_d0._4_4_ << 0x20);
        uVar28 = FUN_02b67a30(&local_d0,param_4);
        uVar24 = 0;
        if ((uVar28 & 1) != 0) {
          if ((uint)local_d0 < 10) {
            puVar20 = *(undefined8 **)
                       (PTR_s_NpcHouse0_04bb7e48 + ((ulong)local_d0 & 0xffffffff) * 8 + 0x68);
          }
          else {
            puVar20 = &DAT_0407ebb1;
          }
          sVar12 = *(short *)(param_1 + 0x2b4);
          iVar17 = FUN_006bd550(puVar20,0);
          if (DAT_055c1b60 != &DAT_055c1b58) {
            sVar23 = 0;
            puVar20 = DAT_055c1b60;
            do {
              if (*(int *)(puVar20 + -1) == iVar17) goto LAB_0202c9ec;
              puVar20 = (undefined8 *)puVar20[1];
              sVar23 = sVar23 + 1;
            } while (puVar20 != &DAT_055c1b58);
          }
          sVar23 = -1;
LAB_0202c9ec:
          bVar16 = sVar12 == sVar23;
          uVar24 = 7;
          goto LAB_0202c9f4;
        }
      }
    }
    else {
      if ((cVar8 == '\0') || (iVar17 != 6)) goto LAB_0202bd44;
LAB_0202bca8:
      lVar19 = **(long **)PTR_DAT_04bb27d0;
      bVar9 = *(byte *)(lVar19 + 0x473);
      if ((long)(char)bVar9 == 0xffffffffffffffff) {
LAB_0202bce4:
        piVar27 = (int *)(puVar25 + 0xafc);
      }
      else {
        pbVar1 = (byte *)(lVar19 + 0x48) + ((long)(char)bVar9 & 0xffffffffU) * 0x80;
        if (7 < bVar9) {
          pbVar1 = (byte *)(lVar19 + 0x48);
        }
        if (((*pbVar1 >> 3 & 1) == 0) || (*(byte *)(lVar19 + 0x472) == bVar9)) goto LAB_0202bce4;
        piVar27 = (int *)(puVar25 + 0xb00);
      }
      if (DAT_055c1b60 != &DAT_055c1b58) {
        uVar26 = 0;
        puVar20 = DAT_055c1b60;
        do {
          if (*(int *)(puVar20 + -1) == *piVar27) goto LAB_0202bd34;
          puVar20 = (undefined8 *)puVar20[1];
          uVar26 = uVar26 + 1;
        } while (puVar20 != &DAT_055c1b58);
      }
      uVar26 = 0xffff;
LAB_0202bd34:
      if (uVar13 != uVar26) goto LAB_0202bd44;
LAB_0202bd3c:
      uVar24 = 6;
    }
  }
  else {
    if ((*(long **)(lVar19 + 0x28) == (long *)0x0) ||
       (puVar20 = (undefined8 *)**(long **)(lVar19 + 0x28), puVar20 == (undefined8 *)0x0)) {
      uVar21 = 0;
    }
    else {
      uVar21 = (**(code **)*puVar20)();
      uVar21 = uVar21 & 0xffffffff;
    }
    local_d0 = PTR_DAT_04bb2020 + 0x10;
    pcStack_c8 = "MoveInCompletion";
    iVar17 = FUN_02749340(*(long *)(lVar19 + 0x10) + *(long *)(lVar19 + 8) + 0x1267c,&local_d0);
    if ((((uVar21 & 1) != 0) && (*(long *)(lVar19 + 0x28) != 0)) &&
       (puVar20 = *(undefined8 **)(*(long *)(lVar19 + 0x28) + 8), puVar20 != (undefined8 *)0x0)) {
      (**(code **)*puVar20)();
    }
    if (iVar17 != 0) goto LAB_0202bb6c;
LAB_0202c084:
    uVar24 = 0;
  }
switchD_0202bd94_caseD_8:
  local_d0 = (undefined *)CONCAT44(local_d0._4_4_,uVar24);
  uVar29 = 0;
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar24) {
  case 0:
    goto switchD_0202c0b0_caseD_0;
  case 2:
    lVar19 = **(long **)PTR_DAT_04bb27d0;
    bVar9 = *(byte *)(lVar19 + 0x473);
    if ((long)(char)bVar9 == 0xffffffffffffffff) {
LAB_0202c128:
      puVar22 = &DAT_05407614;
    }
    else {
      pbVar4 = (byte *)(lVar19 + 0x48) + ((long)(char)bVar9 & 0xffffffffU) * 0x80;
      if (7 < bVar9) {
        pbVar4 = (byte *)(lVar19 + 0x48);
      }
      if (((*pbVar4 >> 3 & 1) == 0) || (*(byte *)(lVar19 + 0x472) == bVar9)) goto LAB_0202c128;
      puVar22 = &DAT_05407620;
    }
    lVar19 = *(long *)PTR_DAT_04bb5ce0;
    if (lVar19 == 0) {
      fVar30 = 0.0;
      fVar31 = 0.0;
    }
    else {
      fVar30 = (float)*(int *)(lVar19 + 0xd88) * 5.0;
      fVar31 = (float)*(int *)(lVar19 + 0xd8c) * 5.0;
    }
    if (*puVar22 == param_4) {
      uVar29 = 0;
    }
    else if (puVar22[1] == param_4) {
      uVar29 = 1;
    }
    else {
      if (puVar22[2] != param_4) goto switchD_0202c0b0_default;
      uVar29 = 2;
    }
    FUN_02098470(param_2,uVar29);
    *param_2 = fVar30 + *param_2;
    param_2[1] = param_2[1] + 0.0;
    param_2[2] = fVar31 + param_2[2];
    break;
  case 4:
    local_d0 = (undefined *)CONCAT44(local_d0._4_4_,param_4);
    pbVar4 = *(byte **)PTR_DAT_04bb4760 + (ulong)param_4 * 0x15;
    if (0x6c < param_4) {
      pbVar4 = *(byte **)PTR_DAT_04bb4760;
    }
    uVar18 = (uint)*pbVar4 | (pbVar4[1] & 0xf) << 8;
    if ((pbVar4[1] & 8) != 0) {
      uVar18 = uVar18 | 0xfffff000;
    }
    *param_2 = (float)(int)uVar18;
    uVar15 = (uint)(pbVar4[1] >> 4) | (uint)pbVar4[2] << 4;
    uVar18 = uVar15 | 0xfffff000;
    if (-1 < (char)pbVar4[2]) {
      uVar18 = uVar15;
    }
    param_2[2] = (float)(int)uVar18;
    lVar19 = **(long **)PTR_DAT_04bb27d0;
    bVar9 = *(byte *)(lVar19 + 0x473);
    if ((long)(char)bVar9 == 0xffffffffffffffff) {
LAB_0202c310:
      puVar22 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar18 = *puVar22 ^ *puVar22 << 0xb;
      uVar15 = puVar22[3];
      *puVar22 = puVar22[1];
      puVar22[1] = puVar22[2];
      uVar18 = uVar18 >> 8 ^ uVar15 >> 0x13 ^ uVar18 ^ uVar15;
      puVar22[2] = uVar15;
      puVar22[3] = uVar18;
      *param_3 = uVar18;
    }
    else {
      pbVar1 = (byte *)(lVar19 + 0x48);
      uVar28 = (long)(char)bVar9 & 0xffffffff;
      pbVar5 = pbVar1 + uVar28 * 0x80;
      if (7 < bVar9) {
        pbVar5 = pbVar1;
      }
      if ((*pbVar5 >> 3 & 1) == 0) goto LAB_0202c310;
      lVar19 = (*(long **)PTR_DAT_04bb27d0)[2] + 0x108;
      lVar6 = lVar19 + uVar28 * 0xc;
      if (0xb < bVar9) {
        lVar6 = lVar19;
      }
      if (*(char *)(lVar6 + 10) != '\0') goto LAB_0202c310;
      *param_3 = (uint)pbVar4[3] << 0x18;
    }
    break;
  case 6:
    uVar18 = nn::os::GetSystemTick();
    lVar19 = *(long *)(param_1 + 0x5898);
    if (0 < (int)*(uint *)(lVar19 + 8)) {
      uVar14 = (uVar18 ^ uVar18 >> 0x1e) * 0x6c078965 + 1;
      uVar18 = 0;
      uVar15 = uVar14 ^ uVar14 * 0x800;
      uVar14 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 2;
      uVar14 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 3;
      uVar14 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 4;
      uVar28 = (ulong)*(uint *)(lVar19 + 0x18) *
               (ulong)(uVar15 >> 8 ^ uVar14 >> 0x13 ^ uVar15 ^ uVar14) >> 0x20;
      do {
        if ((*(uint *)(*(long *)(lVar19 + 0x10) + (ulong)(uVar18 >> 5) * 4) >>
             (ulong)(uVar18 & 0x1f) & 1) != 0) {
          if ((int)uVar28 == 0) {
            iVar7 = *(int *)(lVar19 + 0x1c);
            iVar17 = 0;
            if (iVar7 != 0) {
              iVar17 = (int)uVar18 / iVar7;
            }
            uVar13 = *puVar3;
            iVar7 = iVar17 * iVar7;
            iVar2 = ((uint)uVar13 - iVar7) + uVar18;
            iVar17 = iVar17 + (uint)*(ushort *)(param_1 + 0x585a);
            *param_2 = (float)iVar2 * 5.0;
            param_2[2] = (float)iVar17 * 5.0;
            puVar22 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
            iVar2 = iVar2 + -1;
            uVar14 = puVar22[3];
            iVar17 = iVar17 + -1;
            uVar15 = *puVar22 ^ *puVar22 << 0xb;
            *puVar22 = puVar22[1];
            puVar22[1] = puVar22[2];
            uVar15 = uVar15 >> 8 ^ uVar14 >> 0x13 ^ uVar15 ^ uVar14;
            puVar22[2] = uVar14;
            puVar22[3] = uVar15;
            *param_3 = uVar15;
            FUN_035a4360(puVar3,iVar2,iVar17,0);
            FUN_035a4360(puVar3,iVar2,iVar17 + (uint)DAT_057763a8,0);
            FUN_035a4360(puVar3,(((uint)uVar13 + (uint)DAT_057763b0) - iVar7) + uVar18 + -1,iVar17,0
                        );
            FUN_035a4360(puVar3,(((uint)uVar13 + (uint)DAT_057763b8) - iVar7) + uVar18 + -1,
                         iVar17 + (uint)DAT_057763c0,0);
            goto LAB_0202c674;
          }
          uVar28 = (ulong)((int)uVar28 - 1);
        }
        uVar18 = uVar18 + 1;
      } while (*(uint *)(lVar19 + 8) != uVar18);
    }
  default:
switchD_0202c0b0_default:
    uVar29 = 0;
    goto switchD_0202c0b0_caseD_0;
  }
LAB_0202c674:
  uVar29 = 1;
switchD_0202c0b0_caseD_0:
  return uVar29;
}


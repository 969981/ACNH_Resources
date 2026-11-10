
void FUN_0027a270(undefined8 param_1,undefined8 param_2,uint param_3,long param_4,
                 undefined4 *param_5,undefined4 *param_6,uint param_7)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  uint *puVar12;
  int iVar13;
  undefined4 uVar14;
  code *pcVar15;
  ulong uVar16;
  int iVar17;
  uint uVar18;
  ulong extraout_x15;
  ulong extraout_x15_00;
  ulong extraout_x15_01;
  ulong extraout_x15_02;
  ulong extraout_x15_03;
  ulong extraout_x15_04;
  ulong extraout_x15_05;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  undefined8 *puVar25;
  ulong uVar26;
  uint local_188;
  byte local_184 [4];
  int local_180 [4];
  int local_170;
  ErrorResultVariant aEStack_16c [124];
  undefined8 local_f0;
  uint auStack_e8 [31];
  ErrorResultVariant aEStack_6c [12];
  
  auStack_e8[0x1e] = 0;
  local_f0 = local_f0 & 0xffffffff00000000;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_6c,(Result *)&local_f0);
  lVar3 = DAT_04c603c8;
  lVar7 = FUN_0026c88c(DAT_04c603c8);
  auStack_e8[0x1a] = 0;
  auStack_e8[0x1b] = 0;
  auStack_e8[0x1c] = 0;
  auStack_e8[0x1d] = 0;
  auStack_e8[0x16] = 0;
  auStack_e8[0x17] = 0;
  auStack_e8[0x18] = 0;
  auStack_e8[0x19] = 0;
  auStack_e8[0x12] = 0;
  auStack_e8[0x13] = 0;
  auStack_e8[0x14] = 0;
  auStack_e8[0x15] = 0;
  auStack_e8[0xe] = 0;
  auStack_e8[0xf] = 0;
  auStack_e8[0x10] = 0;
  auStack_e8[0x11] = 0;
  auStack_e8[10] = 0;
  auStack_e8[0xb] = 0;
  auStack_e8[0xc] = 0;
  auStack_e8[0xd] = 0;
  auStack_e8[6] = 0;
  auStack_e8[7] = 0;
  auStack_e8[8] = 0;
  auStack_e8[9] = 0;
  auStack_e8[2] = 0;
  auStack_e8[3] = 0;
  auStack_e8[4] = 0;
  auStack_e8[5] = 0;
  local_f0 = 0;
  auStack_e8[0] = 0;
  auStack_e8[1] = 0;
  if ((param_7 & 1) == 0) {
    uVar26 = (ulong)*(ushort *)(lVar3 + 0x98);
    if (*(ushort *)(lVar3 + 0x98) == 0) goto LAB_0027a754;
    uVar9 = 0;
    uVar19 = extraout_x15;
    do {
      auStack_e8[uVar9 - 2] = 0xffffffff;
      if (((uint)uVar9 & 0xff) != (param_3 & 0xff)) {
        uVar26 = FUN_00269a70(lVar3,uVar9 & 0xffffffff);
        if ((uVar26 & 1) == 0) {
          uVar26 = (ulong)*(ushort *)(lVar3 + 0x98);
          uVar19 = extraout_x15_00;
        }
        else {
          if (lVar7 == 0) {
            iVar13 = 0;
            bVar4 = true;
            pcVar15 = *(code **)(lVar3 + 0x68);
            if (pcVar15 != (code *)0x0) goto LAB_0027a3f8;
LAB_0027a440:
            uVar5 = 0;
            lVar11 = FUN_0027fc70(*(undefined8 *)(lVar3 + 0x20),uVar9 & 0xffffffff);
            uVar19 = extraout_x15_04;
            if (lVar11 != 0) goto LAB_0027a418;
LAB_0027a454:
            iVar6 = 4;
          }
          else {
            FUN_00283290(&local_170,lVar7,uVar9 & 0xffffffff,param_3,&local_188);
            bVar4 = local_170 != 0 || (local_188 & 0xff) == (param_3 & 0xff);
            FUN_00283310(&local_170,lVar7,uVar9 & 0xffffffff,local_180);
            iVar13 = 0;
            if ((local_170 == 0) && (local_180[0] != 0)) {
              iVar13 = 0;
              iVar6 = local_180[0];
              do {
                iVar13 = iVar13 - (iVar6 >> 0x1f);
                iVar6 = iVar6 << 1;
              } while (iVar6 != 0);
            }
            iVar13 = iVar13 - (uint)bVar4;
            pcVar15 = *(code **)(lVar3 + 0x68);
            if (pcVar15 == (code *)0x0) goto LAB_0027a440;
LAB_0027a3f8:
            uVar5 = (*pcVar15)(uVar9 & 0xffffffff,0);
            uVar5 = uVar5 & 0xff;
            lVar11 = FUN_0027fc70(*(undefined8 *)(lVar3 + 0x20),uVar9 & 0xffffffff);
            uVar19 = extraout_x15_01;
            if (lVar11 == 0) goto LAB_0027a454;
LAB_0027a418:
            iVar6 = FUN_002b43e0();
            if (iVar6 == 0) {
              iVar6 = 0xf;
              uVar19 = extraout_x15_02;
            }
            else {
              iVar6 = FUN_002b43e0(lVar11);
              uVar19 = extraout_x15_03;
            }
          }
          uVar26 = (ulong)*(ushort *)(lVar3 + 0x98);
          iVar17 = 0;
          if (!bVar4) {
            iVar17 = 0x100;
          }
          auStack_e8[uVar9 - 2] =
               (uint)uVar9 + iVar17 + uVar5 * 0x1000000 + iVar6 * 0x100000 +
               ((uint)*(ushort *)(lVar3 + 0x98) - iVar13) * 0x1000 + 1;
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar26);
  }
  else {
    puVar25 = &DAT_04c61168;
    plVar8 = (long *)FUN_002ba788(DAT_04c61168);
    FUN_002b3fa8(&local_170);
    if (*(short *)(lVar3 + 0x98) != 0) {
      uVar26 = 0;
      do {
        auStack_e8[uVar26 - 2] = 0xffffffff;
        if ((((uint)uVar26 & 0xff) != (param_3 & 0xff)) &&
           (uVar9 = FUN_00269a70(lVar3,uVar26 & 0xffffffff), (uVar9 & 1) != 0)) {
          plVar10 = (long *)FUN_002ba790(*puVar25);
          lVar11 = (**(code **)(*plVar10 + 0x50))(plVar10,uVar26 & 0xffffffff);
          if ((lVar11 != 0) &&
             ((**(code **)(*plVar8 + 0x20))(local_180,plVar8,lVar11,&local_170), local_180[0] == 0))
          {
            if (lVar7 == 0) {
              iVar13 = 0;
              bVar4 = true;
              pcVar15 = *(code **)(lVar3 + 0x68);
              if (pcVar15 != (code *)0x0) goto LAB_0027a5b8;
LAB_0027a5e8:
              uVar5 = 0;
              iVar6 = FUN_002b43e0(&local_170);
              if (iVar6 == 0) goto LAB_0027a5f8;
LAB_0027a490:
              iVar6 = FUN_002b43e0(&local_170);
            }
            else {
              FUN_00283290(local_180,lVar7,uVar26 & 0xffffffff,param_3,local_184);
              bVar4 = local_180[0] != 0 || (uint)local_184[0] == (param_3 & 0xff);
              FUN_00283310(local_180,lVar7,uVar26 & 0xffffffff,&local_188);
              iVar13 = 0;
              if ((local_180[0] == 0) && (local_188 != 0)) {
                iVar13 = 0;
                uVar5 = local_188;
                do {
                  iVar13 = iVar13 - ((int)uVar5 >> 0x1f);
                  uVar5 = uVar5 << 1;
                } while (uVar5 != 0);
              }
              iVar13 = iVar13 - (uint)bVar4;
              pcVar15 = *(code **)(lVar3 + 0x68);
              if (pcVar15 == (code *)0x0) goto LAB_0027a5e8;
LAB_0027a5b8:
              uVar5 = (*pcVar15)(uVar26 & 0xffffffff,1);
              uVar5 = uVar5 & 0xff;
              iVar6 = FUN_002b43e0(&local_170);
              if (iVar6 != 0) goto LAB_0027a490;
LAB_0027a5f8:
              iVar6 = 0xf;
            }
            iVar17 = 0;
            if (!bVar4) {
              iVar17 = 0x100;
            }
            auStack_e8[uVar26 - 2] =
                 (uint)uVar26 + iVar17 + uVar5 * 0x1000000 + iVar6 * 0x100000 +
                 ((uint)*(ushort *)(lVar3 + 0x98) - iVar13) * 0x1000 + 1;
            puVar25 = (undefined8 *)PTR_DAT_04bc1510;
          }
        }
        uVar26 = uVar26 + 1;
      } while (uVar26 < *(ushort *)(lVar3 + 0x98));
    }
    FUN_002b4104(&local_170);
    uVar26 = (ulong)*(ushort *)(lVar3 + 0x98);
    uVar19 = extraout_x15_05;
  }
  if ((int)uVar26 != 0) {
    uVar9 = 0;
    uVar16 = 0;
    uVar5 = 0;
    do {
      uVar18 = (uint)uVar26;
      if ((uVar26 & 0xfffe) == 0) {
        uVar18 = 1;
      }
      if (uVar18 < 4) {
        uVar21 = 0;
        uVar22 = 0xffffffff;
      }
      else {
        uVar21 = 0;
        uVar22 = 0xffffffff;
        puVar12 = auStack_e8;
        do {
          uVar1 = puVar12[-2];
          uVar2 = puVar12[-1];
          uVar20 = (uint)uVar21;
          uVar23 = (uint)uVar19;
          if (uVar1 < uVar22 && uVar5 < uVar1) {
            uVar23 = uVar20;
            uVar22 = uVar1;
          }
          if (uVar2 < uVar22 && uVar5 < uVar2) {
            uVar23 = uVar20 + 1;
            uVar22 = uVar2;
          }
          uVar1 = *puVar12;
          uVar2 = puVar12[1];
          if (uVar1 < uVar22 && uVar5 < uVar1) {
            uVar23 = uVar20 + 2;
            uVar22 = uVar1;
          }
          uVar21 = uVar21 + 4;
          if (uVar2 < uVar22 && uVar5 < uVar2) {
            uVar23 = uVar20 + 3;
          }
          uVar19 = (ulong)uVar23;
          if (uVar2 < uVar22 && uVar5 < uVar2) {
            uVar22 = uVar2;
          }
          puVar12 = puVar12 + 4;
        } while (((ulong)uVar18 & 0xfffc) != uVar21);
      }
      uVar24 = (ulong)uVar18 & 3;
      uVar23 = uVar22;
      if ((uVar18 & 3) != 0) {
        do {
          uVar22 = auStack_e8[uVar21 - 2];
          uVar18 = (uint)uVar21;
          if (uVar22 <= uVar5 || uVar23 <= uVar22) {
            uVar18 = (uint)uVar19;
          }
          uVar19 = (ulong)uVar18;
          if (uVar22 <= uVar5 || uVar23 <= uVar22) {
            uVar22 = uVar23;
          }
          uVar21 = uVar21 + 1;
          uVar24 = uVar24 - 1;
          uVar23 = uVar22;
        } while (uVar24 != 0);
      }
      if (uVar22 == 0xffffffff) {
        uVar16 = uVar9 & 0xffffffff;
        if ((uint)uVar26 <= ((uint)uVar9 & 0xffff)) goto LAB_0027a754;
        goto LAB_0027a734;
      }
      *(char *)(param_4 + uVar9) = (char)uVar19;
      uVar9 = uVar9 + 1;
      uVar26 = (ulong)*(ushort *)(lVar3 + 0x98);
      uVar18 = (int)uVar16 + 1;
      uVar16 = (ulong)uVar18;
      uVar5 = uVar22;
    } while (uVar9 < uVar26);
    if ((uVar18 & 0xffff) < (uint)*(ushort *)(lVar3 + 0x98)) {
LAB_0027a734:
      uVar16 = uVar16 & 0xffff;
      do {
        *(undefined1 *)(param_4 + uVar16) = 0xfd;
        uVar16 = uVar16 + 1;
      } while (uVar16 < *(ushort *)(lVar3 + 0x98));
    }
  }
LAB_0027a754:
  *param_5 = *(undefined4 *)(lVar3 + 0xbc);
  if (lVar7 == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(undefined4 *)(lVar7 + 0x34);
  }
  local_170 = 0;
  local_180[0] = 0;
  *param_6 = uVar14;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_16c,(Result *)local_180);
  FUN_002296c4(param_1,&local_170);
  return;
}


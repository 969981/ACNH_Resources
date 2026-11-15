
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0243dc40(undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4)

{
  uint *puVar1;
  short sVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  float *pfVar9;
  undefined8 *puVar10;
  uint uVar11;
  short *psVar12;
  byte bVar13;
  byte bVar14;
  uint extraout_w9;
  uint extraout_w9_00;
  uint extraout_w9_01;
  uint extraout_w9_02;
  uint extraout_w9_03;
  uint extraout_w9_04;
  uint extraout_w9_05;
  uint extraout_w9_06;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  byte *pbVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  uint local_90;
  int local_8c;
  undefined8 local_88;
  int local_80;
  uint local_7c;
  byte local_78 [4];
  undefined4 local_74;
  ushort local_70;
  byte local_6c [4];
  undefined4 local_68;
  ushort local_64;
  
  FUN_02507c6c(local_6c,1,1,1,0);
  puVar5 = PTR_DAT_04bb6298;
  puVar4 = PTR_DAT_04bb5038;
  puVar3 = PTR_DAT_04bb4718;
  local_74 = local_68;
  local_78[0] = local_6c[0];
  if (7 < local_6c[0]) {
    local_78[0] = 0xff;
  }
  uVar7 = (uint)local_64;
  local_70 = local_64;
  if (7 < local_6c[0]) {
LAB_0243df00:
    uVar11 = 0;
LAB_0243df04:
    return uVar11 & uVar7;
  }
  lVar15 = *(long *)PTR_DAT_04bb4718;
  if (lVar15 == 0) goto LAB_0243dd14;
LAB_0243dcf0:
  lVar15 = lVar15 + (ulong)local_6c[0] * 0xd0 +
           (ulong)(*(uint *)(lVar15 + (ulong)local_6c[0] * 4 + 0xd68) & 1) * 0x68;
  psVar12 = (short *)(lVar15 + 0x6e8);
  if (*(char *)(lVar15 + 0x74c) != '\0') goto LAB_0243dd28;
LAB_0243dd44:
  local_7c = 0;
  do {
    bVar13 = local_78[0];
    uVar7 = 0;
    if (*(long *)(param_4 + 0x70) != 0) {
      uVar11 = *(uint *)(*(long *)(param_4 + 0x70) + 0x280);
      uVar7 = 0;
      if (uVar11 < 0x149) {
        uVar7 = uVar11;
      }
    }
    local_a0 = CONCAT44(local_a0._4_4_,uVar7);
    if (local_7c == uVar7) {
      bVar13 = *(byte *)(param_4 + 0x1ee8);
      if (7 < bVar13) {
        bVar13 = 0xff;
      }
      bVar14 = local_78[0];
      if (7 < local_78[0]) {
        bVar14 = 0xff;
      }
      if (bVar13 == bVar14) {
        lVar15 = FUN_0251e98c(1);
        pfVar9 = (float *)(**(code **)(*(long *)(lVar15 + 0x210) + 0xf0))(lVar15 + 0x210);
        uVar20 = 0x3f59999a;
        uVar7 = FUN_0251f670(*pfVar9 * 0.85,*(long *)(param_4 + 0x68) + 0x278,
                             (byte *)(param_4 + 0x1ee8),0);
        if ((uVar7 & 1) == 0) {
          sVar2 = *(short *)puVar5;
          if (sVar2 != -1) {
            local_a0 = CONCAT44(local_a0._4_4_,1);
            puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
            if (0xff < (uint)(int)sVar2) {
              puVar1 = (uint *)PTR_DAT_04bc39f8;
            }
            if ((*puVar1 >> 1 & 1) != 0) {
              FUN_0243e27c(param_4,*(long *)(param_4 + 0x68) + 0x278);
              goto LAB_0243e208;
            }
          }
          lVar15 = *(long *)puVar3;
          if (lVar15 == 0) {
            if ((DAT_054f0c00 & 1) == 0) {
              iVar6 = __cxa_guard_acquire(&DAT_054f0c00);
              piVar17 = &DAT_054f0be8;
              if (iVar6 != 0) {
                DAT_054f0bf8 = 0;
                _DAT_054f0be8 = 0;
                ram0x054f0bf0 = 0;
                __cxa_guard_release(&DAT_054f0c00);
              }
            }
            else {
              piVar17 = &DAT_054f0be8;
            }
          }
          else {
            piVar17 = (int *)(lVar15 + 0xc);
          }
          puVar3 = PTR_DAT_04bb2720;
          local_88 = *(undefined8 *)(piVar17 + 1);
          local_8c = *piVar17;
          local_80 = piVar17[3];
          iVar6 = piVar17[4];
          if ((local_8c != 0) && (local_8c != 0x18)) {
            uVar20 = FUN_0255a1a8();
            local_a0 = local_88;
            local_98 = CONCAT44(local_98._4_4_,local_80);
            uVar19 = FUN_016e026c(0,&local_a0,0,0);
            local_a0 = CONCAT44(uVar19,(undefined4)local_a0);
            (**(code **)(**(long **)(param_4 + 0x68) + 0x140))
                      (*(long **)(param_4 + 0x68),&local_a0,1);
            lVar15 = (**(code **)(**(long **)(param_4 + 0x68) + 0x148))();
            *(int *)(lVar15 + 4) = iVar6;
            goto LAB_0243e1fc;
          }
          local_90 = 0;
          local_a0 = 0;
          local_98 = 0;
          lVar15 = *(long *)PTR_DAT_04bb2720;
          if ((lVar15 != 0) && (*(long *)(lVar15 + 0x330) != 0)) {
            puVar10 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
            iVar6 = FUN_006bd550(*puVar10,0);
            if ((iVar6 == 0x758f7eaf) &&
               ((*(long *)puVar3 != 0 && (lVar15 = *(long *)(*(long *)puVar3 + 0x330), lVar15 != 0))
               )) {
              uVar16 = FUN_029174a0(lVar15,&local_a0,0);
              if ((uVar16 & 1) != 0) {
                local_a4 = local_90 ^ 0x80000000;
                (**(code **)(**(long **)(param_4 + 0x68) + 0x160))
                          (*(long **)(param_4 + 0x68),&local_a4);
                uVar16 = (ulong)&local_a0 | 4;
                uVar19 = FUN_016e45b0(0x411ccccd,uVar16,*(long *)(param_4 + 0x68) + 0x2b4);
                local_a0 = CONCAT44(uVar19,(undefined4)local_a0);
                local_98._0_4_ = uVar20;
                local_98._4_4_ = param_3;
                uVar20 = FUN_016e026c(0,uVar16,0,0);
                local_98 = CONCAT44(local_98._4_4_,uVar20);
                (**(code **)(**(long **)(param_4 + 0x68) + 0x140))
                          (*(long **)(param_4 + 0x68),uVar16,1);
                FUN_0230f780(param_4,0);
                switch((undefined4)local_a0) {
                case 1:
                  uVar20 = 0x3d;
                  break;
                case 2:
                  uVar20 = 0x3f;
                  break;
                case 3:
                  uVar20 = 0x3e;
                  break;
                case 4:
                  uVar20 = 0x40;
                  break;
                case 5:
                case 6:
                  uVar20 = 0x3a;
                  break;
                case 7:
                  uVar20 = 0xf;
                  break;
                default:
                  goto switchD_0243e178_default;
                }
LAB_0243e1fc:
                FUN_02372704(param_4,uVar20,0,1);
                goto LAB_0243e208;
              }
            }
          }
switchD_0243e178_default:
          FUN_02373e70(param_4,6,1);
        }
LAB_0243e208:
        uVar7 = uVar7 ^ 1;
      }
      else {
        uVar7 = 0;
      }
      uVar11 = 1;
      goto LAB_0243df04;
    }
    uVar16 = (ulong)local_78[0];
    if ((7 < local_78[0]) || (uVar16 + 1 == 8)) goto LAB_0243df00;
    pbVar18 = puVar4 + uVar16 + 1;
    uVar8 = FUN_02507924(local_78,pbVar18);
    uVar7 = extraout_w9;
    if ((uVar8 & 1) == 0) {
      if (uVar16 + 2 == 8) goto LAB_0243df00;
      pbVar18 = puVar4 + uVar16 + 2;
      uVar8 = FUN_02507924(local_78,pbVar18);
      uVar7 = extraout_w9_00;
      if ((uVar8 & 1) == 0) {
        if (uVar16 + 3 == 8) goto LAB_0243df00;
        pbVar18 = puVar4 + uVar16 + 3;
        uVar8 = FUN_02507924(local_78,pbVar18);
        uVar7 = extraout_w9_01;
        if ((uVar8 & 1) == 0) {
          if (uVar16 + 4 == 8) goto LAB_0243df00;
          pbVar18 = puVar4 + uVar16 + 4;
          uVar8 = FUN_02507924(local_78,pbVar18);
          uVar7 = extraout_w9_02;
          if ((uVar8 & 1) == 0) {
            if (uVar16 + 5 == 8) goto LAB_0243df00;
            pbVar18 = puVar4 + uVar16 + 5;
            uVar8 = FUN_02507924(local_78,pbVar18);
            uVar7 = extraout_w9_03;
            if ((uVar8 & 1) == 0) {
              if (uVar16 + 6 == 8) goto LAB_0243df00;
              pbVar18 = puVar4 + uVar16 + 6;
              uVar8 = FUN_02507924(local_78,pbVar18);
              uVar7 = extraout_w9_04;
              if ((uVar8 & 1) == 0) {
                if (uVar16 + 7 == 8) goto LAB_0243df00;
                pbVar18 = puVar4 + uVar16 + 7;
                uVar8 = FUN_02507924(local_78,pbVar18);
                uVar7 = extraout_w9_05;
                if ((uVar8 & 1) == 0) {
                  if (bVar13 == 0) goto LAB_0243df00;
                  pbVar18 = puVar4 + uVar16 + 8;
                  FUN_02507924(local_78,pbVar18);
                  uVar7 = extraout_w9_06;
                }
              }
            }
          }
        }
      }
    }
    local_6c[0] = *pbVar18;
    if (7 < local_6c[0]) goto LAB_0243df00;
    lVar15 = *(long *)puVar3;
    local_78[0] = local_6c[0];
    if (lVar15 != 0) goto LAB_0243dcf0;
LAB_0243dd14:
    if (((DAT_054f0c70 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_054f0c70), iVar6 != 0)) {
      DAT_054f0c6c = '\0';
      DAT_054f0c1c._0_4_ = 0;
      DAT_054f0c1c._4_4_ = 0;
      DAT_054f0c68 = 1;
      DAT_054f0c24._0_4_ = 0;
      DAT_054f0c24._4_4_ = 0;
      DAT_054f0c2c._0_4_ = 0;
      DAT_054f0c2c._4_4_ = 0;
      _DAT_054f0c44 = 0;
      DAT_054f0c34._0_4_ = 0;
      DAT_054f0c34._4_4_ = 0;
      DAT_054f0c3c._0_4_ = 0;
      DAT_054f0c3c._4_4_ = 0;
      _DAT_054f0c08 = 0;
      _DAT_054f0c10 = 1;
      DAT_054f0c14._0_4_ = 0;
      DAT_054f0c14._4_4_ = 0;
      DAT_054f0c48 = 0;
      DAT_054f0c50 = 0;
      DAT_054f0c58 = 0;
      DAT_054f0c60 = 0;
      __cxa_guard_release(&DAT_054f0c70);
    }
    psVar12 = &DAT_054f0c08;
    if (DAT_054f0c6c == '\0') goto LAB_0243dd44;
LAB_0243dd28:
    if ((*psVar12 != *(short *)puVar5) || (local_7c = *(uint *)(psVar12 + 2), 0x148 < local_7c))
    goto LAB_0243dd44;
  } while( true );
}


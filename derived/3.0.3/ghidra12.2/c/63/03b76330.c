
uint FUN_03b76330(undefined **param_1,undefined **param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  char *pcVar10;
  ulong uVar11;
  undefined **ppuVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *local_3d8;
  undefined1 *local_3d0;
  int local_3c8;
  undefined1 local_3c4 [255];
  undefined1 local_2c5;
  undefined *local_2c0;
  undefined1 *local_2b8;
  int local_2b0;
  undefined1 local_2ac [255];
  undefined1 local_1ad;
  undefined4 local_1a4;
  undefined **local_1a0;
  uint local_198;
  undefined *local_190;
  undefined1 *local_188;
  undefined *local_180;
  char *local_178;
  uint local_170;
  char local_16c [255];
  undefined1 local_6d;
  
  puVar9 = PTR_DAT_04bb21f8;
  local_1a4 = param_3;
  if (*param_2[1] == '\0') {
switchD_03b7663c_default:
    uVar5 = 1;
  }
  else {
    local_1ad = 0;
    local_2b0 = 0x100;
    local_3c8 = 0x100;
    local_2ac[0] = 0;
    local_2c5 = 0;
    local_3c4[0] = 0;
    local_2c0 = PTR_DAT_04bb21f8 + 0x10;
    local_2b8 = local_2ac;
    local_3d8 = PTR_DAT_04bb21f8 + 0x10;
    local_3d0 = local_3c4;
    if ((param_4 & 1) == 0) {
      (**(code **)(*param_1 + 0x18))(param_1);
      puVar7 = param_1[1];
      uVar15 = 0;
      do {
        if (puVar7[uVar15] == '\0') goto LAB_03b7640c;
        if (puVar7[uVar15 + 1] == '\0') {
          uVar15 = uVar15 + 1;
          goto LAB_03b7640c;
        }
        if (puVar7[uVar15 + 2] == '\0') {
          uVar15 = uVar15 + 2;
          goto LAB_03b7640c;
        }
        uVar15 = uVar15 + 3;
      } while (uVar15 != 0x80001);
      uVar15 = 0;
LAB_03b7640c:
      (**(code **)(*param_1 + 0x18))(param_1);
      puVar7 = param_1[1];
      *local_2b8 = 0;
      if (0 < (int)uVar15) {
        uVar14 = 0;
        do {
          bVar3 = puVar7[uVar14];
          bVar1 = bVar3 - 0x20;
          if (0x19 < bVar3 - 0x61) {
            bVar1 = bVar3;
          }
          (**(code **)(local_2c0 + 0x18))(&local_2c0);
          lVar8 = 0;
          do {
            if (local_2b8[lVar8] == '\0') goto LAB_03b764c4;
            if (local_2b8[lVar8 + 1] == '\0') {
              lVar8 = lVar8 + 1;
              goto LAB_03b764c4;
            }
            if (local_2b8[lVar8 + 2] == '\0') {
              lVar8 = lVar8 + 2;
              goto LAB_03b764c4;
            }
            lVar8 = lVar8 + 3;
          } while (lVar8 != 0x80001);
          lVar8 = 0;
LAB_03b764c4:
          if ((int)lVar8 < local_2b0 + -1) {
            local_2b8[(int)lVar8] = bVar1;
            (local_2b8 + (int)lVar8)[1] = 0;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 != (uVar15 & 0xffffffff));
      }
      (**(code **)(*param_2 + 0x18))(param_2);
      puVar7 = param_2[1];
      uVar15 = 0;
      do {
        if (puVar7[uVar15] == '\0') goto LAB_03b7653c;
        if (puVar7[uVar15 + 1] == '\0') {
          uVar15 = uVar15 + 1;
          goto LAB_03b7653c;
        }
        if (puVar7[uVar15 + 2] == '\0') {
          uVar15 = uVar15 + 2;
          goto LAB_03b7653c;
        }
        uVar15 = uVar15 + 3;
      } while (uVar15 != 0x80001);
      uVar15 = 0;
LAB_03b7653c:
      (**(code **)(*param_2 + 0x18))(param_2);
      puVar7 = param_2[1];
      *local_3d0 = 0;
      if (0 < (int)uVar15) {
        uVar14 = 0;
        do {
          bVar3 = puVar7[uVar14];
          bVar1 = bVar3 - 0x20;
          if (0x19 < bVar3 - 0x61) {
            bVar1 = bVar3;
          }
          (**(code **)(local_3d8 + 0x18))(&local_3d8);
          lVar8 = 0;
          do {
            if (local_3d0[lVar8] == '\0') goto LAB_03b765f4;
            if (local_3d0[lVar8 + 1] == '\0') {
              lVar8 = lVar8 + 1;
              goto LAB_03b765f4;
            }
            if (local_3d0[lVar8 + 2] == '\0') {
              lVar8 = lVar8 + 2;
              goto LAB_03b765f4;
            }
            lVar8 = lVar8 + 3;
          } while (lVar8 != 0x80001);
          lVar8 = 0;
LAB_03b765f4:
          if ((int)lVar8 < local_3c8 + -1) {
            local_3d0[(int)lVar8] = bVar1;
            (local_3d0 + (int)lVar8)[1] = 0;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 != (uVar15 & 0xffffffff));
      }
      param_2 = &local_3d8;
      param_1 = &local_2c0;
    }
    switch(local_1a4) {
    case 0:
      local_178 = " ";
      local_180 = PTR_DAT_04bb2020 + 0x10;
      uVar5 = FUN_03b76a30(param_1,param_2,&local_180);
      break;
    case 1:
      local_178 = " ";
      local_180 = PTR_DAT_04bb2020 + 0x10;
      uVar5 = FUN_03b76e00(param_1,param_2,&local_180);
      break;
    case 2:
      local_178 = " ";
      local_180 = PTR_DAT_04bb2020 + 0x10;
      uVar5 = FUN_03b76a30(param_1,param_2,&local_180);
      uVar5 = uVar5 ^ 1;
      break;
    case 3:
      local_178 = " ";
      local_180 = PTR_DAT_04bb2020 + 0x10;
      uVar5 = FUN_03b76e00(param_1,param_2,&local_180);
      uVar5 = uVar5 ^ 1;
      break;
    case 4:
      local_6d = 0;
      local_170 = 0x100;
      local_178 = local_16c;
      local_16c[0] = '\0';
      local_180 = puVar9 + 0x10;
      local_1a0 = param_2;
      local_188 = &DAT_04064e67;
      local_190 = PTR_DAT_04bb2020 + 0x10;
      local_198 = 0;
      (**(code **)(*param_2 + 0x18))(param_2);
      puVar9 = param_2[1];
      lVar8 = 0;
      do {
        if (puVar9[lVar8] == '\0') {
LAB_03b767b4:
          uVar5 = (int)lVar8 + 1;
          if ((int)lVar8 != -1) goto LAB_03b767cc;
          goto LAB_03b769fc;
        }
        if (puVar9[lVar8 + 1] == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_03b767b4;
        }
        if (puVar9[lVar8 + 2] == '\0') {
          uVar5 = (int)lVar8 + 3;
          if ((int)lVar8 != -3) goto LAB_03b767cc;
          goto LAB_03b769fc;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      uVar5 = 1;
LAB_03b767cc:
      uVar15 = 0;
      ppuVar12 = param_2;
      do {
        (**(code **)(*ppuVar12 + 0x18))(ppuVar12);
        puVar9 = ppuVar12[1];
        lVar8 = 0;
        do {
          if (puVar9[lVar8] == '\0') {
LAB_03b76838:
            iVar6 = (int)lVar8;
            goto joined_r0x03b76838;
          }
          if (puVar9[lVar8 + 1] == '\0') {
            lVar8 = lVar8 + 1;
            goto LAB_03b76838;
          }
          if (puVar9[lVar8 + 2] == '\0') {
            iVar6 = (int)lVar8 + 2;
            goto joined_r0x03b76838;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        iVar6 = 0;
joined_r0x03b76838:
        if ((-1 < (int)uVar15) && ((int)uVar15 <= iVar6)) {
          (**(code **)(local_180 + 0x18))(&local_180);
          pcVar13 = local_178;
          uVar14 = (ulong)local_170;
          if (0 < (int)local_170) {
            uVar16 = 0;
            do {
              puVar9 = local_1a0[1];
              if (puVar9[uVar15] == '\0') {
LAB_03b76910:
                pcVar13[uVar16 & 0xffffffff] = '\0';
                local_198 = (int)uVar15 + 1;
                break;
              }
              (**(code **)(local_190 + 0x18))(&local_190);
              uVar11 = 0;
              bVar4 = true;
              cVar2 = puVar9[uVar15];
              do {
                if (local_188[uVar11] == '\0') break;
                if (local_188[uVar11] == cVar2) {
                  if (bVar4) goto LAB_03b76910;
                  break;
                }
                if (local_188[uVar11 + 1] == '\0') break;
                if (local_188[uVar11 + 1] == cVar2) goto LAB_03b76910;
                if (local_188[uVar11 + 2] == '\0') break;
                if (local_188[uVar11 + 2] == cVar2) goto LAB_03b76910;
                bVar4 = uVar11 < 0x7fffe;
                uVar11 = uVar11 + 3;
              } while (uVar11 != 0x80001);
              pcVar13[uVar16] = cVar2;
              uVar16 = uVar16 + 1;
              uVar15 = uVar15 + 1;
            } while (uVar16 != uVar14);
          }
        }
        if (*local_178 != '\0') {
          (**(code **)(*param_1 + 0x18))(param_1);
          (**(code **)(*param_1 + 0x18))(param_1);
          pcVar13 = param_1[1];
          (**(code **)(local_180 + 0x18))(&local_180);
          if (pcVar13 == local_178) goto switchD_03b7663c_default;
          cVar2 = *param_1[1];
          if (cVar2 == *local_178) {
            if (cVar2 == '\0') goto switchD_03b7663c_default;
            lVar8 = 0x7fffe;
            pcVar13 = local_178;
            pcVar10 = param_1[1];
            while( true ) {
              if (pcVar10[1] != pcVar13[1]) break;
              if (pcVar10[1] == '\0') goto switchD_03b7663c_default;
              if (pcVar10[2] != pcVar13[2]) break;
              if (pcVar10[2] == '\0') goto switchD_03b7663c_default;
              if ((lVar8 == 0) || (cVar2 = pcVar10[3], cVar2 != pcVar13[3])) break;
              lVar8 = lVar8 + -3;
              pcVar13 = pcVar13 + 3;
              pcVar10 = pcVar10 + 3;
              if (cVar2 == '\0') goto switchD_03b7663c_default;
            }
          }
        }
        uVar15 = (ulong)local_198;
        ppuVar12 = local_1a0;
      } while ((local_1a0 != param_2) || (local_198 != uVar5));
LAB_03b769fc:
      uVar5 = 0;
      break;
    default:
      goto switchD_03b7663c_default;
    }
  }
  return uVar5 & 1;
}


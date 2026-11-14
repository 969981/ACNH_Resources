
undefined8
FUN_0180e7f0(int param_1,int param_2,undefined1 *param_3,float *param_4,undefined1 *param_5,
            float *param_6)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  char local_e0 [4];
  char local_dc [4];
  undefined *local_d8;
  undefined *puStack_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  int local_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int iStack_94;
  int local_90;
  int local_8c;
  int local_84;
  
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 0;
  }
  local_84 = param_1;
  uVar7 = FUN_017f37d0(param_1);
  if ((uVar7 & 1) != 0) goto LAB_0180e858;
  uVar2 = 0;
  if (param_1 < 0xb6a5301) {
    if (param_1 < -0x196792d8) {
      if (param_1 < -0x66cc4d79) {
        if (param_1 < -0x7975b8e8) {
          if (param_1 == -0x7b521843) goto LAB_0180eda4;
          iVar4 = -0x7ad2e1aa;
LAB_0180ed78:
          if (param_1 != iVar4) goto LAB_0180eec0;
        }
        else if ((param_1 != -0x7975b8e8) && (param_1 != -0x74938232)) {
          iVar4 = -0x74337aab;
          goto LAB_0180ed9c;
        }
      }
      else if (param_1 < -0x4701dc58) {
        if (param_1 == -0x66cc4d79) goto LAB_0180eda4;
        if (param_1 != -0x5c2fda8c) {
          iVar4 = -0x4772f804;
          goto LAB_0180ed9c;
        }
      }
      else {
        if (param_1 == -0x4701dc58) goto LAB_0180eda4;
        if (param_1 != -0x3e092032) {
          iVar4 = -0x2c3fb610;
          goto LAB_0180ed78;
        }
      }
    }
    else if (param_1 < -0x917edf9) {
      if (param_1 < -0x11ea17dc) {
        if (param_1 == -0x196792d8) goto LAB_0180eda4;
        iVar4 = -0x11f68f68;
      }
      else {
        if ((param_1 == -0x11ea17dc) || (param_1 == -0xea9e7e3)) goto LAB_0180e86c;
        iVar4 = -0xbf1cc08;
      }
LAB_0180ed9c:
      if (param_1 == iVar4) {
LAB_0180eda4:
        iVar4 = FUN_017e4f94(param_1);
        if (iVar4 == -1) {
          return 0;
        }
        uVar2 = FUN_017f3600(param_1);
        goto joined_r0x0180e868;
      }
LAB_0180eec0:
      uVar8 = FUN_017f3a18(param_1);
      uVar2 = 0;
      if ((uVar8 & 1) == 0) {
        return 0;
      }
    }
    else {
      if (0x1ac1235 < param_1) {
        if ((param_1 != 0x1ac1236) && (param_1 != 0x427dece)) {
          iVar4 = 0x80e20d8;
          goto LAB_0180ed38;
        }
        goto LAB_0180eda4;
      }
      if ((param_1 != -0x917edf9) && (param_1 != -0x8fb780d)) {
        iVar4 = 0x5f6c88;
        goto LAB_0180ed9c;
      }
    }
  }
  else if (param_1 < 0x51b9e069) {
    if (0x16f2dadb < param_1) {
      if (param_1 < 0x2922957e) {
        if ((param_1 == 0x16f2dadc) || (param_1 == 0x1d096e7d)) goto LAB_0180eda4;
        iVar4 = 0x28c45759;
      }
      else {
        if (param_1 == 0x2922957e) goto LAB_0180e858;
        if (param_1 == 0x483e4538) goto LAB_0180e86c;
        iVar4 = 0x4d702d55;
      }
      goto LAB_0180ed9c;
    }
    if (0xe716ff7 < param_1) {
      if (param_1 == 0xe716ff8) goto LAB_0180eda4;
      if (param_1 != 0x10cdc40c) {
        iVar4 = 0x1490248c;
        goto LAB_0180ed38;
      }
      goto LAB_0180e86c;
    }
    if (param_1 != 0xb6a5301) {
      iVar4 = 0xc672fa7;
      goto LAB_0180ed78;
    }
LAB_0180e858:
    uVar2 = FUN_017f34c0(param_1);
joined_r0x0180e868:
    if (uVar2 < 2) {
      return 0;
    }
  }
  else if (param_1 < 0x72a13146) {
    if (param_1 < 0x6168e44d) {
      if (param_1 == 0x51b9e069) goto LAB_0180e858;
      if (param_1 != 0x5fbb6b26) {
        iVar4 = 0x60c2c4f0;
        goto LAB_0180ed9c;
      }
    }
    else if ((param_1 != 0x6168e44d) && (param_1 != 0x65b7732d)) {
      iVar4 = 0x6c9ebc71;
      goto LAB_0180ed78;
    }
  }
  else if (param_1 < 0x7a616e2f) {
    if (param_1 == 0x72a13146) goto LAB_0180eda4;
    if (param_1 != 0x756daeec) {
      iVar4 = 0x77870a84;
      goto LAB_0180ed9c;
    }
  }
  else if (param_1 != 0x7fff3f46) {
    if (param_1 == 0x7c939885) goto LAB_0180eda4;
    iVar4 = 0x7a616e2f;
LAB_0180ed38:
    if (param_1 == iVar4) goto LAB_0180e858;
    goto LAB_0180eec0;
  }
LAB_0180e86c:
  if (3 < param_2 - 2U) {
    return 0;
  }
  iVar4 = (&DAT_041022e0)[(int)(param_2 - 2U)];
  lVar14 = (long)iVar4;
  uVar3 = FUN_017f4660(&local_84);
  local_b0 = 0;
  iStack_ac = 0;
  if (4 < uVar3) {
    uVar3 = 5;
  }
  local_98 = 0;
  iStack_94 = 0;
  local_90 = 0;
  local_8c = 0;
  local_a8 = 0;
  iStack_a4 = 0;
  local_a0 = 0;
  local_9c = 0;
  if ((uVar7 & 1) != 0) goto code_r0x0180f17c;
  if (param_1 < 0xb6a5301) {
    if (param_1 < -0x196792d8) {
      if (param_1 < -0x66cc4d79) {
        if (param_1 < -0x7975b8e8) {
          if (param_1 == -0x7b521843) goto code_r0x0180f17c;
          iVar5 = -0x7ad2e1aa;
LAB_0180f06c:
          if (param_1 != iVar5) goto LAB_0180f778;
        }
        else if ((param_1 != -0x7975b8e8) && (param_1 != -0x74938232)) {
          iVar5 = -0x74337aab;
          goto LAB_0180f168;
        }
      }
      else if (param_1 < -0x4701dc58) {
        if (param_1 == -0x66cc4d79) goto code_r0x0180f17c;
        if (param_1 != -0x5c2fda8c) {
          iVar5 = -0x4772f804;
          goto LAB_0180f168;
        }
      }
      else {
        if (param_1 == -0x4701dc58) goto code_r0x0180f17c;
        if (param_1 != -0x3e092032) {
          iVar5 = -0x2c3fb610;
          goto LAB_0180f06c;
        }
      }
      goto LAB_0180f074;
    }
    if (-0x917edfa < param_1) {
      if (0x1ac1235 < param_1) {
        if ((param_1 == 0x1ac1236) || (param_1 == 0x427dece)) goto code_r0x0180f17c;
        iVar5 = 0x80e20d8;
        goto LAB_0180f168;
      }
      if ((param_1 != -0x917edf9) && (param_1 != -0x8fb780d)) {
        iVar5 = 0x5f6c88;
        goto LAB_0180f168;
      }
LAB_0180ef0c:
      if ((*(long *)PTR_DAT_04bb5ce0 != 0) && (*(char *)(*(long *)PTR_DAT_04bb5ce0 + 0xf5c) != '\0')
         ) goto switchD_0180ef40_caseD_1;
      switch(uVar3) {
      case 0:
        goto switchD_0180ef40_caseD_0;
      case 1:
      case 4:
        goto switchD_0180ef40_caseD_1;
      case 2:
        iStack_ac = 1;
        local_a8 = 1;
        lVar14 = lVar14 * 4;
        local_a0 = *(int *)(&DAT_04102590 + lVar14);
        iStack_a4 = 1;
        local_9c = *(int *)(&DAT_04102090 + lVar14);
        local_98 = *(int *)(&DAT_04101e20 + lVar14);
        local_90 = 1;
        local_8c = 0;
        iStack_94 = local_98;
        break;
      case 3:
        lVar14 = lVar14 * 4;
        local_a8 = *(int *)(&DAT_04101f00 + lVar14);
        local_a0 = *(int *)(&DAT_04102160 + lVar14);
        iStack_ac = 1;
        local_90 = 1;
        local_9c = *(int *)(&DAT_041025d0 + lVar14);
        iStack_a4 = local_a8;
        goto LAB_0180f3c4;
      default:
        iVar5 = FUN_02917204();
        if (iVar5 == 5) {
          local_b0 = 0;
          iStack_ac = 1;
          local_a8 = 1;
          iStack_a4 = 1;
          local_a0 = 4;
          if (iVar4 - 1U < 3) {
            local_a0 = 1;
          }
          local_98 = 1;
          iStack_94 = 1;
          local_90 = 1;
          local_8c = 0;
          local_9c = local_a0;
        }
      }
      goto switchD_0180f190_default;
    }
    if (param_1 < -0x11ea17dc) {
      if (param_1 == -0x196792d8) goto code_r0x0180f17c;
      iVar5 = -0x11f68f68;
    }
    else {
      if (param_1 == -0x11ea17dc) goto LAB_0180ef0c;
      if (param_1 == -0xea9e7e3) goto LAB_0180f074;
      iVar5 = -0xbf1cc08;
    }
LAB_0180f168:
    if (param_1 != iVar5) goto LAB_0180f778;
code_r0x0180f17c:
    switch(uVar2) {
    case 2:
      if (uVar3 == 0) {
switchD_0180f2b8_caseD_1:
        local_90 = 0;
        local_8c = 0;
        local_a0 = *(int *)(&DAT_041028c0 + lVar14 * 4);
        local_9c = *(int *)(&DAT_041028d0 + lVar14 * 4);
        local_a8 = 1;
        iStack_a4 = 1;
        local_98 = 1;
        iStack_94 = 1;
      }
      break;
    case 3:
      if (uVar3 == 0) {
switchD_0180ef40_caseD_1:
        puVar10 = &DAT_041028c0;
        puVar11 = (undefined4 *)&DAT_041028d0;
LAB_0180f1d0:
        local_90 = 1;
        local_8c = 0;
        local_a0 = *(int *)(puVar10 + lVar14 * 4);
        iStack_ac = 1;
        local_a8 = 1;
        local_98 = 1;
        iStack_94 = 1;
        iStack_a4 = 1;
        local_9c = puVar11[lVar14];
      }
      break;
    case 4:
      if (uVar3 == 1) goto switchD_0180f2b8_caseD_1;
      if (uVar3 == 0) {
        puVar10 = &DAT_041026c0;
        puVar11 = &DAT_04102a90;
        goto LAB_0180f1d0;
      }
      break;
    case 5:
      if (uVar3 == 2) {
switchD_0180f2b8_caseD_2:
        local_90 = 0;
        local_8c = 0;
        lVar14 = lVar14 * 4;
        local_a0 = *(int *)(&DAT_04102590 + lVar14);
        local_9c = *(int *)(&DAT_041026e0 + lVar14);
        local_a8 = 1;
        iStack_a4 = 1;
        local_98 = *(int *)(&DAT_04101e20 + lVar14);
        iStack_94 = 1;
      }
      else {
        if (uVar3 == 1) goto switchD_0180f2b8_caseD_1;
        if (uVar3 != 0) break;
        lVar12 = lVar14 * 4;
        local_a8 = *(int *)(&DAT_04101f00 + lVar12);
        local_9c = *(int *)(&DAT_04102640 + lVar12);
        local_98 = *(int *)(&DAT_04102590 + lVar12);
        puVar10 = &DAT_04102090;
        iStack_a4 = local_a8;
        local_a0 = *(int *)(&DAT_04102580 + lVar12);
LAB_0180f304:
        iStack_ac = 1;
        iStack_94 = *(int *)(puVar10 + lVar14 * 4);
        local_90 = 1;
        local_8c = 0;
      }
      break;
    case 6:
      switch(uVar3) {
      case 0:
switchD_0180ef40_caseD_0:
        lVar12 = lVar14 * 4;
        local_a8 = *(int *)(&DAT_04102aa0 + lVar12);
        iStack_a4 = *(int *)(&DAT_04101ce0 + lVar12);
        local_9c = *(int *)(&DAT_041026d0 + lVar12);
        local_98 = *(int *)(&DAT_04102b00 + lVar12);
        puVar10 = &DAT_041026e0;
        local_a0 = local_9c;
        goto LAB_0180f304;
      case 1:
        goto switchD_0180f2b8_caseD_1;
      case 2:
        goto switchD_0180f2b8_caseD_2;
      case 3:
switchD_0180f2b8_caseD_3:
        local_90 = 0;
        lVar14 = lVar14 * 4;
        iStack_a4 = *(int *)(&DAT_04101f00 + lVar14);
        local_a0 = *(int *)(&DAT_04102aa0 + lVar14);
        local_9c = *(int *)(&DAT_041025d0 + lVar14);
        local_a8 = 1;
LAB_0180f3c4:
        local_8c = 0;
        local_98 = 1;
        iStack_94 = 1;
      }
      break;
    case 7:
      switch(uVar3) {
      case 0:
        goto switchD_0180ef40_caseD_0;
      case 1:
        goto switchD_0180f2b8_caseD_1;
      case 2:
        goto switchD_0180f2b8_caseD_2;
      case 3:
        goto switchD_0180f2b8_caseD_3;
      case 4:
switchD_0180f2b8_caseD_4:
        lVar14 = lVar14 * 4;
        iStack_ac = *(int *)(&DAT_041029b0 + lVar14);
        local_a0 = *(int *)(&DAT_041028c0 + lVar14);
        local_9c = *(int *)(&DAT_041028d0 + lVar14);
LAB_0180f4cc:
        local_98 = 1;
        iStack_94 = 1;
        iStack_a4 = 1;
        local_a8 = 1;
        local_b0 = iStack_ac;
        local_90 = iStack_ac;
        local_8c = iStack_ac;
      }
      break;
    case 8:
      switch(uVar3) {
      case 0:
        goto switchD_0180ef40_caseD_0;
      case 1:
        goto switchD_0180f2b8_caseD_1;
      case 2:
        goto switchD_0180f2b8_caseD_2;
      case 3:
        goto switchD_0180f2b8_caseD_3;
      case 4:
        goto switchD_0180f2b8_caseD_4;
      default:
        iVar5 = FUN_02917204();
        if (iVar5 != 5) break;
        iStack_ac = *(int *)(&DAT_041029b0 + lVar14 * 4);
        local_a0 = *(int *)(&DAT_04101ea0 + (long)iVar4 * 4);
        local_9c = local_a0;
        goto LAB_0180f4cc;
      }
    }
  }
  else {
    if (param_1 < 0x51b9e069) {
      if (param_1 < 0x16f2dadc) {
        if (param_1 < 0xe716ff8) {
          if (param_1 != 0xb6a5301) {
            iVar5 = 0xc672fa7;
            goto LAB_0180f06c;
          }
        }
        else if (param_1 != 0xe716ff8) {
          if (param_1 == 0x10cdc40c) goto LAB_0180f074;
          iVar5 = 0x1490248c;
          goto LAB_0180f168;
        }
      }
      else if (param_1 < 0x2922957e) {
        if ((param_1 != 0x16f2dadc) && (param_1 != 0x1d096e7d)) {
          iVar5 = 0x28c45759;
          goto LAB_0180f168;
        }
      }
      else if (param_1 != 0x2922957e) {
        if (param_1 == 0x483e4538) goto LAB_0180f074;
        iVar5 = 0x4d702d55;
        goto LAB_0180f168;
      }
      goto code_r0x0180f17c;
    }
    if (param_1 < 0x72a13146) {
      if (param_1 < 0x6168e44d) {
        if (param_1 != 0x51b9e069) {
          if (param_1 != 0x5fbb6b26) {
            iVar5 = 0x60c2c4f0;
            goto LAB_0180f168;
          }
          goto LAB_0180f074;
        }
        goto code_r0x0180f17c;
      }
      if (((param_1 == 0x6168e44d) || (param_1 == 0x65b7732d)) || (param_1 == 0x6c9ebc71))
      goto LAB_0180ef0c;
LAB_0180f778:
      uVar7 = FUN_017f3a18(param_1);
      if ((uVar7 & 1) == 0) goto switchD_0180f190_default;
    }
    else {
      if (param_1 < 0x7a616e2f) {
        if (param_1 != 0x72a13146) {
          if (param_1 != 0x756daeec) {
            iVar5 = 0x77870a84;
            goto LAB_0180f168;
          }
          goto LAB_0180f074;
        }
        goto code_r0x0180f17c;
      }
      if (param_1 == 0x7a616e2f) goto code_r0x0180f17c;
      if (param_1 != 0x7fff3f46) {
        iVar5 = 0x7c939885;
        goto LAB_0180f168;
      }
    }
LAB_0180f074:
    puVar10 = PTR_DAT_04bb2720;
    lVar14 = *(long *)PTR_DAT_04bb2720;
    if (lVar14 == 0) {
      puVar13 = &DAT_055c04a0;
    }
    else {
      puVar13 = &DAT_055c04a0;
      if (*(long *)(lVar14 + 0x330) != 0) {
        puVar13 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
        iVar5 = FUN_006bd550(*puVar13,0);
        puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar5 != 0x758f7eaf) {
          puVar13 = &DAT_055c04a0;
        }
      }
    }
    if (*(int *)(puVar13 + 7) != param_1) goto switchD_0180f190_default;
    lVar14 = *(long *)puVar10;
    iVar5 = 0;
    if (lVar14 != 0) {
      if (*(long *)(lVar14 + 0x330) == 0) {
        iVar5 = 0;
      }
      else {
        puVar13 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
        iVar6 = FUN_006bd550(*puVar13,0);
        iVar5 = 0;
        if (iVar6 == 0x758f7eaf) {
          iVar5 = 0;
          if (*(long *)puVar10 != 0) {
            lVar14 = *(long *)(*(long *)puVar10 + 0x330);
            iVar5 = 0;
            if (lVar14 != 0) {
              iVar5 = *(int *)(lVar14 + 0x244);
            }
          }
        }
      }
    }
    puVar1 = PTR_DAT_04bbe4b0;
    if ((*(int *)(PTR_DAT_04bbe4b0 + 0xac) == iVar5) && (iVar5 = FUN_02917204(), iVar5 == 0)) {
LAB_0180f4f4:
      uVar9 = 1;
    }
    else {
      lVar14 = *(long *)puVar10;
      iVar5 = 0;
      if (lVar14 != 0) {
        if (*(long *)(lVar14 + 0x330) == 0) {
          iVar5 = 0;
        }
        else {
          puVar13 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
          iVar6 = FUN_006bd550(*puVar13,0);
          iVar5 = 0;
          if (iVar6 == 0x758f7eaf) {
            iVar5 = 0;
            if (*(long *)puVar10 != 0) {
              lVar14 = *(long *)(*(long *)puVar10 + 0x330);
              iVar5 = 0;
              if (lVar14 != 0) {
                iVar5 = *(int *)(lVar14 + 0x244);
              }
            }
          }
        }
      }
      if ((*(int *)(puVar1 + 0xb0) == iVar5) && (iVar5 = FUN_02917204(), iVar5 == 0))
      goto LAB_0180f4f4;
      uVar9 = 0;
    }
    FUN_0180e530(iVar4,&local_b0,uVar9);
  }
switchD_0180f190_default:
  local_c8 = 0;
  local_d8 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_d0 = PTR_DAT_04bb2010 + 0x10;
  local_b8 = 0;
  local_c0 = puStack_d0;
  FUN_017f7a50(param_1,&local_d8);
  iVar6 = local_b8._4_4_;
  fVar18 = 5.0;
  iVar5 = local_c8._4_4_;
  local_dc[0] = '\x01';
  local_e0[0] = '\x01';
  fVar22 = ((float)(int)local_c8 * 5.0 + (float)(int)local_b8 * 5.0 + 5.0) * 0.5;
  FUN_017f613c(param_1,local_dc,local_e0);
  if (iVar4 == 0) {
    fVar18 = 5.0;
    if (local_b0 != 4) {
      if (iStack_ac == 4) {
        fVar18 = 4.0;
      }
      else if (local_a8 == 4) {
        fVar18 = 3.0;
      }
      else if (iStack_a4 == 4) {
        fVar18 = 2.0;
      }
      else if (local_a0 == 4) {
        fVar18 = 1.0;
      }
      else {
        fVar18 = 0.0;
        if (local_9c != 4) {
          if (local_98 == 4) {
            fVar18 = -1.0;
          }
          else if (iStack_94 == 4) {
            fVar18 = -2.0;
          }
          else if (local_90 == 4) {
            fVar18 = -3.0;
          }
          else {
            if (local_8c != 4) {
              return 1;
            }
            fVar18 = -4.0;
          }
        }
      }
    }
    if (param_5 != (undefined1 *)0x0) {
      *param_5 = 1;
    }
    if (param_6 == (float *)0x0) {
      return 1;
    }
    param_6[0] = 3.4028235e+38;
    param_6[1] = 3.4028235e+38;
    param_6[2] = 3.4028235e+38;
    param_6[3] = -3.4028235e+38;
    param_6[5] = -3.4028235e+38;
    fVar15 = (float)local_b8._4_4_ * 5.0 + 5.0;
    fVar22 = fVar22 + fVar18 * 10.0;
    fVar18 = 3.4028235e+38;
    if (fVar22 < 3.4028235e+38) {
      *param_6 = fVar22;
      fVar18 = fVar22;
    }
    fVar16 = 3.4028235e+38;
    if (fVar15 < 3.4028235e+38) {
      param_6[2] = fVar15;
      fVar16 = fVar15;
    }
    fVar17 = -20.0;
LAB_0180fbe0:
    fVar19 = -3.4028235e+38;
    if (-3.4028235e+38 < fVar22) {
      param_6[3] = fVar22;
      fVar19 = fVar22;
    }
    fVar22 = fVar22 + fVar17;
    param_6[4] = 20.0;
    fVar17 = -3.4028235e+38;
    if (-3.4028235e+38 < fVar15) {
      param_6[5] = fVar15;
      fVar17 = fVar15;
    }
    if (fVar22 < fVar18) {
      *param_6 = fVar22;
    }
    param_6[1] = 0.0;
    if (fVar15 < fVar16) {
      param_6[2] = fVar15;
    }
    if (fVar19 < fVar22) {
      param_6[3] = fVar22;
    }
    if (fVar17 < fVar15) {
      param_6[5] = fVar15;
      return 1;
    }
    return 1;
  }
  fVar15 = ((float)iVar5 * 5.0 + (float)iVar6 * 5.0 + 5.0) * 0.5;
  if (iVar4 != 3) {
    if (iVar4 == 2) {
      if (local_b0 == 4) {
        fVar18 = -5.0;
      }
      else if (iStack_ac == 4) {
        fVar18 = -4.0;
      }
      else if (local_a8 == 4) {
        fVar18 = -3.0;
      }
      else if (iStack_a4 == 4) {
        fVar18 = -2.0;
      }
      else if (local_a0 == 4) {
        fVar18 = -1.0;
      }
      else {
        fVar18 = 0.0;
        if (local_9c != 4) {
          if (local_98 == 4) {
            fVar18 = 1.0;
          }
          else if (iStack_94 == 4) {
            fVar18 = 2.0;
          }
          else if (local_90 == 4) {
            fVar18 = 3.0;
          }
          else {
            if (local_8c != 4) {
              return 1;
            }
            fVar18 = 4.0;
          }
        }
      }
      if (param_5 != (undefined1 *)0x0) {
        *param_5 = 1;
      }
      if (param_6 == (float *)0x0) {
        return 1;
      }
      param_6[0] = 3.4028235e+38;
      param_6[1] = 3.4028235e+38;
      param_6[2] = 3.4028235e+38;
      param_6[3] = -3.4028235e+38;
      fVar22 = fVar22 + fVar18 * 10.0;
      param_6[5] = -3.4028235e+38;
      fVar15 = (float)local_c8._4_4_ * 5.0;
      fVar18 = 3.4028235e+38;
      if (fVar22 < 3.4028235e+38) {
        *param_6 = fVar22;
        fVar18 = fVar22;
      }
      fVar16 = 3.4028235e+38;
      if (fVar15 < 3.4028235e+38) {
        param_6[2] = fVar15;
        fVar16 = fVar15;
      }
      fVar17 = 20.0;
      goto LAB_0180fbe0;
    }
    fVar16 = 20.0;
    fVar22 = (float)(int)local_b8 * 5.0 + 5.0;
    if (local_b0 == 4) {
      fVar18 = -5.0;
LAB_0180fc74:
      if (param_5 != (undefined1 *)0x0) {
        *param_5 = 1;
      }
      if (param_6 != (float *)0x0) {
        fVar17 = fVar15 + fVar18 * 10.0;
        param_6[5] = -3.4028235e+38;
        param_6[0] = 3.4028235e+38;
        param_6[1] = 3.4028235e+38;
        param_6[2] = 3.4028235e+38;
        param_6[3] = -3.4028235e+38;
        fVar18 = 3.4028235e+38;
        if (fVar22 < 3.4028235e+38) {
          *param_6 = fVar22;
          fVar18 = fVar22;
        }
        fVar19 = 3.4028235e+38;
        if (fVar17 < 3.4028235e+38) {
          param_6[2] = fVar17;
          fVar19 = fVar17;
        }
        fVar20 = -3.4028235e+38;
        if (-3.4028235e+38 < fVar22) {
          param_6[3] = fVar22;
          fVar20 = fVar22;
        }
        param_6[4] = 20.0;
        fVar21 = -3.4028235e+38;
        if (-3.4028235e+38 < fVar17) {
          param_6[5] = fVar17;
          fVar21 = fVar17;
        }
        fVar17 = fVar17 + 20.0;
        if (fVar22 < fVar18) {
          *param_6 = fVar22;
        }
        param_6[1] = 0.0;
        if (fVar17 < fVar19) {
          param_6[2] = fVar17;
        }
        if (fVar20 < fVar22) {
          param_6[3] = fVar22;
        }
        if (fVar21 < fVar17) {
          param_6[5] = fVar17;
        }
      }
    }
    else {
      if (iStack_ac == 4) {
        fVar18 = -4.0;
        goto LAB_0180fc74;
      }
      if (local_a8 == 4) {
        fVar18 = -3.0;
        goto LAB_0180fc74;
      }
      if (iStack_a4 == 4) {
        fVar18 = -2.0;
        goto LAB_0180fc74;
      }
      if (local_a0 == 4) {
        fVar18 = -1.0;
        goto LAB_0180fc74;
      }
      fVar18 = 0.0;
      if (local_9c == 4) goto LAB_0180fc74;
      if (local_98 == 4) {
        fVar18 = 1.0;
        goto LAB_0180fc74;
      }
      if (iStack_94 == 4) {
        fVar18 = 2.0;
        goto LAB_0180fc74;
      }
      if (local_90 == 4) {
        fVar18 = 3.0;
        goto LAB_0180fc74;
      }
      if (local_8c == 4) {
        fVar18 = 4.0;
        goto LAB_0180fc74;
      }
    }
    if (local_e0[0] == '\0') {
      return 1;
    }
    if (local_b0 == 2) {
      fVar18 = -5.0;
    }
    else if (iStack_ac == 2) {
      fVar18 = -4.0;
    }
    else if (local_a8 == 2) {
      fVar18 = -3.0;
    }
    else if (iStack_a4 == 2) {
      fVar18 = -2.0;
    }
    else if (local_a0 == 2) {
      fVar18 = -1.0;
    }
    else {
      fVar18 = 0.0;
      if (local_9c != 2) {
        if (local_98 == 2) {
          fVar18 = 1.0;
        }
        else if (iStack_94 == 2) {
          fVar18 = 2.0;
        }
        else if (local_90 == 2) {
          fVar18 = 3.0;
        }
        else {
          if (local_8c != 2) {
            return 1;
          }
          fVar18 = 4.0;
        }
      }
    }
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 1;
    }
    if (param_4 == (float *)0x0) {
      return 1;
    }
    param_4[0] = 3.4028235e+38;
    param_4[1] = 3.4028235e+38;
    param_4[2] = 3.4028235e+38;
    param_4[3] = -3.4028235e+38;
    fVar15 = fVar15 + fVar18 * 10.0;
    param_4[5] = -3.4028235e+38;
    fVar18 = 3.4028235e+38;
    if (fVar22 < 3.4028235e+38) {
      *param_4 = fVar22;
      fVar18 = fVar22;
    }
    fVar17 = 3.4028235e+38;
    if (fVar15 < 3.4028235e+38) {
      param_4[2] = fVar15;
      fVar17 = fVar15;
    }
    fVar19 = -3.4028235e+38;
    if (-3.4028235e+38 < fVar22) {
      param_4[3] = fVar22;
      fVar19 = fVar22;
    }
    goto LAB_0180fef4;
  }
  fVar16 = -20.0;
  fVar22 = (float)(int)local_c8 * 5.0;
  if (local_b0 == 4) {
LAB_0180f9c8:
    if (param_5 != (undefined1 *)0x0) {
      *param_5 = 1;
    }
    if (param_6 != (float *)0x0) {
      fVar17 = fVar15 + fVar18 * 10.0;
      param_6[0] = 3.4028235e+38;
      param_6[1] = 3.4028235e+38;
      param_6[2] = 3.4028235e+38;
      param_6[3] = -3.4028235e+38;
      param_6[5] = -3.4028235e+38;
      fVar18 = 3.4028235e+38;
      if (fVar22 < 3.4028235e+38) {
        *param_6 = fVar22;
        fVar18 = fVar22;
      }
      fVar19 = 3.4028235e+38;
      if (fVar17 < 3.4028235e+38) {
        param_6[2] = fVar17;
        fVar19 = fVar17;
      }
      fVar20 = -3.4028235e+38;
      if (-3.4028235e+38 < fVar22) {
        param_6[3] = fVar22;
        fVar20 = fVar22;
      }
      param_6[4] = 20.0;
      fVar21 = -3.4028235e+38;
      if (-3.4028235e+38 < fVar17) {
        param_6[5] = fVar17;
        fVar21 = fVar17;
      }
      fVar17 = fVar17 + -20.0;
      if (fVar22 < fVar18) {
        *param_6 = fVar22;
      }
      param_6[1] = 0.0;
      if (fVar17 < fVar19) {
        param_6[2] = fVar17;
      }
      if (fVar20 < fVar22) {
        param_6[3] = fVar22;
      }
      if (fVar21 < fVar17) {
        param_6[5] = fVar17;
      }
    }
  }
  else {
    if (iStack_ac == 4) {
      fVar18 = 4.0;
      goto LAB_0180f9c8;
    }
    if (local_a8 == 4) {
      fVar18 = 3.0;
      goto LAB_0180f9c8;
    }
    if (iStack_a4 == 4) {
      fVar18 = 2.0;
      goto LAB_0180f9c8;
    }
    if (local_a0 == 4) {
      fVar18 = 1.0;
      goto LAB_0180f9c8;
    }
    fVar18 = 0.0;
    if (local_9c == 4) goto LAB_0180f9c8;
    if (local_98 == 4) {
      fVar18 = -1.0;
      goto LAB_0180f9c8;
    }
    if (iStack_94 == 4) {
      fVar18 = -2.0;
      goto LAB_0180f9c8;
    }
    if (local_90 == 4) {
      fVar18 = -3.0;
      goto LAB_0180f9c8;
    }
    if (local_8c == 4) {
      fVar18 = -4.0;
      goto LAB_0180f9c8;
    }
  }
  if (local_dc[0] == '\0') {
    return 1;
  }
  if (local_b0 == 2) {
    fVar18 = 5.0;
  }
  else if (iStack_ac == 2) {
    fVar18 = 4.0;
  }
  else if (local_a8 == 2) {
    fVar18 = 3.0;
  }
  else if (iStack_a4 == 2) {
    fVar18 = 2.0;
  }
  else if (local_a0 == 2) {
    fVar18 = 1.0;
  }
  else {
    fVar18 = 0.0;
    if (local_9c != 2) {
      if (local_98 == 2) {
        fVar18 = -1.0;
      }
      else if (iStack_94 == 2) {
        fVar18 = -2.0;
      }
      else if (local_90 == 2) {
        fVar18 = -3.0;
      }
      else {
        if (local_8c != 2) {
          return 1;
        }
        fVar18 = -4.0;
      }
    }
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 1;
  }
  if (param_4 == (float *)0x0) {
    return 1;
  }
  fVar15 = fVar15 + fVar18 * 10.0;
  param_4[0] = 3.4028235e+38;
  param_4[1] = 3.4028235e+38;
  param_4[2] = 3.4028235e+38;
  param_4[3] = -3.4028235e+38;
  param_4[5] = -3.4028235e+38;
  fVar18 = 3.4028235e+38;
  if (fVar22 < 3.4028235e+38) {
    *param_4 = fVar22;
    fVar18 = fVar22;
  }
  fVar17 = 3.4028235e+38;
  if (fVar15 < 3.4028235e+38) {
    param_4[2] = fVar15;
    fVar17 = fVar15;
  }
  fVar19 = -3.4028235e+38;
  if (-3.4028235e+38 < fVar22) {
    param_4[3] = fVar22;
    fVar19 = fVar22;
  }
LAB_0180fef4:
  param_4[4] = 20.0;
  fVar20 = -3.4028235e+38;
  if (-3.4028235e+38 < fVar15) {
    param_4[5] = fVar15;
    fVar20 = fVar15;
  }
  fVar15 = fVar15 + fVar16;
  if (fVar22 < fVar18) {
    *param_4 = fVar22;
  }
  param_4[1] = 0.0;
  if (fVar15 < fVar17) {
    param_4[2] = fVar15;
  }
  if (fVar19 < fVar22) {
    param_4[3] = fVar22;
  }
  if (fVar20 < fVar15) {
    param_4[5] = fVar15;
  }
  return 1;
}


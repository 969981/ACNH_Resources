
float FUN_008c68e0(long param_1,uint *param_2,undefined8 param_3,undefined8 param_4,uint param_5,
                  uint param_6,uint param_7)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  char *pcVar12;
  int iVar13;
  char *pcVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  float fVar20;
  uint local_158;
  uint uStack_154;
  uint local_150;
  float local_14c;
  float fStack_148;
  float local_144;
  float fStack_140;
  float local_13c;
  float fStack_138;
  float local_134;
  float fStack_130;
  float local_12c;
  float fStack_128;
  float local_124;
  float fStack_120;
  float local_11c;
  uint local_118;
  undefined4 uStack_114;
  char *local_110;
  uint local_e0;
  float local_dc [4];
  float local_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  uint local_ac;
  
  puVar1 = (uint *)(param_1 + 0x23028);
  lVar8 = FUN_008c1870(param_1,param_4);
  if (lVar8 == 0) {
    (**(code **)(*(long *)(param_1 + 0x30708) + 0x18))((long *)(param_1 + 0x30708),0);
    uVar7 = FUN_006bd550(*(undefined8 *)(param_1 + 0x30710),0);
    iVar3 = *(int *)(param_1 + 0x305b0);
    if (iVar3 != 0) {
      uVar19 = 0;
      iVar13 = iVar3 + -1;
      if (iVar13 == 0 || iVar3 < 1) {
        lVar8 = *(long *)(param_1 + 0x305b8);
      }
      else {
        lVar8 = *(long *)(param_1 + 0x305b8);
        do {
          iVar3 = iVar13 + uVar19;
          if (iVar3 < 0 != SCARRY4(iVar13,uVar19)) {
            iVar3 = iVar3 + 1;
          }
          uVar16 = iVar3 >> 1;
          uVar15 = *(uint *)(*(long *)(lVar8 + (long)(int)uVar16 * 8) + 0x18);
          if (uVar15 == uVar7) goto joined_r0x008c69ec;
          if (uVar15 < uVar7) {
            uVar19 = uVar16 + 1;
          }
          else {
            iVar13 = uVar16 - 1;
          }
        } while ((int)uVar19 < iVar13);
      }
      uVar16 = uVar19;
      if (*(uint *)(*(long *)(lVar8 + (long)(int)uVar19 * 8) + 0x18) == uVar7) {
joined_r0x008c69ec:
        if ((-1 < (int)uVar16) && (lVar8 = **(long **)(lVar8 + (ulong)uVar16 * 8), lVar8 != 0))
        goto LAB_008c6a24;
      }
    }
    local_158 = 0x62;
    if (*(uint *)(param_1 + 0x548) < 99) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(long *)(*(long *)(param_1 + 0x550) + 0x310);
    }
  }
LAB_008c6a24:
  FUN_008c0a74(&local_158,lVar8);
  (*(code *)**(undefined8 **)(param_1 + 0x37f38))
            ((undefined8 *)(param_1 + 0x37f38),&local_158,param_3);
  (*(code *)**(undefined8 **)(param_1 + 0x37f58))
            ((undefined8 *)(param_1 + 0x37f58),&local_158,*(undefined4 *)(param_1 + 0x30800));
  uVar19 = local_158;
  uVar7 = *(uint *)(param_1 + 0x307f0);
  if ((*(short *)((long)&DAT_04ced074 + (long)(int)uVar7 * 2) != 0) && ((param_7 & 1) == 0)) {
    uVar19 = param_2[0x31];
    param_2[0x29] = (uint)local_134;
    param_2[0x2a] = (uint)fStack_130;
    fVar20 = 1.0;
    param_2[0x20] = local_158;
    param_2[0x21] = uStack_154;
    param_2[0x22] = local_150;
    param_2[0x23] = (uint)local_14c;
    param_2[0x24] = (uint)fStack_148;
    param_2[0x25] = (uint)local_144;
    param_2[0x26] = (uint)fStack_140;
    param_2[0x27] = (uint)local_13c;
    param_2[0x28] = (uint)fStack_138;
    param_2[0x2b] = (uint)local_12c;
    param_2[0x2c] = (uint)fStack_128;
    param_2[0x2d] = (uint)local_124;
    param_2[0x2e] = (uint)fStack_120;
    param_2[0x2f] = (uint)local_11c;
    if ((param_6 & 1) == 0) {
      if ((int)uVar19 < 1) goto LAB_008c6c90;
      uVar16 = param_2[0x30];
    }
    else {
      if ((int)uVar19 < 1) goto LAB_008c6c90;
      uVar16 = param_2[0x30];
      if ((int)uVar16 < (int)uVar19) {
        uVar16 = uVar16 + 1;
        param_2[0x30] = uVar16;
      }
    }
    fVar20 = (float)(int)uVar16 / (float)(int)uVar19;
LAB_008c6c90:
    local_118 = *(uint *)(param_1 + 0x307f0);
    if (local_118 < *puVar1) {
      lVar8 = *(long *)(*(long *)(param_1 + 0x23030) + (long)(int)local_118 * 8);
    }
    else {
      lVar8 = 0;
    }
    plVar9 = (long *)(**(code **)(*(long *)(lVar8 + 0x30) + 0xf0))();
    fVar17 = (float)(**(code **)(*plVar9 + 0x10))(fVar20);
    puVar6 = PTR_s_cDefault_04bb5888;
    uVar19 = 0;
    do {
      fVar18 = fVar17;
      local_e0 = uVar19;
      if ((*(ushort *)((long)&DAT_04ced074 + (long)(int)uVar7 * 2) >> (ulong)(uVar19 & 0x1f) & 1) !=
          0) {
        puVar10 = &DAT_0407ebb1;
        if (*(uint *)(param_1 + 0x307f0) < 0x2b) {
          puVar10 = *(undefined8 **)(puVar6 + (ulong)*(uint *)(param_1 + 0x307f0) * 8 + 0x278);
        }
        puVar11 = &DAT_0407ebb1;
        if (uVar19 < 0xc) {
          puVar11 = (undefined8 *)(&PTR_DAT_04923758)[uVar19];
        }
        FUN_006d8678(&local_118,"%s_%s",puVar10,puVar11);
        uVar16 = 0;
        do {
          pcVar14 = "";
          if (uVar16 < 0x2b) {
            pcVar14 = *(char **)(puVar6 + (ulong)uVar16 * 8 + 0x278);
          }
          (**(code **)(CONCAT44(uStack_114,local_118) + 0x18))(&local_118);
          if (pcVar14 == local_110) {
LAB_008c6efc:
            if (uVar16 < *puVar1) {
              lVar8 = *(long *)(*(long *)(param_1 + 0x23030) + (long)(int)uVar16 * 8);
            }
            else {
              lVar8 = 0;
            }
            local_ac = uVar16;
            plVar9 = (long *)(**(code **)(*(long *)(lVar8 + 0x30) + 0xf0))();
            fVar18 = (float)(**(code **)(*plVar9 + 0x10))(fVar20);
            break;
          }
          if (*pcVar14 == *local_110) {
            if (*pcVar14 == '\0') goto LAB_008c6efc;
            lVar8 = 0x7fffe;
            pcVar12 = local_110;
            while( true ) {
              if (pcVar14[1] != pcVar12[1]) break;
              if (pcVar14[1] == '\0') goto LAB_008c6efc;
              if (pcVar14[2] != pcVar12[2]) break;
              if (pcVar14[2] == '\0') goto LAB_008c6efc;
              if ((lVar8 == 0) || (cVar5 = pcVar14[3], cVar5 != pcVar12[3])) break;
              lVar8 = lVar8 + -3;
              pcVar12 = pcVar12 + 3;
              pcVar14 = pcVar14 + 3;
              if (cVar5 == '\0') goto LAB_008c6efc;
            }
          }
          uVar15 = 0x2b;
          if ((int)uVar16 < 0x2b) {
            uVar15 = uVar16 + 1;
          }
          uVar16 = uVar15;
        } while (uVar15 != 0x2b);
      }
      uVar16 = 0xc;
      if ((int)uVar19 < 0xc) {
        uVar16 = uVar19 + 1;
      }
      local_dc[(int)local_e0] = fVar18;
      uVar19 = uVar16;
      if (uVar16 == 0xc) {
        uVar7 = param_2[0x10];
        uVar19 = param_2[0x20];
        if (uVar7 - uVar19 != 0) {
          uVar16 = uVar7 - uVar19;
          if (uVar19 >= uVar7) {
            uVar16 = uVar19 - uVar7;
          }
          uVar15 = -uVar16;
          if (uVar16 < 0x80000001) {
            uVar15 = uVar16;
          }
          iVar3 = -(int)(local_dc[1] * (float)uVar15);
          if (uVar19 < uVar7 != uVar16 < 0x80000001) {
            iVar3 = (int)(local_dc[1] * (float)uVar15);
          }
          uVar7 = iVar3 + uVar7;
        }
        *param_2 = uVar7;
        uVar7 = param_2[0x11];
        uVar19 = param_2[0x21];
        if (uVar7 - uVar19 != 0) {
          uVar16 = uVar7 - uVar19;
          if (uVar19 >= uVar7) {
            uVar16 = uVar19 - uVar7;
          }
          uVar15 = -uVar16;
          if (uVar16 < 0x80000001) {
            uVar15 = uVar16;
          }
          iVar3 = -(int)(local_dc[2] * (float)uVar15);
          if (uVar19 < uVar7 != uVar16 < 0x80000001) {
            iVar3 = (int)(local_dc[2] * (float)uVar15);
          }
          uVar7 = iVar3 + uVar7;
        }
        param_2[1] = uVar7;
        uVar7 = param_2[0x12];
        uVar19 = param_2[0x22];
        if (uVar7 - uVar19 != 0) {
          uVar16 = uVar7 - uVar19;
          if (uVar19 >= uVar7) {
            uVar16 = uVar19 - uVar7;
          }
          uVar15 = -uVar16;
          if (uVar16 < 0x80000001) {
            uVar15 = uVar16;
          }
          iVar3 = -(int)(local_dc[3] * (float)uVar15);
          if (uVar19 < uVar7 != uVar16 < 0x80000001) {
            iVar3 = (int)(local_dc[3] * (float)uVar15);
          }
          uVar7 = iVar3 + uVar7;
        }
        param_2[2] = uVar7;
        param_2[3] = (uint)(local_cc * (float)param_2[0x23] +
                           (float)param_2[0x13] * (1.0 - local_cc));
        param_2[4] = (uint)(local_c8 * (float)param_2[0x24] +
                           (float)param_2[0x14] * (1.0 - local_c8));
        param_2[5] = (uint)(fStack_c4 * (float)param_2[0x25] +
                           (float)param_2[0x15] * (1.0 - fStack_c4));
        param_2[6] = (uint)(local_c0 * (float)param_2[0x26] +
                           (float)param_2[0x16] * (1.0 - local_c0));
        param_2[7] = (uint)(fStack_bc * (float)param_2[0x27] +
                           (float)param_2[0x17] * (1.0 - fStack_bc));
        param_2[8] = (uint)(local_dc[0] * (float)param_2[0x28] +
                           (float)param_2[0x18] * (1.0 - local_dc[0]));
        fVar20 = 1.0 - local_b8;
        param_2[9] = (uint)(local_b8 * (float)param_2[0x29] + (float)param_2[0x19] * fVar20);
        param_2[10] = (uint)(local_b8 * (float)param_2[0x2a] + (float)param_2[0x1a] * fVar20);
        param_2[0xb] = (uint)(local_b8 * (float)param_2[0x2b] + (float)param_2[0x1b] * fVar20);
        param_2[0xc] = (uint)(fStack_b4 * (float)param_2[0x2c] +
                             (float)param_2[0x1c] * (1.0 - fStack_b4));
        param_2[0xf] = (uint)(local_b0 * (float)param_2[0x2f] +
                             (float)param_2[0x1f] * (1.0 - local_b0));
        param_2[0xd] = (uint)(fStack_b4 * (float)param_2[0x2d] +
                             (float)param_2[0x1d] * (1.0 - fStack_b4));
        param_2[0xe] = (uint)(local_b0 * (float)param_2[0x2e] +
                             (float)param_2[0x1e] * (1.0 - local_b0));
        return fVar17;
      }
    } while( true );
  }
  if ((param_5 & 1) != 0) {
    uVar7 = param_2[0x10];
    param_2[0x20] = local_158;
    param_2[0x21] = uStack_154;
    param_2[0x22] = local_150;
    param_2[0x23] = (uint)local_14c;
    param_2[0x24] = (uint)fStack_148;
    param_2[0x25] = (uint)local_144;
    param_2[0x26] = (uint)fStack_140;
    param_2[0x27] = (uint)local_13c;
    param_2[0x28] = (uint)fStack_138;
    param_2[0x29] = (uint)local_134;
    param_2[0x2a] = (uint)fStack_130;
    param_2[0x2b] = (uint)local_12c;
    param_2[0x2c] = (uint)fStack_128;
    param_2[0x2d] = (uint)local_124;
    param_2[0x2e] = (uint)fStack_120;
    param_2[0x2f] = (uint)local_11c;
    if (uVar7 - local_158 != 0) {
      uVar19 = uVar7 - local_158;
      if (local_158 >= uVar7) {
        uVar19 = local_158 - uVar7;
      }
      uVar16 = -uVar19;
      if (uVar19 < 0x80000001) {
        uVar16 = uVar19;
      }
      iVar3 = -(int)(float)uVar16;
      if (local_158 < uVar7 != uVar19 < 0x80000001) {
        iVar3 = (int)(float)uVar16;
      }
      local_158 = iVar3 + uVar7;
    }
    uVar7 = param_2[0x11];
    *param_2 = local_158;
    if (uVar7 - uStack_154 != 0) {
      uVar19 = uVar7 - uStack_154;
      if (uStack_154 >= uVar7) {
        uVar19 = uStack_154 - uVar7;
      }
      uVar16 = -uVar19;
      if (uVar19 < 0x80000001) {
        uVar16 = uVar19;
      }
      iVar3 = -(int)(float)uVar16;
      if (uStack_154 < uVar7 != uVar19 < 0x80000001) {
        iVar3 = (int)(float)uVar16;
      }
      uStack_154 = iVar3 + uVar7;
    }
    uVar7 = param_2[0x12];
    param_2[1] = uStack_154;
    if (uVar7 - local_150 != 0) {
      uVar19 = uVar7 - local_150;
      if (local_150 >= uVar7) {
        uVar19 = local_150 - uVar7;
      }
      uVar16 = -uVar19;
      if (uVar19 < 0x80000001) {
        uVar16 = uVar19;
      }
      iVar3 = -(int)(float)uVar16;
      if (local_150 < uVar7 != uVar19 < 0x80000001) {
        iVar3 = (int)(float)uVar16;
      }
      local_150 = iVar3 + uVar7;
    }
    param_2[2] = local_150;
    param_2[7] = (uint)(local_13c + (float)param_2[0x17] * 0.0);
    param_2[8] = (uint)(fStack_138 + (float)param_2[0x18] * 0.0);
    param_2[9] = (uint)(local_134 + (float)param_2[0x19] * 0.0);
    param_2[10] = (uint)(fStack_130 + (float)param_2[0x1a] * 0.0);
    param_2[0xb] = (uint)(local_12c + (float)param_2[0x1b] * 0.0);
    param_2[0xc] = (uint)(fStack_128 + (float)param_2[0x1c] * 0.0);
    param_2[0xd] = (uint)(local_124 + (float)param_2[0x1d] * 0.0);
    param_2[0xe] = (uint)(fStack_120 + (float)param_2[0x1e] * 0.0);
    param_2[3] = (uint)(local_14c + (float)param_2[0x13] * 0.0);
    param_2[4] = (uint)((float)param_2[0x14] + (fStack_148 - (float)param_2[0x14]));
    param_2[5] = (uint)((float)param_2[0x15] + (local_144 - (float)param_2[0x15]));
    param_2[6] = (uint)((float)param_2[0x16] + (fStack_140 - (float)param_2[0x16]));
    param_2[0xf] = (uint)(local_11c + (float)param_2[0x1f] * 0.0);
    return 1.0;
  }
  if (uVar7 == 0x2a) {
    (**(code **)(*(long *)(param_1 + 0x30740) + 0x18))((long *)(param_1 + 0x30740));
    uVar16 = FUN_006bd550(*(undefined8 *)(param_1 + 0x30748),0);
    iVar3 = *(int *)(param_1 + 0x305f0);
    if (iVar3 == 0) goto LAB_008c7148;
    uVar15 = 0;
    iVar13 = iVar3 + -1;
    if (iVar13 == 0 || iVar3 < 1) {
      lVar8 = *(long *)(param_1 + 0x305f8);
    }
    else {
      lVar8 = *(long *)(param_1 + 0x305f8);
      do {
        iVar3 = iVar13 + uVar15;
        if (iVar3 < 0 != SCARRY4(iVar13,uVar15)) {
          iVar3 = iVar3 + 1;
        }
        uVar2 = iVar3 >> 1;
        uVar4 = *(uint *)(*(long *)(lVar8 + (long)(int)uVar2 * 8) + 0x18);
        if (uVar4 == uVar16) goto joined_r0x008c7138;
        if (uVar4 < uVar16) {
          uVar15 = uVar2 + 1;
        }
        else {
          iVar13 = uVar2 - 1;
        }
      } while ((int)uVar15 < iVar13);
    }
    uVar2 = uVar15;
    if (*(uint *)(*(long *)(lVar8 + (long)(int)uVar15 * 8) + 0x18) != uVar16) goto LAB_008c7148;
joined_r0x008c7138:
    if (((int)uVar2 < 0) || (lVar8 = **(long **)(lVar8 + (ulong)uVar2 * 8), lVar8 == 0))
    goto LAB_008c7148;
  }
  else {
LAB_008c7148:
    local_118 = uVar7;
    if (uVar7 < *puVar1) {
      lVar8 = *(long *)(*(long *)(param_1 + 0x23030) + (long)(int)uVar7 * 8);
    }
    else {
      lVar8 = 0;
    }
  }
  plVar9 = (long *)(**(code **)(*(long *)(lVar8 + 0x30) + 0xf0))();
  param_2[0x20] = uVar19;
  param_2[0x21] = uStack_154;
  uVar7 = param_2[0x31];
  param_2[0x22] = local_150;
  param_2[0x23] = (uint)local_14c;
  param_2[0x24] = (uint)fStack_148;
  param_2[0x27] = (uint)local_13c;
  param_2[0x28] = (uint)fStack_138;
  param_2[0x29] = (uint)local_134;
  param_2[0x2a] = (uint)fStack_130;
  param_2[0x2b] = (uint)local_12c;
  param_2[0x2c] = (uint)fStack_128;
  param_2[0x25] = (uint)local_144;
  param_2[0x26] = (uint)fStack_140;
  param_2[0x2d] = (uint)local_124;
  param_2[0x2e] = (uint)fStack_120;
  param_2[0x2f] = (uint)local_11c;
  if ((param_6 & 1) == 0) {
    if ((int)uVar7 < 1) goto LAB_008c7200;
    uVar19 = param_2[0x30];
  }
  else {
    if ((int)uVar7 < 1) {
LAB_008c7200:
      fVar20 = 1.0;
      goto LAB_008c7204;
    }
    uVar19 = param_2[0x30];
    if ((int)uVar19 < (int)uVar7) {
      uVar19 = uVar19 + 1;
      param_2[0x30] = uVar19;
    }
  }
  fVar20 = (float)(int)uVar19 / (float)(int)uVar7;
LAB_008c7204:
  fVar20 = (float)(**(code **)(*plVar9 + 0x10))(fVar20);
  FUN_006f0808(param_2,param_2 + 0x10,param_2 + 0x20);
  fVar17 = 1.0 - fVar20;
  param_2[7] = (uint)(fVar20 * (float)param_2[0x27] + (float)param_2[0x17] * fVar17);
  param_2[8] = (uint)(fVar20 * (float)param_2[0x28] + (float)param_2[0x18] * fVar17);
  param_2[3] = (uint)(fVar20 * (float)param_2[0x23] + (float)param_2[0x13] * fVar17);
  param_2[4] = (uint)((float)param_2[0x14] + fVar20 * ((float)param_2[0x24] - (float)param_2[0x14]))
  ;
  param_2[9] = (uint)(fVar20 * (float)param_2[0x29] + (float)param_2[0x19] * fVar17);
  param_2[10] = (uint)(fVar20 * (float)param_2[0x2a] + (float)param_2[0x1a] * fVar17);
  param_2[0xb] = (uint)(fVar20 * (float)param_2[0x2b] + (float)param_2[0x1b] * fVar17);
  param_2[0xc] = (uint)(fVar20 * (float)param_2[0x2c] + (float)param_2[0x1c] * fVar17);
  param_2[5] = (uint)((float)param_2[0x15] + fVar20 * ((float)param_2[0x25] - (float)param_2[0x15]))
  ;
  param_2[6] = (uint)((float)param_2[0x16] + fVar20 * ((float)param_2[0x26] - (float)param_2[0x16]))
  ;
  param_2[0xd] = (uint)(fVar20 * (float)param_2[0x2d] + (float)param_2[0x1d] * fVar17);
  param_2[0xe] = (uint)(fVar20 * (float)param_2[0x2e] + (float)param_2[0x1e] * fVar17);
  param_2[0xf] = (uint)(fVar20 * (float)param_2[0x2f] + (float)param_2[0x1f] * fVar17);
  return fVar20;
}


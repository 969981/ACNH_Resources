
/* WARNING: Type propagation algorithm not settling */

void FUN_01e2bfe0(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  undefined *puVar9;
  undefined8 *******pppppppuVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  int iVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined4 uVar19;
  undefined8 *puVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  undefined4 *puVar24;
  ulong uVar25;
  ulong uVar26;
  uint uVar27;
  undefined8 uVar28;
  ulong uVar29;
  int iVar30;
  undefined8 *puVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  uint local_1018;
  uint local_1014;
  float local_1010 [4];
  undefined1 auStack_1000 [16];
  int local_ff0 [312];
  int local_b10;
  undefined1 auStack_640 [16];
  int local_630;
  undefined4 local_15c;
  undefined8 local_158;
  int local_150;
  undefined8 local_148;
  undefined8 *local_140;
  undefined8 *******local_138;
  undefined8 *******pppppppuStack_130;
  undefined8 *******local_128;
  undefined8 *******local_120;
  undefined8 *******local_118;
  undefined8 ******local_110;
  undefined8 *****local_108;
  undefined8 ****local_100;
  undefined8 ***local_f8;
  undefined8 **local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined8 local_d8 [11];
  
  puVar9 = PTR_DAT_04bb39d8;
  pfVar3 = (float *)(param_1 + 8) + (ulong)*(uint *)(param_2 + 0x14) * 9;
  if (2 < *(uint *)(param_2 + 0x14)) {
    pfVar3 = (float *)(param_1 + 8);
  }
  pfVar4 = pfVar3 + (ulong)*(uint *)(param_2 + 0x18) * 3;
  if (2 < *(uint *)(param_2 + 0x18)) {
    pfVar4 = pfVar3;
  }
  fVar32 = *pfVar4;
  fVar34 = pfVar4[1];
  fVar35 = pfVar4[2];
  local_128 = &local_120;
  local_120 = &local_118;
  local_148 = 0;
  local_140 = (undefined8 *)0x0;
  local_118 = &local_110;
  local_110 = &local_108;
  local_108 = &local_100;
  local_100 = &local_f8;
  local_f8 = &local_f0;
  local_f0 = &local_e8;
  local_e8 = &local_e0;
  local_e0 = 0;
  local_138 = &local_128;
  pppppppuStack_130 = &local_128;
  uVar13 = 0;
  if (fVar32 != (float)(int)fVar32) {
    uVar13 = (uint)(fVar32 < 0.0);
  }
  iVar30 = (int)fVar32 - uVar13;
  uVar13 = 0;
  if (fVar34 != (float)(int)fVar34) {
    uVar13 = (uint)(fVar34 < 0.0);
  }
  iVar21 = (int)fVar34 - uVar13;
  uVar13 = 0;
  if (fVar35 != (float)(int)fVar35) {
    uVar13 = (uint)(fVar35 < 0.0);
  }
  iVar16 = (int)fVar35 - uVar13;
  fVar32 = fVar32 - (float)iVar30;
  fVar34 = fVar34 - (float)iVar21;
  bVar11 = true;
  bVar12 = false;
  if (fVar34 <= 1.1920929e-07) {
    bVar11 = false;
    bVar12 = true;
    if (!NAN(fVar34)) {
      bVar11 = fVar34 < -1.1920929e-07;
      bVar12 = false;
    }
  }
  fVar35 = fVar35 - (float)iVar16;
  fVar33 = 0.0;
  if (bVar11 != bVar12) {
    fVar33 = fVar34;
  }
  bVar11 = true;
  bVar12 = false;
  if (fVar35 <= 1.1920929e-07) {
    bVar11 = false;
    bVar12 = true;
    if (!NAN(fVar35)) {
      bVar11 = fVar35 < -1.1920929e-07;
      bVar12 = false;
    }
  }
  fVar34 = 0.0;
  if (bVar11 != bVar12) {
    fVar34 = fVar35;
  }
  if (local_d8 != (undefined8 *)0x0) {
    local_140 = local_d8;
    local_148 = 0xa00000000;
    if (0 < iVar30) {
      uVar14 = 0;
      uVar25 = 0;
      uVar27 = 0;
      uVar13 = 0;
      do {
        pppppppuVar10 = local_138;
        if ((int)uVar13 < local_148._4_4_) {
          if (local_138 != (undefined8 *******)0x0) {
            local_138 = (undefined8 *******)*local_138;
          }
          *(undefined4 *)pppppppuVar10 = 0;
          uVar25 = local_148 & 0xffffffff;
          uVar13 = (uint)local_148;
          uVar14 = (uint)local_148;
          uVar27 = (uint)local_148;
          if ((int)(uint)local_148 < local_148._4_4_) {
            local_d8[(int)(uint)local_148] = pppppppuVar10;
            uVar13 = (uint)local_148 + 1;
            uVar25 = (ulong)uVar13;
            local_148 = CONCAT44(local_148._4_4_,uVar13);
            uVar14 = uVar13;
            uVar27 = uVar13;
          }
        }
        iVar30 = iVar30 + -1;
      } while (iVar30 != 0);
      goto LAB_01e2c1ec;
    }
  }
  uVar25 = 0;
  uVar14 = 0;
  uVar27 = 0;
LAB_01e2c1ec:
  if ((0 < iVar21) && ((int)uVar27 < local_148._4_4_)) {
    do {
      pppppppuVar10 = local_138;
      if ((int)uVar27 < local_148._4_4_) {
        if (local_138 != (undefined8 *******)0x0) {
          local_138 = (undefined8 *******)*local_138;
        }
        *(undefined4 *)pppppppuVar10 = 1;
        uVar25 = local_148 & 0xffffffff;
        uVar14 = (uint)local_148;
        uVar27 = (uint)local_148;
        if ((int)(uint)local_148 < local_148._4_4_) {
          local_140[(int)(uint)local_148] = pppppppuVar10;
          uVar14 = (uint)local_148 + 1;
          uVar25 = (ulong)uVar14;
          local_148 = CONCAT44(local_148._4_4_,uVar14);
          uVar27 = uVar14;
        }
      }
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
  }
  if ((0 < iVar16) && ((int)uVar25 < local_148._4_4_)) {
    do {
      pppppppuVar10 = local_138;
      if ((int)uVar25 < local_148._4_4_) {
        if (local_138 != (undefined8 *******)0x0) {
          local_138 = (undefined8 *******)*local_138;
        }
        *(undefined4 *)pppppppuVar10 = 2;
        uVar25 = local_148 & 0xffffffff;
        uVar14 = (uint)local_148;
        if ((int)(uint)local_148 < local_148._4_4_) {
          local_140[(int)(uint)local_148] = pppppppuVar10;
          uVar14 = (uint)local_148 + 1;
          uVar25 = (ulong)uVar14;
          local_148 = CONCAT44(local_148._4_4_,uVar14);
        }
      }
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
  }
  fVar35 = 0.0;
  if (1.1920929e-07 < fVar32 || fVar32 < -1.1920929e-07) {
    fVar35 = fVar32 + 0.0;
  }
  fVar34 = fVar35 + fVar33 + fVar34;
  fVar32 = 0.5;
  if (fVar34 < 0.0) {
    fVar32 = -0.5;
  }
  iVar30 = (int)(fVar34 + fVar32);
  if (0 < iVar30) {
    do {
      puVar15 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar9);
      pppppppuVar10 = local_138;
      uVar13 = *puVar15 ^ *puVar15 << 0xb;
      uVar14 = puVar15[3];
      *puVar15 = puVar15[1];
      puVar15[1] = puVar15[2];
      uVar13 = uVar13 >> 8 ^ uVar14 >> 0x13 ^ uVar13 ^ uVar14;
      puVar15[2] = uVar14;
      puVar15[3] = uVar13;
      fVar32 = fVar34 * ((float)(uVar13 >> 9 | 0x3f800000) + -1.0);
      if (fVar35 <= fVar32) {
        if (fVar32 < fVar35 + fVar33) {
          uVar19 = 1;
          goto LAB_01e2c3b0;
        }
        if (fVar32 < fVar34) {
          uVar19 = 2;
          goto LAB_01e2c3b0;
        }
        puVar15 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar9);
        pppppppuVar10 = local_138;
        uVar13 = *puVar15 ^ *puVar15 << 0xb;
        uVar14 = puVar15[3];
        *puVar15 = puVar15[1];
        puVar15[1] = puVar15[2];
        uVar13 = uVar13 >> 8 ^ uVar14 >> 0x13 ^ uVar13 ^ uVar14;
        puVar15[2] = uVar14;
        puVar15[3] = uVar13;
        uVar14 = (uint)local_148;
        if ((int)(uint)local_148 < local_148._4_4_) {
          if (local_138 != (undefined8 *******)0x0) {
            local_138 = (undefined8 *******)*local_138;
          }
          *(int *)pppppppuVar10 = (int)((ulong)uVar13 + (ulong)uVar13 * 2 >> 0x20);
          if (local_148._4_4_ <= (int)(uint)local_148) goto LAB_01e2c33c;
          local_140[(int)(uint)local_148] = pppppppuVar10;
          goto LAB_01e2c330;
        }
      }
      else {
        uVar19 = 0;
LAB_01e2c3b0:
        uVar14 = (uint)local_148;
        if ((int)(uint)local_148 < local_148._4_4_) {
          if (local_138 != (undefined8 *******)0x0) {
            local_138 = (undefined8 *******)*local_138;
          }
          *(undefined4 *)pppppppuVar10 = uVar19;
          if ((int)(uint)local_148 < local_148._4_4_) {
            local_140[(int)(uint)local_148] = pppppppuVar10;
LAB_01e2c330:
            uVar14 = (uint)local_148 + 1;
            local_148 = CONCAT44(local_148._4_4_,uVar14);
          }
        }
      }
LAB_01e2c33c:
      iVar30 = iVar30 + -1;
    } while (iVar30 != 0);
  }
  puVar31 = local_140;
  local_150 = 0;
  local_158 = 0;
  if (uVar14 == 0) {
    iVar21 = 0;
    iVar30 = 0;
  }
  else {
    puVar20 = local_140;
    if (((long)(int)uVar14 & 1U) != 0) {
      puVar20 = local_140 + 1;
      uVar25 = (ulong)*(uint *)*local_140;
      if (2 < *(uint *)*local_140) {
        uVar25 = 0;
      }
      *(int *)((long)&local_158 + uVar25 * 4) = *(int *)((long)&local_158 + uVar25 * 4) + 1;
    }
    if (((long)(int)uVar14 - 1U & 0x1fffffffffffffff) != 0) {
      do {
        uVar25 = (ulong)*(uint *)*puVar20;
        if (2 < *(uint *)*puVar20) {
          uVar25 = 0;
        }
        *(int *)((long)&local_158 + uVar25 * 4) = *(int *)((long)&local_158 + uVar25 * 4) + 1;
        puVar1 = puVar20 + 1;
        puVar20 = puVar20 + 2;
        uVar25 = (ulong)*(uint *)*puVar1;
        if (2 < *(uint *)*puVar1) {
          uVar25 = 0;
        }
        *(int *)((long)&local_158 + uVar25 * 4) = *(int *)((long)&local_158 + uVar25 * 4) + 1;
      } while (puVar20 != puVar31 + (int)uVar14);
    }
    iVar30 = (int)local_158;
    iVar21 = local_158._4_4_;
  }
  iVar16 = local_150;
  uVar13 = nn::os::GetSystemTick();
  if (1 < (int)(uint)local_148) {
    uVar13 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
    uVar14 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 2;
    uVar27 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 3;
    uVar25 = local_148 & 0xffffffff;
    uVar22 = (uVar27 ^ uVar27 >> 0x1e) * 0x6c078965 + 4;
    do {
      uVar13 = uVar13 ^ uVar13 << 0xb;
      uVar6 = uVar22 >> 0x13 ^ uVar13 >> 8 ^ uVar22 ^ uVar13;
      uVar26 = uVar25 - 1 & 0xffffffff;
      uVar28 = local_140[uVar26];
      uVar29 = uVar25 * uVar6 >> 0x1d & 0x7fffffff8;
      local_140[uVar26] = *(undefined8 *)((long)local_140 + uVar29);
      *(undefined8 *)((long)local_140 + uVar29) = uVar28;
      bVar11 = 2 < uVar25;
      uVar25 = uVar25 - 1;
      uVar13 = uVar14;
      uVar14 = uVar27;
      uVar27 = uVar22;
      uVar22 = uVar6;
    } while (bVar11);
  }
  bVar8 = *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
  if (bVar8 < 5) {
    local_15c = 5;
  }
  else if (bVar8 < 8) {
    local_15c = 0;
  }
  else if (bVar8 < 0xc) {
    local_15c = 1;
  }
  else if (bVar8 < 0x10) {
    local_15c = 2;
  }
  else {
    local_15c = 3;
    if (0x12 < bVar8) {
      local_15c = 4;
    }
  }
  iVar7 = *(int *)(param_2 + 0x48);
  if (iVar7 != 0) {
    uVar13 = 0;
    do {
      iVar23 = *(int *)(param_2 + 0x44);
      while( true ) {
        iVar2 = 0;
        if (*(int *)(param_2 + 0x40) <= iVar23) {
          iVar2 = *(int *)(param_2 + 0x40);
        }
        puVar31 = (undefined8 *)(*(long *)(param_2 + 0x38) + (long)(iVar23 - iVar2) * 0x14);
        if (*(char *)((long)puVar31 + 0x11) == '\0') break;
        iVar7 = iVar7 + -1;
        iVar23 = iVar23 + 1;
        if (iVar7 == 0) {
          return;
        }
      }
      FUN_01e31460(auStack_1000);
      local_1010[2] = 0.0;
      local_1010[0] = 0.0;
      local_1010[1] = 0.0;
      uVar14 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0);
      local_1014 = 2;
      if ((uVar14 & 0xfffffffd) != 5) {
        local_1014 = (uint)(3 < uVar14);
      }
      FUN_01e31630(param_1,param_2,puVar31 + 1,&local_15c,&local_1014,0,auStack_1000,0,local_1010);
      if (local_ff0[0] * iVar30 + local_b10 * iVar21 + local_630 * iVar16 < 1) {
        *puVar31 = 0x200000016;
LAB_01e2ca48:
        *(undefined4 *)((long)puVar31 + 0xc) = local_15c;
        *(undefined1 *)((long)puVar31 + 0x11) = 1;
      }
      else {
        local_1014 = 0;
        uVar14 = 0;
        if (uVar13 < 10) {
          uVar14 = uVar13;
        }
        local_1018 = *(uint *)local_140[uVar14];
        piVar5 = local_ff0 + (ulong)local_1018 * 0x138;
        if (2 < local_1018) {
          piVar5 = local_ff0;
        }
        if (*piVar5 < 1) {
          uVar27 = 0;
          if (uVar14 < 9) {
            uVar27 = uVar14 + 1;
          }
          local_1018 = *(uint *)local_140[uVar27];
          piVar5 = local_ff0 + (ulong)local_1018 * 0x138;
          if (2 < local_1018) {
            piVar5 = local_ff0;
          }
          if (0 < *piVar5) goto LAB_01e2c950;
          uVar14 = 0;
          if (uVar27 < 9) {
            uVar14 = uVar27 + 1;
          }
          local_1018 = *(uint *)local_140[uVar14];
          piVar5 = local_ff0 + (ulong)local_1018 * 0x138;
          if (2 < local_1018) {
            piVar5 = local_ff0;
          }
          if (0 < *piVar5) goto LAB_01e2c950;
          uVar27 = 0;
          if (uVar14 < 9) {
            uVar27 = uVar14 + 1;
          }
          local_1018 = *(uint *)local_140[(int)uVar27];
          piVar5 = local_ff0 + (ulong)local_1018 * 0x138;
          if (2 < local_1018) {
            piVar5 = local_ff0;
          }
          if (0 < *piVar5) goto LAB_01e2c950;
          uVar14 = 0;
          if (uVar27 < 9) {
            uVar14 = uVar27 + 1;
          }
          local_1018 = *(uint *)local_140[(int)uVar14];
          piVar5 = local_ff0 + (ulong)local_1018 * 0x138;
          if (2 < local_1018) {
            piVar5 = local_ff0;
          }
          if (0 < *piVar5) goto LAB_01e2c950;
          uVar27 = 0;
          if (uVar14 < 9) {
            uVar27 = uVar14 + 1;
          }
          local_1018 = *(uint *)local_140[(int)uVar27];
          piVar5 = local_ff0 + (ulong)local_1018 * 0x138;
          if (2 < local_1018) {
            piVar5 = local_ff0;
          }
          if (0 < *piVar5) goto LAB_01e2c950;
          uVar14 = 0;
          if (uVar27 < 9) {
            uVar14 = uVar27 + 1;
          }
          local_1018 = *(uint *)local_140[(int)uVar14];
          piVar5 = local_ff0 + (ulong)local_1018 * 0x138;
          if (2 < local_1018) {
            piVar5 = local_ff0;
          }
          if (0 < *piVar5) goto LAB_01e2c950;
          uVar27 = 0;
          if (uVar14 < 9) {
            uVar27 = uVar14 + 1;
          }
          local_1018 = *(uint *)local_140[(int)uVar27];
          piVar5 = local_ff0 + (ulong)local_1018 * 0x138;
          if (2 < local_1018) {
            piVar5 = local_ff0;
          }
          if (0 < *piVar5) goto LAB_01e2c950;
          uVar14 = 0;
          if (uVar27 < 9) {
            uVar14 = uVar27 + 1;
          }
          local_1018 = *(uint *)local_140[(int)uVar14];
          piVar5 = local_ff0 + (ulong)local_1018 * 0x138;
          if (2 < local_1018) {
            piVar5 = local_ff0;
          }
          if (0 < *piVar5) goto LAB_01e2c950;
          iVar7 = 0;
          if (uVar14 < 9) {
            iVar7 = uVar14 + 1;
          }
          local_1018 = *(uint *)local_140[iVar7];
          piVar5 = local_ff0 + (ulong)local_1018 * 0x138;
          if (2 < local_1018) {
            piVar5 = local_ff0;
          }
          if (0 < *piVar5) goto LAB_01e2c950;
        }
        else {
LAB_01e2c950:
          local_1014 = local_1018;
        }
        piVar5 = local_ff0 + (ulong)local_1014 * 0x138;
        if (2 < local_1014) {
          piVar5 = local_ff0;
        }
        if (0 < *piVar5) {
          uVar25 = (ulong)local_1014;
          if (2 < local_1014) {
            uVar25 = 0;
          }
          fVar32 = local_1010[uVar25];
          puVar15 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
          uVar27 = puVar15[3];
          uVar14 = *puVar15 ^ *puVar15 << 0xb;
          *puVar15 = puVar15[1];
          puVar15[1] = puVar15[2];
          uVar14 = uVar14 >> 8 ^ uVar27 >> 0x13 ^ uVar14 ^ uVar27;
          puVar15[2] = uVar27;
          puVar15[3] = uVar14;
          puVar18 = auStack_1000 + (ulong)local_1014 * 0x4e0;
          if (2 < local_1014) {
            puVar18 = auStack_1000;
          }
          puVar17 = *(undefined1 **)(puVar18 + 8);
          if (puVar17 != puVar18) {
            fVar34 = 0.0;
            puVar24 = (undefined4 *)(puVar17 + -8);
            do {
              fVar34 = fVar34 + (float)puVar24[1];
              if (fVar32 * ((float)(uVar14 >> 9 | 0x3f800000) + -1.0) < fVar34) {
                *(undefined4 *)puVar31 = *puVar24;
                *(uint *)((long)puVar31 + 4) = local_1014;
                goto LAB_01e2ca48;
              }
              puVar17 = *(undefined1 **)(puVar17 + 8);
              puVar24 = (undefined4 *)(puVar17 + -8);
            } while (puVar24 != (undefined4 *)(puVar18 + -8));
          }
        }
      }
      puVar18 = auStack_640;
      do {
        puVar18 = *(undefined1 **)(puVar18 + 8);
      } while (puVar18 != auStack_640);
      iVar7 = *(int *)(param_2 + 0x48);
      uVar13 = uVar13 + 1;
    } while (iVar7 != 0);
  }
  return;
}


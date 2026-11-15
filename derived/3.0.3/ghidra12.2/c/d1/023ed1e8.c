
void FUN_023ed1e8(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined2 uVar5;
  short sVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  uint *puVar19;
  int *piVar20;
  undefined1 uVar21;
  uint *puVar22;
  char cVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  int local_214;
  undefined8 local_210;
  char *pcStack_208;
  undefined *local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined1 auStack_1a8 [8];
  char *local_1a0;
  int local_198;
  undefined1 auStack_150 [88];
  undefined1 local_f8;
  undefined1 local_d4;
  undefined4 local_d0;
  undefined1 local_cb;
  undefined8 local_b0;
  float local_a8;
  undefined4 local_a4;
  byte local_a0;
  undefined *local_98;
  int local_90;
  int iStack_8c;
  int local_88;
  float local_84;
  float fStack_80;
  float local_7c;
  
  puVar4 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_1 + 0x4c8);
  }
  uVar24 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
  *(undefined4 *)((long)puVar4 + 0x2ec) = uVar24;
  *(undefined1 *)((long)puVar4 + 0x2e5) = 1;
  puVar4 = (undefined8 *)PTR_DAT_04bc3a80;
  fStack_80 = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
  local_88 = (uint)*(ushort *)(param_1 + 0x18ef) << 0x10;
  local_84 = (float)*(int *)(param_1 + 0x18e5) * 0.001;
  local_7c = (float)*(int *)(param_1 + 0x18eb) * 0.001;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x55b5d9de) {
    (**(code **)(**(long **)(param_1 + 0x68) + 0x140))(*(long **)(param_1 + 0x68),&local_84,1);
    (**(code **)(**(long **)(param_1 + 0x68) + 0x160))(*(long **)(param_1 + 0x68),&local_88);
  }
  else if (*(int *)(param_1 + 0x178) == 1) {
    local_b0 = (undefined *)CONCAT44(fStack_80,local_84);
    local_a8 = local_7c;
    fVar25 = (float)FUN_016e026c(0,&local_b0,0,0);
    FUN_016d73fc(&local_98,&local_b0);
    puVar1 = PTR_DAT_04bb43c0;
    lVar17 = *(long *)PTR_DAT_04bb43c0;
    uVar10 = FUN_0277d6c4(&local_98);
    lVar16 = *(long *)puVar1;
    if (lVar16 != 0) {
      lVar17 = *(long *)(lVar17 + 0x57e58);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
      if ((uVar10 < *(uint *)(lVar17 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
        local_1f0 = 0;
        local_200 = PTR_DAT_04bc0510 + 0x10;
        uVar10 = FUN_0277d6c4(&local_1f8);
        if (*(long *)puVar1 != 0) {
          lVar16 = *(long *)(lVar16 + 0x57e58);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
          if ((uVar10 < *(uint *)(lVar16 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
            lVar16 = *(long *)PTR_DAT_04bc0428;
            uVar10 = FUN_0277d6c4(&local_98);
            puVar1 = PTR_DAT_04bbfe88;
            uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
            if ((uVar10 < *(uint *)(lVar16 + 0x1d8)) &&
               (puVar22 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar10 * 8),
               puVar22 != (uint *)0x0)) {
              uVar10 = *puVar22;
              uVar15 = 0;
              if ((uVar10 != 0) && (puVar22 != (uint *)(ulong)uVar10)) {
                puVar19 = (uint *)((long)puVar22 - (long)(ulong)uVar10);
                uVar15 = 0;
                if (*puVar19 != 0) {
                  uVar10 = puVar19[1];
                  if ((uVar10 != 0) && ((ulong)(ushort)puVar19[2] != 0)) {
                    lVar16 = 0xc;
                    if (*(char *)((long)puVar19 + 10) != '\0') {
                      lVar16 = 0x1c;
                    }
                    lVar16 = (long)puVar19 + lVar16 + (ulong)(ushort)puVar19[2] * 8;
                    if (lVar16 != 0) {
                      uVar15 = 0;
                      if ((ulong)uVar10 != 0) {
                        uVar15 = (uint)((ulong)((long)puVar22 - lVar16) / (ulong)uVar10);
                      }
                      if (*puVar19 <= uVar15) {
                        uVar15 = 0xffffffff;
                      }
                      if ((uVar15 < *(uint *)PTR_DAT_04bc0048) &&
                         (uVar15 = (uint)*(ushort *)
                                          (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar15 * 2),
                         uVar15 < 0x52)) goto LAB_023ed498;
                    }
                  }
                  uVar15 = 0;
                }
              }
LAB_023ed498:
              local_210 = (undefined *)CONCAT44(local_210._4_4_,uVar15);
              if ((uVar15 & 0xfffffffe) == 10) {
                uVar10 = *puVar22;
                fVar26 = 0.0;
                if (uVar10 != 0) {
                  cVar23 = *PTR_DAT_04bbfe88;
                  puVar11 = PTR_DAT_04bbfe90;
                  do {
                    if (cVar23 == '\0') {
                      cVar23 = '\x01';
                      *puVar1 = 1;
                      memset(puVar11,0xff,0x1ac);
                      uVar10 = *puVar22;
                    }
                    else {
                      uVar15 = *(uint *)(puVar11 + 0xf0);
                      if (-1 < (int)uVar15) {
                        if ((float *)((ulong)uVar15 + (long)puVar22) != (float *)0x0) {
                          fVar26 = *(float *)((ulong)uVar15 + (long)puVar22);
                        }
                        break;
                      }
                      if (uVar15 != 0xffffffff) break;
                    }
                    puVar11 = PTR_DAT_04bbfe90;
                    puVar19 = (uint *)(ulong)uVar10;
                    if ((puVar19 == (uint *)0x0) || (puVar22 == puVar19)) break;
                    lVar16 = 0xc;
                    if (*(char *)((long)puVar22 + (10 - (long)puVar19)) != '\0') {
                      lVar16 = 0x1c;
                    }
                    lVar16 = (long)puVar22 + (lVar16 - (long)puVar19);
                    if (lVar16 == 0) break;
                    uVar12 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar19));
                    *(undefined4 *)(PTR_DAT_04bbfe90 + 0xf0) = 0xfffffffe;
                    if (uVar12 == 0) break;
                    piVar20 = (int *)(lVar16 + 4);
                    while (piVar20[-1] != -0x499d99d4) {
                      piVar20 = piVar20 + 2;
                      uVar12 = uVar12 - 1;
                      if (uVar12 == 0) goto LAB_023ed5ac;
                    }
                    iVar9 = 0;
                    if (*piVar20 != -1) {
                      iVar9 = *piVar20;
                    }
                    *(int *)(puVar11 + 0xf0) = iVar9;
                    uVar10 = *puVar22;
                    if (uVar10 == 0) break;
                  } while( true );
                }
LAB_023ed5ac:
                fVar25 = fVar25 + fVar26;
              }
              goto LAB_023ed5b0;
            }
          }
        }
        local_210 = (undefined *)((ulong)local_210._4_4_ << 0x20);
      }
    }
LAB_023ed5b0:
    local_b0 = (undefined *)CONCAT44(fVar25,(float)local_b0);
    puVar13 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar13 = *(undefined8 **)(param_1 + 0x4c8);
    }
    FUN_03eb4b60(0x3e4ccccd,0x41200000,0x3e4ccccc,puVar13 + 0x4f,&local_b0);
    if (*(int *)(param_1 + 0x178) == 0) {
      local_98 = (undefined *)CONCAT44(local_98._4_4_,10);
      local_200 = (undefined *)CONCAT44(local_200._4_4_,10);
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_023ed6d8;
    }
    plVar3 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar3 = *(long **)(param_1 + 0x4c8);
    }
    lVar16 = (**(code **)(*plVar3 + 0x148))();
    iVar18 = local_88 - *(int *)(lVar16 + 4);
    iVar9 = local_88;
    if (0xb60b5e < iVar18 + 0x5b05afU) {
      iVar7 = 0x15555560;
      iVar9 = -0x15555560;
      iVar18 = (int)((float)iVar18 * 0.2);
      if (iVar18 < 1) {
        iVar7 = -0x5b05b0;
      }
      else {
        iVar9 = 0x5b05b0;
      }
      iVar2 = iVar18;
      if (iVar7 <= iVar18) {
        iVar2 = iVar7;
      }
      if (iVar9 <= iVar18) {
        iVar9 = iVar2;
      }
      iVar9 = iVar9 + *(int *)(lVar16 + 4);
    }
    *(int *)(lVar16 + 4) = iVar9;
  }
LAB_023ed6d8:
  puVar11 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_1f8 = "ValidateVillageSave";
  local_200 = puVar1;
  uVar12 = FUN_0273f0a0(&local_200);
  if ((uVar12 & 1) == 0) {
    local_1f8 = "PrologueFinishTkkDream";
    local_200 = puVar1;
    iVar9 = FUN_0274bce0(param_1 + 0x1ee8,&local_200);
    if (((iVar9 == 0 && *(int *)(param_1 + 0x178) == 0) && (*(long *)(param_1 + 0x70) != 0)) &&
       (*(int *)(*(long *)(param_1 + 0x70) + 0x288) == 0x6e)) {
      fVar25 = *(float *)(*(long *)(param_1 + 0x68) + 0x278);
      fVar26 = *(float *)(*(long *)(param_1 + 0x68) + 0x280);
      local_a8 = 0.0;
      local_98 = PTR_DAT_04bb2010 + 0x10;
      local_90 = (int)((float)(int)fVar25 / 5.0) - (uint)(fVar25 < 0.0);
      iStack_8c = (int)((float)(int)fVar26 / 5.0) - (uint)(fVar26 < 0.0);
      lVar16 = *(long *)PTR_DAT_04bb2720;
      if (lVar16 == 0) {
        puVar13 = &DAT_055c04a0;
      }
      else {
        puVar13 = &DAT_055c04a0;
        if (*(long *)(lVar16 + 0x330) != 0) {
          puVar13 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar16 + 0x338));
          iVar9 = FUN_006bd550(*puVar13,0);
          if (iVar9 != 0x758f7eaf) {
            puVar4 = &DAT_055c04a0;
          }
          puVar13 = puVar4;
        }
      }
      local_a4 = *(undefined4 *)(puVar13 + 7);
      local_a0 = FUN_017baf44();
      local_a0 = local_a0 & 1;
      local_b0 = PTR_DAT_04bb5438 + 0x10;
      uVar14 = FUN_01a5190c(&local_b0,0,&local_98,0);
      puVar1 = PTR_DAT_04bb43c0;
      lVar16 = *(long *)PTR_DAT_04bb43c0;
      uVar10 = FUN_0277d6c4();
      if (*(long *)puVar1 != 0) {
        lVar16 = *(long *)(lVar16 + 0x57e58);
        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if (((uVar10 < *(uint *)(lVar16 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) &&
           (iVar9 = FUN_0277d6c4(uVar14), iVar9 == 0xff1)) {
          FUN_02918280();
          FUN_0257a010(&local_200);
          FUN_023ea384(param_1,auStack_150);
          puVar11 = puVar11 + 0x10;
          pcStack_208 = "Ftr_Campbed";
          local_210 = puVar11;
          FUN_006e43a0(&local_200,&local_210);
          pcStack_208 = "Root";
          local_210 = puVar11;
          FUN_006e43a0(auStack_1a8,&local_210);
          goto LAB_023ede10;
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    uVar12 = FUN_016d77dc(*(long *)(param_1 + 0x68) + 0x278);
    if ((uVar12 & 1) == 0) {
      FUN_016f8b70(param_1);
      local_1f8 = (char *)((ulong)local_1f8 & 0xffffff0000000000);
      local_200 = (undefined *)0x1010000000006;
      FUN_02374564(param_1,&local_200);
    }
    else {
      iVar9 = *(int *)(param_1 + 0x159c);
      local_210 = (undefined *)CONCAT44(local_210._4_4_,iVar9);
      if ((iVar9 == 1) || (iVar9 == 3)) {
        local_214 = 2;
        lVar17 = *(long *)(param_1 + 0x68);
        iVar18 = *(int *)(lVar17 + 0x2b4);
        lVar16 = lVar17 + 0x2b4;
        if (iVar9 == 3) {
          local_1f8 = (char *)((ulong)local_1f8._4_4_ << 0x20);
          local_200 = (undefined *)0xc1200000;
          local_214 = FUN_0151d990(&local_b0,lVar17 + 0x278,lVar16,&local_200,0,0,param_1 + 0x1ee8);
          local_98 = (undefined *)CONCAT44(local_98._4_4_,local_214);
          if ((local_214 != 2) && (local_214 != 1)) {
            uVar12 = FUN_0151e970(&local_b0,lVar17 + 0x278,lVar16,&local_200,0,0,param_1 + 0x1ee8);
            local_214 = 3;
            if ((uVar12 & 1) == 0) {
              local_214 = (int)local_98;
            }
          }
          uVar21 = 3;
          iVar18 = iVar18 + -0x40000000;
        }
        else if (iVar9 == 1) {
          local_1f8 = (char *)((ulong)local_1f8._4_4_ << 0x20);
          local_200 = (undefined *)0x41200000;
          local_214 = FUN_0151d990(&local_b0,lVar17 + 0x278,lVar16,&local_200,0,0,param_1 + 0x1ee8);
          local_98 = (undefined *)CONCAT44(local_98._4_4_,local_214);
          if ((local_214 != 2) && (local_214 != 1)) {
            uVar12 = FUN_0151e970(&local_b0,lVar17 + 0x278,lVar16,&local_200,0,0,param_1 + 0x1ee8);
            local_214 = 3;
            if ((uVar12 & 1) == 0) {
              local_214 = (int)local_98;
            }
          }
          uVar21 = 1;
          iVar18 = iVar18 + 0x40000000;
        }
        else {
          uVar21 = 1;
        }
        if ((local_214 == 2) || (local_214 == 3)) {
          fVar25 = (float)FUN_016e026c(0,&local_b0,0,0);
          *(undefined8 *)(param_1 + 0x1980) = 0;
          *(undefined8 *)(param_1 + 0x1988) = 0;
          *(undefined8 *)(param_1 + 0x1990) = 0;
          *(undefined8 *)(param_1 + 0x1998) = 0;
          *(undefined8 *)(param_1 + 0x19a0) = 0;
          *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
          *(undefined8 *)(param_1 + 0x19a8) = 0;
          *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
          *(undefined8 *)(param_1 + 0x19b0) = 0;
          *(undefined8 *)(param_1 + 0x19b8) = 0;
          *(undefined8 *)(param_1 + 0x19c0) = 0;
          *(undefined8 *)(param_1 + 0x19c8) = 0;
          *(undefined8 *)(param_1 + 0x19d0) = 0;
          *(undefined2 *)(param_1 + 0x19d8) = 0;
          local_b0 = (undefined *)CONCAT44(fVar25,(float)local_b0);
          *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
          *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
          iVar9 = (int)(fVar25 * 4.0);
          *(int *)(param_1 + 0x1982) = (int)((float)local_b0 * 999.99994);
          if (0x7ffe < iVar9) {
            iVar9 = 0x7fff;
          }
          if (iVar9 < -0x7fff) {
            iVar9 = -0x8000;
          }
          *(short *)(param_1 + 0x1986) = (short)iVar9;
          *(int *)(param_1 + 0x1988) = (int)(local_a8 * 999.99994);
          lVar16 = *(long *)(param_1 + 0x68);
          *(int *)(param_1 + 0x198c) = (int)(*(float *)(lVar16 + 0x278) * 999.99994);
          iVar9 = (int)(*(float *)(lVar16 + 0x27c) * 4.0);
          if (0x7ffe < iVar9) {
            iVar9 = 0x7fff;
          }
          if (iVar9 < -0x7fff) {
            iVar9 = -0x8000;
          }
          *(short *)(param_1 + 0x1990) = (short)iVar9;
          *(int *)(param_1 + 0x1992) = (int)(*(float *)(lVar16 + 0x280) * 999.99994);
          *(int *)(param_1 + 0x1996) = (int)(*(float *)(lVar16 + 0x278) * 999.99994);
          iVar9 = (int)(*(float *)(lVar16 + 0x27c) * 4.0);
          if (0x7ffe < iVar9) {
            iVar9 = 0x7fff;
          }
          if (iVar9 < -0x7fff) {
            iVar9 = -0x8000;
          }
          *(short *)(param_1 + 0x199a) = (short)iVar9;
          fVar25 = *(float *)(lVar16 + 0x280);
          *(undefined1 *)(param_1 + 0x19a0) = uVar21;
          *(int *)(param_1 + 0x199c) = (int)(fVar25 * 999.99994);
          *(short *)(param_1 + 0x1980) = (short)((uint)iVar18 >> 0x10);
          *(bool *)(param_1 + 0x19a2) = local_214 == 3;
          uVar10 = 0x74;
LAB_023edc1c:
          local_200 = (undefined *)CONCAT44(local_200._4_4_,uVar10);
          if (uVar10 < 0x149) {
            *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
            *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
            *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
            *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
            *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
            *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
            *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
            *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
            *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
            *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
            *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
            *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
            *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
            *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
            *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
            *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
            lVar16 = 0;
            if (*(long *)(param_1 + 0x70) != 0) {
              lVar16 = *(long *)(param_1 + 0x70) + 0x278;
            }
            FUN_03ebb160(lVar16,uVar10);
          }
        }
        else {
          if (local_214 == 1) {
            lVar16 = *(long *)(param_1 + 0x68);
            uVar5 = *(undefined2 *)(lVar16 + 0x2b6);
            fVar25 = *(float *)(lVar16 + 0x27c);
            *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
            *(undefined8 *)(param_1 + 0x1980) = 0;
            *(undefined8 *)(param_1 + 0x1988) = 0;
            *(undefined8 *)(param_1 + 0x1990) = 0;
            *(undefined8 *)(param_1 + 0x1998) = 0;
            *(undefined8 *)(param_1 + 0x19a0) = 0;
            *(undefined8 *)(param_1 + 0x19a8) = 0;
            *(undefined8 *)(param_1 + 0x19b0) = 0;
            *(undefined8 *)(param_1 + 0x19b8) = 0;
            *(undefined8 *)(param_1 + 0x19c0) = 0;
            *(undefined8 *)(param_1 + 0x19c8) = 0;
            *(undefined8 *)(param_1 + 0x19d0) = 0;
            *(undefined2 *)(param_1 + 0x19d8) = 0;
            *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
            local_b0 = (undefined *)CONCAT44(fVar25,(float)local_b0);
            *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
            *(int *)(param_1 + 0x1982) = (int)((float)local_b0 * 999.99994);
            *(int *)(param_1 + 0x1988) = (int)(local_a8 * 999.99994);
            iVar9 = (int)(fVar25 * 4.0);
            *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
            if (0x7ffe < iVar9) {
              iVar9 = 0x7fff;
            }
            if (iVar9 < -0x7fff) {
              iVar9 = -0x8000;
            }
            *(short *)(param_1 + 0x1986) = (short)iVar9;
            *(int *)(param_1 + 0x198c) = (int)(*(float *)(lVar16 + 0x278) * 999.99994);
            iVar9 = (int)(*(float *)(lVar16 + 0x27c) * 4.0);
            if (0x7ffe < iVar9) {
              iVar9 = 0x7fff;
            }
            if (iVar9 < -0x7fff) {
              iVar9 = -0x8000;
            }
            *(short *)(param_1 + 0x1990) = (short)iVar9;
            fVar25 = *(float *)(lVar16 + 0x280);
            *(undefined2 *)(param_1 + 0x1980) = uVar5;
            *(undefined1 *)(param_1 + 0x1996) = uVar21;
            uVar10 = 0x70;
            *(int *)(param_1 + 0x1992) = (int)(fVar25 * 999.99994);
            goto LAB_023edc1c;
          }
          if (local_214 == 0) {
LAB_023edf5c:
            *(undefined8 *)(param_1 + 0x1980) = 0;
            *(undefined8 *)(param_1 + 0x1988) = 0;
            *(undefined8 *)(param_1 + 0x1990) = 0;
            *(undefined8 *)(param_1 + 0x1998) = 0;
            *(undefined8 *)(param_1 + 0x19a0) = 0;
            *(undefined8 *)(param_1 + 0x19a8) = 0;
            *(undefined8 *)(param_1 + 0x19b0) = 0;
            *(undefined8 *)(param_1 + 0x19b8) = 0;
            *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
            *(undefined8 *)(param_1 + 0x19c0) = 0;
            *(undefined8 *)(param_1 + 0x19c8) = 0;
            *(undefined8 *)(param_1 + 0x19d0) = 0;
            *(undefined2 *)(param_1 + 0x19d8) = 0;
            *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
            *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
            *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
            lVar16 = *(long *)(param_1 + 0x68);
            *(int *)(param_1 + 0x1982) = (int)(*(float *)(lVar16 + 0x278) * 999.99994);
            iVar9 = (int)(*(float *)(lVar16 + 0x27c) * 4.0);
            if (0x7ffe < iVar9) {
              iVar9 = 0x7fff;
            }
            if (iVar9 < -0x7fff) {
              iVar9 = -0x8000;
            }
            *(short *)(param_1 + 0x1986) = (short)iVar9;
            *(int *)(param_1 + 0x1988) = (int)(*(float *)(lVar16 + 0x280) * 999.99994);
            uVar5 = *(undefined2 *)(lVar16 + 0x2b6);
            *(undefined1 *)(param_1 + 0x198c) = uVar21;
            *(undefined2 *)(param_1 + 0x1980) = uVar5;
            uVar10 = 0x73;
            goto LAB_023edc1c;
          }
          if (local_214 == 4) {
            *(undefined1 *)(param_1 + 0xb49) = 1;
            goto LAB_023edf5c;
          }
          if (local_214 == 5) {
            FUN_016f8b70(param_1);
            local_1f8 = (char *)((ulong)local_1f8 & 0xffffff0000000000);
            local_200 = (undefined *)0x1010000000006;
            FUN_02374564(param_1,&local_200);
          }
        }
        FUN_025248bc(param_1 + 0x1ee8,0);
      }
    }
  }
  sVar6 = *(short *)PTR_DAT_04bb6298;
  if (sVar6 == -1) {
    return;
  }
  puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8;
  if (0xff < (uint)(int)sVar6) {
    puVar1 = PTR_DAT_04bc39f8;
  }
  if ((*(uint *)(puVar1 + 4) & 1) == 0) {
    return;
  }
  if ((*(long *)PTR_DAT_04bb3728 != 0) && (*(int *)(*(long *)PTR_DAT_04bb3728 + 0xb0) == 1)) {
    return;
  }
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  local_200 = puVar11 + 0x10;
  local_1f8 = "TapCloudIslandFirstTalkDone";
  iVar9 = FUN_02753180(param_1 + 0x1ee8,&local_200);
  if (iVar9 != 0) {
    return;
  }
  FUN_0257a010(&local_200);
  FUN_023ea384(param_1,auStack_150);
  pcVar8 = local_1f8;
  if (local_1f8 != "Obj_Bed_Dream") {
    iVar9 = 0xd;
    if ((int)local_1f0 < 0xe) {
      iVar9 = (int)local_1f0 + -1;
    }
    memcpy(local_1f8,"Obj_Bed_Dream",(long)iVar9);
    pcVar8[iVar9] = '\0';
  }
  if (local_1a0 != "Bed_EntryCloudIsland_Visitor") {
    iVar9 = 0x1c;
    if (local_198 < 0x1d) {
      iVar9 = local_198 + -1;
    }
    memcpy(local_1a0,"Bed_EntryCloudIsland_Visitor",(long)iVar9);
    local_1a0[iVar9] = '\0';
  }
  local_cb = 1;
LAB_023ede10:
  local_d0 = 0x6f;
  local_d4 = 0;
  local_f8 = 0;
  FUN_024480f0(param_1,&local_200);
  return;
}


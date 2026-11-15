
void FUN_02492be0(long param_1)

{
  int iVar1;
  long *plVar2;
  void *__src;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  char *pcVar8;
  int iVar9;
  long lVar10;
  float *pfVar11;
  ulong uVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  char cVar16;
  void *pvVar17;
  uint *puVar18;
  int *piVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 local_1b0;
  char *local_1a8;
  undefined8 local_1a0;
  long *local_198;
  void *local_150;
  int local_148;
  void *local_f8;
  int local_f0;
  undefined1 local_a8;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_78;
  undefined4 local_74;
  undefined4 local_68;
  undefined *local_60;
  void *local_58;
  
  puVar20 = *(undefined8 **)(param_1 + 0x60);
  if (puVar20 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(&DAT_052461c0);
      puVar20 = &DAT_05240280;
      if (iVar9 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar20 = &DAT_05240280;
    }
  }
  iVar9 = *(int *)(param_1 + 0x178);
  if (iVar9 == 1) {
    local_1b0 = CONCAT44((float)(int)*(short *)(param_1 + 0x18e9) * 0.25,
                         (float)*(int *)(param_1 + 0x18e5) * 0.001);
    local_1a8 = (char *)CONCAT44(local_1a8._4_4_,(float)*(int *)(param_1 + 0x18eb) * 0.001);
    lVar10 = FUN_0251e98c(1);
    pfVar11 = (float *)(**(code **)(*(long *)(lVar10 + 0x2200) + 0xf0))(lVar10 + 0x2200);
    fVar25 = *pfVar11;
    lVar10 = FUN_0251e98c(1);
    pfVar11 = (float *)(**(code **)(*(long *)(lVar10 + 0x1380) + 0xf0))(lVar10 + 0x1380);
    puVar21 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar21 = *(undefined8 **)(param_1 + 0x4c8);
    }
    FUN_03eb4b60(fVar25 * *pfVar11,0x41200000,0x3e4ccccc,puVar21 + 0x4f,&local_1b0);
    iVar9 = *(int *)(param_1 + 0x178);
  }
  if (iVar9 != 0) {
    uVar4 = *(ushort *)(param_1 + 0x18ef);
    lVar10 = FUN_0251e98c(1);
    pfVar11 = (float *)(**(code **)(*(long *)(lVar10 + 0x13b0) + 0xf0))(lVar10 + 0x13b0);
    fVar25 = *pfVar11;
    if (*(int *)(param_1 + 0x178) == 0) {
      local_60 = (undefined *)CONCAT44(local_60._4_4_,10);
      local_1b0 = CONCAT44(local_1b0._4_4_,10);
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_02492e10;
    }
    iVar9 = (uint)uVar4 * 0x10000;
    plVar2 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x4c8);
    }
    lVar10 = (**(code **)(*plVar2 + 0x148))();
    iVar15 = iVar9 - *(int *)(lVar10 + 4);
    if (0xb60b5e < iVar15 + 0x5b05afU) {
      iVar5 = 0x15555560;
      iVar9 = -0x15555560;
      iVar15 = (int)(fVar25 * 0.6 * (float)iVar15);
      if (iVar15 < 1) {
        iVar5 = -0x5b05b0;
      }
      else {
        iVar9 = 0x5b05b0;
      }
      iVar1 = iVar15;
      if (iVar5 <= iVar15) {
        iVar1 = iVar5;
      }
      if (iVar9 <= iVar15) {
        iVar9 = iVar1;
      }
      iVar9 = iVar9 + *(int *)(lVar10 + 4);
    }
    *(int *)(lVar10 + 4) = iVar9;
    goto LAB_02492e10;
  }
  if ((*(char *)(param_1 + 0x760) == '\0') || (*(char *)(param_1 + 0x191b) != '\0'))
  goto LAB_02492e10;
  if (*(int *)(param_1 + 0x1c04) == 0) {
    puVar21 = *(undefined8 **)(param_1 + 0x60);
    local_1a0 = 0;
    local_198 = (long *)0x0;
    local_1b0 = 0;
    local_1a8 = (char *)0x0;
    if (puVar21 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(&DAT_052461c0);
        puVar21 = &DAT_05240280;
        if (iVar9 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar21 = &DAT_05240280;
      }
    }
    local_60 = (undefined *)CONCAT44(local_60._4_4_,0xe);
    if ((puVar21[0x227] == 0) ||
       (uVar12 = FUN_03850a90(puVar21[0x227],0xe,&local_1b0,0), (uVar12 & 1) == 0)) {
      puVar21 = *(undefined8 **)(param_1 + 0x60);
      if (puVar21 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar9 = __cxa_guard_acquire(&DAT_052461c0);
          puVar21 = &DAT_05240280;
          if (iVar9 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar21 = &DAT_05240280;
        }
      }
      local_60 = (undefined *)((ulong)local_60 & 0xffffffff00000000);
      if ((puVar21[0x227] != 0) &&
         (uVar12 = FUN_03850a90(puVar21[0x227],0,&local_1b0,0), (uVar12 & 1) != 0))
      goto LAB_02492ee0;
LAB_0249331c:
      uVar13 = 1;
    }
    else {
LAB_02492ee0:
      if ((local_198 == (long *)0x0) || (lVar10 = *local_198, lVar10 == 0)) goto LAB_0249331c;
      fVar25 = *(float *)(lVar10 + 0x18);
      if (fVar25 < 0.0) {
        fVar25 = *(float *)(local_198[1] + 0xc);
      }
      uVar13 = (uint)(fVar25 - *(float *)(lVar10 + 0x14));
      if (uVar13 < 2) {
        uVar13 = 1;
      }
    }
    puVar21 = *(undefined8 **)(param_1 + 0x60);
    if (puVar21 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(&DAT_052461c0);
        puVar21 = &DAT_05240280;
        if (iVar9 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar21 = &DAT_05240280;
      }
    }
    local_60 = (undefined *)CONCAT44(local_60._4_4_,0x34);
    if ((puVar21[0x227] != 0) &&
       (uVar12 = FUN_03850a90(puVar21[0x227],0x34,&local_1b0,0), (uVar12 & 1) != 0)) {
      if ((local_198 == (long *)0x0) || (lVar10 = *local_198, lVar10 == 0)) {
        uVar13 = 1;
      }
      else {
        fVar25 = *(float *)(lVar10 + 0x18);
        if (fVar25 < 0.0) {
          fVar25 = *(float *)(local_198[1] + 0xc);
        }
        uVar13 = (uint)(fVar25 - *(float *)(lVar10 + 0x14));
        if (uVar13 < 2) {
          uVar13 = 1;
        }
      }
    }
    lVar10 = *(long *)(param_1 + 0x1c68);
    if (lVar10 != 0) {
      uVar3 = uVar13;
      if ((int)uVar13 < 2) {
        uVar3 = 1;
      }
      *(undefined8 *)(param_1 + 0x1c10) = 0;
      *(undefined2 *)(param_1 + 0x1c1c) = 0x100;
      *(uint *)(param_1 + 0x1c18) = uVar3;
      *(undefined1 *)(param_1 + 0x1c34) = 1;
      fVar25 = (float)*(int *)(param_1 + 0x1910) * 0.001;
      fVar23 = (float)*(int *)(param_1 + 0x190a) * 0.001;
      *(float *)(param_1 + 0x1c2c) = (float)(int)*(short *)(param_1 + 0x190e) * 0.25;
      *(float *)(param_1 + 0x1c28) = fVar23;
      *(float *)(param_1 + 0x1c30) = fVar25;
      fVar22 = *(float *)(lVar10 + 0x278);
      fVar24 = *(float *)(lVar10 + 0x280);
      *(undefined1 *)(param_1 + 0x1c64) = 1;
      *(uint *)(param_1 + 0x1c50) = uVar3;
      *(undefined8 *)(param_1 + 0x1c48) = 0;
      *(undefined2 *)(param_1 + 0x1c54) = 0x100;
      fVar22 = fVar22 - fVar23;
      fVar24 = fVar24 - fVar25;
      *(uint *)(param_1 + 0x1c60) = (uint)*(ushort *)(param_1 + 0x1914) << 0x10;
      *(float *)(param_1 + 0x1c38) = SQRT(fVar24 * fVar24 + fVar22 * fVar22) / (float)uVar13;
    }
  }
  FUN_0257ffd4(param_1 + 0x1c08);
LAB_02492e10:
  puVar7 = PTR_DAT_04bbbe20;
  puVar6 = PTR_DAT_04bbbe18;
  if (*(int *)(param_1 + 0x178) == 0) {
    if (*(int *)(param_1 + 0x73c) == 1) {
      if (*(char *)(param_1 + 0x760) == '\0') {
        FUN_02473abc(param_1);
      }
      else {
        uVar12 = FUN_0170a6d0(puVar20,0);
        if ((uVar12 & 1) != 0) {
          *(undefined8 *)(param_1 + 0x199c) = 0;
          *(undefined8 *)(param_1 + 0x19a4) = 0;
          *(undefined8 *)(param_1 + 0x19cc) = 0;
          *(undefined8 *)(param_1 + 0x19d2) = 0;
          *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
          *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
          *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
          *(undefined8 *)(param_1 + 0x19ac) = 0;
          *(undefined8 *)(param_1 + 0x19b4) = 0;
          *(undefined8 *)(param_1 + 0x19bc) = 0;
          *(undefined8 *)(param_1 + 0x19c4) = 0;
          *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
          *(undefined4 *)(param_1 + 0x1998) = *(undefined4 *)(param_1 + 0x1918);
          *(undefined8 *)(param_1 + 0x1990) = *(undefined8 *)(param_1 + 0x1910);
          *(undefined8 *)(param_1 + 0x1988) = *(undefined8 *)(param_1 + 0x1908);
          *(undefined8 *)(param_1 + 0x1980) = *(undefined8 *)(param_1 + 0x1900);
          local_1b0 = CONCAT44(local_1b0._4_4_,0x1c);
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
          lVar10 = 0;
          if (*(long *)(param_1 + 0x70) != 0) {
            lVar10 = *(long *)(param_1 + 0x70) + 0x278;
          }
          FUN_03ebb160(lVar10,0x1c);
        }
      }
    }
    else {
      lVar10 = *(long *)PTR_DAT_04bb27a8;
      uVar13 = *(uint *)(param_1 + 0x73c);
      if ((int)*(uint *)(lVar10 + 0x980) < 1) {
        if (*(long *)(lVar10 + 0x870) == 0) {
          return;
        }
        puVar14 = *(uint **)(*(long *)(lVar10 + 0x870) + 8);
        if (puVar14 == (uint *)0x0) {
          return;
        }
        if ((uVar13 < *(uint *)(lVar10 + 0x888)) &&
           (*(char *)(*(long *)(lVar10 + 0x890) + (long)(int)uVar13) == '\0')) {
          return;
        }
        if (*puVar14 <= uVar13) {
          return;
        }
        if (puVar14[1] == 0) {
          return;
        }
        if ((ushort)puVar14[2] == 0) {
          return;
        }
        iVar9 = 0xc;
        if (*(char *)((long)puVar14 + 10) != '\0') {
          iVar9 = 0x1c;
        }
        puVar14 = (uint *)((ulong)(puVar14[1] * uVar13 + (uint)(ushort)puVar14[2] * 8 + iVar9) +
                          (long)puVar14);
      }
      else {
        if (*(uint *)(lVar10 + 0x980) <= uVar13) {
          return;
        }
        if (*(uint *)(lVar10 + 0x970) <= uVar13) {
          uVar13 = 0;
        }
        puVar14 = *(uint **)(*(long *)(lVar10 + 0x978) + (ulong)uVar13 * 8);
      }
      if (puVar14 != (uint *)0x0) {
        if (*puVar14 != 0) {
          cVar16 = *PTR_DAT_04bbbe18;
          do {
            if (cVar16 == '\0') {
              cVar16 = '\x01';
              *(undefined8 *)puVar7 = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
              *puVar6 = 1;
              *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
              *(undefined4 *)(puVar7 + 0x18) = 0xffffffff;
            }
            else {
              uVar13 = *(uint *)(puVar7 + 4);
              if (-1 < (int)uVar13) {
                pvVar17 = (void *)((ulong)uVar13 + (long)puVar14);
                goto LAB_0249314c;
              }
              if (uVar13 != 0xffffffff) break;
            }
            puVar18 = (uint *)(ulong)*puVar14;
            pvVar17 = (void *)0x0;
            if ((*puVar14 == 0) || (puVar14 == puVar18)) goto LAB_0249314c;
            lVar10 = 0xc;
            if (*(char *)((long)puVar14 + (10 - (long)puVar18)) != '\0') {
              lVar10 = 0x1c;
            }
            lVar10 = (long)puVar14 + (lVar10 - (long)puVar18);
            if (lVar10 == 0) break;
            uVar12 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar18));
            *(undefined4 *)(puVar7 + 4) = 0xfffffffe;
            pvVar17 = (void *)0x0;
            if (uVar12 == 0) goto LAB_0249314c;
            piVar19 = (int *)(lVar10 + 4);
            while (piVar19[-1] != 0x7703d2dd) {
              piVar19 = piVar19 + 2;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) {
                pvVar17 = (void *)0x0;
                goto LAB_0249314c;
              }
            }
            iVar9 = 0;
            if (*piVar19 != -1) {
              iVar9 = *piVar19;
            }
            *(int *)(puVar7 + 4) = iVar9;
          } while (*puVar14 != 0);
        }
        pvVar17 = (void *)0x0;
LAB_0249314c:
        __src = *(void **)PTR_PTR_04bc3130;
        if (pvVar17 != (void *)0x0) {
          __src = pvVar17;
        }
        if (*puVar14 != 0) {
          cVar16 = *puVar6;
          do {
            if (cVar16 == '\0') {
              cVar16 = '\x01';
              *(undefined8 *)puVar7 = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
              *puVar6 = 1;
              *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
              *(undefined4 *)(puVar7 + 0x18) = 0xffffffff;
            }
            else {
              uVar13 = *(uint *)(puVar7 + 0x10);
              if (-1 < (int)uVar13) {
                pvVar17 = (void *)((ulong)uVar13 + (long)puVar14);
                goto LAB_02493228;
              }
              if (uVar13 != 0xffffffff) break;
            }
            puVar18 = (uint *)(ulong)*puVar14;
            pvVar17 = (void *)0x0;
            if ((*puVar14 == 0) || (puVar14 == puVar18)) goto LAB_02493228;
            lVar10 = 0xc;
            if (*(char *)((long)puVar14 + (10 - (long)puVar18)) != '\0') {
              lVar10 = 0x1c;
            }
            lVar10 = (long)puVar14 + (lVar10 - (long)puVar18);
            if (lVar10 == 0) break;
            uVar12 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar18));
            *(undefined4 *)(puVar7 + 0x10) = 0xfffffffe;
            pvVar17 = (void *)0x0;
            if (uVar12 == 0) goto LAB_02493228;
            piVar19 = (int *)(lVar10 + 4);
            while (piVar19[-1] != -0x46d3ce7d) {
              piVar19 = piVar19 + 2;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) {
                pvVar17 = (void *)0x0;
                goto LAB_02493228;
              }
            }
            iVar9 = 0;
            if (*piVar19 != -1) {
              iVar9 = *piVar19;
            }
            *(int *)(puVar7 + 0x10) = iVar9;
          } while (*puVar14 != 0);
        }
        pvVar17 = (void *)0x0;
LAB_02493228:
        local_58 = *(void **)PTR_PTR_04bc3138;
        if (pvVar17 != (void *)0x0) {
          local_58 = pvVar17;
        }
        local_60 = PTR_DAT_04bb2020 + 0x10;
        FUN_0257a010(&local_1b0);
        if (local_f8 != __src) {
          lVar10 = 0;
          do {
            if (*(char *)((long)__src + lVar10) == '\0') goto LAB_02493478;
            if (*(char *)((long)__src + lVar10 + 1) == '\0') {
              lVar10 = lVar10 + 1;
              goto LAB_02493478;
            }
            if (*(char *)((long)__src + lVar10 + 2) == '\0') {
              lVar10 = lVar10 + 2;
              goto LAB_02493478;
            }
            lVar10 = lVar10 + 3;
          } while (lVar10 != 0x80001);
          lVar10 = 0;
LAB_02493478:
          iVar9 = (int)lVar10;
          if (local_f0 <= (int)lVar10) {
            iVar9 = local_f0 + -1;
          }
          memcpy(local_f8,__src,(long)iVar9);
          *(undefined1 *)((long)local_f8 + (long)iVar9) = 0;
        }
        pcVar8 = local_1a8;
        if (local_1a8 != "Player_FieldMakeError") {
          iVar9 = 0x15;
          if ((int)local_1a0 < 0x16) {
            iVar9 = (int)local_1a0 + -1;
          }
          memcpy(local_1a8,"Player_FieldMakeError",(long)iVar9);
          pcVar8[iVar9] = '\0';
        }
        (**(code **)(local_60 + 0x18))(&local_60);
        pvVar17 = local_58;
        if (local_150 != local_58) {
          (**(code **)(local_60 + 0x18))(&local_60);
          lVar10 = 0;
          do {
            if (*(char *)((long)local_58 + lVar10) == '\0') goto LAB_0249355c;
            if (*(char *)((long)local_58 + lVar10 + 1) == '\0') {
              lVar10 = lVar10 + 1;
              goto LAB_0249355c;
            }
            if (*(char *)((long)local_58 + lVar10 + 2) == '\0') {
              lVar10 = lVar10 + 2;
              goto LAB_0249355c;
            }
            lVar10 = lVar10 + 3;
          } while (lVar10 != 0x80001);
          lVar10 = 0;
LAB_0249355c:
          iVar9 = (int)lVar10;
          if (local_148 <= (int)lVar10) {
            iVar9 = local_148 + -1;
          }
          memcpy(local_150,pvVar17,(long)iVar9);
          *(undefined1 *)((long)local_150 + (long)iVar9) = 0;
        }
        local_90 = *(undefined4 *)(param_1 + 0x748);
        local_98 = *(undefined8 *)(param_1 + 0x740);
        local_78 = 1;
        local_74 = 1;
        local_a8 = 0;
        local_68 = 0x3c;
        FUN_024480f0(param_1,&local_1b0);
      }
    }
  }
  return;
}


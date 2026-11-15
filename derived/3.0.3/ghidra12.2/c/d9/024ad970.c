
/* WARNING: Removing unreachable block (ram,0x024adc08) */

void FUN_024ad970(long param_1)

{
  int iVar1;
  long *plVar2;
  void *__src;
  byte bVar3;
  char cVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  uint3 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  char *pcVar11;
  int iVar12;
  long lVar13;
  float *pfVar14;
  ulong uVar15;
  uint uVar16;
  uint *puVar17;
  int iVar18;
  int iVar19;
  char cVar20;
  void *pvVar21;
  uint *puVar22;
  int *piVar23;
  undefined8 *puVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 local_1f0;
  undefined8 local_1e8;
  int local_1e0;
  void *local_190;
  int local_188;
  void *local_138;
  int local_130;
  undefined1 local_e8;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_b8;
  undefined4 local_b4;
  undefined4 local_a8;
  undefined *local_a0;
  void *local_98;
  
  bVar3 = *(byte *)(param_1 + 0x1917);
  if (4 < bVar3) {
    bVar3 = 0;
  }
  cVar20 = *(char *)(param_1 + 0x1919);
  cVar4 = *(char *)(param_1 + 0x191b);
  lVar13 = FUN_0251e98c(1);
  pfVar14 = (float *)(**(code **)(*(long *)(lVar13 + 0x1380) + 0xf0))(lVar13 + 0x1380);
  local_1f0._4_4_ = (float)(int)*(short *)(param_1 + 0x190e) * 0.25;
  puVar24 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar24 = *(undefined8 **)(param_1 + 0x4c8);
  }
  local_1f0._0_4_ = (float)*(int *)(param_1 + 0x190a) * 0.001;
  local_1e8 = (char *)CONCAT44(local_1e8._4_4_,(float)*(int *)(param_1 + 0x1910) * 0.001);
  FUN_03eb4b60(*pfVar14 * 0.6,0x41200000,0x3e4ccccc,puVar24 + 0x4f,&local_1f0);
  sVar5 = *(short *)(param_1 + 0x1904);
  fVar26 = (float)*(int *)(param_1 + 0x1900) * 0.001;
  fVar25 = (float)*(int *)(param_1 + 0x1906) * 0.001;
  iVar12 = FUN_006f0400(fVar26 - *(float *)(*(long *)(param_1 + 0x68) + 0x278),
                        fVar25 - *(float *)(*(long *)(param_1 + 0x68) + 0x280));
  uVar7 = (uint)iVar12 >> 0x10;
  lVar13 = FUN_0251e98c(1);
  pfVar14 = (float *)(**(code **)(*(long *)(lVar13 + 0x13b0) + 0xf0))(lVar13 + 0x13b0);
  fVar27 = *pfVar14;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,10);
    local_1f0._0_4_ = 1.4013e-44;
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_024adb24;
  }
  else {
LAB_024adb24:
    plVar2 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x4c8);
    }
    lVar13 = (**(code **)(*plVar2 + 0x148))();
    iVar18 = iVar12 - *(int *)(lVar13 + 4);
    if (0xb60b5e < iVar18 + 0x5b05afU) {
      iVar19 = 0x15555560;
      iVar12 = -0x15555560;
      iVar18 = (int)(fVar27 * 0.6 * (float)iVar18);
      if (iVar18 < 1) {
        iVar19 = -0x5b05b0;
      }
      else {
        iVar12 = 0x5b05b0;
      }
      iVar1 = iVar18;
      if (iVar19 <= iVar18) {
        iVar1 = iVar19;
      }
      if (iVar12 <= iVar18) {
        iVar12 = iVar1;
      }
      iVar12 = iVar12 + *(int *)(lVar13 + 4);
    }
    *(int *)(lVar13 + 4) = iVar12;
  }
  iVar18 = *(int *)(param_1 + 0x190a);
  iVar12 = *(int *)(param_1 + 0x1910);
  sVar6 = *(short *)(param_1 + 0x190e);
  puVar24 = *(undefined8 **)(param_1 + 0x60);
  if (puVar24 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar19 = __cxa_guard_acquire(&DAT_052461c0);
      puVar24 = &DAT_05240280;
      if (iVar19 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar24 = &DAT_05240280;
    }
  }
  uVar16 = 0;
  if (puVar24[0x227] != 0) {
    local_1f0._0_4_ = 1.4013e-45;
    uVar16 = *(uint *)(puVar24 + 0x2d3) >> 1 & 1;
  }
  uVar15 = FUN_0170a6d0(puVar24,uVar16);
  puVar10 = PTR_DAT_04bbbe20;
  puVar9 = PTR_DAT_04bbbe18;
  if ((uVar15 & 1) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x178) != 0) {
    cVar20 = *(char *)(param_1 + 0x1917);
    puVar24 = *(undefined8 **)(param_1 + 0x60);
    if (puVar24 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar12 = __cxa_guard_acquire(&DAT_052461c0);
        puVar24 = &DAT_05240280;
        if (iVar12 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar24 = &DAT_05240280;
      }
    }
    if (cVar20 == '\x01') {
      local_1e8 = "PlayerRiverMakerDigReadyWait";
    }
    else {
      local_1e8 = "PlayerRiverMakerBuryReadyWait";
    }
    local_1f0 = PTR_DAT_04bb2020 + 0x10;
    FUN_017081d0(puVar24,&local_1f0,6,0,0);
    return;
  }
  if (*(int *)(param_1 + 0x7a4) != 1) {
    lVar13 = *(long *)PTR_DAT_04bb27a8;
    uVar7 = *(uint *)(param_1 + 0x7a4);
    if ((int)*(uint *)(lVar13 + 0x980) < 1) {
      if (*(long *)(lVar13 + 0x870) == 0) {
        return;
      }
      puVar17 = *(uint **)(*(long *)(lVar13 + 0x870) + 8);
      if (puVar17 == (uint *)0x0) {
        return;
      }
      if ((uVar7 < *(uint *)(lVar13 + 0x888)) &&
         (*(char *)(*(long *)(lVar13 + 0x890) + (long)(int)uVar7) == '\0')) {
        return;
      }
      if (*puVar17 <= uVar7) {
        return;
      }
      if (puVar17[1] == 0) {
        return;
      }
      if ((ushort)puVar17[2] == 0) {
        return;
      }
      iVar12 = 0xc;
      if (*(char *)((long)puVar17 + 10) != '\0') {
        iVar12 = 0x1c;
      }
      puVar17 = (uint *)((ulong)(puVar17[1] * uVar7 + (uint)(ushort)puVar17[2] * 8 + iVar12) +
                        (long)puVar17);
    }
    else {
      if (*(uint *)(lVar13 + 0x980) <= uVar7) {
        return;
      }
      if (*(uint *)(lVar13 + 0x970) <= uVar7) {
        uVar7 = 0;
      }
      puVar17 = *(uint **)(*(long *)(lVar13 + 0x978) + (ulong)uVar7 * 8);
    }
    if (puVar17 == (uint *)0x0) {
      return;
    }
    if (*puVar17 != 0) {
      cVar20 = *PTR_DAT_04bbbe18;
      do {
        if (cVar20 == '\0') {
          cVar20 = '\x01';
          *(undefined8 *)puVar10 = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
          *puVar9 = 1;
          *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
          *(undefined4 *)(puVar10 + 0x18) = 0xffffffff;
        }
        else {
          uVar7 = *(uint *)(puVar10 + 4);
          if (-1 < (int)uVar7) {
            pvVar21 = (void *)((ulong)uVar7 + (long)puVar17);
            goto LAB_024adf78;
          }
          if (uVar7 != 0xffffffff) break;
        }
        puVar22 = (uint *)(ulong)*puVar17;
        pvVar21 = (void *)0x0;
        if ((*puVar17 == 0) || (puVar17 == puVar22)) goto LAB_024adf78;
        lVar13 = 0xc;
        if (*(char *)((long)puVar17 + (10 - (long)puVar22)) != '\0') {
          lVar13 = 0x1c;
        }
        lVar13 = (long)puVar17 + (lVar13 - (long)puVar22);
        if (lVar13 == 0) break;
        uVar15 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar22));
        *(undefined4 *)(puVar10 + 4) = 0xfffffffe;
        pvVar21 = (void *)0x0;
        if (uVar15 == 0) goto LAB_024adf78;
        piVar23 = (int *)(lVar13 + 4);
        while (piVar23[-1] != 0x7703d2dd) {
          piVar23 = piVar23 + 2;
          uVar15 = uVar15 - 1;
          if (uVar15 == 0) {
            pvVar21 = (void *)0x0;
            goto LAB_024adf78;
          }
        }
        iVar12 = 0;
        if (*piVar23 != -1) {
          iVar12 = *piVar23;
        }
        *(int *)(puVar10 + 4) = iVar12;
      } while (*puVar17 != 0);
    }
    pvVar21 = (void *)0x0;
LAB_024adf78:
    __src = *(void **)PTR_PTR_04bc3130;
    if (pvVar21 != (void *)0x0) {
      __src = pvVar21;
    }
    if (*puVar17 != 0) {
      cVar20 = *puVar9;
      do {
        if (cVar20 == '\0') {
          cVar20 = '\x01';
          *(undefined8 *)puVar10 = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
          *puVar9 = 1;
          *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
          *(undefined4 *)(puVar10 + 0x18) = 0xffffffff;
        }
        else {
          uVar7 = *(uint *)(puVar10 + 0x10);
          if (-1 < (int)uVar7) {
            pvVar21 = (void *)((ulong)uVar7 + (long)puVar17);
            goto LAB_024ae04c;
          }
          if (uVar7 != 0xffffffff) break;
        }
        puVar22 = (uint *)(ulong)*puVar17;
        pvVar21 = (void *)0x0;
        if ((*puVar17 == 0) || (puVar17 == puVar22)) goto LAB_024ae04c;
        lVar13 = 0xc;
        if (*(char *)((long)puVar17 + (10 - (long)puVar22)) != '\0') {
          lVar13 = 0x1c;
        }
        lVar13 = (long)puVar17 + (lVar13 - (long)puVar22);
        if (lVar13 == 0) break;
        uVar15 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar22));
        *(undefined4 *)(puVar10 + 0x10) = 0xfffffffe;
        pvVar21 = (void *)0x0;
        if (uVar15 == 0) goto LAB_024ae04c;
        piVar23 = (int *)(lVar13 + 4);
        while (piVar23[-1] != -0x46d3ce7d) {
          piVar23 = piVar23 + 2;
          uVar15 = uVar15 - 1;
          if (uVar15 == 0) {
            pvVar21 = (void *)0x0;
            goto LAB_024ae04c;
          }
        }
        iVar12 = 0;
        if (*piVar23 != -1) {
          iVar12 = *piVar23;
        }
        *(int *)(puVar10 + 0x10) = iVar12;
      } while (*puVar17 != 0);
    }
    pvVar21 = (void *)0x0;
LAB_024ae04c:
    local_98 = *(void **)PTR_PTR_04bc3138;
    if (pvVar21 != (void *)0x0) {
      local_98 = pvVar21;
    }
    local_a0 = PTR_DAT_04bb2020 + 0x10;
    FUN_0257a010(&local_1f0);
    if (local_138 != __src) {
      lVar13 = 0;
      do {
        if (*(char *)((long)__src + lVar13) == '\0') goto LAB_024ae1e8;
        if (*(char *)((long)__src + lVar13 + 1) == '\0') {
          lVar13 = lVar13 + 1;
          goto LAB_024ae1e8;
        }
        if (*(char *)((long)__src + lVar13 + 2) == '\0') {
          lVar13 = lVar13 + 2;
          goto LAB_024ae1e8;
        }
        lVar13 = lVar13 + 3;
      } while (lVar13 != 0x80001);
      lVar13 = 0;
LAB_024ae1e8:
      iVar12 = (int)lVar13;
      if (local_130 <= (int)lVar13) {
        iVar12 = local_130 + -1;
      }
      memcpy(local_138,__src,(long)iVar12);
      *(undefined1 *)((long)local_138 + (long)iVar12) = 0;
    }
    pcVar11 = local_1e8;
    if (local_1e8 != "Player_FieldMakeError") {
      iVar12 = 0x15;
      if (local_1e0 < 0x16) {
        iVar12 = local_1e0 + -1;
      }
      memcpy(local_1e8,"Player_FieldMakeError",(long)iVar12);
      pcVar11[iVar12] = '\0';
    }
    (**(code **)(local_a0 + 0x18))(&local_a0);
    pvVar21 = local_98;
    if (local_190 != local_98) {
      (**(code **)(local_a0 + 0x18))(&local_a0);
      lVar13 = 0;
      do {
        if (*(char *)((long)local_98 + lVar13) == '\0') goto LAB_024ae2c8;
        if (*(char *)((long)local_98 + lVar13 + 1) == '\0') {
          lVar13 = lVar13 + 1;
          goto LAB_024ae2c8;
        }
        if (*(char *)((long)local_98 + lVar13 + 2) == '\0') {
          lVar13 = lVar13 + 2;
          goto LAB_024ae2c8;
        }
        lVar13 = lVar13 + 3;
      } while (lVar13 != 0x80001);
      lVar13 = 0;
LAB_024ae2c8:
      iVar12 = (int)lVar13;
      if (local_188 <= (int)lVar13) {
        iVar12 = local_188 + -1;
      }
      memcpy(local_190,pvVar21,(long)iVar12);
      *(undefined1 *)((long)local_190 + (long)iVar12) = 0;
    }
    local_d0 = *(undefined4 *)(param_1 + 0x7b0);
    local_b8 = 1;
    local_d8 = *(undefined8 *)(param_1 + 0x7a8);
    local_e8 = 0;
    local_b4 = 5;
    local_a8 = 0x3c;
    FUN_024480f0(param_1,&local_1f0);
    return;
  }
  if (*(short *)(param_1 + 0x79c) == 0x37) {
    *(undefined8 *)(param_1 + 0x1998) = 0;
    *(undefined8 *)(param_1 + 0x19a0) = 0;
    *(undefined8 *)(param_1 + 0x19a8) = 0;
    *(undefined8 *)(param_1 + 0x19b0) = 0;
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *(undefined8 *)(param_1 + 0x19c0) = 0;
    *(undefined8 *)(param_1 + 0x19c8) = 0;
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x19d0) = 0;
    *(undefined2 *)(param_1 + 0x19d8) = 0;
    iVar19 = (int)((float)(int)sVar5 * 0.25 * 4.0);
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    *(int *)(param_1 + 0x1980) = (int)(fVar26 * 999.99994);
    if (0x7ffe < iVar19) {
      iVar19 = 0x7fff;
    }
    if (iVar19 < -0x7fff) {
      iVar19 = -0x8000;
    }
    *(short *)(param_1 + 0x1984) = (short)iVar19;
    *(int *)(param_1 + 0x1986) = (int)(fVar25 * 999.99994);
    *(int *)(param_1 + 0x198a) = (int)((float)iVar18 * 0.001 * 999.99994);
    iVar18 = (int)((float)(int)sVar6 * 0.25 * 4.0);
    if (0x7ffe < iVar18) {
      iVar18 = 0x7fff;
    }
    if (iVar18 < -0x7fff) {
      iVar18 = -0x8000;
    }
    *(short *)(param_1 + 0x198e) = (short)iVar18;
    *(int *)(param_1 + 0x1990) = (int)((float)iVar12 * 0.001 * 999.99994);
    *(short *)(param_1 + 0x1994) = (short)uVar7;
    *(bool *)(param_1 + 0x1997) = cVar20 != '\0';
    *(bool *)(param_1 + 0x1998) = cVar4 != '\0';
    *(byte *)(param_1 + 0x1996) = bVar3;
    local_1f0 = (undefined *)CONCAT44(local_1f0._4_4_,0x37);
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
    lVar13 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar13 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar13,0x37);
    return;
  }
  uVar8 = (uint3)((ulong)local_1e8 >> 0x28);
  local_1f0 = (undefined *)0x0;
  local_1e8 = (char *)CONCAT35(uVar8,0x100000000);
  local_1e0 = 0;
  switch(*(undefined4 *)(param_1 + 0x7a0)) {
  case 0:
    local_1e8 = (char *)((ulong)uVar8 << 0x28);
    local_1e8 = (char *)CONCAT44(local_1e8._4_4_,*(undefined4 *)(param_1 + 0x798));
    local_1f0 = *(undefined **)(param_1 + 0x790);
    goto LAB_024ae1a4;
  case 1:
    local_1f0 = *(undefined **)(param_1 + 0x790);
    local_1e8._0_5_ = CONCAT14(1,*(undefined4 *)(param_1 + 0x798));
    local_1e8 = (char *)CONCAT35(uVar8,(undefined5)local_1e8);
LAB_024ae1a4:
    FUN_02473fc8(param_1,&local_1f0);
    break;
  case 2:
  case 5:
    FUN_024735ac(param_1);
    break;
  case 3:
    FUN_0247430c(param_1,param_1 + 0x21a8);
    break;
  default:
    FUN_02373e70(param_1,6,1);
  }
  return;
}


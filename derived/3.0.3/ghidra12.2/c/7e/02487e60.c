
/* WARNING: Removing unreachable block (ram,0x024880e0) */

void FUN_02487e60(long param_1)

{
  int iVar1;
  long *plVar2;
  void *__src;
  long lVar3;
  byte bVar4;
  short sVar5;
  short sVar6;
  uint3 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  char *pcVar10;
  int iVar11;
  long lVar12;
  float *pfVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  char cVar19;
  void *pvVar20;
  uint *puVar21;
  int *piVar22;
  undefined8 *puVar23;
  uint *puVar24;
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
  
  bVar4 = *(byte *)(param_1 + 0x1917);
  if (4 < bVar4) {
    bVar4 = 0;
  }
  lVar12 = FUN_0251e98c(1);
  pfVar13 = (float *)(**(code **)(*(long *)(lVar12 + 0x1380) + 0xf0))(lVar12 + 0x1380);
  local_1f0._4_4_ = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
  puVar23 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar23 = *(undefined8 **)(param_1 + 0x4c8);
  }
  local_1f0._0_4_ = (float)*(int *)(param_1 + 0x18e5) * 0.001;
  local_1e8 = (char *)CONCAT44(local_1e8._4_4_,(float)*(int *)(param_1 + 0x18eb) * 0.001);
  FUN_03eb4b60(*pfVar13 * 0.6,0x41200000,0x3e4ccccc,puVar23 + 0x4f,&local_1f0);
  sVar5 = *(short *)(param_1 + 0x1904);
  fVar26 = (float)*(int *)(param_1 + 0x1900) * 0.001;
  fVar25 = (float)*(int *)(param_1 + 0x1906) * 0.001;
  iVar11 = FUN_006f0400(fVar26 - *(float *)(*(long *)(param_1 + 0x68) + 0x278),
                        fVar25 - *(float *)(*(long *)(param_1 + 0x68) + 0x280));
  uVar16 = (uint)iVar11 >> 0x10;
  lVar12 = FUN_0251e98c(1);
  pfVar13 = (float *)(**(code **)(*(long *)(lVar12 + 0x13b0) + 0xf0))(lVar12 + 0x13b0);
  fVar27 = *pfVar13;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,10);
    local_1f0._0_4_ = 1.4013e-44;
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_02487ffc;
  }
  else {
LAB_02487ffc:
    plVar2 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x4c8);
    }
    lVar12 = (**(code **)(*plVar2 + 0x148))();
    iVar17 = iVar11 - *(int *)(lVar12 + 4);
    if (0xb60b5e < iVar17 + 0x5b05afU) {
      iVar18 = 0x15555560;
      iVar11 = -0x15555560;
      iVar17 = (int)(fVar27 * 0.6 * (float)iVar17);
      if (iVar17 < 1) {
        iVar18 = -0x5b05b0;
      }
      else {
        iVar11 = 0x5b05b0;
      }
      iVar1 = iVar17;
      if (iVar18 <= iVar17) {
        iVar1 = iVar18;
      }
      if (iVar11 <= iVar17) {
        iVar11 = iVar1;
      }
      iVar11 = iVar11 + *(int *)(lVar12 + 4);
    }
    *(int *)(lVar12 + 4) = iVar11;
  }
  iVar17 = *(int *)(param_1 + 0x190a);
  iVar11 = *(int *)(param_1 + 0x1910);
  sVar6 = *(short *)(param_1 + 0x190e);
  puVar23 = *(undefined8 **)(param_1 + 0x60);
  if (puVar23 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar18 = __cxa_guard_acquire(&DAT_052461c0);
      puVar23 = &DAT_05240280;
      if (iVar18 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar23 = &DAT_05240280;
    }
  }
  uVar15 = 0;
  if (puVar23[0x227] != 0) {
    local_1f0._0_4_ = 1.4013e-45;
    uVar15 = *(uint *)(puVar23 + 0x2d3) >> 1 & 1;
  }
  uVar14 = FUN_0170a6d0(puVar23,uVar15);
  puVar9 = PTR_DAT_04bbbe20;
  puVar8 = PTR_DAT_04bbbe18;
  if ((uVar14 & 1) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x178) != 0) {
    uVar16 = (uint)*(byte *)(param_1 + 0x1917);
    if (4 < uVar16) {
      uVar16 = 0;
    }
    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar16);
    puVar23 = *(undefined8 **)(param_1 + 0x60);
    if (puVar23 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(&DAT_052461c0);
        puVar23 = &DAT_05240280;
        if (iVar11 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar23 = &DAT_05240280;
      }
    }
    if (uVar16 == 2) {
      local_1e8 = "PlayerCliffMakerDeleteReadyWait";
    }
    else {
      local_1e8 = "PlayerCliffMakerCreateReadyWait";
    }
    local_1f0 = PTR_DAT_04bb2020 + 0x10;
    FUN_017081d0(puVar23,&local_1f0,6,0,0);
    return;
  }
  if (*(int *)(param_1 + 0x778) != 1) {
    lVar12 = *(long *)PTR_DAT_04bb27a8;
    uVar16 = *(uint *)(param_1 + 0x778);
    if ((int)*(uint *)(lVar12 + 0x980) < 1) {
      if (*(long *)(lVar12 + 0x870) == 0) {
        return;
      }
      puVar24 = *(uint **)(*(long *)(lVar12 + 0x870) + 8);
      if (puVar24 == (uint *)0x0) {
        return;
      }
      if ((uVar16 < *(uint *)(lVar12 + 0x888)) &&
         (*(char *)(*(long *)(lVar12 + 0x890) + (long)(int)uVar16) == '\0')) {
        return;
      }
      if (*puVar24 <= uVar16) {
        return;
      }
      if (puVar24[1] == 0) {
        return;
      }
      if ((ushort)puVar24[2] == 0) {
        return;
      }
      iVar11 = 0xc;
      if (*(char *)((long)puVar24 + 10) != '\0') {
        iVar11 = 0x1c;
      }
      puVar24 = (uint *)((ulong)(puVar24[1] * uVar16 + (uint)(ushort)puVar24[2] * 8 + iVar11) +
                        (long)puVar24);
    }
    else {
      if (*(uint *)(lVar12 + 0x980) <= uVar16) {
        return;
      }
      if (*(uint *)(lVar12 + 0x970) <= uVar16) {
        uVar16 = 0;
      }
      puVar24 = *(uint **)(*(long *)(lVar12 + 0x978) + (ulong)uVar16 * 8);
    }
    if (puVar24 == (uint *)0x0) {
      return;
    }
    if (*puVar24 != 0) {
      cVar19 = *PTR_DAT_04bbbe18;
      do {
        if (cVar19 == '\0') {
          cVar19 = '\x01';
          *(undefined8 *)puVar9 = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
          *puVar8 = 1;
          *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
          *(undefined4 *)(puVar9 + 0x18) = 0xffffffff;
        }
        else {
          uVar16 = *(uint *)(puVar9 + 4);
          if (-1 < (int)uVar16) {
            pvVar20 = (void *)((ulong)uVar16 + (long)puVar24);
            goto LAB_0248845c;
          }
          if (uVar16 != 0xffffffff) break;
        }
        puVar21 = (uint *)(ulong)*puVar24;
        pvVar20 = (void *)0x0;
        if ((*puVar24 == 0) || (puVar24 == puVar21)) goto LAB_0248845c;
        lVar12 = 0xc;
        if (*(char *)((long)puVar24 + (10 - (long)puVar21)) != '\0') {
          lVar12 = 0x1c;
        }
        lVar12 = (long)puVar24 + (lVar12 - (long)puVar21);
        if (lVar12 == 0) break;
        uVar14 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar21));
        *(undefined4 *)(puVar9 + 4) = 0xfffffffe;
        pvVar20 = (void *)0x0;
        if (uVar14 == 0) goto LAB_0248845c;
        piVar22 = (int *)(lVar12 + 4);
        while (piVar22[-1] != 0x7703d2dd) {
          piVar22 = piVar22 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) {
            pvVar20 = (void *)0x0;
            goto LAB_0248845c;
          }
        }
        iVar11 = 0;
        if (*piVar22 != -1) {
          iVar11 = *piVar22;
        }
        *(int *)(puVar9 + 4) = iVar11;
      } while (*puVar24 != 0);
    }
    pvVar20 = (void *)0x0;
LAB_0248845c:
    __src = *(void **)PTR_PTR_04bc3130;
    if (pvVar20 != (void *)0x0) {
      __src = pvVar20;
    }
    if (*puVar24 != 0) {
      cVar19 = *puVar8;
      do {
        if (cVar19 == '\0') {
          cVar19 = '\x01';
          *(undefined8 *)puVar9 = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
          *puVar8 = 1;
          *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
          *(undefined4 *)(puVar9 + 0x18) = 0xffffffff;
        }
        else {
          uVar16 = *(uint *)(puVar9 + 0x10);
          if (-1 < (int)uVar16) {
            pvVar20 = (void *)((ulong)uVar16 + (long)puVar24);
            goto LAB_02488538;
          }
          if (uVar16 != 0xffffffff) break;
        }
        puVar21 = (uint *)(ulong)*puVar24;
        pvVar20 = (void *)0x0;
        if ((*puVar24 == 0) || (puVar24 == puVar21)) goto LAB_02488538;
        lVar12 = 0xc;
        if (*(char *)((long)puVar24 + (10 - (long)puVar21)) != '\0') {
          lVar12 = 0x1c;
        }
        lVar12 = (long)puVar24 + (lVar12 - (long)puVar21);
        if (lVar12 == 0) break;
        uVar14 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar21));
        *(undefined4 *)(puVar9 + 0x10) = 0xfffffffe;
        pvVar20 = (void *)0x0;
        if (uVar14 == 0) goto LAB_02488538;
        piVar22 = (int *)(lVar12 + 4);
        while (piVar22[-1] != -0x46d3ce7d) {
          piVar22 = piVar22 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) {
            pvVar20 = (void *)0x0;
            goto LAB_02488538;
          }
        }
        iVar11 = 0;
        if (*piVar22 != -1) {
          iVar11 = *piVar22;
        }
        *(int *)(puVar9 + 0x10) = iVar11;
      } while (*puVar24 != 0);
    }
    pvVar20 = (void *)0x0;
LAB_02488538:
    local_98 = *(void **)PTR_PTR_04bc3138;
    if (pvVar20 != (void *)0x0) {
      local_98 = pvVar20;
    }
    local_a0 = PTR_DAT_04bb2020 + 0x10;
    FUN_0257a010(&local_1f0);
    if (local_138 != __src) {
      lVar12 = 0;
      do {
        if (*(char *)((long)__src + lVar12) == '\0') goto LAB_024886dc;
        if (*(char *)((long)__src + lVar12 + 1) == '\0') {
          lVar12 = lVar12 + 1;
          goto LAB_024886dc;
        }
        if (*(char *)((long)__src + lVar12 + 2) == '\0') {
          lVar12 = lVar12 + 2;
          goto LAB_024886dc;
        }
        lVar12 = lVar12 + 3;
      } while (lVar12 != 0x80001);
      lVar12 = 0;
LAB_024886dc:
      iVar11 = (int)lVar12;
      if (local_130 <= (int)lVar12) {
        iVar11 = local_130 + -1;
      }
      memcpy(local_138,__src,(long)iVar11);
      *(undefined1 *)((long)local_138 + (long)iVar11) = 0;
    }
    pcVar10 = local_1e8;
    if (local_1e8 != "Player_FieldMakeError") {
      iVar11 = 0x15;
      if (local_1e0 < 0x16) {
        iVar11 = local_1e0 + -1;
      }
      memcpy(local_1e8,"Player_FieldMakeError",(long)iVar11);
      pcVar10[iVar11] = '\0';
    }
    (**(code **)(local_a0 + 0x18))(&local_a0);
    pvVar20 = local_98;
    if (local_190 != local_98) {
      (**(code **)(local_a0 + 0x18))(&local_a0);
      lVar12 = 0;
      do {
        if (*(char *)((long)local_98 + lVar12) == '\0') goto LAB_024887bc;
        if (*(char *)((long)local_98 + lVar12 + 1) == '\0') {
          lVar12 = lVar12 + 1;
          goto LAB_024887bc;
        }
        if (*(char *)((long)local_98 + lVar12 + 2) == '\0') {
          lVar12 = lVar12 + 2;
          goto LAB_024887bc;
        }
        lVar12 = lVar12 + 3;
      } while (lVar12 != 0x80001);
      lVar12 = 0;
LAB_024887bc:
      iVar11 = (int)lVar12;
      if (local_188 <= (int)lVar12) {
        iVar11 = local_188 + -1;
      }
      memcpy(local_190,pvVar20,(long)iVar11);
      *(undefined1 *)((long)local_190 + (long)iVar11) = 0;
    }
    local_d0 = *(undefined4 *)(param_1 + 0x784);
    local_e8 = 0;
    local_d8 = *(undefined8 *)(param_1 + 0x77c);
    local_b8 = 1;
    if (*puVar24 == 0) {
LAB_024888e4:
      local_b4 = 4;
LAB_024888e8:
      local_a8 = 0x3c;
      FUN_024480f0(param_1,&local_1f0);
      return;
    }
    cVar19 = *puVar8;
    do {
      if (cVar19 == '\0') {
        cVar19 = '\x01';
        *(undefined8 *)puVar9 = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
        *puVar8 = 1;
        *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
        *(undefined4 *)(puVar9 + 0x18) = 0xffffffff;
      }
      else {
        uVar16 = *(uint *)(puVar9 + 8);
        if (-1 < (int)uVar16) {
          if (((char *)((ulong)uVar16 + (long)puVar24) != (char *)0x0) &&
             (*(char *)((ulong)uVar16 + (long)puVar24) != '\0')) {
            local_b4 = 10;
            goto LAB_024888e8;
          }
          goto LAB_024888e4;
        }
        if (uVar16 != 0xffffffff) goto LAB_024888e4;
      }
      lVar12 = (long)puVar24 - (ulong)*puVar24;
      if ((*puVar24 == 0) || (lVar12 == 0)) goto LAB_024888e4;
      lVar3 = 0xc;
      if (*(char *)(lVar12 + 10) != '\0') {
        lVar3 = 0x1c;
      }
      if (lVar3 + lVar12 == 0) goto LAB_024888e4;
      uVar14 = (ulong)*(ushort *)(lVar12 + 8);
      *(undefined4 *)(puVar9 + 8) = 0xfffffffe;
      if (uVar14 == 0) goto LAB_024888e4;
      piVar22 = (int *)(lVar3 + lVar12 + 4);
      while (piVar22[-1] != -0x7576d04) {
        piVar22 = piVar22 + 2;
        uVar14 = uVar14 - 1;
        if (uVar14 == 0) goto LAB_024888e4;
      }
      iVar11 = 0;
      if (*piVar22 != -1) {
        iVar11 = *piVar22;
      }
      *(int *)(puVar9 + 8) = iVar11;
      if (*puVar24 == 0) goto LAB_024888e4;
    } while( true );
  }
  if (*(short *)(param_1 + 0x770) == 0x85) {
    *(undefined8 *)(param_1 + 0x1990) = 0;
    *(undefined8 *)(param_1 + 0x1998) = 0;
    *(undefined8 *)(param_1 + 0x19a0) = 0;
    *(undefined8 *)(param_1 + 0x19a8) = 0;
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x19b0) = 0;
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *(undefined8 *)(param_1 + 0x19c0) = 0;
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x19c8) = 0;
    *(undefined8 *)(param_1 + 0x19d0) = 0;
    iVar18 = (int)((float)(int)sVar5 * 0.25 * 4.0);
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined2 *)(param_1 + 0x19d8) = 0;
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    *(int *)(param_1 + 0x1980) = (int)(fVar26 * 999.99994);
    if (0x7ffe < iVar18) {
      iVar18 = 0x7fff;
    }
    if (iVar18 < -0x7fff) {
      iVar18 = -0x8000;
    }
    *(short *)(param_1 + 0x1984) = (short)iVar18;
    *(int *)(param_1 + 0x1986) = (int)(fVar25 * 999.99994);
    *(int *)(param_1 + 0x198a) = (int)((float)iVar17 * 0.001 * 999.99994);
    iVar17 = (int)((float)(int)sVar6 * 0.25 * 4.0);
    if (0x7ffe < iVar17) {
      iVar17 = 0x7fff;
    }
    if (iVar17 < -0x7fff) {
      iVar17 = -0x8000;
    }
    *(short *)(param_1 + 0x198e) = (short)iVar17;
    *(int *)(param_1 + 0x1990) = (int)((float)iVar11 * 0.001 * 999.99994);
    *(short *)(param_1 + 0x1994) = (short)uVar16;
    *(byte *)(param_1 + 0x1996) = bVar4;
    local_1f0 = (undefined *)CONCAT44(local_1f0._4_4_,0x85);
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
    lVar12 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar12 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar12,0x85);
    return;
  }
  uVar7 = (uint3)((ulong)local_1e8 >> 0x28);
  local_1f0 = (undefined *)0x0;
  local_1e8 = (char *)CONCAT35(uVar7,0x100000000);
  local_1e0 = 0;
  switch(*(undefined4 *)(param_1 + 0x774)) {
  case 0:
    local_1e8 = (char *)((ulong)uVar7 << 0x28);
    local_1f0 = *(undefined **)(param_1 + 0x764);
    local_1e8 = (char *)CONCAT44(local_1e8._4_4_,*(undefined4 *)(param_1 + 0x76c));
    goto LAB_02488698;
  case 1:
    local_1f0 = *(undefined **)(param_1 + 0x764);
    local_1e8._0_5_ = CONCAT14(1,*(undefined4 *)(param_1 + 0x76c));
    local_1e8 = (char *)CONCAT35(uVar7,(undefined5)local_1e8);
LAB_02488698:
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


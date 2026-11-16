
void FUN_029e3cc0(long param_1,long *param_2)

{
  undefined *puVar1;
  short *psVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  long lVar14;
  long *plVar15;
  ulong *puVar16;
  long *plVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  long lVar22;
  uint *puVar23;
  char *pcVar24;
  long lVar25;
  long lVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  char cVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  uint local_228;
  uint local_224;
  int local_220;
  uint local_21c;
  int local_218;
  int local_214;
  int *local_210;
  uint local_208;
  int local_204;
  int local_200;
  int local_1fc;
  undefined4 uStack_1f8;
  int local_1f0;
  int local_1ec;
  undefined *local_1e8;
  undefined *puStack_1e0;
  undefined8 local_1d8;
  long *local_1d0;
  ulong local_1c8;
  long *local_1c0;
  undefined8 local_c8;
  long local_c0;
  undefined2 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined *puStack_98;
  ulong *local_90;
  
  lVar14 = *param_2;
  if (lVar14 == 0) {
LAB_029e3f78:
    *(undefined8 *)(param_1 + 0x428) = 0;
    uVar12 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x430) = 0;
    local_1f0 = *(int *)((long)param_2 + 0xc);
    plVar15 = (long *)0x0;
    cVar31 = '\0';
    bVar8 = false;
    fVar35 = 0.0;
    local_218 = -1;
    local_214 = -1;
    local_1fc = -1;
    uStack_1f8 = 0xffffffff;
    fVar34 = -1.0;
    local_220 = -1;
  }
  else {
    if (*(long *)(lVar14 + 0x18) == 0) {
      lVar22 = *(long *)(lVar14 + 8);
      if ((lVar22 != 0) && (*(int *)(lVar14 + 0x10) == *(int *)(lVar22 + 0x10))) {
        lVar25 = *(long *)(*(long *)(lVar22 + 0x120) + 8);
        lVar26 = *(long *)(lVar25 + 0x38);
        if ((DAT_05aebc00 != '\0') || (lVar26 != 0)) {
          if (DAT_05aebc00 != '\0') {
            lVar26 = lVar25 + 0x70;
          }
          lVar26 = *(long *)(lVar26 + 8);
          if (((lVar26 != 0) && (*(uint *)(lVar26 + 0x18) != 0)) &&
             (*(long *)((ulong)*(uint *)(lVar26 + 0x18) + lVar26) == 0x101feff464e494d))
          goto LAB_029e3d04;
        }
      }
    }
    else {
      lVar22 = *(long *)(lVar14 + 8);
LAB_029e3d04:
      if (((lVar22 != 0) && (*(int *)(lVar22 + 0x10) == *(int *)(lVar14 + 0x10))) &&
         ((plVar15 = *(long **)(lVar22 + 0x1f8), plVar15 != (long *)0x0 && (plVar15[2] == 0)))) {
        plVar15[4] = param_1;
        plVar15[2] = (long)&LAB_029e4f20;
        *(undefined4 *)(plVar15 + 3) = 0xc80;
        lVar14 = *plVar15;
        if (lVar14 != 0) {
          *(ushort *)(lVar14 + 0x14) = *(ushort *)(lVar14 + 0x14) | 8;
        }
      }
    }
    lVar14 = *param_2;
    if (lVar14 == 0) goto LAB_029e3f78;
    if (*(long *)(lVar14 + 0x18) == 0) {
      lVar22 = *(long *)(lVar14 + 8);
      if ((lVar22 != 0) && (*(int *)(lVar14 + 0x10) == *(int *)(lVar22 + 0x10))) {
        lVar25 = *(long *)(*(long *)(lVar22 + 0x120) + 8);
        lVar26 = *(long *)(lVar25 + 0x38);
        if ((DAT_05aebc00 != '\0') || (lVar26 != 0)) {
          if (DAT_05aebc00 != '\0') {
            lVar26 = lVar25 + 0x70;
          }
          lVar26 = *(long *)(lVar26 + 8);
          if (((lVar26 != 0) && (*(uint *)(lVar26 + 0x18) != 0)) &&
             (*(long *)((ulong)*(uint *)(lVar26 + 0x18) + lVar26) == 0x101feff464e494d))
          goto LAB_029e3dd8;
        }
      }
      goto LAB_029e3f78;
    }
    lVar22 = *(long *)(lVar14 + 8);
LAB_029e3dd8:
    if (((lVar22 == 0) || (*(int *)(lVar22 + 0x10) != *(int *)(lVar14 + 0x10))) ||
       ((*(int *)(lVar22 + 0xc) == 0 || (*(int *)(lVar22 + 0xc) == 7)))) {
      local_1f0 = *(int *)((long)param_2 + 0xc);
      if (local_1f0 < 1) goto LAB_029e3f78;
LAB_029e3e10:
      local_1c8 = local_1c8 & 0xffffffffffffff00;
      local_1d8 = &local_1c8;
      local_1d0 = (long *)0x10000000000;
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      puStack_1e0 = &DAT_040e5c7a;
      local_1ec = 0;
      if (local_1f0 != 99999) {
        local_1ec = local_1f0;
      }
      local_1e8 = puVar1;
      FUN_02a21700(&local_1d8,&local_1e8,2,&local_1ec);
      local_c8 = 0;
      local_c0 = 0;
      local_b8 = 0xff;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = 0;
      local_90 = local_1d8;
      puStack_98 = puVar1;
      uVar10 = FUN_02a0c5d4(*(long *)PTR_DAT_04bb26a8 + 0xa5968,&local_c8,&puStack_98);
      if ((((uVar10 & 1) == 0) || (local_c0 == 0)) ||
         ((*(uint *)(local_c0 + 0x18) == 0 ||
          (plVar15 = (long *)((ulong)*(uint *)(local_c0 + 0x18) + local_c0),
          *plVar15 != 0x101feff464e494d)))) goto LAB_029e42b8;
LAB_029e3ee0:
      uVar12 = *(uint *)(param_2 + 1);
      if (-1 < (int)uVar12) {
        uVar30 = *(uint *)((long)plVar15 + 0x1c);
        uVar12 = uVar12 + 0xc80;
        if (uVar30 <= uVar12) {
          if (uVar30 == *(uint *)(plVar15 + 3)) goto LAB_029e4cec;
          uVar12 = (uVar12 - uVar30) + *(uint *)(plVar15 + 3);
        }
      }
    }
    else {
      local_1f0 = *(int *)((long)param_2 + 0xc);
      if (0 < local_1f0) goto LAB_029e3e10;
LAB_029e42b8:
      lVar14 = *param_2;
      if ((((lVar14 != 0) && (lVar22 = *(long *)(lVar14 + 8), lVar22 != 0)) &&
          (*(int *)(lVar22 + 0x10) == *(int *)(lVar14 + 0x10))) &&
         ((*(int *)(lVar22 + 0xc) != 0 && (*(int *)(lVar22 + 0xc) != 7)))) {
        lVar22 = *(long *)(*(long *)(lVar22 + 0x120) + 8);
        lVar14 = *(long *)(lVar22 + 0x38);
        if (DAT_05aebc00 != '\0') {
          lVar14 = lVar22 + 0x70;
        }
        if (lVar14 == 0) {
          pcVar24 = (char *)0x0;
LAB_029e4bb4:
          if ((((((*pcVar24 != 'B') || (pcVar24[1] != 'G')) ||
                ((pcVar24[2] != 'M' ||
                 (((pcVar24[3] != '_' || (pcVar24[4] != 'D')) || (pcVar24[5] != 'e')))))) ||
               ((pcVar24[6] != 'm' || (pcVar24[7] != 'o')))) || (pcVar24[8] != '_')) ||
             (((((pcVar24[9] != 'P' || (pcVar24[10] != 'r')) ||
                ((pcVar24[0xb] != 'o' ||
                 (((pcVar24[0xc] != 'l' || (pcVar24[0xd] != 'o')) || (pcVar24[0xe] != 'g')))))) ||
               ((pcVar24[0xf] != 'u' || (pcVar24[0x10] != 'e')))) ||
              ((pcVar24[0x11] != '_' ||
               (((pcVar24[0x12] != 'T' || (pcVar24[0x13] != 'K')) ||
                ((pcVar24[0x14] != 'K' || (pcVar24[0x15] != '\0')))))))))) goto LAB_029e4ce8;
        }
        else {
          if ((*(byte *)(lVar14 + 0x11) >> 5 & 1) == 0) {
            pcVar24 = (char *)0x0;
            if (*(long *)(lVar14 + 8) == 0) goto LAB_029e4bb4;
            puVar23 = (uint *)(*(long *)(lVar14 + 8) + 0x24);
            pcVar24 = (char *)((ulong)*puVar23 + (long)puVar23);
          }
          else {
            pcVar24 = "<NoSound>";
          }
          if (pcVar24 != "BGM_Demo_Prologue_TKK") goto LAB_029e4bb4;
        }
        lVar14 = *(long *)(lVar14 + 8);
        if (((lVar14 != 0) && (*(uint *)(lVar14 + 0x18) != 0)) &&
           (plVar15 = (long *)((ulong)*(uint *)(lVar14 + 0x18) + lVar14),
           *plVar15 == 0x101feff464e494d)) goto LAB_029e3ee0;
      }
LAB_029e4ce8:
      plVar15 = (long *)0x0;
LAB_029e4cec:
      uVar12 = 0xffffffff;
    }
    puVar16 = (ulong *)*param_2;
    local_1d8 = (ulong *)*puVar16;
    local_1d0 = (long *)puVar16[1];
    local_1c8 = puVar16[2];
    local_1c0 = (long *)puVar16[3];
    if (puVar16[1] == 0) {
      bVar8 = false;
      if (plVar15 != (long *)0x0) goto LAB_029e4d34;
LAB_029e4d60:
      if (local_1c0 != (long *)0x0) {
        uVar30 = *(uint *)(local_1c0 + 4);
        uVar9 = (uint)local_1d8;
        goto LAB_029e4d70;
      }
      if ((local_1d0 != (long *)0x0) && ((int)local_1c8 == *(int *)((long)local_1d0 + 0x10))) {
        lVar22 = *(long *)(*(long *)((long)local_1d0 + 0x120) + 8);
        lVar14 = *(long *)(lVar22 + 0x38);
        if ((DAT_05aebc00 != '\0') || (lVar14 != 0)) {
          if (DAT_05aebc00 != '\0') {
            lVar14 = lVar22 + 0x70;
          }
          lVar14 = *(long *)(lVar14 + 8);
          if (((lVar14 != 0) && (*(uint *)(lVar14 + 0x18) != 0)) &&
             (plVar17 = (long *)((ulong)*(uint *)(lVar14 + 0x18) + lVar14),
             *plVar17 == 0x101feff464e494d)) {
            uVar30 = *(uint *)(plVar17 + 4);
            uVar9 = FUN_03b46270();
            uVar9 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
            goto LAB_029e4d70;
          }
        }
      }
      bVar8 = false;
    }
    else {
      bVar8 = *(int *)(puVar16[1] + 0x10) == (int)puVar16[2];
      if (plVar15 == (long *)0x0) goto LAB_029e4d60;
LAB_029e4d34:
      if (((int)uVar12 < 1) || (bVar8)) goto LAB_029e4d60;
      uVar30 = *(uint *)(plVar15 + 4);
      local_1c8 = local_1c8 & 0xffffffff00000000;
      local_1d0 = (long *)0x0;
      local_1d8 = (ulong *)(ulong)uVar12;
      local_1c0 = plVar15;
      uVar9 = uVar12;
LAB_029e4d70:
      bVar8 = uVar9 < uVar30;
    }
    uStack_1f8 = FUN_03f0f0a0(&local_1d8);
    local_1fc = FUN_03f0f6f0(&local_1d8);
    local_218 = FUN_03f0eae0(&local_1d8);
    local_214 = FUN_03f0ecd0(&local_1d8);
    fVar34 = (float)FUN_03f0e900(&local_1d8);
    iVar29 = -local_1fc;
    if (-1 < local_1fc) {
      iVar29 = local_1fc;
    }
    fVar35 = (float)FUN_03f0f270(&local_1d8);
    plVar17 = local_1c0;
    if (local_1c0 == (long *)0x0) {
      if ((local_1d0 != (long *)0x0) && ((int)local_1c8 == *(int *)((long)local_1d0 + 0x10))) {
        lVar22 = *(long *)(*(long *)((long)local_1d0 + 0x120) + 8);
        lVar14 = *(long *)(lVar22 + 0x38);
        if ((DAT_05aebc00 != '\0') || (lVar14 != 0)) {
          if (DAT_05aebc00 != '\0') {
            lVar14 = lVar22 + 0x70;
          }
          lVar14 = *(long *)(lVar14 + 8);
          if (((lVar14 != 0) && (*(uint *)(lVar14 + 0x18) != 0)) &&
             (plVar17 = (long *)((ulong)*(uint *)(lVar14 + 0x18) + lVar14),
             *plVar17 == 0x101feff464e494d)) goto LAB_029e4de0;
        }
      }
LAB_029e4e78:
      local_220 = -1;
    }
    else {
LAB_029e4de0:
      uVar30 = *(uint *)((long)plVar17 + 0x3c);
      if (((uVar30 == 0) ||
          (psVar2 = (short *)((ulong)uVar30 + (long)plVar17 + 0x3c), psVar2 == (short *)0x0)) ||
         (*psVar2 == 0)) goto LAB_029e4e78;
      local_220 = FUN_03f0fbe0(&local_1d8);
      local_220 = local_220 + 1;
    }
    fVar35 = (fVar35 + (float)(iVar29 + -1)) / (float)local_218;
    cVar31 = '\x01';
  }
  local_210 = (int *)((long)param_2 + 0xc);
  local_1d8 = (ulong *)(CONCAT44(uVar12,(uint)local_1d8) & 0xffffffffffffff00);
  local_1d0 = plVar15;
  FUN_029e69e0(param_1 + 0xd8,&local_1d8);
  local_1d8 = (ulong *)(CONCAT44(uVar12,(int)local_1d8) & 0xffffffffffffff00);
  local_1d0 = plVar15;
  FUN_029e69e0(param_1 + 0x108,&local_1d8);
  local_1d8 = (ulong *)(CONCAT44(uVar12,(int)local_1d8) & 0xffffffffffffff00);
  local_1d0 = plVar15;
  FUN_029e69e0(param_1 + 0x138,&local_1d8);
  local_1d8 = (ulong *)(CONCAT44(uVar12,(int)local_1d8) & 0xffffffffffffff00);
  local_1d0 = plVar15;
  FUN_029e69e0(param_1 + 0x168,&local_1d8);
  local_1d8 = (ulong *)(CONCAT44(uVar12,(int)local_1d8) & 0xffffffffffffff00);
  local_1d0 = plVar15;
  FUN_029e69e0(param_1 + 0x198,&local_1d8);
  local_1d8 = (ulong *)(CONCAT44(uVar12,(int)local_1d8) & 0xffffffffffffff00);
  local_1d0 = plVar15;
  FUN_029e69e0(param_1 + 0x1c8,&local_1d8);
  local_1d8 = (ulong *)(CONCAT44(uVar12,(int)local_1d8) & 0xffffffffffffff00);
  local_1d0 = plVar15;
  FUN_029e69e0(param_1 + 0x1f8,&local_1d8);
  local_1d8 = (ulong *)(CONCAT44(uVar12,(int)local_1d8) & 0xffffffffffffff00);
  local_1d0 = plVar15;
  FUN_029e69e0(param_1 + 0x228,&local_1d8);
  local_1d8 = (ulong *)(CONCAT44(uVar12,(int)local_1d8) & 0xffffffffffffff00);
  local_1d0 = plVar15;
  FUN_029e69e0(param_1 + 600,&local_1d8);
  local_1d8 = (ulong *)(CONCAT44(uVar12,(int)local_1d8) & 0xffffffffffffff00);
  local_1d0 = plVar15;
  FUN_029e69e0(param_1 + 0x288,&local_1d8);
  local_1d8 = (ulong *)(CONCAT44(uVar12,(int)local_1d8) & 0xffffffffffffff00);
  local_1d0 = plVar15;
  FUN_029e69e0(param_1 + 0x2b8,&local_1d8);
  local_1d8 = (ulong *)(CONCAT44(uVar12,(int)local_1d8) & 0xffffffffffffff00);
  local_1d0 = plVar15;
  FUN_029e69e0(param_1 + 0x2e8,&local_1d8);
  local_1d8 = (ulong *)(CONCAT44(uVar12,(int)local_1d8) & 0xffffffffffffff00);
  local_1d0 = plVar15;
  FUN_029e69e0(param_1 + 0x318,&local_1d8);
  local_1d8 = (ulong *)(CONCAT44(uVar12,(int)local_1d8) & 0xffffffffffffff00);
  local_1d0 = plVar15;
  FUN_029e69e0(param_1 + 0x348,&local_1d8);
  local_1d8 = (ulong *)(CONCAT44(uVar12,(int)local_1d8) & 0xffffffffffffff00);
  local_1d0 = plVar15;
  FUN_029e69e0(param_1 + 0x3b8,&local_1d8);
  if (cVar31 == '\0') {
    iVar11 = -1;
    uVar30 = 0;
    fVar40 = -1.0;
    uVar9 = 0;
    uVar18 = 0;
    local_228 = 0xffffffff;
    local_224 = 0;
    bVar7 = false;
    uVar27 = 0;
    local_21c = 0xffffffff;
    uVar12 = 0xffffffff;
    iVar29 = -1;
    local_208 = 0;
    local_204 = -1;
    local_200 = -1;
    goto LAB_029e46cc;
  }
  fVar32 = (float)FUN_03f10440(*param_2,0xa9efa59b,0);
  fVar33 = (float)FUN_03f10440(*param_2,0xee8c1d5,0);
  lVar14 = *param_2;
  plVar15 = *(long **)(lVar14 + 0x18);
  if (plVar15 == (long *)0x0) {
    lVar22 = *(long *)(lVar14 + 8);
    if ((lVar22 != 0) && (*(int *)(lVar14 + 0x10) == *(int *)(lVar22 + 0x10))) {
      lVar22 = *(long *)(*(long *)(lVar22 + 0x120) + 8);
      lVar14 = *(long *)(lVar22 + 0x38);
      if ((DAT_05aebc00 != '\0') || (lVar14 != 0)) {
        if (DAT_05aebc00 != '\0') {
          lVar14 = lVar22 + 0x70;
        }
        lVar14 = *(long *)(lVar14 + 8);
        if (((lVar14 != 0) && (*(uint *)(lVar14 + 0x18) != 0)) &&
           (plVar15 = (long *)((ulong)*(uint *)(lVar14 + 0x18) + lVar14),
           *plVar15 == 0x101feff464e494d)) goto LAB_029e415c;
      }
    }
    iVar11 = -1;
  }
  else {
LAB_029e415c:
    iVar11 = *(int *)((long)plVar15 + 0x14);
  }
  fVar40 = -1.0;
  iVar29 = -1;
  if ((fVar32 < 0.0) || (fVar33 < 0.0)) {
    local_204 = -1;
    local_200 = -1;
  }
  else {
    fVar37 = (float)(int)uVar12 / (float)iVar11;
    if ((fVar37 < fVar32) || (fVar33 < fVar37)) {
      if (fVar32 <= fVar37) {
        local_200 = -1;
      }
      else {
        fVar37 = (fVar33 - fVar37) * 30.0;
        uVar12 = 0;
        if (fVar37 != (float)(int)fVar37) {
          uVar12 = (uint)(0.0 <= fVar37);
        }
        local_200 = uVar12 + (int)fVar37;
      }
      fVar32 = (fVar33 - fVar32) * 30.0;
      uVar12 = 0;
      if (fVar32 != (float)(int)fVar32) {
        uVar12 = (uint)(0.0 <= fVar32);
      }
      iVar29 = uVar12 + (int)fVar32;
      local_204 = -1;
    }
    else {
      fVar38 = (fVar33 - fVar37) * 30.0;
      fVar39 = (fVar33 - fVar32) * 30.0;
      fVar40 = 1.0 - (fVar33 - fVar37) / (fVar33 - fVar32);
      uVar12 = 0;
      if (fVar38 != (float)(int)fVar38) {
        uVar12 = (uint)(0.0 <= fVar38);
      }
      local_204 = uVar12 + (int)fVar38;
      uVar12 = 0;
      if (fVar39 != (float)(int)fVar39) {
        uVar12 = (uint)(0.0 <= fVar39);
      }
      iVar29 = uVar12 + (int)fVar39;
      local_200 = local_204;
    }
  }
  fVar32 = *(float *)(param_1 + 0x208);
  if (*(int *)(param_1 + 0x218) == -1) {
    uVar12 = 0xffffffff;
  }
  else {
    fVar33 = *(float *)(param_1 + 0x204) * 30.0;
    uVar12 = 0;
    if (fVar33 != (float)(int)fVar33) {
      uVar12 = (uint)(0.0 <= fVar33);
    }
    uVar12 = uVar12 + (int)fVar33;
  }
  uVar9 = *(uint *)(param_1 + 0x248);
  uVar18 = (uint)(0.0 <= fVar32 && fVar32 < 3.4028235e+38);
  if (uVar18 == 0) {
    fVar32 = 3.4028235e+38;
  }
  fVar33 = *(float *)(param_1 + 0x238);
  bVar7 = uVar12 < 0x7fffffff;
  if (!bVar7) {
    uVar12 = 0x7fffffff;
  }
  if (uVar9 != 0xffffffff) {
    fVar37 = *(float *)(param_1 + 0x234) * 30.0;
    uVar9 = 0;
    if (fVar37 != (float)(int)fVar37) {
      uVar9 = (uint)(0.0 <= fVar37);
    }
    uVar9 = uVar9 + (int)fVar37;
  }
  bVar5 = true;
  bVar6 = false;
  if (fVar33 < fVar32) {
    bVar5 = false;
    bVar6 = true;
    if (!NAN(fVar33)) {
      bVar5 = fVar33 < 0.0;
      bVar6 = false;
    }
  }
  fVar32 = *(float *)(param_1 + 0x2f8);
  uVar30 = 2;
  if (bVar5 != bVar6) {
    uVar30 = uVar18;
  }
  local_21c = uVar9;
  if (uVar12 <= uVar9) {
    local_21c = uVar12;
  }
  local_208 = 2;
  if (uVar12 <= uVar9) {
    local_208 = (uint)bVar7;
  }
  if (local_21c == 0x7fffffff) {
    local_21c = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x308) == -1) {
    uVar12 = 0xffffffff;
  }
  else {
    fVar33 = *(float *)(param_1 + 0x2f4) * 30.0;
    uVar12 = 0;
    if (fVar33 != (float)(int)fVar33) {
      uVar12 = (uint)(0.0 <= fVar33);
    }
    uVar12 = uVar12 + (int)fVar33;
  }
  uVar18 = *(uint *)(param_1 + 0x338);
  uVar27 = (uint)(0.0 <= fVar32 && fVar32 < 3.4028235e+38);
  if (uVar27 == 0) {
    fVar32 = 3.4028235e+38;
  }
  fVar33 = *(float *)(param_1 + 0x328);
  bVar7 = uVar12 < 0x7fffffff;
  if (!bVar7) {
    uVar12 = 0x7fffffff;
  }
  if (uVar18 != 0xffffffff) {
    fVar37 = *(float *)(param_1 + 0x324) * 30.0;
    uVar18 = 0;
    if (fVar37 != (float)(int)fVar37) {
      uVar18 = (uint)(0.0 <= fVar37);
    }
    uVar18 = uVar18 + (int)fVar37;
  }
  bVar5 = true;
  bVar6 = false;
  if (fVar33 < fVar32) {
    bVar5 = false;
    bVar6 = true;
    if (!NAN(fVar33)) {
      bVar5 = fVar33 < 0.0;
      bVar6 = false;
    }
  }
  fVar32 = *(float *)(param_1 + 0x268);
  uVar9 = 2;
  if (bVar5 != bVar6) {
    uVar9 = uVar27;
  }
  local_228 = uVar18;
  if (uVar12 <= uVar18) {
    local_228 = uVar12;
  }
  local_224 = 2;
  if (uVar12 <= uVar18) {
    local_224 = (uint)bVar7;
  }
  if (local_228 == 0x7fffffff) {
    local_228 = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x278) == -1) {
    uVar18 = 0xffffffff;
  }
  else {
    fVar33 = *(float *)(param_1 + 0x264) * 30.0;
    uVar18 = 0;
    if (fVar33 != (float)(int)fVar33) {
      uVar18 = (uint)(0.0 <= fVar33);
    }
    uVar18 = uVar18 + (int)fVar33;
  }
  uVar12 = (uint)(0.0 <= fVar32 && fVar32 < 3.4028235e+38);
  if (uVar12 == 0) {
    fVar32 = 3.4028235e+38;
  }
  bVar7 = uVar18 < 0x7fffffff;
  fVar33 = *(float *)(param_1 + 0x298);
  if (!bVar7) {
    uVar18 = 0x7fffffff;
  }
  uVar27 = *(uint *)(param_1 + 0x2a8);
  if (uVar27 != 0xffffffff) {
    fVar37 = *(float *)(param_1 + 0x294) * 30.0;
    uVar27 = 0;
    if (fVar37 != (float)(int)fVar37) {
      uVar27 = (uint)(0.0 <= fVar37);
    }
    uVar27 = uVar27 + (int)fVar37;
  }
  uVar20 = 2;
  if (fVar33 < 0.0 || fVar32 <= fVar33) {
    fVar33 = fVar32;
    uVar20 = uVar12;
  }
  fVar32 = *(float *)(param_1 + 0x2c8);
  uVar28 = uVar27;
  if (uVar18 <= uVar27) {
    uVar28 = uVar18;
  }
  uVar12 = *(uint *)(param_1 + 0x2d8);
  uVar19 = 2;
  if (uVar18 <= uVar27) {
    uVar19 = (uint)bVar7;
  }
  if (uVar12 != 0xffffffff) {
    fVar37 = *(float *)(param_1 + 0x2c4) * 30.0;
    uVar12 = 0;
    if (fVar37 != (float)(int)fVar37) {
      uVar12 = (uint)(0.0 <= fVar37);
    }
    uVar12 = uVar12 + (int)fVar37;
  }
  bVar7 = true;
  bVar5 = false;
  if (fVar32 < fVar33) {
    bVar7 = false;
    bVar5 = true;
    if (!NAN(fVar32)) {
      bVar7 = fVar32 < 0.0;
      bVar5 = false;
    }
  }
  uVar18 = 3;
  if (bVar7 != bVar5) {
    uVar18 = uVar20;
  }
  uVar27 = 3;
  if (uVar28 <= uVar12) {
    uVar12 = uVar28;
    uVar27 = uVar19;
  }
  if (uVar12 == 0x7fffffff) {
    uVar12 = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x1e8) == -1) {
    iVar11 = -1;
  }
  else {
    fVar32 = *(float *)(param_1 + 0x1d4) * 30.0;
    uVar20 = 0;
    if (fVar32 != (float)(int)fVar32) {
      uVar20 = (uint)(0.0 <= fVar32);
    }
    iVar11 = uVar20 + (int)fVar32;
  }
  bVar7 = 0.0 <= *(float *)(param_1 + 0x1d8);
LAB_029e46cc:
  local_1d8 = (ulong *)CONCAT44(0x2030405,fVar34);
  local_1d0 = (long *)CONCAT71(local_1d0._1_7_,3);
  FUN_029e32c0(param_1 + 0x50,&local_1d8);
  iVar21 = local_218;
  if (local_214 == 8) {
    if (local_218 < 0) {
      iVar21 = local_218 + 1;
    }
    iVar21 = iVar21 >> 1;
  }
  fVar32 = *(float *)(param_1 + 0xe8);
  bVar5 = fVar32 < 0.0;
  bVar6 = 3.4028235e+38 <= fVar32;
  if (bVar5 || bVar6) {
    fVar32 = 3.4028235e+38;
  }
  fVar33 = *(float *)(param_1 + 0x118);
  fVar37 = 2.0;
  if (bVar5 || bVar6) {
    fVar37 = 1.0;
  }
  fVar38 = fVar33;
  if (fVar33 < 0.0 || fVar32 <= fVar33) {
    fVar38 = fVar32;
  }
  fVar36 = *(float *)(param_1 + 0x148);
  fVar39 = 1.0;
  if (fVar33 < 0.0 || fVar32 <= fVar33) {
    fVar39 = fVar37;
  }
  fVar32 = fVar36;
  if (fVar36 < 0.0 || fVar38 <= fVar36) {
    fVar32 = fVar38;
  }
  fVar37 = *(float *)(param_1 + 0x178);
  fVar33 = 0.6666667;
  if (fVar36 < 0.0 || fVar38 <= fVar36) {
    fVar33 = fVar39;
  }
  bVar5 = true;
  bVar6 = false;
  if (fVar37 < fVar32) {
    bVar5 = false;
    bVar6 = true;
    if (!NAN(fVar37)) {
      bVar5 = fVar37 < 0.0;
      bVar6 = false;
    }
  }
  fVar37 = 0.5;
  fVar32 = 0.5;
  if (bVar5 != bVar6) {
    fVar32 = fVar33;
  }
  uVar13 = 1;
  if (iVar21 == 3) {
    if (*local_210 == 0x4c) {
      fVar37 = 0.75;
    }
    else {
      fVar37 = 0.75;
      if (*local_210 != 0x4d) {
        fVar37 = 1.0;
      }
    }
  }
  else {
    uVar13 = 2;
    if (iVar21 != 2) {
      if (iVar21 == 1) {
        fVar37 = 0.25;
      }
      else {
        fVar37 = 1.0;
      }
    }
  }
  fVar32 = fVar32 * fVar37;
  if (local_220 != *(int *)(param_1 + 0x434)) {
    fVar33 = *(float *)(param_1 + 0x43c);
    fVar37 = fVar32 + fVar33;
    *(float *)(param_1 + 0x438) = fVar33;
    *(float *)(param_1 + 0x43c) = fVar37;
    if (10000.0 <= fVar37) {
      *(float *)(param_1 + 0x438) = fVar33 + -5000.0;
      *(float *)(param_1 + 0x43c) = fVar37 + -5000.0;
    }
    *(int *)(param_1 + 0x434) = local_220;
  }
  fVar33 = *(float *)(param_1 + 0x440) - fVar32;
  if ((fVar33 < -1.1920929e-07) || (1.1920929e-07 < fVar33)) {
    *(float *)(param_1 + 0x440) = fVar32;
    fVar33 = (*(float *)(param_1 + 0x438) +
             fVar35 * (*(float *)(param_1 + 0x43c) - *(float *)(param_1 + 0x438))) -
             (fVar35 + (float)(local_220 + -1)) * fVar32;
    *(float *)(param_1 + 0x438) = fVar33 + (float)(local_220 + -1) * fVar32;
    *(float *)(param_1 + 0x43c) = fVar33 + (float)local_220 * fVar32;
  }
  if (cVar31 == '\0') {
    fVar33 = 0.0;
    *(undefined8 *)(param_1 + 0x43c) = 0;
    *(undefined8 *)(param_1 + 0x434) = 0xffffffff;
  }
  else {
    fVar33 = *(float *)(param_1 + 0x438) +
             fVar35 * (*(float *)(param_1 + 0x43c) - *(float *)(param_1 + 0x438));
    fVar33 = fVar33 - (float)(int)fVar33;
  }
  if (fVar34 <= 0.0) {
    fVar37 = 1.0;
  }
  else {
    fVar37 = fVar34 / 75.0;
  }
  fVar37 = fVar37 * fVar32;
  fVar39 = 0.0;
  fVar32 = 0.0;
  fVar36 = *(float *)(param_1 + 0x358);
  fVar38 = *(float *)(param_1 + 0x354);
  uVar20 = 0;
  if (*(int *)(param_1 + 0x364) != -1) {
    uVar20 = (uint)*(byte *)(param_1 + 0x3a5);
  }
  uVar28 = 0;
  if (*(int *)(param_1 + 0x368) != -1) {
    uVar28 = (uint)*(byte *)(param_1 + 0x3b5);
  }
  if (0.0 <= fVar36) {
    if (uVar20 < 0x14) {
      fVar32 = 0.5;
    }
    else if (uVar20 < 0x51) {
      fVar32 = (float)(int)(uVar20 - 0x14) * 0.008333334 + 0.5;
    }
    else {
      fVar32 = 1.0;
    }
    if (0.2 / fVar37 <= fVar36) {
      fVar32 = fVar32 + (fVar36 - 0.2 / fVar37) * ((0.0 - fVar32) / (0.4 / fVar37));
    }
  }
  iVar21 = *(int *)(param_1 + 0x68);
  if (0.0 <= fVar38) {
    if (uVar28 < 0x14) {
      fVar39 = 0.5;
    }
    else if (uVar28 < 0x51) {
      fVar39 = (float)(int)(uVar28 - 0x14) * 0.008333334 + 0.5;
    }
    else {
      fVar39 = 1.0;
    }
    if (0.2 / fVar37 <= fVar38) {
      fVar39 = ((0.4 / fVar37 + 0.2 / fVar37) - fVar38) * (fVar39 / (0.4 / fVar37));
    }
  }
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x58);
  *(int *)(param_1 + 0x34) = (int)*(undefined8 *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x38) = (int)((ulong)*(undefined8 *)(param_1 + 0x5c) >> 0x20);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 100);
  *(int *)(param_1 + 0x18) = local_1fc;
  *(int *)(param_1 + 0x1c) = local_218;
  if (iVar21 == 0x7fffffff) {
    iVar21 = -1;
  }
  *(int *)(param_1 + 0x20) = local_214;
  *(float *)(param_1 + 0x24) = fVar34;
  *(float *)(param_1 + 0x28) = fVar35;
  *(int *)(param_1 + 0x40) = iVar21;
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x6c);
  *(bool *)(param_1 + 0xc) = bVar8;
  *(int *)(param_1 + 0x10) = local_1f0;
  *(undefined4 *)(param_1 + 0x14) = uStack_1f8;
  cVar3 = '\0';
  if (*(char *)(param_1 + 0x420) != cVar31) {
    cVar3 = cVar31;
  }
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x70);
  if ((cVar3 == '\0') && (*(int *)(param_1 + 8) == *local_210)) {
    uVar13 = *(undefined4 *)(param_1 + 0x424);
  }
  else {
    *(undefined4 *)(param_1 + 0x424) = uVar13;
  }
  *(float *)(param_1 + 0x88) = fVar33;
  *(undefined4 *)(param_1 + 0x84) = uVar13;
  *(float *)(param_1 + 0xa8) = fVar40;
  if (fVar32 <= fVar39) {
    fVar32 = fVar39;
  }
  *(uint *)(param_1 + 0xac) = uVar30;
  *(uint *)(param_1 + 0xb0) = uVar9;
  *(uint *)(param_1 + 0xbc) = local_224;
  *(uint *)(param_1 + 0xc0) = uVar27;
  *(uint *)(param_1 + 0xc4) = local_21c;
  *(uint *)(param_1 + 200) = local_228;
  *(uint *)(param_1 + 0xcc) = uVar12;
  fVar34 = 1.0;
  if (fVar32 <= 1.0) {
    fVar34 = fVar32;
  }
  *(bool *)(param_1 + 0xd0) = bVar7;
  *(int *)(param_1 + 0xd4) = iVar11;
  fVar35 = 0.0;
  if (0.0 <= fVar32) {
    fVar35 = fVar34;
  }
  cVar3 = '\0';
  if (0.0 <= fVar38) {
    cVar3 = cVar31;
  }
  cVar4 = cVar31;
  if (-1 < iVar29) {
    cVar4 = cVar3;
  }
  *(char *)(param_1 + 0x80) = cVar4;
  fVar34 = *(float *)(param_1 + 0x94) + (fVar35 - *(float *)(param_1 + 0x94)) * 0.5;
  *(int *)(param_1 + 0x9c) = local_200;
  *(int *)(param_1 + 0xa0) = local_204;
  *(int *)(param_1 + 0xa4) = iVar29;
  *(float *)(param_1 + 0x94) = fVar34;
  *(uint *)(param_1 + 0xb4) = uVar18;
  *(uint *)(param_1 + 0xb8) = local_208;
  *(float *)(param_1 + 0x98) = 1.0 - fVar34;
  iVar29 = *local_210;
  *(char *)(param_1 + 0x420) = cVar31;
  *(int *)(param_1 + 8) = iVar29;
  return;
}


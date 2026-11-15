
/* WARNING: Removing unreachable block (ram,0x023c4a40) */
/* WARNING: Removing unreachable block (ram,0x023c4ea0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_023c49a8(long param_1,undefined8 *param_2,float *param_3,float *param_4)

{
  int *piVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  byte bVar7;
  long lVar8;
  float *pfVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  long local_1e0;
  long *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  float local_1bc;
  float fStack_1b8;
  float local_1b4;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  long local_1a0;
  long *local_198;
  uint local_18c;
  undefined8 local_188;
  undefined8 local_180;
  float local_178;
  float local_174;
  undefined1 local_170;
  byte bStack_16f;
  undefined2 uStack_16e;
  undefined4 uStack_16c;
  undefined2 uStack_168;
  undefined2 uStack_166;
  byte bStack_164;
  undefined1 uStack_163;
  undefined1 uStack_162;
  undefined1 uStack_161;
  undefined1 uStack_160;
  undefined1 uStack_15f;
  undefined2 uStack_15e;
  undefined4 uStack_15c;
  undefined1 local_158;
  undefined8 local_154;
  undefined8 local_14c;
  undefined8 uStack_144;
  undefined8 local_13c;
  undefined8 uStack_134;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined1 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined1 local_10c;
  undefined1 local_75;
  
  puVar10 = *(undefined8 **)(param_1 + 0x60);
  local_1a0 = 0;
  local_198 = (long *)0x0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  if (puVar10 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      puVar10 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar10 = &DAT_05240280;
    }
  }
  if (puVar10[0x227] == 0) {
    return;
  }
  local_1f0 = CONCAT44(local_1f0._4_4_,*(uint *)(puVar10 + 0x2d3) >> 1) & 0xffffffff00000001;
  local_188 = (undefined *)CONCAT44(local_188._4_4_,10);
  uVar6 = FUN_03850a90(puVar10[0x227],10,&local_1b0,*(uint *)(puVar10 + 0x2d3) >> 1 & 1);
  if ((uVar6 & 1) == 0) {
    return;
  }
  puVar10 = *(undefined8 **)(param_1 + 0x60);
  if (puVar10 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_052461c0), iVar5 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar10 = &DAT_05240280;
    }
    else {
      puVar10 = &DAT_05240280;
    }
  }
  uVar6 = FUN_016ff8c0(puVar10,8,&local_1bc);
  if ((uVar6 & 1) == 0) {
    return;
  }
  fVar17 = 1.0;
  local_1c8 = param_2[1];
  bVar7 = *(byte *)(param_1 + 0x1ee8);
  local_1c0 = *(undefined4 *)(param_2 + 2);
  if (local_198 == (long *)0x0) {
    fVar16 = 1.0;
    fVar13 = 1.0;
  }
  else {
    if (*local_198 == 0) {
      local_75 = 0;
      local_178 = 3.58732e-43;
      local_180 = &local_174;
      local_174 = (float)((uint)local_174 & 0xffffff00);
      local_188 = PTR_DAT_04bb21f8 + 0x10;
      lVar8 = *(long *)(local_198[2] + 8);
      FUN_038d1270(&local_188,"%s.as",lVar8 + *(int *)(lVar8 + 0x24) + (long)*(int *)(lVar8 + 8));
      fVar16 = 0.0;
      fVar13 = 0.0;
      if (local_198 == (long *)0x0) {
        fVar16 = 1.0;
        goto LAB_023c4d48;
      }
LAB_023c4ba0:
      lVar8 = *local_198;
      fVar13 = fVar16;
      if (lVar8 != 0) goto LAB_023c4ba8;
LAB_023c4c24:
      local_75 = 0;
      local_178 = 3.58732e-43;
      local_180 = &local_174;
      local_174 = (float)((uint)local_174 & 0xffffff00);
      local_188 = PTR_DAT_04bb21f8 + 0x10;
      lVar8 = *(long *)(local_198[2] + 8);
      FUN_038d1270(&local_188,"%s.as",lVar8 + *(int *)(lVar8 + 0x24) + (long)*(int *)(lVar8 + 8));
      fVar16 = 0.0;
      if (local_198 == (long *)0x0) goto LAB_023c4d48;
    }
    else {
      iVar5 = *(int *)(*local_198 + 8);
      if (0x5fffffff < iVar5) {
        uVar3 = iVar5 + 0xa0000000;
        if (*(uint *)(local_1a0 + 0x80) <= uVar3) {
          uVar3 = 0;
        }
        lVar8 = *(long *)(local_1a0 + 0x88) + (ulong)uVar3 * 0x32;
        pfVar9 = (float *)(lVar8 + (ulong)*(byte *)(lVar8 + 0x20));
LAB_023c4b9c:
        fVar16 = *pfVar9;
        goto LAB_023c4ba0;
      }
      piVar1 = (int *)(*(long *)(local_198[2] + 8) + (long)iVar5);
      if (0 < *piVar1) {
        pfVar9 = (float *)(((ulong)(uint)piVar1[1] & 0xfffffff) + *(long *)(local_198[2] + 8) + 4);
        goto LAB_023c4b9c;
      }
      fVar16 = 0.0;
      lVar8 = *local_198;
      fVar13 = fVar16;
      if (lVar8 == 0) goto LAB_023c4c24;
LAB_023c4ba8:
      iVar5 = *(int *)(lVar8 + 8);
      fVar13 = fVar16;
      if (iVar5 < 0x60000000) {
        fVar16 = 0.0;
        piVar1 = (int *)(*(long *)(local_198[2] + 8) + (long)iVar5);
        if (1 < *piVar1) {
          fVar16 = *(float *)(((ulong)(uint)piVar1[2] & 0xfffffff) + *(long *)(local_198[2] + 8) + 4
                             );
        }
      }
      else {
        uVar3 = iVar5 + 0xa0000000;
        if (*(uint *)(local_1a0 + 0x80) <= uVar3) {
          uVar3 = 0;
        }
        lVar8 = *(long *)(local_1a0 + 0x88) + (ulong)uVar3 * 0x32;
        fVar16 = *(float *)(lVar8 + (ulong)*(byte *)(lVar8 + 0x21));
      }
    }
    if (*local_198 == 0) {
      local_75 = 0;
      local_178 = 3.58732e-43;
      local_180 = &local_174;
      local_174 = (float)((uint)local_174 & 0xffffff00);
      local_188 = PTR_DAT_04bb21f8 + 0x10;
      lVar8 = *(long *)(local_198[2] + 8);
      FUN_038d1270(&local_188,"%s.as",lVar8 + *(int *)(lVar8 + 0x24) + (long)*(int *)(lVar8 + 8));
      fVar17 = 0.0;
    }
    else {
      iVar5 = *(int *)(*local_198 + 8);
      if (iVar5 < 0x60000000) {
        fVar17 = 0.0;
        piVar1 = (int *)(*(long *)(local_198[2] + 8) + (long)iVar5);
        if (2 < *piVar1) {
          fVar17 = *(float *)(((ulong)(uint)piVar1[3] & 0xfffffff) + *(long *)(local_198[2] + 8) + 4
                             );
        }
      }
      else {
        uVar3 = iVar5 + 0xa0000000;
        if (*(uint *)(local_1a0 + 0x80) <= uVar3) {
          uVar3 = 0;
        }
        lVar8 = *(long *)(local_1a0 + 0x88) + (ulong)uVar3 * 0x32;
        fVar17 = *(float *)(lVar8 + (ulong)*(byte *)(lVar8 + 0x22));
      }
    }
  }
LAB_023c4d48:
  puVar2 = PTR_DAT_04bb43c0;
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(param_2);
  if (*(long *)puVar2 == 0) {
LAB_023c4da0:
    local_1d0 = 0x8a5;
    FUN_0277d4ac(&local_1d0);
  }
  else {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((*(uint *)(lVar8 + 0x1d8) <= uVar3) ||
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_023c4da0;
    local_1d0 = *param_2;
  }
  fVar11 = -fVar17;
  if (0.0 <= fVar17) {
    fVar11 = fVar17;
  }
  if ((1.1920929e-07 < fVar11) && (fVar11 = *param_4, fVar11 != fVar16)) {
    fVar12 = fVar16 - fVar11;
    fVar14 = -fVar12;
    if (0.0 <= fVar12) {
      fVar14 = fVar12;
    }
    if (0.005 < fVar14) {
      fVar17 = fVar17 * fVar12;
      fVar16 = 0.005;
      if (fVar12 <= 0.0) {
        fVar16 = -10.0;
      }
      fVar14 = 10.0;
      if (fVar12 <= 0.0) {
        fVar14 = -0.005;
      }
      if (fVar17 <= fVar14) {
        fVar14 = fVar17;
      }
      if (fVar16 <= fVar17) {
        fVar16 = fVar14;
      }
      fVar16 = fVar11 + fVar16;
    }
    *param_4 = fVar16;
  }
  puVar10 = *(undefined8 **)(param_1 + 0x60);
  local_1e0 = 0;
  local_1d8 = (long *)0x0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  if (puVar10 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar10 = &DAT_05240280;
      lVar8 = DAT_052413b8;
    }
    else {
      puVar10 = &DAT_05240280;
      lVar8 = DAT_052413b8;
    }
  }
  else {
    lVar8 = puVar10[0x227];
  }
  if (lVar8 == 0) {
    local_18c = 0;
    goto LAB_023c5084;
  }
  local_188._4_4_ = (undefined4)((ulong)local_188 >> 0x20);
  local_18c = *(uint *)(puVar10 + 0x2d3) >> 1 & 1;
  local_188 = (undefined *)CONCAT44(local_188._4_4_,0x23);
  uVar6 = FUN_03850a90(lVar8,0x23,&local_1f0,local_18c);
  if ((uVar6 & 1) == 0) goto LAB_023c5084;
  if (local_1d8 == (long *)0x0) {
    uVar3 = 1;
    fVar17 = 1.0;
  }
  else {
    if (*local_1d8 == 0) {
      local_75 = 0;
      local_178 = 3.58732e-43;
      local_180 = &local_174;
      local_174 = (float)((uint)local_174 & 0xffffff00);
      local_188 = PTR_DAT_04bb21f8 + 0x10;
      lVar8 = *(long *)(local_1d8[2] + 8);
      FUN_038d1270(&local_188,"%s.as",lVar8 + *(int *)(lVar8 + 0x24) + (long)*(int *)(lVar8 + 8));
      fVar17 = 0.0;
      if (local_1d8 != (long *)0x0) goto LAB_023c4fa8;
    }
    else {
      iVar5 = *(int *)(*local_1d8 + 8);
      if (iVar5 < 0x60000000) {
        piVar1 = (int *)(*(long *)(local_1d8[2] + 8) + (long)iVar5);
        if (0 < *piVar1) {
          pfVar9 = (float *)(((ulong)(uint)piVar1[1] & 0xfffffff) + *(long *)(local_1d8[2] + 8) + 4)
          ;
          goto LAB_023c4fa4;
        }
        fVar17 = 0.0;
        lVar8 = *local_1d8;
      }
      else {
        uVar3 = iVar5 + 0xa0000000;
        if (*(uint *)(local_1e0 + 0x80) <= uVar3) {
          uVar3 = 0;
        }
        lVar8 = *(long *)(local_1e0 + 0x88) + (ulong)uVar3 * 0x32;
        pfVar9 = (float *)(lVar8 + (ulong)*(byte *)(lVar8 + 0x20));
LAB_023c4fa4:
        fVar17 = *pfVar9;
LAB_023c4fa8:
        lVar8 = *local_1d8;
      }
      if (lVar8 != 0) {
        fVar16 = *(float *)(lVar8 + 0x18);
        if (fVar16 < 0.0) {
          fVar16 = *(float *)(local_1d8[1] + 0xc);
        }
        uVar3 = (uint)(fVar16 - *(float *)(lVar8 + 0x14));
        if (uVar3 < 2) {
          uVar3 = 1;
        }
        goto LAB_023c4fec;
      }
    }
    uVar3 = 1;
  }
LAB_023c4fec:
  if (*(char *)(param_1 + 0x20e5) == '\0') {
    fVar16 = 0.0;
    *(undefined4 *)(param_1 + 0x20d8) = 0;
    *(byte *)(param_1 + 0x20e4) = (byte)(uVar3 >> 0x1f);
    *(uint *)(param_1 + 0x20dc) = uVar3 & (int)uVar3 >> 0x1f;
    *(uint *)(param_1 + 0x20e0) = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
    *(undefined1 *)(param_1 + 0x20e5) = 1;
  }
  else {
    fVar16 = (float)*(int *)(param_1 + 0x20d8);
  }
  fVar16 = 1.0 - fVar16 / (float)uVar3;
  fVar17 = fVar17 + (1.0 - fVar16 * fVar16) * (1.0 - fVar17);
  fVar16 = 1.0;
  if (fVar17 <= 1.0) {
    fVar16 = fVar17;
  }
  fVar11 = 0.0;
  if (0.0 <= fVar17) {
    fVar11 = fVar16;
  }
  *param_4 = fVar11;
  if (*(char *)(param_1 + 0x20e5) != '\0') {
    uVar4 = (**(code **)(*(long *)(param_1 + 0x20d0) + (ulong)*(byte *)(param_1 + 0x20e4) * 8))
                      (param_1 + 0x20d0);
    *(undefined4 *)(param_1 + 0x20d8) = uVar4;
  }
LAB_023c5084:
  fVar17 = -fVar13;
  if (0.0 <= fVar13) {
    fVar17 = fVar13;
  }
  if (fVar17 <= 0.99) {
    if (1.1920929e-07 < fVar17) {
      FUN_03eb4b60(fVar13,0x3f800000,0x3c23d70a,param_3,&local_1c8);
    }
    fVar14 = *param_3;
    fVar12 = param_3[1];
    fVar15 = param_3[2];
    uVar3 = *(uint *)(*(long *)(param_1 + 0x68) + 0x2b4);
    pfVar9 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(uVar3 >> 0x15) & 0x7f0));
    fVar17 = (float)(uVar3 >> 1 & 0xffffff) * 5.9604645e-08;
    fVar16 = *pfVar9 + fVar17 * pfVar9[1];
    fVar17 = pfVar9[2] + fVar17 * pfVar9[3];
    fVar13 = fVar16 * 0.0;
    fVar17 = fVar17 + fVar17;
    fVar19 = fVar16 * (fVar16 + fVar16);
    fVar18 = (fVar16 + fVar16) * fVar13;
    fVar20 = fVar13 * (fVar13 + fVar13);
    fVar21 = fVar16 * (fVar13 + fVar13);
    fVar13 = fVar17 * fVar13;
    fVar16 = fVar16 * fVar17;
    fVar11 = fVar12 * (fVar21 - fVar13) + fVar14 * ((1.0 - fVar19) - fVar20) +
             fVar15 * (fVar16 + fVar20);
    fVar17 = fVar12 * ((1.0 - fVar20) - fVar20) + fVar14 * (fVar13 + fVar21) +
             fVar15 * (fVar18 - fVar13);
    local_178 = fVar12 * (fVar13 + fVar18) + fVar14 * (fVar20 - fVar16) +
                fVar15 * ((1.0 - fVar20) - fVar19);
    if (*(char *)((long)param_2 + 0x1c) != '\0') {
      uStack_160 = 0;
      uStack_15f = 0;
      uStack_15e = 0x3f80;
      uStack_15c = 0x3f800000;
      local_188 = (undefined *)*param_2;
      local_170 = 0;
      bStack_16f = 0;
      uStack_16e = 0;
      uStack_16c = 0;
      uStack_168 = 0;
      uStack_166 = 0;
      local_154 = 0;
      local_178 = local_178 + local_1b4;
      local_180 = (float *)CONCAT44(fVar17 + fStack_1b8,fVar11 + local_1bc);
      local_174 = *param_4 * *(float *)(param_2 + 3);
      if (local_174 == 0.0) {
        return;
      }
      uStack_162 = *(undefined1 *)((long)param_2 + 0x14);
      if (7 < bVar7) {
        bVar7 = 0xff;
      }
      local_158 = *(undefined1 *)((long)param_2 + 0x1e);
      uStack_163 = 0;
      puVar10 = *(undefined8 **)(param_1 + 0x60);
      local_14c = (ulong)CONCAT31(local_14c._5_3_,*(undefined1 *)((long)param_2 + 0x1d)) << 0x20;
      bStack_164 = bVar7;
      if (puVar10 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(&DAT_052461c0);
          puVar10 = &DAT_05240280;
          if (iVar5 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar10 = &DAT_05240280;
        }
      }
      FUN_0170d1d8(puVar10,&local_188);
      return;
    }
    local_180 = (float *)CONCAT44(fVar17,fVar11);
    local_174 = *param_4 * *(float *)(param_2 + 3);
    local_188 = (undefined *)*param_2;
    if (local_174 == 0.0) {
      return;
    }
    uStack_15f = *(undefined1 *)((long)param_2 + 0x14);
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    local_158 = *(undefined1 *)((long)param_2 + 0x1e);
    local_10c = *(undefined1 *)((long)param_2 + 0x1d);
    puVar10 = *(undefined8 **)(param_1 + 0x60);
    local_11c = 1;
    bStack_16f = bVar7;
  }
  else {
    FUN_03eb4b60(0x3f333333,0x3f800000,0x3c23d70a,param_3,&local_1c8);
    uVar3 = *(uint *)(*(long *)(param_1 + 0x68) + 0x2b4);
    fVar18 = *param_3;
    fVar19 = param_3[1];
    fVar21 = param_3[2];
    local_11c = 0;
    pfVar9 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(uVar3 >> 0x15) & 0x7f0));
    fVar17 = (float)(uVar3 >> 1 & 0xffffff) * 5.9604645e-08;
    fVar16 = *pfVar9 + fVar17 * pfVar9[1];
    fVar11 = fVar16 * 0.0;
    fVar17 = pfVar9[2] + fVar17 * pfVar9[3];
    fVar17 = fVar17 + fVar17;
    fVar12 = fVar16 * (fVar16 + fVar16);
    fVar13 = (fVar16 + fVar16) * fVar11;
    fVar15 = fVar11 * (fVar11 + fVar11);
    fVar14 = fVar17 * fVar11;
    fVar17 = fVar16 * fVar17;
    fVar16 = fVar16 * (fVar11 + fVar11);
    local_178 = fVar19 * (fVar14 + fVar13) + fVar18 * (fVar15 - fVar17) +
                fVar21 * ((1.0 - fVar15) - fVar12);
    local_180 = (float *)CONCAT44(fVar19 * ((1.0 - fVar15) - fVar15) + fVar18 * (fVar14 + fVar16) +
                                  fVar21 * (fVar13 - fVar14),
                                  fVar19 * (fVar16 - fVar14) + fVar18 * ((1.0 - fVar12) - fVar15) +
                                  fVar21 * (fVar17 + fVar15));
    local_174 = *param_4 * *(float *)(param_2 + 3);
    local_188 = (undefined *)*param_2;
    if (local_174 == 0.0) {
      return;
    }
    uStack_15f = *(undefined1 *)((long)param_2 + 0x14);
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    local_158 = *(undefined1 *)((long)param_2 + 0x1e);
    local_10c = *(undefined1 *)((long)param_2 + 0x1d);
    puVar10 = *(undefined8 **)(param_1 + 0x60);
    bStack_16f = bVar7;
  }
  local_110 = 0;
  local_118 = 0;
  local_154 = 0x3f80000000000000;
  uStack_15c = 0x3f800000;
  uStack_160 = 0;
  uStack_161 = 0;
  uStack_162 = 0;
  uStack_163 = 0;
  bStack_164 = 0;
  uStack_166 = 0;
  uStack_168 = 0;
  uStack_16c = 0;
  local_170 = 0;
  local_14c = _DAT_04102200;
  uStack_144 = _UNK_04102208;
  local_13c = _DAT_04102880;
  uStack_134 = _UNK_04102888;
  local_12c = _DAT_041023d0;
  uStack_124 = _UNK_041023d8;
  if (puVar10 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      puVar10 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar10 = &DAT_05240280;
    }
  }
  FUN_0170d420(puVar10,&local_188);
  return;
}


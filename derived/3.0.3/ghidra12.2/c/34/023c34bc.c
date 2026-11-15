
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_023c34bc(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  long *plVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  float *pfVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  undefined8 *puVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  long local_1a8;
  long *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  float local_188;
  float local_184;
  undefined1 local_180;
  byte bStack_17f;
  undefined2 uStack_17e;
  undefined4 uStack_17c;
  undefined2 local_178;
  undefined2 uStack_176;
  byte bStack_174;
  undefined1 uStack_173;
  undefined1 uStack_172;
  undefined1 uStack_171;
  undefined1 uStack_170;
  undefined1 uStack_16f;
  undefined2 uStack_16e;
  undefined4 local_16c;
  undefined1 local_168;
  undefined5 local_164;
  undefined3 uStack_15f;
  undefined5 local_15c;
  undefined3 uStack_157;
  undefined8 uStack_154;
  undefined8 local_14c;
  undefined8 uStack_144;
  undefined8 local_13c;
  undefined8 uStack_134;
  undefined1 local_12c;
  undefined5 local_128;
  undefined3 uStack_123;
  undefined5 uStack_120;
  undefined1 local_85;
  
  sVar5 = *(short *)(param_4 + 0x190c);
  puVar15 = *(undefined8 **)(param_4 + 0x60);
  fVar20 = (float)*(int *)(param_4 + 0x1908) * 0.001;
  fVar19 = (float)*(int *)(param_4 + 0x190e) * 0.001;
  if (puVar15 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      puVar15 = &DAT_05240280;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar15 = &DAT_05240280;
    }
  }
  lVar8 = FUN_0251e98c(1);
  pfVar9 = (float *)(**(code **)(*(long *)(lVar8 + 0x13b0) + 0xf0))(lVar8 + 0x13b0);
  fVar22 = *pfVar9;
  fVar16 = fVar19 - *(float *)(*(long *)(param_4 + 0x68) + 0x280);
  iVar7 = FUN_006f0400(fVar20 - *(float *)(*(long *)(param_4 + 0x68) + 0x278));
  if (*(int *)(param_4 + 0x178) == 0) {
    local_1b8 = CONCAT44(local_1b8._4_4_,10);
    local_198 = (undefined *)CONCAT44(local_198._4_4_,10);
    if ((*(byte *)(param_4 + 0x18f5) >> 2 & 1) == 0) goto LAB_023c35e4;
  }
  else {
LAB_023c35e4:
    plVar4 = &DAT_054e9a58;
    if (*(long **)(param_4 + 0x4c8) != (long *)0x0) {
      plVar4 = *(long **)(param_4 + 0x4c8);
    }
    lVar8 = (**(code **)(*plVar4 + 0x148))();
    iVar6 = iVar7 - *(int *)(lVar8 + 4);
    if (0xb60b5e < iVar6 + 0x5b05afU) {
      fVar16 = (float)iVar6;
      iVar6 = 0x15555560;
      iVar7 = -0x15555560;
      iVar13 = (int)(fVar22 * 0.65 * fVar16);
      if (iVar13 < 1) {
        iVar6 = -0x5b05b0;
      }
      else {
        iVar7 = 0x5b05b0;
      }
      iVar3 = iVar13;
      if (iVar6 <= iVar13) {
        iVar3 = iVar6;
      }
      if (iVar7 <= iVar13) {
        iVar7 = iVar3;
      }
      iVar7 = iVar7 + *(int *)(lVar8 + 4);
    }
    *(int *)(lVar8 + 4) = iVar7;
  }
  fVar22 = (float)(int)sVar5 * 0.25;
  uVar10 = (ulong)local_1c0._4_4_;
  local_1c0 = uVar10 << 0x20;
  local_1a8 = 0;
  local_1a0 = (long *)0x0;
  local_198 = (undefined *)CONCAT44(local_198._4_4_,0x1d);
  local_1b8 = 0;
  uStack_1b0 = 0;
  if (puVar15[0x227] == 0) {
    local_1c0 = uVar10 << 0x20;
    goto LAB_023c39e4;
  }
  uVar10 = FUN_03850890(puVar15[0x227],0x1d,&local_1b8,0);
  if ((uVar10 & 1) != 0) {
    if (local_1a0 == (long *)0x0) {
      uVar12 = 1;
    }
    else if (*local_1a0 == 0) {
      local_85 = 0;
      local_188 = 3.58732e-43;
      local_190 = &local_184;
      local_184 = (float)((uint)local_184 & 0xffffff00);
      local_198 = PTR_DAT_04bb21f8 + 0x10;
      lVar8 = *(long *)(local_1a0[2] + 8);
      FUN_038d1270(&local_198,"%s.as",lVar8 + *(int *)(lVar8 + 0x24) + (long)*(int *)(lVar8 + 8));
LAB_023c379c:
      uVar12 = 0;
    }
    else {
      iVar7 = *(int *)(*local_1a0 + 8);
      if (iVar7 < 0x60000000) {
        piVar2 = (int *)(*(long *)(local_1a0[2] + 8) + (long)iVar7);
        if (*piVar2 < 1) goto LAB_023c379c;
        uVar12 = *(uint *)(((ulong)(uint)piVar2[1] & 0xfffffff) + *(long *)(local_1a0[2] + 8) + 4);
      }
      else {
        uVar12 = iVar7 + 0xa0000000;
        if (*(uint *)(local_1a8 + 0x80) <= uVar12) {
          uVar12 = 0;
        }
        lVar8 = *(long *)(local_1a8 + 0x88) + (ulong)uVar12 * 0x32;
        uVar12 = *(uint *)(lVar8 + (ulong)*(byte *)(lVar8 + 0x20));
      }
    }
    *(float *)(puVar15 + 0x252) = fVar20;
    *(float *)((long)puVar15 + 0x1294) = fVar22;
    *(byte *)((long)puVar15 + 0x12b4) = (byte)(uVar12 >> 0x1f);
    *(float *)(puVar15 + 0x253) = fVar19;
    *(undefined4 *)(puVar15 + 0x255) = 0;
    *(uint *)(puVar15 + 0x256) = uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU);
    *(uint *)((long)puVar15 + 0x12ac) = uVar12 & (int)uVar12 >> 0x1f;
    *(undefined1 *)((long)puVar15 + 0x12b5) = 1;
    *(undefined1 *)((long)puVar15 + 0x126c) = 0;
  }
  local_1c0 = local_1c0 & 0xffffffff00000000;
  local_198 = (undefined *)CONCAT44(local_198._4_4_,0x1e);
  if ((puVar15[0x227] == 0) ||
     (uVar10 = FUN_03850890(puVar15[0x227],0x1e,&local_1b8,0), (uVar10 & 1) == 0))
  goto LAB_023c39e4;
  uVar21 = 0x3f800000;
  if (local_1a0 == (long *)0x0) {
    uVar12 = 1;
  }
  else {
    if (*local_1a0 == 0) {
      local_85 = 0;
      local_188 = 3.58732e-43;
      local_190 = &local_184;
      local_184 = (float)((uint)local_184 & 0xffffff00);
      local_198 = PTR_DAT_04bb21f8 + 0x10;
      lVar8 = *(long *)(local_1a0[2] + 8);
      FUN_038d1270(&local_198,"%s.as",lVar8 + *(int *)(lVar8 + 0x24) + (long)*(int *)(lVar8 + 8));
      uVar12 = 0;
      if (local_1a0 == (long *)0x0) goto LAB_023c39bc;
LAB_023c38e8:
      lVar8 = *local_1a0;
    }
    else {
      iVar7 = *(int *)(*local_1a0 + 8);
      if (0x5fffffff < iVar7) {
        uVar12 = iVar7 + 0xa0000000;
        if (*(uint *)(local_1a8 + 0x80) <= uVar12) {
          uVar12 = 0;
        }
        lVar8 = *(long *)(local_1a8 + 0x88) + (ulong)uVar12 * 0x32;
        puVar14 = (uint *)(lVar8 + (ulong)*(byte *)(lVar8 + 0x20));
LAB_023c38e4:
        uVar12 = *puVar14;
        goto LAB_023c38e8;
      }
      piVar2 = (int *)(*(long *)(local_1a0[2] + 8) + (long)iVar7);
      if (0 < *piVar2) {
        puVar14 = (uint *)(((ulong)(uint)piVar2[1] & 0xfffffff) + *(long *)(local_1a0[2] + 8) + 4);
        goto LAB_023c38e4;
      }
      uVar12 = 0;
      lVar8 = *local_1a0;
    }
    if (lVar8 == 0) {
      local_85 = 0;
      local_188 = 3.58732e-43;
      local_190 = &local_184;
      local_184 = (float)((uint)local_184 & 0xffffff00);
      local_198 = PTR_DAT_04bb21f8 + 0x10;
      lVar8 = *(long *)(local_1a0[2] + 8);
      FUN_038d1270(&local_198,"%s.as",lVar8 + *(int *)(lVar8 + 0x24) + (long)*(int *)(lVar8 + 8));
      uVar21 = 0;
    }
    else {
      iVar7 = *(int *)(lVar8 + 8);
      if (iVar7 < 0x60000000) {
        uVar21 = 0;
        piVar2 = (int *)(*(long *)(local_1a0[2] + 8) + (long)iVar7);
        if (1 < *piVar2) {
          uVar21 = *(undefined4 *)
                    (((ulong)(uint)piVar2[2] & 0xfffffff) + *(long *)(local_1a0[2] + 8) + 4);
        }
      }
      else {
        uVar1 = iVar7 + 0xa0000000;
        if (*(uint *)(local_1a8 + 0x80) <= uVar1) {
          uVar1 = 0;
        }
        lVar8 = *(long *)(local_1a8 + 0x88) + (ulong)uVar1 * 0x32;
        uVar21 = *(undefined4 *)(lVar8 + (ulong)*(byte *)(lVar8 + 0x21));
      }
    }
  }
LAB_023c39bc:
  *(undefined4 *)(param_4 + 0x8d8) = 0;
  *(undefined1 *)(param_4 + 0x8e5) = 1;
  *(byte *)(param_4 + 0x8e4) = (byte)(uVar12 >> 0x1f);
  *(undefined4 *)(param_4 + 0x8e8) = uVar21;
  *(uint *)(param_4 + 0x8e0) = uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU);
  *(uint *)(param_4 + 0x8dc) = uVar12 & (int)uVar12 >> 0x1f;
LAB_023c39e4:
  if (*(char *)((long)puVar15 + 0x12b5) == '\0' && *(char *)(param_4 + 0x8e5) == '\0') {
    local_180 = 0;
    bStack_17f = 0;
    uStack_17e = 0;
    uStack_17c = 0;
    uStack_170 = 0;
    uStack_16f = 0;
    uStack_16e = 0x3f80;
    local_16c = 0x3f800000;
    local_178 = 0;
    uStack_176 = 0;
    uStack_172 = 0;
    local_168 = 0;
    local_164 = 0;
    uStack_15f = 0;
    local_15c = 0;
    local_1c0 = 0xfffe;
    FUN_0277d4ac(&local_1c0);
    local_190 = (float *)CONCAT44(fVar22,fVar20);
    local_198._4_4_ = (undefined4)((ulong)*(undefined8 *)(param_4 + 0x1900) >> 0x20);
    local_198._0_4_ = (undefined4)*(undefined8 *)(param_4 + 0x1900);
    local_184 = 1.0;
    bStack_174 = *(byte *)(param_4 + 0x1ee8);
    if (7 < bStack_174) {
      bStack_174 = 0xff;
    }
    uStack_173 = 1;
    local_188 = fVar19;
    FUN_0170d1d8(puVar15,&local_198);
  }
  else {
    uVar11 = FUN_0251e98c(1);
    local_198 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_198);
    local_198 = *(undefined **)(param_4 + 0x1900);
    fVar19 = (float)FUN_02366c70(uVar11,&local_198);
    fVar20 = *(float *)(param_4 + 0x8e8);
    if (*(char *)(param_4 + 0x8e5) == '\0') {
      fVar22 = 0.0;
      fVar20 = fVar20 * 0.0 + 1.0;
    }
    else {
      iVar7 = *(int *)(param_4 + 0x8e0);
      if ((*(int *)(param_4 + 0x8d8) < iVar7) && (iVar7 != 0)) {
        fVar18 = (float)*(int *)(param_4 + 0x8d8) / (float)iVar7;
        fVar17 = 1.0;
        if (fVar18 <= 1.0) {
          fVar17 = fVar18;
        }
        fVar22 = 0.0;
        if (0.0 <= fVar18) {
          fVar22 = fVar17;
        }
        fVar20 = (1.0 - fVar22) + fVar20 * fVar22;
      }
      else {
        fVar20 = fVar20 + 0.0;
        fVar22 = 1.0;
      }
    }
    local_16c = 0x3f800000;
    local_164 = 0;
    uStack_15f = 0x3f8000;
    bStack_174 = 0;
    uStack_173 = 0;
    uStack_172 = 0;
    uStack_171 = 0;
    uStack_170 = 0;
    uStack_16f = 0;
    uStack_17c = 0;
    local_178 = 0;
    uStack_176 = 0;
    local_168 = 0;
    local_12c = 0;
    local_128 = 0;
    fVar17 = (1.0 - fVar22) * 0.0;
    uStack_123 = 0;
    uStack_120 = 0;
    uStack_154 = _UNK_04102208;
    local_15c = (undefined5)_DAT_04102200;
    uStack_157 = (undefined3)((ulong)_DAT_04102200 >> 0x28);
    uStack_144 = _UNK_04102888;
    local_14c = _DAT_04102880;
    local_1c0 = 0xfffe;
    uStack_134 = _UNK_041023d8;
    local_13c = _DAT_041023d0;
    FUN_0277d4ac(&local_1c0);
    local_190 = (float *)CONCAT44(fVar20 * (fVar16 * fVar22 + fVar17),
                                  fVar20 * (fVar19 * fVar22 + fVar17));
    local_198._4_4_ = (undefined4)((ulong)*(undefined8 *)(param_4 + 0x1900) >> 0x20);
    bStack_17f = *(byte *)(param_4 + 0x1ee8);
    local_198._0_4_ = (undefined4)*(undefined8 *)(param_4 + 0x1900);
    if (7 < bStack_17f) {
      bStack_17f = 0xff;
    }
    local_180 = 1;
    uStack_170 = 1;
    local_188 = fVar20 * (param_3 * fVar22 + fVar17);
    local_184 = fVar20;
    FUN_0170d420(puVar15,&local_198);
    if (*(char *)(param_4 + 0x8e5) != '\0') {
      uVar21 = (**(code **)(*(long *)(param_4 + 0x8d0) + (ulong)*(byte *)(param_4 + 0x8e4) * 8))
                         (param_4 + 0x8d0);
      *(undefined4 *)(param_4 + 0x8d8) = uVar21;
    }
  }
  puVar15 = *(undefined8 **)(param_4 + 0x60);
  if (puVar15 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      puVar15 = &DAT_05240280;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar15 = &DAT_05240280;
    }
  }
  if (puVar15[0x227] == 0) {
    uVar12 = 0;
  }
  else {
    local_198._0_4_ = 1;
    uVar12 = *(uint *)(puVar15 + 0x2d3) >> 1 & 1;
  }
  uVar10 = FUN_0170a6d0(puVar15,uVar12);
  if ((uVar10 & 1) != 0) {
    local_1c0 = 0xfffe;
    FUN_0277d4ac(&local_1c0);
    local_1c0 = *(ulong *)(param_4 + 0x1900);
    if ((local_1c0 & 0xffff) != 0xfffe) {
      local_198._0_4_ = 0;
      FUN_02326c70(param_4 + 0x1ee8,&local_1c0,&local_198);
    }
    uVar10 = FUN_02546f34(param_4 + 0x1ee8,*(undefined4 *)(param_4 + 0x230));
    if ((uVar10 & 1) == 0) {
      local_190 = (float *)((ulong)local_190 & 0xffffffff00000000);
      local_198 = (undefined *)CONCAT35(local_198._5_3_,0x100000006);
      FUN_02374e74(param_4,&local_198);
    }
  }
  return;
}


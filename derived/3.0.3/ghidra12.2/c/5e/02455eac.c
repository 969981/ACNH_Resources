
/* WARNING: Removing unreachable block (ram,0x024563d8) */
/* WARNING: Removing unreachable block (ram,0x0245630c) */

void FUN_02455eac(long param_1)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  float *pfVar6;
  ulong uVar7;
  int iVar8;
  long *plVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float local_e0 [4];
  float local_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  undefined8 local_b0;
  float local_a8;
  float fStack_a4;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_7c [3];
  ulong local_70;
  float local_68;
  
  lVar5 = FUN_0251e98c(1);
  pfVar6 = (float *)(**(code **)(*(long *)(lVar5 + 0x1380) + 0xf0))(lVar5 + 0x1380);
  fVar11 = *pfVar6;
  fVar15 = (float)*(int *)(param_1 + 0x190e) * 0.001;
  fVar14 = (float)*(int *)(param_1 + 0x1914) * 0.001;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_a0 = 0;
    pfVar6 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(ushort *)(param_1 + 0x1918) >> 4) & 0xff0));
    lVar5 = *(long *)(param_1 + 0x68);
    fStack_a4 = *(float *)(lVar5 + 0x278);
    fVar12 = (float)((*(ushort *)(param_1 + 0x1918) & 0xff) << 0x10) * 5.9604645e-08;
    local_a8 = *pfVar6 + fVar12 * pfVar6[1];
    local_88 = pfVar6[2] + fVar12 * pfVar6[3];
    local_9c = 0x800000003f800000;
    local_8c = local_a8 * 0.0 + local_88 * 0.0;
    local_90 = local_88 * 0.0 * 0.0 - local_a8;
    fVar12 = (float)(int)*(short *)(param_1 + 0x1912) * 0.25;
    local_94 = *(undefined4 *)(lVar5 + 0x27c);
    local_84 = *(float *)(lVar5 + 0x280);
    local_b0 = CONCAT44(local_a8 * 0.0 - local_88 * 0.0,local_88 + local_a8 * 0.0 * 0.0);
    FUN_007535b4(local_e0,&local_b0);
    local_7c[1] = 0.0;
    puVar10 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar10 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_68 = *(float *)(puVar10 + 0x50);
    local_70 = puVar10[0x4f] & 0xffffffff;
    fStack_c4 = fStack_c4 + fVar12 * fStack_cc + fVar15 * local_d0 + fVar14 * local_c8;
    fStack_b4 = fStack_b4 + fVar12 * fStack_bc + fVar15 * local_c0 + fVar14 * local_b8;
    local_7c[0] = fStack_a4 +
                  fStack_c4 * local_b0._4_4_ + (float)local_b0 * 0.0 + fStack_b4 * local_a8;
    local_7c[2] = local_84 + fStack_c4 * local_8c + local_90 * 0.0 + fStack_b4 * local_88;
    FUN_03eb4b60(fVar11 * 0.6,0x41200000,0x3e4ccccc,&local_70,local_7c);
    fVar11 = local_68;
    uVar13 = (undefined4)local_70;
  }
  else {
    local_e0[1] = 0.0;
    puVar10 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar10 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_a8 = *(float *)(puVar10 + 0x50);
    local_b0 = puVar10[0x4f] & 0xffffffff;
    local_e0[0] = fVar15;
    local_e0[2] = fVar14;
    FUN_03eb4b60(fVar11 * 0.6,0x41200000,0x3e4ccccc,&local_b0,local_e0);
    fVar11 = local_a8;
    uVar13 = (float)local_b0;
  }
  *(undefined4 *)(puVar10 + 0x4f) = uVar13;
  *(float *)(puVar10 + 0x50) = fVar11;
  uVar2 = *(ushort *)(param_1 + 0x1918);
  lVar5 = FUN_0251e98c(1);
  pfVar6 = (float *)(**(code **)(*(long *)(lVar5 + 0x13b0) + 0xf0))(lVar5 + 0x13b0);
  fVar11 = *pfVar6;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_e0[0] = 1.4013e-44;
    local_b0 = CONCAT44(local_b0._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_0245620c;
  }
  iVar4 = (uint)uVar2 * 0x10000;
  plVar9 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar9 = *(long **)(param_1 + 0x4c8);
  }
  lVar5 = (**(code **)(*plVar9 + 0x148))();
  iVar8 = iVar4 - *(int *)(lVar5 + 4);
  if (0xb60b5e < iVar8 + 0x5b05afU) {
    iVar3 = 0x15555560;
    iVar4 = -0x15555560;
    iVar8 = (int)(fVar11 * 0.6 * (float)iVar8);
    if (iVar8 < 1) {
      iVar3 = -0x5b05b0;
    }
    else {
      iVar4 = 0x5b05b0;
    }
    iVar1 = iVar8;
    if (iVar3 <= iVar8) {
      iVar1 = iVar3;
    }
    if (iVar4 <= iVar8) {
      iVar4 = iVar1;
    }
    iVar4 = iVar4 + *(int *)(lVar5 + 4);
  }
  *(int *)(lVar5 + 4) = iVar4;
LAB_0245620c:
  FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
  (**(code **)(**(long **)(param_1 + 0x68) + 0x110))();
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != 0x3ee08254) {
    if (*(int *)(param_1 + 0x178) == 0) {
      puVar10 = *(undefined8 **)(param_1 + 0x60);
      if (puVar10 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar4 = __cxa_guard_acquire(&DAT_052461c0);
          puVar10 = &DAT_05240280;
          if (iVar4 != 0) {
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
        local_e0[0] = 0.0;
      }
      else {
        local_e0[0] = (float)(*(uint *)(puVar10 + 0x2d3) >> 1 & 1);
        local_b0 = CONCAT44(local_b0._4_4_,0x39);
        uVar7 = FUN_03850890(puVar10[0x227],0x39,0,local_e0[0]);
        if (((uVar7 & 1) != 0) && ((*(uint *)(param_1 + 0x17cc) >> 0x17 & 1) == 0)) {
          *(undefined8 *)(param_1 + 0x17f8) = 0;
          *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x800000;
          *(undefined2 *)(param_1 + 0x1804) = 0x100;
          *(undefined4 *)(param_1 + 0x1800) = 0x3c;
        }
      }
    }
    puVar10 = *(undefined8 **)(param_1 + 0x60);
    if (puVar10 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_052461c0);
        puVar10 = &DAT_05240280;
        if (iVar4 != 0) {
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
      local_e0[0] = 0.0;
      local_b0 = (ulong)(uint)local_b0._4_4_ << 0x20;
    }
    else {
      local_e0[0] = (float)(*(uint *)(puVar10 + 0x2d3) >> 1 & 1);
      local_b0 = CONCAT44(local_b0._4_4_,*(uint *)(puVar10 + 0x2d3) >> 1) & 0xffffffff00000001;
      uVar7 = FUN_03850368(puVar10[0x227],local_e0[0]);
      fVar11 = local_e0[0];
      if (((((uVar7 & 1) == 0) && (puVar10[0x227] != 0)) &&
          (uVar7 = FUN_03850368(puVar10[0x227],local_e0[0]), (uVar7 & 1) == 0)) &&
         (uVar7 = FUN_0384fca4(puVar10[0x227],fVar11), (uVar7 & 1) == 0)) {
        return;
      }
    }
    if ((*(int *)(param_1 + 0x178) == 0) && ((*(uint *)(param_1 + 0x17cc) >> 0x17 & 1) == 0)) {
      *(undefined8 *)(param_1 + 0x17f8) = 0;
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x800000;
      *(undefined2 *)(param_1 + 0x1804) = 0x100;
      *(undefined4 *)(param_1 + 0x1800) = 0x3c;
    }
    plVar9 = *(long **)(param_1 + 0x60);
    if (plVar9 == (long *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_052461c0);
        plVar9 = &DAT_05240280;
        if (iVar4 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        plVar9 = &DAT_05240280;
      }
    }
    (**(code **)(*plVar9 + 0x4e8))(plVar9,0);
  }
  return;
}


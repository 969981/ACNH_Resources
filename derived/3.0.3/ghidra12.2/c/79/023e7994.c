
/* WARNING: Removing unreachable block (ram,0x023e7c54) */
/* WARNING: Removing unreachable block (ram,0x023e7d30) */

void FUN_023e7994(long param_1)

{
  int iVar1;
  long *plVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  float *pfVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  byte local_80;
  undefined1 local_7f;
  float local_7c [3];
  
  cVar3 = *(char *)(param_1 + 0x190b);
  fVar16 = *(float *)(param_1 + 0x1901);
  fVar18 = *(float *)(param_1 + 0x1907);
  cVar4 = *(char *)(param_1 + 0x1900);
  lVar6 = FUN_0251e98c(1);
  pfVar7 = (float *)(**(code **)(*(long *)(lVar6 + 0x13b0) + 0xf0))(lVar6 + 0x13b0);
  iVar12 = *(int *)(param_1 + 0x18e5);
  fVar14 = *pfVar7;
  iVar13 = *(int *)(param_1 + 0x18eb);
  lVar6 = FUN_0251e98c(1);
  puVar8 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0x1380) + 0xf0))(lVar6 + 0x1380);
  local_7c[1] = 0.0;
  puVar10 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar10 = *(undefined8 **)(param_1 + 0x4c8);
  }
  local_88 = *(undefined4 *)(puVar10 + 0x50);
  local_90 = puVar10[0x4f] & 0xffffffff;
  local_7c[0] = (float)iVar12 * 0.001;
  local_7c[2] = (float)iVar13 * 0.001;
  FUN_03eb4b60(*puVar8,0x41200000,0x3e4ccccc,&local_90,local_7c);
  *(undefined4 *)(puVar10 + 0x4f) = (undefined4)local_90;
  *(undefined4 *)(puVar10 + 0x50) = local_88;
  iVar12 = FUN_006f0400(fVar16 - *(float *)(*(long *)(param_1 + 0x68) + 0x278),
                        fVar18 - *(float *)(*(long *)(param_1 + 0x68) + 0x280));
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) != 1) {
    iVar12 = (uint)*(ushort *)(param_1 + 0x18ef) << 0x10;
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    local_7c[0] = 1.4013e-44;
    local_90 = CONCAT44(local_90._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_023e7b4c;
    uVar19 = *(undefined4 *)(param_1 + 0x838);
    uVar17 = *(undefined4 *)(param_1 + 0x83c);
    uVar15 = *(undefined4 *)(param_1 + 0x840);
    uVar11 = *(undefined4 *)(param_1 + 0x844);
LAB_023e7bfc:
    puVar10 = *(undefined8 **)(param_1 + 0x60);
    if (puVar10 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar12 = __cxa_guard_acquire(&DAT_052461c0);
        puVar10 = &DAT_05240280;
        if (iVar12 != 0) {
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
      local_7c[0] = 0.0;
    }
    else {
      local_7c[0] = (float)(*(uint *)(puVar10 + 0x2d3) >> 1 & 1);
      local_90 = CONCAT44(local_90._4_4_,0x24);
      uVar9 = FUN_03850890(puVar10[0x227],0x24,0,local_7c[0]);
      if ((uVar9 & 1) != 0) {
        *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffffffe;
        uVar9 = FUN_02546f34((byte *)(param_1 + 0x1ee8),*(undefined4 *)(param_1 + 0x230));
        if ((uVar9 & 1) == 0) {
          local_88 = 0;
          local_90 = CONCAT35(local_90._5_3_,0x100000006);
          FUN_02374e74(param_1,&local_90);
        }
        local_80 = *(byte *)(param_1 + 0x1ee8);
        local_90 = CONCAT44(uVar17,uVar19);
        local_88 = uVar15;
        local_84 = uVar11;
        goto LAB_023e7de8;
      }
    }
  }
  else {
LAB_023e7b4c:
    plVar2 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x4c8);
    }
    lVar6 = (**(code **)(*plVar2 + 0x148))();
    iVar13 = iVar12 - *(int *)(lVar6 + 4);
    if (0xb60b5e < iVar13 + 0x5b05afU) {
      iVar5 = 0x15555560;
      iVar12 = -0x15555560;
      iVar13 = (int)(fVar14 * 0.65 * (float)iVar13);
      if (iVar13 < 1) {
        iVar5 = -0x5b05b0;
      }
      else {
        iVar12 = 0x5b05b0;
      }
      iVar1 = iVar13;
      if (iVar5 <= iVar13) {
        iVar1 = iVar5;
      }
      if (iVar12 <= iVar13) {
        iVar12 = iVar1;
      }
      iVar12 = iVar12 + *(int *)(lVar6 + 4);
    }
    *(int *)(lVar6 + 4) = iVar12;
    uVar19 = *(undefined4 *)(param_1 + 0x838);
    uVar17 = *(undefined4 *)(param_1 + 0x83c);
    uVar15 = *(undefined4 *)(param_1 + 0x840);
    uVar11 = *(undefined4 *)(param_1 + 0x844);
    if (*(int *)(param_1 + 0x178) == 0) goto LAB_023e7bfc;
  }
  puVar10 = *(undefined8 **)(param_1 + 0x60);
  if (puVar10 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar12 = __cxa_guard_acquire(&DAT_052461c0);
      puVar10 = &DAT_05240280;
      if (iVar12 != 0) {
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
    local_7c[0] = 0.0;
    local_90 = (ulong)local_90._4_4_ << 0x20;
  }
  else {
    local_7c[0] = (float)(*(uint *)(puVar10 + 0x2d3) >> 1 & 1);
    local_90 = CONCAT44(local_90._4_4_,*(uint *)(puVar10 + 0x2d3) >> 1) & 0xffffffff00000001;
    uVar9 = FUN_03850368(puVar10[0x227],local_7c[0]);
    fVar14 = local_7c[0];
    if (((((uVar9 & 1) == 0) && (puVar10[0x227] != 0)) &&
        (uVar9 = FUN_03850368(puVar10[0x227],local_7c[0]), (uVar9 & 1) == 0)) &&
       (uVar9 = FUN_0384fca4(puVar10[0x227],fVar14), (uVar9 & 1) == 0)) {
      return;
    }
  }
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  uVar9 = FUN_02546f34((byte *)(param_1 + 0x1ee8),*(undefined4 *)(param_1 + 0x230));
  if ((uVar9 & 1) == 0) {
    local_88 = 0;
    local_90 = CONCAT35(local_90._5_3_,0x100000006);
    FUN_02374e74(param_1,&local_90);
  }
  if ((cVar4 == '\0') || (*(int *)(param_1 + 0x178) != 0)) {
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
    FUN_023164ec(param_1,6);
    return;
  }
  local_90 = CONCAT44(uVar17,uVar19);
  local_80 = *(byte *)(param_1 + 0x1ee8);
  local_88 = uVar15;
  local_84 = uVar11;
LAB_023e7de8:
  if (7 < local_80) {
    local_80 = 0xff;
  }
  local_7f = cVar3 != '\0';
  FUN_023e77f8(&local_90);
  return;
}


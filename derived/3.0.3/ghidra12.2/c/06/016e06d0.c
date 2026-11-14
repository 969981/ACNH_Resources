
float FUN_016e06d0(float *param_1,undefined4 *param_2,ulong param_3,short *param_4,uint param_5)

{
  undefined4 *puVar1;
  short sVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  float *pfVar9;
  ulong uVar10;
  short *psVar11;
  undefined8 *puVar12;
  short sVar13;
  long lVar14;
  undefined8 *puVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined **local_a8;
  int local_a0;
  int local_9c;
  long local_98;
  undefined **local_90;
  undefined8 local_88;
  undefined4 local_48;
  int local_44;
  
  local_48 = 0;
  puVar1 = &local_48;
  if (param_2 != (undefined4 *)0x0) {
    puVar1 = param_2;
  }
  fVar16 = (float)FUN_016e80f0(param_1,puVar1,param_4);
  puVar3 = PTR_DAT_04bb2010;
  local_a8 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
  local_88 = 0;
  local_a0 = (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0);
  local_9c = (int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0);
  local_90 = local_a8;
  piVar8 = (int *)FUN_016e7980(&local_a8,&local_90,0,param_4);
  if ((short)*piVar8 == -2) goto LAB_016e0de4;
  lVar14 = *(long *)PTR_DAT_04bbbc68;
  if ((((((lVar14 != 0) && (*(long *)(lVar14 + 0xb0) != 0)) &&
        (*(long *)(*(long *)(lVar14 + 0xb0) + 8) != 0)) &&
       ((*(long *)(lVar14 + 0x488) != 0 && (*(long *)(*(long *)(lVar14 + 0x488) + 8) != 0)))) &&
      (*(long *)(lVar14 + 0x2b0) != 0)) && (*(long *)(*(long *)(lVar14 + 0x2b0) + 8) != 0)) {
    uVar5 = FUN_0277d6c4(piVar8);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar14 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      FUN_0124c030(&local_a8,piVar8);
      iVar6 = FUN_0277d6c4(piVar8);
      iVar7 = FUN_0277ebd0(piVar8);
      local_90 = (undefined **)CONCAT44(local_90._4_4_,iVar7);
      if (iVar7 == 1) {
LAB_016e08e8:
        *puVar1 = 7;
        if (iVar6 == 0xea79) {
          return fVar16;
        }
        fVar17 = 0.0;
        if ((local_98 != 0) &&
           (pfVar9 = (float *)FUN_01246470(local_98,0,0xc315945,*(undefined8 *)PTR_DAT_04bbbca8),
           pfVar9 != (float *)0x0)) {
          fVar17 = *pfVar9;
        }
        return fVar16 + fVar17;
      }
      if (iVar7 == 2) {
        if (((param_3 & 1) == 0) &&
           (fVar17 = *param_1, fVar18 = param_1[2], FUN_016e026c(0,param_1,0,0),
           fVar17 = ((float)(int)((int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0) &
                                 0xfffffffe) * 5.0 + 5.0) - *param_1,
           fVar18 = ((float)(int)((int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0) &
                                 0xfffffffe) * 5.0 + 5.0) - param_1[2],
           5.0 < SQRT(fVar18 * fVar18 + fVar17 * fVar17))) {
          return fVar16;
        }
        goto LAB_016e08e8;
      }
    }
  }
  puVar4 = PTR_DAT_04bb43c0;
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(piVar8);
  if (*(long *)puVar4 == 0) goto LAB_016e0de4;
  lVar14 = *(long *)(lVar14 + 0x57e58);
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
  if (((*(uint *)(lVar14 + 0x1d8) <= uVar5) ||
      (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) ||
     (uVar10 = FUN_0277e024(piVar8), (uVar10 & 1) != 0)) goto LAB_016e0de4;
  uVar10 = FUN_0277e294(piVar8);
  if ((uVar10 & 1) != 0) {
    lVar14 = *(long *)puVar4;
    local_a8 = &PTR_FUN_04a36b50;
    local_a0 = *piVar8;
    local_9c = piVar8[1];
    local_98 = 0;
    uVar5 = FUN_0277d6c4(&local_a0);
    if (*(long *)puVar4 != 0) {
      lVar14 = *(long *)(lVar14 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar14 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        lVar14 = *(long *)PTR_DAT_04bc0428;
        uVar5 = FUN_0277d6c4(piVar8);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if (uVar5 < *(uint *)(lVar14 + 0x1d8)) {
          lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8);
          if (lVar14 != 0) {
            local_98 = lVar14;
          }
        }
      }
    }
    uVar10 = FUN_01ae6020(&local_a8);
    if ((uVar10 & 1) == 0) {
      if (((param_5 & 1) != 0) && (uVar10 = FUN_016e8ee0(piVar8), (uVar10 & 1) != 0)) {
        fVar17 = (float)FUN_01ae8c70(&local_a8);
        fVar16 = fVar16 + fVar17;
        *puVar1 = 7;
      }
    }
    else {
      local_90 = (undefined **)(puVar3 + 0x10);
      sVar2 = *param_4;
      local_88 = CONCAT44((int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0),
                          (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0));
      if (DAT_05aed670 == 0) {
        puVar15 = &DAT_055c04a0;
      }
      else {
        puVar15 = &DAT_055c04a0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          puVar15 = (undefined8 *)
                    (**(code **)(*DAT_05aed668 + 0x18))
                              (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar6 = FUN_006bd550(*puVar15,0);
          puVar15 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar6 != 0x758f7eaf) {
            puVar15 = &DAT_055c04a0;
          }
        }
      }
      if (DAT_055c1b60 != &DAT_055c1b58) {
        sVar13 = 0;
        puVar12 = DAT_055c1b60;
        do {
          if (*(int *)(puVar12 + -1) == *(int *)(puVar15 + 7)) {
            if (sVar13 != -1) goto LAB_016e0b94;
            break;
          }
          puVar12 = (undefined8 *)puVar12[1];
          sVar13 = sVar13 + 1;
        } while (puVar12 != &DAT_055c1b58);
      }
      sVar13 = 0;
LAB_016e0b94:
      if ((sVar2 == sVar13) && ((char)param_4[1] == '\0')) {
LAB_016e0ba4:
        uVar10 = FUN_0097b830(&local_90);
      }
      else {
        local_44 = FUN_013837d0(*param_4);
        if (local_44 == 0) {
          if (sVar2 != sVar13) goto LAB_016e0bf0;
          goto LAB_016e0ba4;
        }
        uVar10 = FUN_0097bc40(local_44,&local_90);
      }
      if ((uVar10 & 1) != 0) {
        *puVar1 = 7;
        fVar18 = (float)FUN_01ae8c70(&local_a8);
        fVar17 = 5.0;
        if (fVar18 != 0.0) {
          fVar17 = fVar18;
        }
        fVar16 = fVar16 + fVar17;
      }
    }
  }
LAB_016e0bf0:
  local_a8 = (undefined **)(puVar3 + 0x10);
  local_88 = 0;
  local_a0 = (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0);
  local_9c = (int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0);
  local_90 = local_a8;
  psVar11 = (short *)FUN_016e7980(&local_a8,&local_90,1,param_4);
  if (*psVar11 == -2) goto LAB_016e0de4;
  lVar14 = *(long *)puVar4;
  uVar5 = FUN_0277d6c4();
  if (*(long *)puVar4 == 0) goto LAB_016e0de4;
  lVar14 = *(long *)(lVar14 + 0x57e58);
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
  if (((*(uint *)(lVar14 + 0x1d8) <= uVar5) ||
      (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) ||
     (uVar10 = FUN_0277e294(psVar11), (uVar10 & 1) == 0)) goto LAB_016e0de4;
  FUN_01ad5d04(&local_a8,psVar11);
  uVar10 = FUN_01ae6020(&local_a8);
  if ((uVar10 & 1) == 0) {
    if (((param_5 & 1) == 0) || (uVar10 = FUN_016e8ee0(psVar11), (uVar10 & 1) == 0))
    goto LAB_016e0de4;
  }
  else {
    local_90 = (undefined **)(puVar3 + 0x10);
    sVar2 = *param_4;
    local_88 = CONCAT44((int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0),
                        (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0));
    lVar14 = FUN_029156e0();
    if (DAT_055c1b60 != &DAT_055c1b58) {
      sVar13 = 0;
      puVar15 = DAT_055c1b60;
      do {
        if (*(int *)(puVar15 + -1) == *(int *)(lVar14 + 0x38)) {
          if (sVar13 != -1) goto LAB_016e0d90;
          break;
        }
        puVar15 = (undefined8 *)puVar15[1];
        sVar13 = sVar13 + 1;
      } while (puVar15 != &DAT_055c1b58);
    }
    sVar13 = 0;
LAB_016e0d90:
    if ((sVar2 == sVar13) && ((char)param_4[1] == '\0')) {
LAB_016e0da0:
      uVar10 = FUN_0097b830(&local_90);
    }
    else {
      local_44 = FUN_013837d0(*param_4);
      if (local_44 == 0) {
        if (sVar2 != sVar13) goto LAB_016e0de4;
        goto LAB_016e0da0;
      }
      uVar10 = FUN_0097bc40(local_44,&local_90);
    }
    if ((uVar10 & 1) == 0) goto LAB_016e0de4;
    *puVar1 = 7;
  }
  fVar17 = (float)FUN_01ae8c70(&local_a8);
  fVar16 = fVar16 + fVar17;
LAB_016e0de4:
  *puVar1 = 7;
  return fVar16;
}


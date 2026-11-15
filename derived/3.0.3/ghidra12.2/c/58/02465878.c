
undefined1 FUN_02465878(long param_1,float *param_2)

{
  uint uVar1;
  int *piVar2;
  float *pfVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  float *pfVar8;
  long lVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  undefined8 local_198;
  undefined8 uStack_190;
  long local_188;
  long *local_180;
  undefined *local_178;
  undefined1 *puStack_170;
  undefined4 local_168;
  undefined1 local_164 [255];
  undefined1 local_65;
  
  fVar11 = param_2[7];
  fVar12 = *param_2;
  uVar7 = FUN_02465514();
  if ((uVar7 & 1) == 0) {
LAB_0246599c:
    pfVar3 = (float *)PTR_DAT_04bc3038;
    pfVar8 = (float *)PTR_DAT_04bc3038;
    if (*(char *)(param_1 + 0x12f8) != '\0') {
      pfVar8 = (float *)(param_1 + 0xeec);
    }
    fVar11 = SQRT(pfVar8[1] * pfVar8[1] + *pfVar8 * *pfVar8);
    lVar9 = FUN_0251e98c(1);
    pfVar8 = (float *)(**(code **)(*(long *)(lVar9 + 0x120) + 0xf0))(lVar9 + 0x120);
    if (*pfVar8 <= fVar11) {
      lVar9 = FUN_0251e98c(1);
      pfVar8 = (float *)(**(code **)(*(long *)(lVar9 + 0x120) + 0xf0))(lVar9 + 0x120);
      fVar12 = *pfVar8;
      lVar9 = FUN_0251e98c(1);
      pfVar8 = (float *)(**(code **)(*(long *)(lVar9 + 0x120) + 0xf0))(lVar9 + 0x120);
      fVar12 = (fVar11 - *pfVar8) / (1.0 - fVar12);
      fVar11 = 0.9999;
      if (fVar12 <= 0.9999) {
        fVar11 = fVar12;
      }
      if ((0.0 <= fVar12) && (fVar11 != 0.0)) {
        lVar9 = *(long *)(*(long *)(param_1 + 0xf08) + 0x68);
        if (*(char *)(param_1 + 0x12f8) != '\0') {
          pfVar3 = (float *)(param_1 + 0xeec);
        }
        FUN_02569464(&local_178,pfVar3);
        fVar11 = param_2[8];
        puVar10 = &DAT_054e9a58;
        if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
          puVar10 = *(undefined8 **)(param_1 + 0x4c8);
        }
        iVar6 = *(int *)((long)puVar10 + 0x2b4) + ((int)local_178 - *(int *)(lVar9 + 0x2b4));
        *(int *)(param_1 + 0x1854) = iVar6;
        *(int *)(param_1 + 0x1858) = (int)(long)(fVar11 * 11930465.0);
        uVar1 = *(uint *)(param_1 + 0x17cc);
        *(uint *)(param_1 + 0x17cc) = uVar1 | 0x200000;
        if (iVar6 == *(int *)((long)puVar10 + 0x2b4)) {
          *(uint *)(param_1 + 0x17cc) = uVar1 & 0xffdfffff;
          return 3;
        }
        return 3;
      }
    }
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xffdfffff;
    puVar10 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar10 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar4 = *(undefined4 *)((long)puVar10 + 0x2b4);
    *(undefined4 *)(param_1 + 0x1858) = 0;
    *(undefined4 *)(param_1 + 0x1854) = uVar4;
    return 3;
  }
  puVar10 = *(undefined8 **)(param_1 + 0x60);
  local_188 = 0;
  local_180 = (long *)0x0;
  local_198 = 0;
  uStack_190 = 0;
  if (puVar10 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      puVar10 = &DAT_05240280;
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar10 = &DAT_05240280;
    }
  }
  local_178 = (undefined *)CONCAT44(local_178._4_4_,0x3a);
  if ((puVar10[0x227] == 0) ||
     (uVar7 = FUN_03850a90(puVar10[0x227],0x3a,&local_198,0), (uVar7 & 1) == 0)) goto LAB_0246599c;
  puVar10 = *(undefined8 **)(param_1 + 0x60);
  if (puVar10 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      puVar10 = &DAT_05240280;
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar10 = &DAT_05240280;
    }
  }
  local_178 = (undefined *)CONCAT44(local_178._4_4_,0x39);
  if ((puVar10[0x227] == 0) || (uVar7 = FUN_03850a90(puVar10[0x227],0x39,0,0), (uVar7 & 1) == 0))
  goto LAB_0246599c;
  if (local_180 == (long *)0x0) {
    return false;
  }
  if (*local_180 == 0) {
    local_65 = 0;
    local_168 = 0x100;
    puStack_170 = local_164;
    local_164[0] = 0;
    local_178 = PTR_DAT_04bb21f8 + 0x10;
    lVar9 = *(long *)(local_180[2] + 8);
    FUN_038d1270(&local_178,"%s.as",lVar9 + *(int *)(lVar9 + 0x24) + (long)*(int *)(lVar9 + 8));
  }
  else {
    iVar6 = *(int *)(*local_180 + 8);
    if (0x5fffffff < iVar6) {
      uVar1 = iVar6 + 0xa0000000;
      if (*(uint *)(local_188 + 0x80) <= uVar1) {
        uVar1 = 0;
      }
      lVar9 = *(long *)(local_188 + 0x88) + (ulong)uVar1 * 0x32;
      iVar6 = *(int *)(lVar9 + (ulong)*(byte *)(lVar9 + 0x20));
      goto LAB_02465bcc;
    }
    piVar2 = (int *)(*(long *)(local_180[2] + 8) + (long)iVar6);
    if (0 < *piVar2) {
      iVar6 = *(int *)(((ulong)(uint)piVar2[1] & 0xfffffff) + *(long *)(local_180[2] + 8) + 4);
      goto LAB_02465bcc;
    }
  }
  iVar6 = 0;
LAB_02465bcc:
  bVar5 = fVar11 * fVar12 <= *(float *)(param_1 + 0x1820);
  return (!bVar5 && iVar6 != 0) && (bVar5 || iVar6 != 1);
}


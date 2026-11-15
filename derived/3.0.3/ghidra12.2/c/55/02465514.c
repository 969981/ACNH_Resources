
undefined8 FUN_02465514(long param_1,float *param_2)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_178;
  undefined8 uStack_170;
  long local_168;
  long *local_160;
  undefined *local_158;
  undefined1 *puStack_150;
  undefined4 local_148;
  undefined1 local_144 [255];
  undefined1 local_45;
  
  puVar8 = *(undefined8 **)(param_1 + 0x60);
  local_168 = 0;
  local_160 = (long *)0x0;
  local_178 = 0;
  uStack_170 = 0;
  if (puVar8 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      puVar8 = &DAT_05240280;
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar8 = &DAT_05240280;
    }
  }
  local_158 = (undefined *)CONCAT44(local_158._4_4_,0x3a);
  if (puVar8[0x227] == 0) {
    return 0;
  }
  uVar3 = FUN_03850a90(puVar8[0x227],0x3a,&local_178,0);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  pfVar5 = (float *)PTR_DAT_04bc3038;
  if (*(char *)(param_1 + 0x12f8) != '\0') {
    pfVar5 = (float *)(param_1 + 0xeec);
  }
  fVar9 = *pfVar5;
  fVar11 = pfVar5[1];
  lVar4 = FUN_0251e98c(1);
  pfVar5 = (float *)(**(code **)(*(long *)(lVar4 + 0x120) + 0xf0))(lVar4 + 0x120);
  if (*pfVar5 <= SQRT(fVar11 * fVar11 + fVar9 * fVar9)) {
    lVar4 = FUN_0251e98c(1);
    (**(code **)(*(long *)(lVar4 + 0x120) + 0xf0))(lVar4 + 0x120);
    lVar4 = FUN_0251e98c(1);
    (**(code **)(*(long *)(lVar4 + 0x120) + 0xf0))(lVar4 + 0x120);
  }
  if (local_160 == (long *)0x0) {
    iVar2 = 1;
  }
  else if (*local_160 == 0) {
    local_45 = 0;
    local_148 = 0x100;
    puStack_150 = local_144;
    local_144[0] = 0;
    local_158 = PTR_DAT_04bb21f8 + 0x10;
    lVar4 = *(long *)(local_160[2] + 8);
    FUN_038d1270(&local_158,"%s.as",lVar4 + *(int *)(lVar4 + 0x24) + (long)*(int *)(lVar4 + 8));
LAB_024656f0:
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*local_160 + 8);
    if (iVar2 < 0x60000000) {
      piVar1 = (int *)(*(long *)(local_160[2] + 8) + (long)iVar2);
      if (*piVar1 < 1) goto LAB_024656f0;
      iVar2 = *(int *)(((ulong)(uint)piVar1[1] & 0xfffffff) + *(long *)(local_160[2] + 8) + 4);
    }
    else {
      uVar6 = iVar2 + 0xa0000000;
      if (*(uint *)(local_168 + 0x80) <= uVar6) {
        uVar6 = 0;
      }
      lVar4 = *(long *)(local_168 + 0x88) + (ulong)uVar6 * 0x32;
      iVar2 = *(int *)(lVar4 + (ulong)*(byte *)(lVar4 + 0x20));
    }
  }
  if (iVar2 == 2) {
    fVar9 = param_2[2];
    fVar11 = param_2[3];
LAB_0246571c:
    fVar12 = *(float *)(param_1 + 0x1820);
    *(float *)(param_1 + 0x1844) = fVar9;
    *(float *)(param_1 + 0x1848) = fVar11;
    uVar7 = *(uint *)(param_1 + 0x17cc);
    uVar6 = uVar7 | 0x80000;
    *(uint *)(param_1 + 0x17cc) = uVar6;
    fVar10 = fVar9;
    if (fVar12 != fVar9) goto LAB_02465794;
  }
  else {
    if (iVar2 == 1) {
      *(undefined4 *)(param_1 + 0x1848) = 0;
      fVar11 = 0.0;
      fVar12 = *(float *)(param_1 + 0x1820);
      uVar6 = *(uint *)(param_1 + 0x17cc) & 0xfff7ffff;
      *(uint *)(param_1 + 0x17cc) = uVar6;
      *(float *)(param_1 + 0x1844) = fVar12;
      fVar9 = fVar12;
      goto LAB_02465794;
    }
    if (iVar2 == 0) {
      fVar9 = *param_2;
      fVar11 = param_2[1];
      goto LAB_0246571c;
    }
    fVar12 = *(float *)(param_1 + 0x1820);
    fVar10 = 0.0;
    fVar11 = param_2[4];
    uVar7 = *(uint *)(param_1 + 0x17cc);
    uVar6 = uVar7 | 0x80000;
    *(undefined4 *)(param_1 + 0x1844) = 0;
    *(float *)(param_1 + 0x1848) = fVar11;
    *(uint *)(param_1 + 0x17cc) = uVar6;
    fVar9 = 0.0;
    if (fVar12 != 0.0) goto LAB_02465794;
  }
  uVar6 = uVar7 & 0xfff7ffff;
  *(uint *)(param_1 + 0x17cc) = uVar6;
  fVar9 = fVar10;
LAB_02465794:
  if (((*(uint *)(param_1 + 0x17d8) & 1) == 0) &&
     (*(uint *)(param_1 + 0x17d8) = *(uint *)(param_1 + 0x17d8) | 1, (uVar6 >> 0x13 & 1) != 0)) {
    if (fVar11 != 0.0) {
      if (fVar9 <= fVar12) {
        if (fVar9 < fVar12) {
          fVar11 = fVar12 - fVar11;
          fVar10 = fVar9;
          if (fVar11 <= fVar12 && fVar9 < fVar11) {
            fVar10 = fVar11;
          }
          *(float *)(param_1 + 0x1820) = fVar10;
          if (fVar11 <= fVar12 && fVar9 < fVar11) {
            return 1;
          }
        }
      }
      else {
        fVar11 = fVar11 + fVar12;
        fVar10 = fVar9;
        if (fVar12 <= fVar11 && fVar11 < fVar9) {
          fVar10 = fVar11;
        }
        *(float *)(param_1 + 0x1820) = fVar10;
        if (fVar12 <= fVar11 && fVar11 < fVar9) {
          return 1;
        }
      }
    }
    *(uint *)(param_1 + 0x17cc) = uVar6 & 0xfff7ffff;
  }
  return 1;
}


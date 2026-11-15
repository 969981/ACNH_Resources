
void FUN_02462ffc(long param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  byte bVar8;
  undefined4 uVar9;
  int iVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  float *pfVar15;
  uint uVar16;
  int iVar17;
  byte bVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_74;
  float fStack_70;
  float local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  long *local_50;
  undefined4 local_44;
  
  if (*(char *)(param_1 + 0xc9d) == '\0') {
    puVar12 = *(undefined8 **)(param_1 + 0x60);
    local_58 = 0;
    local_50 = (long *)0x0;
    local_68 = 0;
    local_60 = 0;
    if (puVar12 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar10 = __cxa_guard_acquire(&DAT_052461c0);
        puVar12 = &DAT_05240280;
        if (iVar10 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar12 = &DAT_05240280;
      }
    }
    local_74 = 0.0;
    local_44 = 0;
    if ((puVar12[0x227] != 0) &&
       (uVar11 = FUN_03850a90(puVar12[0x227],0,&local_68,0), (uVar11 & 1) != 0)) {
      if ((local_50 == (long *)0x0) || (lVar14 = *local_50, lVar14 == 0)) {
        uVar16 = 1;
      }
      else {
        fVar20 = *(float *)(lVar14 + 0x18);
        if (fVar20 < 0.0) {
          fVar20 = *(float *)(local_50[1] + 0xc);
        }
        uVar16 = (uint)(fVar20 - *(float *)(lVar14 + 0x14));
        if (uVar16 < 2) {
          uVar16 = 1;
        }
      }
      *(undefined4 *)(param_1 + 0xc90) = 0;
      *(undefined1 *)(param_1 + 0xc9d) = 1;
      *(byte *)(param_1 + 0xc9c) = (byte)(uVar16 >> 0x1f);
      *(uint *)(param_1 + 0xc98) = uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU);
      *(uint *)(param_1 + 0xc94) = uVar16 & (int)uVar16 >> 0x1f;
    }
    bVar7 = *(char *)(param_1 + 0xc9d) == '\0';
  }
  else {
    bVar7 = false;
  }
  fVar21 = (float)(int)*(short *)(param_1 + 0x1910) * 0.25;
  fVar20 = (float)*(int *)(param_1 + 0x190c) * 0.001;
  local_68 = CONCAT44(fVar21,fVar20);
  fVar22 = (float)*(int *)(param_1 + 0x1912) * 0.001;
  local_60 = CONCAT44(local_60._4_4_,fVar22);
  if (bVar7) {
    bVar18 = 1;
    puVar12 = *(undefined8 **)(param_1 + 0x60);
    goto joined_r0x02463354;
  }
  uVar16 = *(int *)(param_1 + 0xc98) - *(int *)(param_1 + 0xc90);
  uVar4 = *(ushort *)(param_1 + 0x1916);
  if (uVar16 == 0) {
    plVar13 = *(long **)(param_1 + 0x68);
    pfVar15 = (float *)&local_68;
  }
  else {
    plVar13 = *(long **)(param_1 + 0x68);
    pfVar15 = &local_74;
    fVar23 = 1.0 / (float)uVar16;
    local_74 = *(float *)(plVar13 + 0x4f) + fVar23 * (fVar20 - *(float *)(plVar13 + 0x4f));
    fStack_70 = *(float *)((long)plVar13 + 0x27c) +
                fVar23 * (fVar21 - *(float *)((long)plVar13 + 0x27c));
    local_6c = *(float *)(plVar13 + 0x50) + fVar23 * (fVar22 - *(float *)(plVar13 + 0x50));
  }
  (**(code **)(*plVar13 + 0x100))(plVar13,pfVar15);
  cVar3 = *(char *)(param_1 + 0xc9d);
  iVar10 = *(int *)(param_1 + 0xc90);
  iVar2 = *(int *)(param_1 + 0xc98);
  if (cVar3 != '\0') {
    uVar9 = (**(code **)(*(long *)(param_1 + 0xc88) + (ulong)*(byte *)(param_1 + 0xc9c) * 8))
                      (param_1 + 0xc88);
    *(undefined4 *)(param_1 + 0xc90) = uVar9;
  }
  lVar14 = FUN_0251e98c(1);
  pfVar15 = (float *)(**(code **)(*(long *)(lVar14 + 0x13b0) + 0xf0))(lVar14 + 0x13b0);
  fVar20 = *pfVar15;
  lVar14 = FUN_0251e98c(1);
  pfVar15 = (float *)(**(code **)(*(long *)(lVar14 + 0x2c50) + 0xf0))(lVar14 + 0x2c50);
  fVar21 = *pfVar15;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_44 = 10;
    local_74 = 1.4013e-44;
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_02463294;
    bVar7 = true;
  }
  else {
LAB_02463294:
    iVar5 = (uint)uVar4 * 0x10000;
    plVar13 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar13 = *(long **)(param_1 + 0x4c8);
    }
    lVar14 = (**(code **)(*plVar13 + 0x148))();
    iVar17 = iVar5 - *(int *)(lVar14 + 4);
    if (iVar17 + 0x5b05afU < 0xb60b5f) {
      bVar7 = true;
      iVar19 = iVar5;
    }
    else {
      iVar6 = 0x15555560;
      iVar19 = -0x15555560;
      iVar17 = (int)(fVar20 * fVar21 * 0.9 * (float)iVar17);
      if (iVar17 < 1) {
        iVar6 = -0x5b05b0;
      }
      else {
        iVar19 = 0x5b05b0;
      }
      iVar1 = iVar17;
      if (iVar6 <= iVar17) {
        iVar1 = iVar6;
      }
      if (iVar19 <= iVar17) {
        iVar19 = iVar1;
      }
      iVar19 = iVar19 + *(int *)(lVar14 + 4);
      bVar7 = iVar19 == iVar5;
    }
    *(int *)(lVar14 + 4) = iVar19;
  }
  bVar18 = (cVar3 != '\0' && iVar2 <= iVar10) & bVar7;
  puVar12 = *(undefined8 **)(param_1 + 0x60);
joined_r0x02463354:
  if (puVar12 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_052461c0), iVar10 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar12 = &DAT_05240280;
    }
    else {
      puVar12 = &DAT_05240280;
    }
  }
  bVar8 = FUN_0170a6d0(puVar12,0);
  if ((bVar18 & bVar8) == 1) {
    if (*(int *)(param_1 + 0x178) == 0) {
      FUN_0236a88c(param_1,6,1,0);
    }
    else {
      FUN_0231b104(param_1,6);
    }
  }
  return;
}


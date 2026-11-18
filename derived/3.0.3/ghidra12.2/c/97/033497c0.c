
void FUN_033497c0(undefined1 param_1 [16],undefined1 param_2 [16],long param_3,long *param_4)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long lVar11;
  float fVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_78;
  undefined *local_70;
  char *local_68;
  
  uVar14 = param_2._2_2_;
  uVar13 = param_2._0_2_;
  lVar8 = FUN_0037e610(param_4,"AdjustToTextOn");
  puVar9 = PTR_DAT_04bc8e68;
  if (lVar8 == 0) {
    return;
  }
  if (*(char *)(lVar8 + 10) != '\0') {
    return;
  }
  uVar2 = *(uint *)(lVar8 + 4);
  lVar11 = *(long *)(*(long *)(param_3 + 0x2f8) + 0xf0);
  local_68 = PTR_DAT_04bb2120;
  if (*(char **)(PTR_PTR_04bb2238 + 8) != (char *)0x0) {
    local_68 = *(char **)(PTR_PTR_04bb2238 + 8);
  }
  if (*local_68 != '\0') {
    local_70 = PTR_DAT_04bc8e68 + 0x10;
    lVar11 = FUN_032cb8e0(&local_78,&local_70);
    lVar11 = *(long *)(lVar11 + 0xe8);
  }
  local_78 = *(undefined8 *)(lVar11 + 0x18);
  local_70 = puVar9 + 0x10;
  local_68 = (char *)(lVar8 + (ulong)uVar2);
  puVar9 = (undefined *)FUN_0328b6d0(&local_78,&local_70,0);
  if (puVar9 == (undefined *)0x0) {
    fVar16 = 0.0;
    fVar12 = 0.0;
  }
  else {
    local_70 = puVar9;
    fVar12 = (float)FUN_032d8eb8(&local_70);
    fVar16 = 0.0;
    if (0.0 <= fVar12) {
      fVar16 = fVar12;
    }
    fVar12 = 0.0;
    if (0.0 <= (float)CONCAT22(uVar14,uVar13)) {
      fVar12 = (float)CONCAT22(uVar14,uVar13);
    }
  }
  lVar8 = FUN_0037e610(param_4,"AdjustToTextMargin");
  if (lVar8 == 0) {
    lVar8 = FUN_0037e610(param_4,"AdjustToTextMarginRatio");
    fVar17 = 0.0;
    if (lVar8 == 0) {
      bVar5 = false;
      fVar18 = 0.0;
    }
    else {
      pfVar1 = (float *)(lVar8 + (ulong)*(uint *)(lVar8 + 4));
      fVar18 = fVar16 * *pfVar1;
      if (*(ushort *)(lVar8 + 8) < 2) goto LAB_03349928;
      bVar5 = false;
      fVar17 = fVar12 * pfVar1[1];
    }
  }
  else {
    pfVar1 = (float *)(lVar8 + (ulong)*(uint *)(lVar8 + 4));
    fVar18 = *pfVar1;
    if (*(ushort *)(lVar8 + 8) < 2) {
LAB_03349928:
      fVar17 = 0.0;
      bVar5 = true;
    }
    else {
      fVar17 = pfVar1[1];
      bVar5 = false;
    }
  }
  puVar9 = PTR_DAT_04bc9540;
  if (((*PTR_DAT_04bc9548 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc9548), puVar6 = PTR_DAT_04bc8f30, iVar7 != 0)) {
    if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar7 != 0)) {
      *(undefined8 *)puVar6 = 0;
      __cxa_guard_release(PTR_DAT_04bc8f38);
    }
    *(undefined **)puVar9 = puVar6;
    __cxa_guard_release(PTR_DAT_04bc9548);
  }
  puVar10 = (undefined8 *)(**(code **)(*param_4 + 0x10))(param_4);
  if (puVar10 != (undefined8 *)puVar9) {
    do {
      puVar10 = (undefined8 *)*puVar10;
    } while (puVar10 != (undefined8 *)puVar9 && puVar10 != (undefined8 *)0x0);
    if (puVar10 == (undefined8 *)0x0) {
      fVar15 = 0.0;
      fVar19 = 0.0;
      goto LAB_033499c8;
    }
  }
  fVar3 = (float)NEON_ucvtf((uint)*(ushort *)((long)param_4 + 0xda));
  fVar4 = (float)NEON_ucvtf((uint)*(ushort *)((long)param_4 + 0xdc));
  fVar15 = (float)NEON_ucvtf((uint)*(ushort *)((long)param_4 + 0xde));
  fVar19 = (float)NEON_ucvtf((uint)*(ushort *)(param_4 + 0x1c));
  fVar15 = fVar15 + fVar19;
  fVar19 = fVar4;
  if ((char)param_4[0x21] != '\x02') {
    fVar19 = fVar3;
  }
  fVar19 = fVar19 + fVar4;
LAB_033499c8:
  lVar8 = FUN_0037e610(param_4,"AdjustToTextMinSize");
  if ((lVar8 != 0) && (*(short *)(lVar8 + 8) != 0)) {
    pfVar1 = (float *)(lVar8 + (ulong)*(uint *)(lVar8 + 4));
    fVar3 = *pfVar1;
    if (fVar19 <= fVar3) {
      fVar19 = fVar3;
    }
    if ((*(short *)(lVar8 + 8) != 1) && (fVar3 = pfVar1[1], fVar15 <= fVar3)) {
      fVar15 = fVar3;
    }
  }
  fVar16 = fVar16 + fVar18 * 2.0;
  if (fVar16 <= fVar19) {
    fVar16 = fVar19;
  }
  if (bVar5) {
    fVar12 = *(float *)((long)param_4 + 0x54);
  }
  else {
    fVar12 = fVar12 + fVar17 * 2.0;
    if (fVar12 <= fVar15) {
      fVar12 = fVar15;
    }
  }
  *(float *)(param_4 + 10) = fVar16;
  *(float *)((long)param_4 + 0x54) = fVar12;
  *(byte *)(param_4 + 0xb) = *(byte *)(param_4 + 0xb) | 0x10;
  return;
}


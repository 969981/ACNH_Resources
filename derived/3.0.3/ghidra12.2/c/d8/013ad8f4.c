
void FUN_013ad8f4(long param_1)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  long lVar4;
  byte bVar5;
  undefined *puVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  char local_9c [4];
  char local_98 [4];
  float local_94;
  undefined4 uStack_90;
  float local_8c;
  undefined4 local_88;
  undefined4 local_84;
  
  local_98[0] = '\0';
  local_9c[0] = '\0';
  FUN_013b7618(param_1,local_9c,local_98);
  cVar8 = local_98[0];
  cVar7 = local_9c[0];
  puVar6 = PTR_DAT_04bb27c0;
  lVar12 = **(long **)PTR_DAT_04bb27d0;
  bVar5 = *(byte *)(lVar12 + 0x473);
  if ((long)(char)bVar5 != 0xffffffffffffffff) {
    pbVar1 = (byte *)(lVar12 + 0x48);
    uVar13 = (long)(char)bVar5 & 0xffffffff;
    pbVar3 = pbVar1 + uVar13 * 0x80;
    if (7 < bVar5) {
      pbVar3 = pbVar1;
    }
    if ((*pbVar3 >> 3 & 1) != 0) {
      lVar12 = (*(long **)PTR_DAT_04bb27d0)[2] + 0x108;
      lVar4 = lVar12 + uVar13 * 0xc;
      if (0xb < bVar5) {
        lVar4 = lVar12;
      }
      if (*(char *)(lVar4 + 10) == '\0') goto LAB_013adba8;
    }
  }
  lVar12 = *(long *)PTR_DAT_04bb27c0;
  if (lVar12 == 0) goto LAB_013adba8;
  uVar15 = *(uint *)(*(long *)(param_1 + 0x48) + 0x230);
  if ((((uVar15 == 0) ||
       (plVar14 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                            ((ulong)(uVar15 >> 0x11) & 0x7ff8)), plVar14 == (long *)0x0)) ||
      ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar14 + 0x46) != uVar15)) {
    plVar14 = (long *)0x0;
  }
  if (*(int *)(lVar12 + 0x288) == 1 || *(int *)(lVar12 + 0x288) == -1) {
    plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar12 = *(long *)puVar6;
    iVar9 = (**(code **)(*plVar10 + 0x60))();
    if (iVar9 < 0x11) {
      uVar15 = 1;
    }
    else {
      if (4 < *(uint *)(lVar12 + 0x5e8)) goto LAB_013ada40;
      uVar15 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_013ada40:
    uVar15 = 0;
  }
  if (plVar14 == (long *)0x0) goto LAB_013adba8;
  lVar12 = plVar14[0x2a];
  if (((*PTR_DAT_04bbc7b8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bbc7b8), iVar9 != 0))
  {
    *(undefined **)PTR_DAT_04bbc7b0 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbc7b8);
  }
  uVar13 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bbc7b0);
  uVar2 = 0;
  if ((int)lVar12 == 1) {
    uVar2 = uVar15;
  }
  if ((((uVar13 & 1) == 0) || (uVar2 == 0)) || (lVar12 = *(long *)puVar6, lVar12 == 0))
  goto LAB_013adba8;
  uVar15 = *(uint *)PTR_DAT_04bbc7c0;
  if ((((uVar15 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                            ((ulong)(uVar15 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
      ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar15)) {
    plVar10 = (long *)0x0;
  }
  if ((*(int *)(lVar12 + 0x288) == 1) || (*(int *)(lVar12 + 0x288) == -1)) {
    plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar12 = *(long *)puVar6;
    iVar9 = (**(code **)(*plVar11 + 0x60))();
    if (iVar9 < 0x11) {
      uVar15 = 1;
    }
    else {
      if (4 < *(uint *)(lVar12 + 0x5e8)) goto LAB_013adb3c;
      uVar15 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_013adb3c:
    uVar15 = 0;
  }
  if (plVar10 != (long *)0x0) {
    lVar12 = plVar10[0x2a];
    if (((*PTR_DAT_04bbc7a8 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04bbc7a8), iVar9 != 0)) {
      *(undefined **)PTR_DAT_04bbc7a0 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbc7a8);
    }
    uVar13 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bbc7a0);
    uVar2 = 0;
    if ((int)lVar12 == 1) {
      uVar2 = uVar15;
    }
    if ((((uVar13 & 1) != 0) && (uVar2 != 0)) && (plVar10[0x5e] != 0)) {
      FUN_013cf760(0x41480000,plVar10[0x5e],param_1 + 0x38c,(int)plVar14[0x54]);
    }
  }
LAB_013adba8:
  if ((cVar8 == '\0') || (cVar7 == '\0')) {
    if ((cVar8 != '\0') && (cVar7 == '\0')) {
      FUN_013b7c20(param_1);
    }
  }
  else {
    FUN_013b795c(param_1);
  }
  uVar20 = 0x3f800000;
  uVar21 = *(undefined4 *)(param_1 + 0x3c8);
  *(float *)(param_1 + 0x43c) = *(float *)(param_1 + 0x43c) + 1.0;
  fVar16 = *(float *)(param_1 + 0x44c) + 20.0;
  *(float *)(param_1 + 0x44c) = fVar16;
  fVar22 = *(float *)(param_1 + 0x408) - *(float *)(param_1 + 0x3fc);
  fVar23 = *(float *)(param_1 + 0x410) - *(float *)(param_1 + 0x404);
  fVar16 = cosf(fVar16 * 0.017453292);
  fVar17 = sinf(*(float *)(param_1 + 0x44c) * 0.017453292);
  fVar18 = sinf(*(float *)(param_1 + 0x44c) * 0.017453292);
  fVar19 = cosf(*(float *)(param_1 + 0x44c) * 0.017453292);
  local_94 = (fVar22 * fVar16 - fVar23 * fVar17) + *(float *)(param_1 + 0x3fc);
  plVar14 = *(long **)(*(long *)(param_1 + 0x48) + 0x68);
  local_8c = *(float *)(param_1 + 0x404) + fVar22 * fVar18 + fVar23 * fVar19;
  uStack_90 = uVar21;
  local_84 = FUN_006f0400(local_94 - *(float *)(param_1 + 0x38c),
                          local_8c - *(float *)(param_1 + 0x394));
  (**(code **)(*plVar14 + 0x160))(plVar14,&local_84);
  plVar14 = *(long **)(*(long *)(param_1 + 0x48) + 0x68);
  (**(code **)(*plVar14 + 0x100))(plVar14,&local_94);
  *(ulong *)(param_1 + 0x38c) = CONCAT44(uStack_90,local_94);
  *(float *)(param_1 + 0x394) = local_8c;
  lVar12 = *(long *)(*(long *)(*(long *)(param_1 + 0x48) + 0x60) + 0x1138);
  if (lVar12 != 0) {
    uVar20 = *(undefined4 *)(lVar12 + 0xa8);
  }
  *(undefined4 *)(param_1 + 0x35c) = uVar20;
  FUN_013b92b8(param_1,8);
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x48) + 0x60) + 0x1138) != 0) {
    FUN_03850760(*(undefined4 *)(param_1 + 0x35c));
  }
  if (*(float *)(param_1 + 0x440) < *(float *)(param_1 + 0x43c)) {
    *(byte *)(param_1 + 0x300) = *(byte *)(param_1 + 0x300) | 0x20;
    local_84 = 5;
    local_88 = 0;
    FUN_013b7618(param_1,&local_84,&local_88);
    if ((char)local_88 != '\0') {
      uVar13 = FUN_013b77f4(param_1);
      if ((uVar13 & 1) == 0) {
        return;
      }
      FUN_013b795c(param_1);
    }
    if (*(int *)(param_1 + 0x280) != 0xb) {
      FUN_03ebb160(param_1 + 0x278,0xb);
    }
  }
  return;
}



void FUN_014ef5a8(long param_1,long param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined *local_a8;
  int local_a0;
  int iStack_9c;
  undefined *local_98;
  undefined8 local_90;
  float local_88;
  int local_84;
  int iStack_80;
  int local_78 [2];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58;
  uint local_24;
  
  puVar4 = PTR_DAT_04bb2010;
  local_84 = *(int *)(param_3 + 0x14);
  iStack_80 = *(int *)(param_3 + 0x18);
  local_90 = *(undefined8 *)(param_3 + 8);
  local_88 = *(float *)(param_3 + 0x10);
  local_98 = PTR_DAT_04bbbc20 + 0x10;
  lVar8 = param_1;
  if (*(char *)(param_1 + 0x74) != '\0') {
    local_58 = 0;
    local_70 = PTR_DAT_04bb2010 + 0x10;
    local_68 = 0;
    lVar8 = FUN_014edb38(param_1,local_78,param_1 + 0x20);
    fVar13 = -2.5;
    if ((((int)local_58 - (int)local_68) + 1U & 1) != 0) {
      fVar13 = 0.0;
    }
    fVar12 = -2.5;
    if (((local_58._4_4_ - local_68._4_4_) + 1U & 1) != 0) {
      fVar12 = 0.0;
    }
    fVar14 = fVar13 + *(float *)(param_1 + 0x28);
    fVar15 = fVar12 + *(float *)(param_1 + 0x30);
    fVar13 = *(float *)(param_3 + 8) + fVar13;
    iVar6 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
    fVar12 = *(float *)(param_3 + 0x10) + fVar12;
    iVar2 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
    iVar3 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
    uVar11 = iVar3 - iVar6 & 1;
    uVar1 = -uVar11;
    if (iVar6 <= iVar3) {
      uVar1 = uVar11;
    }
    fVar13 = -1.0;
    if (iVar3 - iVar6 == 0 || iVar3 < iVar6) {
      fVar13 = 1.0;
    }
    iVar6 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
    uVar11 = iVar6 - iVar2 & 1;
    fVar12 = -1.0;
    if (iVar6 - iVar2 == 0 || iVar6 < iVar2) {
      fVar12 = 1.0;
    }
    local_90 = CONCAT44(*(undefined4 *)(param_3 + 0xc),
                        *(float *)(param_3 + 8) + (float)(int)uVar1 * 5.0 * fVar13);
    uVar1 = -uVar11;
    if (iVar2 <= iVar6) {
      uVar1 = uVar11;
    }
    local_88 = *(float *)(param_3 + 0x10) + (float)(int)((float)(int)uVar1 * 5.0) * fVar12;
  }
  puVar5 = PTR_DAT_04bb27c0;
  local_a8 = puVar4 + 0x10;
  local_a0 = 0;
  iStack_9c = 0;
  if (*(int *)(param_1 + 0x18) == 1) {
    lVar8 = *(long *)PTR_DAT_04bb27c0;
    if (lVar8 == 0) goto LAB_014ef994;
    uVar11 = *(uint *)(param_1 + 0x8c);
    if ((((uVar11 == 0) ||
         (plVar10 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                              ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
        ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar11)) {
      plVar10 = (long *)0x0;
    }
    if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
      plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar8 = *(long *)puVar5;
      iVar6 = (**(code **)(*plVar9 + 0x60))();
      if (iVar6 < 0x11) {
        uVar11 = 1;
      }
      else {
        if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_014ef87c;
        uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_014ef87c:
      uVar11 = 0;
    }
    if (plVar10 == (long *)0x0) goto LAB_014ef994;
    lVar8 = plVar10[0x2a];
    uVar1 = *(uint *)(plVar10 + 0x49);
    if (((*PTR_DAT_04bb5928 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5928);
    }
    uVar7 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb5920);
    fVar13 = local_88;
    if ((((int)lVar8 != 1) || ((uVar7 & uVar11) == 0)) || ((uVar1 >> 4 & 1) == 0))
    goto LAB_014ef994;
    fVar12 = (float)local_90;
    local_78[0] = iStack_80;
    local_24 = local_84 + 0x20000000U >> 0x1e;
    if (iStack_80 - 2U < 4) {
      local_24 = 0;
    }
    FUN_01473944(local_78,plVar10);
    iVar6 = (int)local_70;
    if ((local_24 & 0x80000001) != 1) {
      iVar6 = local_70._4_4_;
      local_70._4_4_ = (int)local_70;
    }
    fVar12 = fVar12 - ((float)local_70._4_4_ * 0.5 * 5.0 + -2.5);
    fVar13 = fVar13 - ((float)iVar6 * 0.5 * 5.0 + -2.5);
  }
  else {
    if (*(int *)(param_1 + 0x98) != 0) {
      plVar10 = (long *)FUN_014ba988(param_1 + 0x90);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0xd0))(plVar10,&local_a8,&local_98);
      }
      goto LAB_014ef994;
    }
    if ((*(int *)(param_1 + 0x18) != 3) ||
       (lVar8 = FUN_014e7558(lVar8,*(undefined4 *)(param_1 + 0x8c)), lVar8 == 0)) goto LAB_014ef994;
    fVar12 = (float)local_90 + -2.5;
    fVar13 = local_88 + -2.5;
  }
  local_a0 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
  iStack_9c = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
LAB_014ef994:
  *(int *)(param_2 + 8) = local_a0;
  *(int *)(param_2 + 0xc) = iStack_9c;
  return;
}


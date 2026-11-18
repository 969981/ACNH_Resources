
void FUN_033bf898(long param_1,undefined4 param_2,float *param_3)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  long *plVar13;
  float fVar14;
  float __x;
  int local_44;
  float local_38;
  float local_34;
  
  if (*(int *)(param_1 + 0x70) != 3 || *(int *)(param_1 + 0x6c) == 0) {
    return;
  }
  __x = *param_3;
  fVar14 = param_3[1];
  bVar4 = false;
  bVar5 = true;
  if (-1.1920929e-07 <= __x) {
    bVar4 = false;
    bVar5 = true;
    if (!NAN(__x)) {
      bVar4 = __x == 1.1920929e-07;
      bVar5 = 1.1920929e-07 <= __x;
    }
  }
  bVar3 = true;
  bVar6 = false;
  if (!bVar5 || bVar4) {
    bVar3 = false;
    bVar6 = true;
    if (!NAN(fVar14)) {
      bVar3 = fVar14 < -1.1920929e-07;
      bVar6 = false;
    }
  }
  bVar4 = false;
  bVar5 = true;
  if (bVar3 == bVar6) {
    bVar4 = false;
    bVar5 = true;
    if (!NAN(fVar14)) {
      bVar4 = fVar14 == 1.1920929e-07;
      bVar5 = 1.1920929e-07 <= fVar14;
    }
  }
  if (!bVar5 || bVar4) {
    *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
    return;
  }
  local_34 = atan2f(fVar14,__x);
  fVar14 = local_34 * 0.15915494;
  uVar11 = 0;
  if (fVar14 != (float)(int)fVar14) {
    uVar11 = (uint)(fVar14 < 0.0);
  }
  local_34 = local_34 + (float)(int)((int)fVar14 - uVar11) * -6.2831855;
  bVar4 = false;
  bVar5 = false;
  if (local_34 < 6.2831855) {
    bVar4 = false;
    bVar5 = true;
    if (!NAN(local_34)) {
      bVar4 = local_34 == 0.0;
      bVar5 = 0.0 <= local_34;
    }
  }
  if (!bVar5 || bVar4) {
    local_34 = 0.0;
  }
  local_38 = SQRT(param_3[1] * param_3[1] + *param_3 * *param_3);
  iVar7 = FUN_03858470(param_1 + 0xb8,&local_34,&local_38);
  puVar2 = PTR_DAT_04bb27c0;
  if (iVar7 == 2) {
    fVar14 = 10.0;
  }
  else {
    if (iVar7 != 3) {
      return;
    }
    fVar14 = -10.0;
  }
  lVar10 = *(long *)PTR_DAT_04bb27c0;
  if (lVar10 == 0) {
    return;
  }
  uVar11 = *(uint *)(param_1 + 0x6c);
  if ((((uVar11 == 0) ||
       (plVar13 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                            ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar13 == (long *)0x0)) ||
      ((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar13 + 0x46) != uVar11)) {
    plVar13 = (long *)0x0;
  }
  if ((*(int *)(lVar10 + 0x288) == 1) || (*(int *)(lVar10 + 0x288) == -1)) {
    plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)puVar2;
    iVar7 = (**(code **)(*plVar8 + 0x60))();
    if (iVar7 < 0x11) {
      uVar11 = 1;
      goto joined_r0x033bfa64;
    }
    if (*(uint *)(lVar10 + 0x5e8) < 5) {
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x033bfa64;
    }
  }
  uVar11 = 0;
joined_r0x033bfa64:
  if (plVar13 != (long *)0x0) {
    lVar10 = plVar13[0x2a];
    if (((*PTR_DAT_04bc99b8 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc99b8), iVar7 != 0)) {
      *(undefined **)PTR_DAT_04bc99b0 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc99b8);
    }
    uVar9 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bc99b0);
    uVar1 = 0;
    if ((int)lVar10 == 1) {
      uVar1 = uVar11;
    }
    if (((uVar9 & 1) != 0) && (uVar1 != 0)) {
      FUN_0368db20(&local_34,plVar13,param_2);
      iVar12 = (int)fVar14;
      iVar7 = -iVar12;
      if (-1 < iVar12) {
        iVar7 = iVar12;
      }
      iVar7 = (int)(long)((float)iVar7 * 11930465.0);
      local_44 = -iVar7;
      if (0.0 <= fVar14) {
        local_44 = iVar7;
      }
      local_44 = (int)local_34 + local_44;
      FUN_0368dcb8(plVar13,param_2,&local_44);
    }
  }
  return;
}


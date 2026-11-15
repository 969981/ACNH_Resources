
bool FUN_02202070(uint *param_1,float *param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  uint local_50 [8];
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return false;
  }
  uVar10 = *param_1;
  if ((((uVar10 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
      ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar10)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar5 + 0x60))();
    if (iVar3 < 0x11) {
      uVar10 = 1;
    }
    else {
      if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_0220212c;
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_0220212c:
    uVar10 = 0;
  }
  if (plVar9 == (long *)0x0) {
    return false;
  }
  lVar7 = plVar9[0x2a];
  if (((*PTR_DAT_04bb3ff0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3ff0), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bb3fe8 = PTR_DAT_04bb3fd0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3ff0);
  }
  uVar6 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb3fe8);
  uVar1 = 0;
  if ((int)lVar7 == 1) {
    uVar1 = uVar10;
  }
  if ((uVar6 & 1) == 0) {
    return false;
  }
  if (uVar1 == 0) {
    return false;
  }
  if ((char)plVar9[0x58] != '\0') {
    return false;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c8;
  if (((lVar7 == 0) || (lVar8 = *(long *)(lVar7 + 0xa8), lVar8 == 0)) ||
     ((uVar10 = (int)((float)(int)*param_2 / 5.0) - (uint)(*param_2 < 0.0), (int)uVar10 < 0 ||
      ((uVar1 = (int)((float)(int)param_2[2] / 5.0) - (uint)(param_2[2] < 0.0), (int)uVar1 < 0 ||
       (*(uint *)(lVar8 + 0x38) <= uVar10 || *(uint *)(lVar8 + 0x3c) <= uVar1)))))) {
LAB_0220223c:
    lVar8 = plVar9[0xd];
    if ((((((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0xa8), lVar7 == 0)) ||
          (uVar10 = (int)((float)(int)*(float *)(lVar8 + 0x278) / 5.0) -
                    (uint)(*(float *)(lVar8 + 0x278) < 0.0), (int)uVar10 < 0)) ||
         ((uVar1 = (int)((float)(int)*(float *)(lVar8 + 0x280) / 5.0) -
                   (uint)(*(float *)(lVar8 + 0x280) < 0.0), (int)uVar1 < 0 ||
          (*(uint *)(lVar7 + 0x38) <= uVar10)))) ||
        ((*(uint *)(lVar7 + 0x3c) <= uVar1 ||
         ((uVar10 = uVar10 + *(uint *)(lVar7 + 0x38) * uVar1, *(uint *)(lVar7 + 0x68) <= uVar10 ||
          (*(long *)(lVar7 + 0x70) == 0)))))) ||
       (local_50[2] = 5, (*(uint *)(*(long *)(lVar7 + 0x70) + (long)(int)uVar10 * 4) >> 5 & 1) == 0)
       ) {
      iVar3 = FUN_01317b90(param_2,0);
      local_50[2] = iVar3;
      iVar4 = FUN_01317b90(plVar9[0xd] + 0x278,0);
      if (iVar3 != iVar4) {
        return false;
      }
      goto LAB_02202338;
    }
  }
  else {
    uVar10 = uVar10 + *(uint *)(lVar8 + 0x38) * uVar1;
    if ((*(uint *)(lVar8 + 0x68) <= uVar10 || *(long *)(lVar8 + 0x70) == 0) ||
       (local_50[2] = 5, (*(uint *)(*(long *)(lVar8 + 0x70) + (long)(int)uVar10 * 4) >> 5 & 1) == 0)
       ) goto LAB_0220223c;
    lVar8 = plVar9[0xd];
  }
  fVar11 = *(float *)(lVar8 + 0x27c) - param_2[1];
  fVar12 = -fVar11;
  if (0.0 <= fVar11) {
    fVar12 = fVar11;
  }
  if (30.0 <= fVar12) {
    return false;
  }
LAB_02202338:
  local_50[2] = *(uint *)((long)plVar9 + 700);
  if (0x1a < local_50[2]) {
    return false;
  }
  if ((1 << (ulong)(local_50[2] & 0x1f) & 0x7249624U) != 0) {
    return true;
  }
  if (local_50[2] == 1) {
    local_50[1] = 0;
    local_50[0] = *(uint *)(plVar9 + 0x57) & 0xffff;
    FUN_0277d4ac(local_50);
    FUN_01ad5d04(local_50 + 2,local_50);
    iVar3 = FUN_01aed730(local_50 + 2);
    if (19999 < iVar3) {
      return false;
    }
  }
  else if (local_50[2] != 4) {
    return false;
  }
  return *(float *)(plVar9[0xd] + 0x280) <= param_2[2];
}


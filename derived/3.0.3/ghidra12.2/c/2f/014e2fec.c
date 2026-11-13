
void FUN_014e2fec(long param_1,uint *param_2)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  
  puVar2 = PTR_DAT_04bb27c0;
  if (**(char **)(param_1 + 8) != '\0') {
    return;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return;
  }
  uVar9 = *param_2;
  if ((((uVar9 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar9 = 1;
      goto joined_r0x014e30c4;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x014e30c4;
    }
  }
  uVar9 = 0;
joined_r0x014e30c4:
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar7 == 1) {
      uVar1 = uVar9;
    }
    if ((((uVar6 & 1) != 0) && (uVar1 != 0)) && ((int)plVar8[0xea] - 1U < 2)) {
      lVar7 = *(long *)(param_1 + 0x10);
      fVar11 = *(float *)(plVar8[0xd] + 0x278);
      fVar10 = (float)*(int *)(lVar7 + 0x20) * 5.0 + 5.0;
      bVar3 = false;
      if (((float)*(int *)(lVar7 + 0x10) * 5.0 <= fVar11) &&
         (bVar3 = false, !NAN(fVar11) && !NAN(fVar10))) {
        bVar3 = fVar11 < fVar10;
      }
      if (bVar3) {
        fVar10 = (float)*(int *)(lVar7 + 0x24) * 5.0 + 5.0;
        fVar11 = *(float *)(plVar8[0xd] + 0x280);
        bVar3 = false;
        if (((float)*(int *)(lVar7 + 0x14) * 5.0 <= fVar11) &&
           (bVar3 = false, !NAN(fVar11) && !NAN(fVar10))) {
          bVar3 = fVar11 < fVar10;
        }
        if (bVar3) {
          **(undefined1 **)(param_1 + 8) = 1;
        }
      }
    }
  }
  return;
}


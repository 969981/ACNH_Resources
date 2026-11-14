
void FUN_0181bd04(long param_1,uint *param_2)

{
  uint uVar1;
  byte *pbVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return;
  }
  lVar10 = *(long *)(param_1 + 8);
  uVar11 = *param_2;
  if ((((uVar11 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                           ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
      ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar11)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar3;
    iVar5 = (**(code **)(*plVar6 + 0x60))();
    pbVar2 = PTR_DAT_04bb37d8;
    if (iVar5 < 0x11) {
      uVar11 = 1;
      goto joined_r0x0181bdcc;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0181bdcc;
    }
  }
  uVar11 = 0;
  pbVar2 = PTR_DAT_04bb37d8;
joined_r0x0181bdcc:
  PTR_DAT_04bb37d8 = pbVar2;
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0x2a];
    if (((*pbVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(pbVar2), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    puVar3 = PTR_DAT_04bb37d0;
    uVar7 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar8 == 1) {
      uVar1 = uVar11;
    }
    if (((uVar7 & 1) != 0) && (uVar1 != 0)) {
      if (((*pbVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0)) {
        *(undefined **)puVar3 = PTR_DAT_04bb3750 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37d8);
      }
      uVar7 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb37d0);
      if (((uVar7 & 1) != 0) && (lVar8 = plVar9[0xd], lVar8 != 0)) {
        fVar13 = *(float *)(lVar8 + 0x278);
        fVar12 = (float)*(int *)(lVar10 + 0x510) * 5.0 + 5.0;
        bVar4 = false;
        if (((float)*(int *)(lVar10 + 0x500) * 5.0 <= fVar13) &&
           (bVar4 = false, !NAN(fVar13) && !NAN(fVar12))) {
          bVar4 = fVar13 < fVar12;
        }
        if (((bVar4) && ((float)*(int *)(lVar10 + 0x504) * 5.0 <= *(float *)(lVar8 + 0x280))) &&
           (*(float *)(lVar8 + 0x280) < (float)*(int *)(lVar10 + 0x514) * 5.0 + 5.0)) {
          **(undefined1 **)(param_1 + 0x10) = 1;
        }
      }
    }
  }
  return;
}


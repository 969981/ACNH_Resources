
void FUN_01a21ae8(long param_1,uint *param_2)

{
  uint uVar1;
  byte *pbVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return;
  }
  uVar11 = *param_2;
  if ((((uVar11 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                            ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
      ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar11)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar3;
    iVar5 = (**(code **)(*plVar6 + 0x60))();
    pbVar2 = PTR_DAT_04bb37d8;
    if (iVar5 < 0x11) {
      uVar11 = 1;
      goto joined_r0x01a21ba8;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x01a21ba8;
    }
  }
  uVar11 = 0;
  pbVar2 = PTR_DAT_04bb37d8;
joined_r0x01a21ba8:
  PTR_DAT_04bb37d8 = pbVar2;
  if (plVar10 != (long *)0x0) {
    lVar8 = plVar10[0x2a];
    if (((*pbVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(pbVar2), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    puVar3 = PTR_DAT_04bb37d0;
    uVar7 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar8 == 1) {
      uVar1 = uVar11;
    }
    if (((uVar7 & 1) != 0) && (uVar1 != 0)) {
      if (((*pbVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0)) {
        *(undefined **)puVar3 = PTR_DAT_04bb3750 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37d8);
      }
      uVar7 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb37d0);
      if (((uVar7 & 1) != 0) && (lVar8 = plVar10[0xd], lVar8 != 0)) {
        lVar9 = *(long *)(param_1 + 8);
        fVar13 = *(float *)(lVar8 + 0x278);
        fVar12 = (float)*(int *)(lVar9 + 0x20) * 5.0 + 5.0;
        bVar4 = false;
        if (((float)*(int *)(lVar9 + 0x10) * 5.0 <= fVar13) &&
           (bVar4 = false, !NAN(fVar13) && !NAN(fVar12))) {
          bVar4 = fVar13 < fVar12;
        }
        if (((bVar4) && ((float)*(int *)(lVar9 + 0x14) * 5.0 <= *(float *)(lVar8 + 0x280))) &&
           (*(float *)(lVar8 + 0x280) < (float)*(int *)(lVar9 + 0x24) * 5.0 + 5.0)) {
          **(undefined1 **)(param_1 + 0x10) = 1;
        }
      }
    }
  }
  return;
}



void FUN_00c4f970(long param_1,uint *param_2)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 local_44;
  float local_40;
  undefined4 local_3c;
  float local_38;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return;
  }
  uVar10 = *param_2;
  if ((((uVar10 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
      ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar10)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar10 = 1;
      goto joined_r0x00c4fa30;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x00c4fa30;
    }
  }
  uVar10 = 0;
joined_r0x00c4fa30:
  if (plVar9 != (long *)0x0) {
    lVar7 = plVar9[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar6 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar7 == 1) {
      uVar1 = uVar10;
    }
    if ((((uVar6 & 1) != 0) && (uVar1 != 0)) && ((int)plVar9[0xa1] != -1)) {
      lVar8 = *(long *)(param_1 + 8);
      lVar7 = plVar9[0xd];
      local_40 = *(float *)(lVar7 + 0x278);
      fVar12 = (float)*(int *)(lVar8 + 0x20) * 5.0 + 5.0;
      bVar3 = false;
      if (((float)*(int *)(lVar8 + 0x10) * 5.0 <= local_40) &&
         (bVar3 = false, !NAN(local_40) && !NAN(fVar12))) {
        bVar3 = local_40 < fVar12;
      }
      if (bVar3) {
        fVar13 = *(float *)(lVar7 + 0x280);
        fVar11 = (float)*(int *)(lVar8 + 0x24) * 5.0 + 5.0;
        fVar12 = (float)*(int *)(lVar8 + 0x14) * 5.0;
        bVar3 = false;
        if ((fVar12 <= fVar13) && (bVar3 = false, !NAN(fVar13) && !NAN(fVar11))) {
          bVar3 = fVar13 < fVar11;
        }
        if (bVar3) {
          local_3c = *(undefined4 *)(lVar7 + 0x27c);
          local_44 = *(undefined4 *)(lVar7 + 0x2b4);
          local_38 = (fVar11 + fVar12) * 0.5 + -10.0;
          FUN_01e39778(plVar9,&local_40,&local_44,0);
        }
      }
    }
  }
  return;
}


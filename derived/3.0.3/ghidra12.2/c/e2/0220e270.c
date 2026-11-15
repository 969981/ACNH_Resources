
void FUN_0220e270(long param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  undefined4 local_44;
  ulong local_40;
  float local_38;
  
  puVar4 = PTR_DAT_04bb27c0;
  uVar12 = *param_2;
  if (uVar12 == 0) {
    return;
  }
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return;
  }
  plVar11 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) + ((ulong)(uVar12 >> 0x11) & 0x7ff8))
  ;
  if (((plVar11 == (long *)0x0) || ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar11 + 0x46) != uVar12)) {
    plVar11 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar4;
    iVar5 = (**(code **)(*plVar6 + 0x60))();
    if (iVar5 < 0x11) {
      uVar12 = 1;
      goto joined_r0x0220e330;
    }
    if (*(uint *)(lVar9 + 0x5e8) < 5) {
      uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0220e330;
    }
  }
  uVar12 = 0;
joined_r0x0220e330:
  if (plVar11 != (long *)0x0) {
    lVar9 = plVar11[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar7 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar9 == 1) {
      uVar1 = uVar12;
    }
    if (((uVar7 & 1) != 0) && (uVar1 != 0)) {
      lVar10 = plVar11[0xd];
      lVar9 = *(long *)(param_1 + 8);
      if (lVar10 == 0) {
        iVar5 = *(int *)(lVar9 + 0x10);
        iVar8 = *(int *)(lVar9 + 0x14);
      }
      else {
        fVar13 = *(float *)(lVar10 + 0x278) + -2.5;
        fVar14 = *(float *)(lVar10 + 0x280) + -2.5;
        iVar2 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
        iVar3 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
        iVar5 = *(int *)(lVar9 + 0x10);
        iVar8 = *(int *)(lVar9 + 0x14);
        if (((*(int *)(lVar9 + 0x20) < iVar2 || iVar2 + 1 < iVar5) || *(int *)(lVar9 + 0x24) < iVar3
            ) || iVar3 + 1 < iVar8) {
          return;
        }
      }
      local_38 = (float)iVar8 * 5.0 + 5.0;
      if ((int)plVar11[0xa0] != 1) {
        if ((int)plVar11[0xa0] != 0) {
          return;
        }
        local_38 = local_38 + 10.0;
      }
      fVar13 = (float)iVar5 * 5.0 + 5.0 + 10.0;
      local_40 = (ulong)(uint)fVar13;
      local_44 = FUN_006f0400(**(float **)(param_1 + 0x10) - fVar13,
                              (*(float **)(param_1 + 0x10))[2] - local_38);
      FUN_01e39778(plVar11,&local_40,&local_44,0);
    }
  }
  return;
}


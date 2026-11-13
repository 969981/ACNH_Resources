
bool FUN_01478234(long param_1,uint *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  float *pfVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_68 [8];
  undefined8 local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  if (*(long *)(param_1 + 0x70) == 0) {
    iVar7 = -1;
  }
  else {
    iVar7 = *(int *)(*(long *)(param_1 + 0x70) + 0x280);
  }
  local_58 = (undefined *)CONCAT44(local_58._4_4_,iVar7);
  if (iVar7 == 0) {
    lVar12 = *(long *)(param_1 + 0x68);
    plVar11 = *(long **)(param_1 + 600);
    fVar14 = 2.1474836e+09;
    if (*param_2 != 0x80000000) {
      fVar14 = (float)(*param_2 & 0x7fffffff);
    }
    if (((*PTR_DAT_04bbcdc8 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bbcdc8), iVar7 != 0)) {
      *(undefined **)PTR_DAT_04bbcdc0 = PTR_DAT_04bb3608 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbcdc8);
    }
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      uVar8 = (**(code **)(*plVar11 + 0x10))(plVar11,PTR_DAT_04bbcdc0);
      if ((uVar8 & 1) == 0) {
        plVar11 = (long *)0x0;
      }
    }
    pfVar9 = (float *)(**(code **)(plVar11[0x72] + 0xf0))(plVar11 + 0x72);
    fVar13 = *pfVar9;
    *(int *)(param_1 + 0x8d4) = (int)(fVar14 / fVar13);
    FUN_015380bc(*(undefined8 *)(param_1 + 0xa90),param_3);
    iVar7 = *(int *)(lVar12 + 0x2b4);
    uVar6 = *param_2;
    *(int *)(param_1 + 0x8d4) = (int)(fVar14 / fVar13);
    puVar4 = PTR_DAT_04bc0510;
    local_48 = 0;
    *(uint *)(param_1 + 0x8d0) = uVar6 + iVar7;
    puVar3 = PTR_DAT_04bb43c0;
    local_58 = puVar4 + 0x10;
    uStack_4c = *(undefined4 *)(param_1 + 0x28c);
    local_60 = 0;
    local_50 = *(undefined4 *)(param_1 + 0x288);
    lVar10 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4(&local_50);
    if (*(long *)puVar3 != 0) {
      lVar10 = *(long *)(lVar10 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        lVar10 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4(param_1 + 0x288);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if (uVar6 < *(uint *)(lVar10 + 0x1d8)) {
          lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8);
          if (lVar10 != 0) {
            local_48 = lVar10;
          }
        }
      }
    }
    FUN_01afb1a0(&local_58,auStack_68);
    fVar13 = 0.0;
    fVar14 = 0.0;
    if ((int)local_60 != local_60._4_4_) {
      if ((int)local_60 < local_60._4_4_) {
        iVar7 = local_60._4_4_;
        iVar2 = (int)local_60;
      }
      else {
        iVar7 = (int)local_60;
        iVar2 = local_60._4_4_;
      }
      iVar1 = *param_3;
      fVar13 = 0.0;
      fVar15 = 1.0;
      if (iVar1 != 2) {
        fVar15 = 0.0;
      }
      fVar14 = -1.0;
      if (iVar1 != 0) {
        fVar14 = fVar15;
      }
      fVar14 = (float)(iVar7 + 1) * 0.5 * (1.0 - (float)(iVar2 + 1) / (float)(iVar7 + 1)) * 5.0 *
               fVar14;
      if ((iVar1 == 3) && ((local_60._4_4_ + (int)local_60 & 0x80000001U) == 1)) {
        fVar13 = (float)local_60._4_4_ * 5.0 * -0.5;
      }
    }
    lVar10 = *(long *)(param_1 + 0xa90);
    *(float *)(param_1 + 0x8d8) = fVar14;
    *(undefined4 *)(param_1 + 0x8dc) = 0;
    *(float *)(param_1 + 0x8e0) = fVar13;
    *(undefined4 *)(param_1 + 0x8e4) = *(undefined4 *)(lVar10 + 0x284);
    *(undefined4 *)(param_1 + 0x8e8) = *(undefined4 *)(lVar10 + 0x288);
    *(undefined4 *)(param_1 + 0x8ec) = *(undefined4 *)(lVar10 + 0x28c);
    *(undefined4 *)(param_1 + 0x8e8) = *(undefined4 *)(lVar12 + 0x27c);
    bVar5 = *(int *)(param_1 + 0x8d0) != *(int *)(*(long *)(param_1 + 0x68) + 0x2b4);
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}


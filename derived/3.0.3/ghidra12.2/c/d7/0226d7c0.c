
void FUN_0226d7c0(long param_1,float *param_2)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 local_3c;
  long *local_38;
  undefined8 local_30;
  undefined4 local_24;
  
  local_38 = (long *)(PTR_DAT_04bb2020 + 0x10);
  local_30 = &DAT_0407154e;
  local_24 = FUN_020a4f40(*(undefined8 *)PTR_DAT_04bb3968,&local_38,PTR_DAT_04bb3238,1);
  local_3c = *(undefined4 *)(param_1 + 0x230);
  FUN_0071cb58(&local_38,&local_24,&local_3c,0);
  plVar1 = local_38;
  if (local_38 != (long *)0x0) {
    if ((*PTR_DAT_04bb37d8 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8);
      if (iVar3 != 0) {
        *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37d8);
      }
    }
    uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bb37d0);
    if ((uVar4 & 1) == 0) {
      local_30 = (undefined1 *)((ulong)local_30 & 0xffff);
    }
  }
  if ((((local_38 != (long *)0x0) && ((char)local_30 != '\0')) && (local_30._2_1_ != '\0')) &&
     (lVar5 = local_38[0xd], lVar5 != 0)) {
    fVar6 = *(float *)(lVar5 + 0x278);
    bVar2 = *(int *)(param_1 + 0x178) != 5;
    *param_2 = fVar6;
    fVar12 = 9.0;
    if (bVar2) {
      fVar12 = 8.0;
    }
    fVar10 = 0.0;
    if (bVar2) {
      fVar10 = -0.0;
    }
    fVar9 = *(float *)(lVar5 + 0x27c);
    fVar7 = 0.0;
    if (bVar2) {
      fVar7 = -13.75;
    }
    param_2[1] = fVar9;
    fVar11 = *(float *)(lVar5 + 0x280);
    fVar8 = 12.0;
    if (bVar2) {
      fVar8 = -0.0;
    }
    fVar6 = fVar6 + fVar7;
    *param_2 = fVar6;
    param_2[1] = fVar12 + fVar10 + fVar9;
    param_2[2] = fVar8 + fVar11;
    if (!bVar2) {
      *param_2 = fVar6 + -1.0;
    }
  }
  return;
}


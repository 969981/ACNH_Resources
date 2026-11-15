
void FUN_01fb2fb8(long *param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined *local_58;
  char *pcStack_50;
  undefined1 uStack_41;
  undefined8 local_40;
  undefined4 local_38;
  
  local_40 = *(undefined8 *)(*(long *)(param_1[1] + 0x68) + 0x278);
  local_38 = *(undefined4 *)(*(long *)(param_1[1] + 0x68) + 0x280);
  uVar6 = FUN_021f4f90(&local_40,0,0);
  if ((uVar6 & 1) != 0) {
    FUN_01e5e760(param_1[2]);
  }
  (**(code **)(*param_1 + 0x4f0))(param_1);
  param_1[0x15eb] = 0;
  *(undefined4 *)(param_1 + 0x15ec) = 0;
  lVar8 = *(long *)(param_1[1] + 0x68);
  if (lVar8 != 0) {
    fVar11 = *(float *)(lVar8 + 0x278);
    fVar12 = *(float *)(lVar8 + 0x280);
    *(undefined4 *)((long)param_1 + 0xaf5c) = 0;
    fVar14 = fVar11 + -2.5;
    fVar13 = fVar12 + -2.5;
    iVar5 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
    iVar2 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
    *(float *)(param_1 + 0x15eb) =
         fVar11 - ((float)iVar5 * 5.0 + (float)(iVar5 + 1) * 5.0 + 5.0) * 0.5;
    *(float *)(param_1 + 0x15ec) =
         fVar12 - ((float)iVar2 * 5.0 + (float)(iVar2 + 1) * 5.0 + 5.0) * 0.5;
  }
  uVar6 = FUN_021f2ed0(&local_40,0);
  if ((uVar6 & 1) != 0) {
    FUN_01e5e100(param_1[2]);
  }
  if ((*(uint *)(param_1 + 0x15f6) >> 0xc & 1) == 0) {
    FUN_01fb33b4(param_1);
  }
  else {
    *(uint *)(param_1 + 0x15f6) = *(uint *)(param_1 + 0x15f6) & 0xffffefff;
    (**(code **)(*param_1 + 0x38))(param_1,0x10,0,0);
  }
  FUN_0252d11c(&uStack_41);
  puVar3 = PTR_DAT_04bb2020;
  local_58 = PTR_DAT_04bb2020 + 0x10;
  pcStack_50 = "WHEREAREN_MncTalkReserve_AfterCompleteDemo";
  iVar5 = FUN_02753180(&uStack_41,&local_58);
  puVar4 = PTR_DAT_04bb37e0;
  if (iVar5 == 0) {
    if (((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
        ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) &&
       ((*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) == 4 ||
        (*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) == 5)))) {
      *(undefined2 *)((long)param_1 + 0xae84) = *(undefined2 *)PTR_DAT_04bb37e0;
      *(undefined *)((long)param_1 + 0xae86) = puVar4[2];
      *(undefined *)((long)param_1 + 0xae87) = puVar4[3];
      *(undefined4 *)(param_1 + 0x15d1) = *(undefined4 *)(puVar4 + 4);
    }
  }
  uVar6 = (**(code **)(*param_1 + 0x520))(param_1);
  if ((uVar6 & 1) != 0) {
    (**(code **)(*param_1 + 0x528))(param_1);
  }
  local_58 = puVar3 + 0x10;
  pcStack_50 = "RequestEndShareHouseDemo";
  iVar5 = FUN_02758850(&local_58);
  if (iVar5 == 0) {
    param_1[0x15ab] = param_1[0x15ab] | 0x400000000000000;
  }
  puVar3 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) goto LAB_01fb331c;
  uVar10 = *(uint *)PTR_DAT_04bb3958;
  if ((((uVar10 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
      ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar10)) {
    plVar9 = (long *)0x0;
  }
  if ((*(int *)(lVar8 + 0x288) == 1) || (*(int *)(lVar8 + 0x288) == -1)) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar3;
    iVar5 = (**(code **)(*plVar7 + 0x60))();
    if (iVar5 < 0x11) {
      uVar10 = 1;
    }
    else {
      if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_01fb32c0;
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_01fb32c0:
    uVar10 = 0;
  }
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0x2a];
    if (((*PTR_DAT_04bb3930 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3930), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb3928 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3930);
    }
    uVar6 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb3928);
    uVar1 = 0;
    if ((int)lVar8 == 1) {
      uVar1 = uVar10;
    }
    if (((uVar6 & 1) != 0) && (uVar1 != 0)) {
      FUN_02049104(plVar9);
    }
  }
LAB_01fb331c:
  *(undefined1 *)(*(long *)(param_1[1] + 0xa0) + 0x4f42) = 1;
  uVar6 = FUN_021f4f90(*(long *)(param_1[1] + 0x68) + 0x278,0,0);
  if (((uVar6 & 1) != 0) && (lVar8 = param_1[1], *(int *)(lVar8 + 0x750) == 3)) {
    *(uint *)(lVar8 + 0x69c) = *(uint *)(lVar8 + 0x69c) & 0xfffffbff;
  }
  return;
}


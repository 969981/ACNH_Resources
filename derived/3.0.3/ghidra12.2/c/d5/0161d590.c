
void FUN_0161d590(long *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  ulong uVar11;
  long lVar12;
  bool bVar13;
  byte bVar14;
  long *plVar15;
  int iVar16;
  int *piVar17;
  long lVar18;
  void *__dest;
  void *__src;
  undefined4 uVar19;
  undefined1 *local_1b0;
  undefined1 *puStack_1a8;
  undefined8 local_1a0;
  char *local_198;
  undefined8 local_190;
  undefined *puStack_188;
  undefined *local_180;
  undefined8 *puStack_178;
  undefined4 local_170;
  undefined1 local_8d;
  
  puVar4 = PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb2698;
  lVar18 = *(long *)PTR_DAT_04bb2698;
  if (lVar18 == 0) {
    plVar7 = malloc(0x10);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar9 = (undefined8 *)(lVar18 + 8);
    if (lVar6 != 0) {
      puVar9 = (undefined8 *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)(**(code **)(*(long *)*puVar9 + 0x30))((long *)*puVar9,0x10,8);
  }
  *plVar7 = (long)(PTR_DAT_04bb3048 + 0x10);
  plVar7[1] = 0;
  param_1[0x50] = (long)plVar7;
  lVar18 = *(long *)puVar1;
  if (lVar18 == 0) {
    plVar8 = malloc(0x350);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar8 = (long *)(lVar18 + 8);
    if (lVar6 != 0) {
      plVar8 = (long *)(lVar6 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x350,8);
    }
  }
  puVar4 = PTR_DAT_04bb2020;
  local_170 = 0;
  local_1a0 = PTR_DAT_04bb2020 + 0x10;
  local_198 = "OekakiDrawer";
  puStack_178 = &DAT_0407ebb1;
  puStack_188 = &DAT_040bb0ea;
  *plVar8 = (long)(PTR_DAT_04bb3050 + 0x10);
  local_190 = (long *)local_1a0;
  local_180 = local_1a0;
  (**(code **)(puVar4 + 0x28))(&local_1a0);
  plVar8[2] = 0;
  plVar8[3] = 0;
  *(undefined1 *)((long)plVar8 + 0x44) = 0;
  plVar8[1] = (long)local_198;
  plVar15 = plVar8 + 5;
  *plVar15 = 0;
  puVar1 = PTR_DAT_04bb21f8;
  *(undefined4 *)(plVar8 + 8) = 0x100;
  *(undefined1 *)((long)plVar8 + 0x143) = 0;
  *(undefined1 *)(plVar8 + 0x29) = 0;
  *(undefined4 *)(plVar8 + 4) = local_170;
  plVar8[0x2e] = 0;
  plVar8[6] = (long)(puVar1 + 0x10);
  plVar8[7] = (long)plVar8 + 0x44;
  *plVar8 = (long)&PTR_LAB_049b4068;
  plVar8[0x2c] = (long)"mFbSize";
  plVar8[0x2d] = 0;
  puVar1 = PTR_DAT_04bbd520 + 0x10;
  *(undefined4 *)(plVar8 + 0x2f) = 0;
  plVar8[0x31] = 0;
  plVar8[0x2a] = (long)plVar8;
  plVar8[0x2b] = (long)puVar1;
  lVar18 = *plVar15;
  if (*plVar15 != 0) {
    do {
      lVar6 = lVar18;
      lVar18 = *(long *)(lVar6 + 0x10);
    } while (lVar18 != 0);
    plVar15 = (long *)(lVar6 + 0x10);
  }
  *plVar15 = (long)(plVar8 + 0x2b);
  plVar8[0x2e] = (long)plVar8;
  puVar9 = (undefined8 *)(**(code **)(plVar8[0x2b] + 0xf0))();
  *puVar9 = 0x3f80000044800000;
  if ((*(uint *)(plVar8 + 0x2f) >> 7 & 1) == 0) {
    plVar8[0x31] = 0x3f80000044800000;
  }
  plVar8[0x34] = 0;
  plVar8[0x35] = 0;
  *(uint *)(plVar8 + 0x2f) = *(uint *)(plVar8 + 0x2f) & 0xfeffffff;
  *(undefined4 *)(plVar8 + 0x36) = 0;
  puVar1 = PTR_DAT_04bb31d0;
  plVar8[0x37] = 0;
  plVar8[0x32] = (long)(puVar1 + 0x10);
  plVar8[0x33] = (long)"mViewNum";
  (**(code **)(*plVar8 + 0x140))(plVar8,plVar8 + 0x32);
  uVar19 = 0x40e00000;
  if ((*(uint *)(plVar8 + 0x36) & 0x800) != 0) {
    uVar19 = 0x3dfa35dd;
  }
  puVar10 = (undefined4 *)(**(code **)(plVar8[0x32] + 0xf0))(plVar8 + 0x32);
  *puVar10 = uVar19;
  uVar2 = *(uint *)(plVar8 + 0x36);
  if ((uVar2 >> 7 & 1) == 0) {
    plVar8[0x37] = 0;
    uVar19 = 0x40e00000;
    if ((uVar2 & 0x800) != 0) {
      uVar19 = 0x3dfa35dd;
    }
    *(undefined4 *)(plVar8 + 0x37) = uVar19;
  }
  plVar8[0x3a] = 0;
  plVar8[0x3b] = 0;
  *(uint *)(plVar8 + 0x36) = uVar2 & 0xfeffffff;
  *(undefined4 *)(plVar8 + 0x3c) = 0;
  puVar5 = PTR_DAT_04bb62c0;
  plVar8[0x3d] = 0;
  plVar8[0x38] = (long)(puVar5 + 0x10);
  plVar8[0x39] = (long)"mUnitMax";
  (**(code **)(*plVar8 + 0x140))(plVar8,plVar8 + 0x38);
  puVar10 = (undefined4 *)(**(code **)(plVar8[0x38] + 0xf0))(plVar8 + 0x38);
  *puVar10 = 90000;
  if ((*(uint *)(plVar8 + 0x3c) >> 7 & 1) == 0) {
    plVar8[0x3d] = 0;
    *(undefined4 *)(plVar8 + 0x3d) = 90000;
  }
  plVar8[0x41] = 0;
  *(uint *)(plVar8 + 0x3c) = *(uint *)(plVar8 + 0x3c) & 0xfeffffff;
  plVar8[0x3f] = (long)"mRandomSeed";
  plVar8[0x40] = 0;
  *(undefined4 *)(plVar8 + 0x42) = 0;
  plVar8[0x3e] = (long)(puVar5 + 0x10);
  plVar8[0x43] = 0;
  (**(code **)(*plVar8 + 0x140))(plVar8,plVar8 + 0x3e);
  puVar10 = (undefined4 *)(**(code **)(plVar8[0x3e] + 0xf0))(plVar8 + 0x3e);
  *puVar10 = 0;
  if ((*(uint *)(plVar8 + 0x42) >> 7 & 1) == 0) {
    plVar8[0x43] = 0;
    *(undefined4 *)(plVar8 + 0x43) = 0;
  }
  plVar8[0x46] = 0;
  *(uint *)(plVar8 + 0x42) = *(uint *)(plVar8 + 0x42) & 0xfeffffff;
  plVar8[0x45] = (long)"mRadius";
  plVar8[0x47] = 0;
  *(undefined4 *)(plVar8 + 0x48) = 0;
  plVar8[0x44] = (long)(puVar1 + 0x10);
  plVar8[0x49] = 0;
  (**(code **)(*plVar8 + 0x140))(plVar8,plVar8 + 0x44);
  uVar19 = 0x447a0000;
  if ((*(uint *)(plVar8 + 0x48) & 0x800) != 0) {
    uVar19 = 0x418ba058;
  }
  puVar10 = (undefined4 *)(**(code **)(plVar8[0x44] + 0xf0))(plVar8 + 0x44);
  *puVar10 = uVar19;
  uVar2 = *(uint *)(plVar8 + 0x48);
  if ((uVar2 >> 7 & 1) == 0) {
    plVar8[0x49] = 0;
    uVar19 = 0x447a0000;
    if ((uVar2 & 0x800) != 0) {
      uVar19 = 0x418ba058;
    }
    *(undefined4 *)(plVar8 + 0x49) = uVar19;
  }
  *(uint *)(plVar8 + 0x48) = uVar2 & 0xfeffffff;
  local_1a0 = puVar4 + 0x10;
  local_170 = 0;
  local_198 = "mColor";
  puStack_188 = &DAT_040f4777;
  puStack_178 = &DAT_0407ebb1;
  local_1b0 = &DAT_3f8000003f800000;
  puStack_1a8 = &DAT_3f8000003f800000;
  local_190 = (long *)local_1a0;
  local_180 = local_1a0;
  FUN_00744b60(plVar8 + 0x4a,&local_1a0,&local_1b0,plVar8);
  plVar8[0x54] = 0;
  plVar8[0x53] = (long)"mIntensity";
  plVar8[0x55] = 0;
  *(undefined4 *)(plVar8 + 0x56) = 0;
  plVar8[0x52] = (long)(puVar1 + 0x10);
  plVar8[0x57] = 0;
  (**(code **)(*plVar8 + 0x140))(plVar8,plVar8 + 0x52);
  uVar19 = 0x3f800000;
  if ((*(uint *)(plVar8 + 0x56) & 0x800) != 0) {
    uVar19 = 0x3c8efa35;
  }
  puVar10 = (undefined4 *)(**(code **)(plVar8[0x52] + 0xf0))(plVar8 + 0x52);
  *puVar10 = uVar19;
  uVar2 = *(uint *)(plVar8 + 0x56);
  if ((uVar2 >> 7 & 1) == 0) {
    plVar8[0x57] = 0;
    uVar19 = 0x3f800000;
    if ((uVar2 & 0x800) != 0) {
      uVar19 = 0x3c8efa35;
    }
    *(undefined4 *)(plVar8 + 0x57) = uVar19;
  }
  plVar8[0x5a] = 0;
  *(uint *)(plVar8 + 0x56) = uVar2 & 0xfeffffff;
  plVar8[0x59] = (long)"mPointSize";
  plVar8[0x5b] = 0;
  *(undefined4 *)(plVar8 + 0x5c) = 0;
  plVar8[0x58] = (long)(puVar1 + 0x10);
  plVar8[0x5d] = 0;
  (**(code **)(*plVar8 + 0x140))(plVar8,plVar8 + 0x58);
  uVar19 = 0x41200000;
  if ((*(uint *)(plVar8 + 0x5c) & 0x800) != 0) {
    uVar19 = 0x3e32b8c2;
  }
  puVar10 = (undefined4 *)(**(code **)(plVar8[0x58] + 0xf0))(plVar8 + 0x58);
  *puVar10 = uVar19;
  puVar4 = PTR_DAT_04bb2698;
  uVar2 = *(uint *)(plVar8 + 0x5c);
  if ((uVar2 >> 7 & 1) == 0) {
    plVar8[0x5d] = 0;
    uVar19 = 0x41200000;
    if ((uVar2 & 0x800) != 0) {
      uVar19 = 0x3e32b8c2;
    }
    *(undefined4 *)(plVar8 + 0x5d) = uVar19;
  }
  plVar8[0x60] = 0;
  *(uint *)(plVar8 + 0x5c) = uVar2 & 0xfeffffff;
  plVar8[0x5f] = (long)"mAnimSpeed";
  *(undefined4 *)(plVar8 + 0x62) = 0x800;
  plVar8[0x61] = 0;
  plVar8[0x5e] = (long)(puVar1 + 0x10);
  plVar8[99] = 0;
  (**(code **)(*plVar8 + 0x140))(plVar8,plVar8 + 0x5e);
  puVar10 = (undefined4 *)(**(code **)(plVar8[0x5e] + 0xf0))(plVar8 + 0x5e);
  *puVar10 = 0;
  if ((*(uint *)(plVar8 + 0x62) >> 7 & 1) == 0) {
    plVar8[99] = 0;
    *(undefined4 *)(plVar8 + 99) = 0;
  }
  plVar8[0x66] = 0;
  *(uint *)(plVar8 + 0x62) = *(uint *)(plVar8 + 0x62) & 0xfeffffff;
  plVar8[0x65] = (long)"mAnimRange";
  plVar8[0x67] = 0;
  *(undefined4 *)(plVar8 + 0x68) = 0;
  plVar8[100] = (long)(puVar1 + 0x10);
  plVar8[0x69] = 0;
  (**(code **)(*plVar8 + 0x140))(plVar8,plVar8 + 100);
  uVar19 = 0x3f800000;
  if ((*(uint *)(plVar8 + 0x68) & 0x800) != 0) {
    uVar19 = 0x3c8efa35;
  }
  puVar10 = (undefined4 *)(**(code **)(plVar8[100] + 0xf0))(plVar8 + 100);
  *puVar10 = uVar19;
  uVar2 = *(uint *)(plVar8 + 0x68);
  if ((uVar2 >> 7 & 1) == 0) {
    plVar8[0x69] = 0;
    uVar19 = 0x3f800000;
    if ((uVar2 & 0x800) != 0) {
      uVar19 = 0x3c8efa35;
    }
    *(undefined4 *)(plVar8 + 0x69) = uVar19;
  }
  *(uint *)(plVar8 + 0x68) = uVar2 & 0xfeffffff;
  plVar7[1] = (long)plVar8;
  __dest = (void *)plVar8[7];
  (**(code **)(param_1[1] + 0x18))(param_1 + 1);
  __src = (void *)param_1[2];
  if (__dest != __src) {
    (**(code **)(param_1[1] + 0x18))(param_1 + 1);
    lVar18 = 0;
    do {
      if (*(char *)(param_1[2] + lVar18) == '\0') goto LAB_0161dcac;
      lVar6 = param_1[2] + lVar18;
      if (*(char *)(lVar6 + 1) == '\0') {
        lVar18 = lVar18 + 1;
        goto LAB_0161dcac;
      }
      if (*(char *)(lVar6 + 2) == '\0') {
        lVar18 = lVar18 + 2;
        goto LAB_0161dcac;
      }
      lVar18 = lVar18 + 3;
    } while (lVar18 != 0x80001);
    lVar18 = 0;
LAB_0161dcac:
    iVar16 = (int)lVar18;
    if ((int)plVar8[8] <= (int)lVar18) {
      iVar16 = (int)plVar8[8] + -1;
    }
    memcpy(__dest,__src,(long)iVar16);
    *(undefined1 *)((long)__dest + (long)iVar16) = 0;
  }
  plVar8 = (long *)plVar7[1];
  local_8d = 0;
  local_190 = (long *)CONCAT35(local_190._5_3_,0x100);
  local_198 = (char *)((long)&local_190 + 4);
  local_1a0 = PTR_DAT_04bb21f8 + 0x10;
  uVar11 = (**(code **)(*plVar8 + 0xf0))(plVar8,&local_1a0,1);
  if ((uVar11 & 1) != 0) {
    FUN_03c27e60(plVar8,&local_1a0,0);
  }
  puVar10 = (undefined4 *)(**(code **)(*(long *)(plVar7[1] + 0x1c0) + 0xf0))(plVar7[1] + 0x1c0);
  *(undefined4 *)((long)param_1 + 0x944) = *puVar10;
  FUN_0390d714(param_1 + 0x54,6,param_3);
  piVar17 = (int *)(*(long *)param_1[0x55] + (ulong)*(ushort *)(param_1[0x55] + 10) * 0xc);
  *(undefined1 *)(piVar17 + 2) = 4;
  *piVar17 = 1;
  *(undefined2 *)((long)piVar17 + 6) = 2;
  uVar2 = (int)param_1[0x5a] + 7U & 0xfffffff8;
  *(uint *)(param_1 + 0x5a) = uVar2;
  *(short *)(piVar17 + 1) = (short)uVar2;
  *(uint *)(param_1 + 0x5a) =
       (int)param_1[0x5a] + (uint)*(ushort *)((long)piVar17 + 6) * *piVar17 * 4;
  *(short *)(param_1[0x55] + 10) = *(short *)(param_1[0x55] + 10) + 1;
  plVar7 = (long *)param_1[0x55];
  uVar3 = *(ushort *)((long)plVar7 + 10);
  if (uVar3 == *(ushort *)(plVar7 + 1)) {
    *(uint *)(param_1 + 0x5a) = (int)param_1[0x5a] + 0x1fU & 0xffffffe0;
    uVar3 = *(ushort *)((long)plVar7 + 10);
  }
  piVar17 = (int *)(*plVar7 + (ulong)uVar3 * 0xc);
  *(undefined1 *)(piVar17 + 2) = 3;
  *piVar17 = 1;
  *(undefined2 *)((long)piVar17 + 6) = 1;
  uVar2 = (int)param_1[0x5a] + 3U & 0xfffffffc;
  *(uint *)(param_1 + 0x5a) = uVar2;
  *(short *)(piVar17 + 1) = (short)uVar2;
  *(uint *)(param_1 + 0x5a) =
       (int)param_1[0x5a] + (uint)*(ushort *)((long)piVar17 + 6) * *piVar17 * 4;
  *(short *)(param_1[0x55] + 10) = *(short *)(param_1[0x55] + 10) + 1;
  plVar7 = (long *)param_1[0x55];
  uVar3 = *(ushort *)((long)plVar7 + 10);
  if (uVar3 == *(ushort *)(plVar7 + 1)) {
    *(uint *)(param_1 + 0x5a) = (int)param_1[0x5a] + 0x1fU & 0xffffffe0;
    uVar3 = *(ushort *)((long)plVar7 + 10);
  }
  piVar17 = (int *)(*plVar7 + (ulong)uVar3 * 0xc);
  *(undefined1 *)(piVar17 + 2) = 3;
  *piVar17 = 1;
  *(undefined2 *)((long)piVar17 + 6) = 1;
  uVar2 = (int)param_1[0x5a] + 3U & 0xfffffffc;
  *(uint *)(param_1 + 0x5a) = uVar2;
  *(short *)(piVar17 + 1) = (short)uVar2;
  *(uint *)(param_1 + 0x5a) =
       (int)param_1[0x5a] + (uint)*(ushort *)((long)piVar17 + 6) * *piVar17 * 4;
  *(short *)(param_1[0x55] + 10) = *(short *)(param_1[0x55] + 10) + 1;
  plVar7 = (long *)param_1[0x55];
  uVar3 = *(ushort *)((long)plVar7 + 10);
  if (uVar3 == *(ushort *)(plVar7 + 1)) {
    *(uint *)(param_1 + 0x5a) = (int)param_1[0x5a] + 0x1fU & 0xffffffe0;
    uVar3 = *(ushort *)((long)plVar7 + 10);
  }
  piVar17 = (int *)(*plVar7 + (ulong)uVar3 * 0xc);
  *(undefined1 *)(piVar17 + 2) = 5;
  *(undefined2 *)((long)piVar17 + 6) = 3;
  *piVar17 = 1;
  uVar2 = (int)param_1[0x5a] + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 0x5a) = uVar2;
  *(short *)(piVar17 + 1) = (short)uVar2;
  *(uint *)(param_1 + 0x5a) =
       (int)param_1[0x5a] + (uint)*(ushort *)((long)piVar17 + 6) * *piVar17 * 4;
  *(short *)(param_1[0x55] + 10) = *(short *)(param_1[0x55] + 10) + 1;
  plVar7 = (long *)param_1[0x55];
  uVar3 = *(ushort *)((long)plVar7 + 10);
  if (uVar3 == *(ushort *)(plVar7 + 1)) {
    *(uint *)(param_1 + 0x5a) = (int)param_1[0x5a] + 0x1fU & 0xffffffe0;
    uVar3 = *(ushort *)((long)plVar7 + 10);
  }
  piVar17 = (int *)(*plVar7 + (ulong)uVar3 * 0xc);
  *(undefined1 *)(piVar17 + 2) = 3;
  *piVar17 = 1;
  *(undefined2 *)((long)piVar17 + 6) = 1;
  uVar2 = (int)param_1[0x5a] + 3U & 0xfffffffc;
  *(uint *)(param_1 + 0x5a) = uVar2;
  *(short *)(piVar17 + 1) = (short)uVar2;
  *(uint *)(param_1 + 0x5a) =
       (int)param_1[0x5a] + (uint)*(ushort *)((long)piVar17 + 6) * *piVar17 * 4;
  *(short *)(param_1[0x55] + 10) = *(short *)(param_1[0x55] + 10) + 1;
  plVar7 = (long *)param_1[0x55];
  uVar3 = *(ushort *)((long)plVar7 + 10);
  if (uVar3 == *(ushort *)(plVar7 + 1)) {
    *(uint *)(param_1 + 0x5a) = (int)param_1[0x5a] + 0x1fU & 0xffffffe0;
    uVar3 = *(ushort *)((long)plVar7 + 10);
  }
  piVar17 = (int *)(*plVar7 + (ulong)uVar3 * 0xc);
  *(undefined1 *)(piVar17 + 2) = 3;
  *piVar17 = 1;
  *(undefined2 *)((long)piVar17 + 6) = 1;
  uVar2 = (int)param_1[0x5a] + 3U & 0xfffffffc;
  *(uint *)(param_1 + 0x5a) = uVar2;
  *(short *)(piVar17 + 1) = (short)uVar2;
  *(uint *)(param_1 + 0x5a) =
       (int)param_1[0x5a] + (uint)*(ushort *)((long)piVar17 + 6) * *piVar17 * 4;
  *(short *)(param_1[0x55] + 10) = *(short *)(param_1[0x55] + 10) + 1;
  if (*(short *)(param_1[0x55] + 10) == *(short *)(param_1[0x55] + 8)) {
    *(uint *)(param_1 + 0x5a) = (int)param_1[0x5a] + 0x1fU & 0xffffffe0;
  }
  FUN_0390d990(param_1 + 0x54,param_3,2,1);
  FUN_0390a734(param_1 + 0x105,1,0x1d,*(undefined4 *)PTR_DAT_04bbdbc0,
               *(undefined4 *)PTR_DAT_04bbdbc8,1,1,1,0,1);
  lVar18 = param_1[0x10d];
  uVar19 = *(undefined4 *)((long)param_1 + 0x864);
  lVar6 = *(long *)puVar4;
  if (lVar6 == 0) {
    plVar7 = malloc(0x38);
  }
  else {
    plVar7 = param_3;
    if (param_3 == (long *)0x0) {
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar6 + 8);
      if (lVar12 != 0) {
        plVar7 = (long *)(lVar12 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
    }
    plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x38,8);
  }
  plVar7[6] = 0;
  plVar8 = plVar7 + 1;
  *plVar8 = 0;
  *(undefined2 *)((long)plVar7 + 0x2a) = 0;
  bVar14 = 0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  plVar7[4] = 0;
  puVar1 = PTR_DAT_04bb2cc8 + 0x10;
  *(undefined1 *)(plVar7 + 5) = 0;
  *plVar7 = (long)puVar1;
  if (param_3 == (long *)0x0) {
    lVar12 = *(long *)puVar4;
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    param_3 = (long *)(lVar12 + 8);
    if (lVar6 != 0) {
      param_3 = (long *)(lVar6 + 0xa8);
    }
    param_3 = (long *)*param_3;
    bVar14 = *(byte *)(plVar7 + 5) & 0xfe;
  }
  plVar7[6] = 0;
  *(byte *)(plVar7 + 5) = bVar14;
  *(undefined2 *)((long)plVar7 + 0x2a) = 0;
  *plVar8 = 0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  plVar7[4] = 0;
  if ((int)lVar18 == 0) {
    iVar16 = 0;
    *(undefined2 *)((long)plVar7 + 0x2a) = 8;
    local_198 = (char *)0x0;
  }
  else {
    FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,plVar7,param_3,(int)lVar18,uVar19,8);
    local_198 = (char *)plVar7[3];
    *(undefined2 *)((long)plVar7 + 0x2a) = 8;
    iVar16 = 0;
    if (plVar7[4] != 0) {
      iVar16 = (int)*plVar8 - *(int *)(plVar7[4] + 0x10);
    }
    if (local_198 != (char *)0x0) {
      uVar19 = *(undefined4 *)((long)local_198 + 0x104);
      goto LAB_0161e1f8;
    }
  }
  uVar19 = 0;
LAB_0161e1f8:
  *(int *)(param_1 + 0x105) = iVar16;
  *(undefined4 *)((long)param_1 + 0x82c) = uVar19;
  param_1[0x106] = (long)local_198;
  param_1[0x107] = (long)plVar7;
  if ((*(byte *)((long)param_1 + 0x876) >> 1 & 1) == 0) {
    bVar13 = false;
  }
  else {
    bVar13 = 0x11 < *(ushort *)(param_1 + 0x118) && *(ushort *)(param_1 + 0x118) - 0x59 < 0xffffffd6
    ;
  }
  local_1a0 = (undefined *)CONCAT44(uVar19,iVar16);
  local_190 = plVar7;
  FUN_038fd3e0(param_1 + 0x10f,&local_1a0,param_1 + 0x10b,0,param_1[0x117],bVar13,1);
  if ((char)param_1[7] != '\0') {
    *(undefined1 *)(param_1 + 7) = 0;
    (**(code **)(*param_1 + 0xb8))(param_1,0);
  }
  *(undefined4 *)(param_1 + 0x11e) = 0;
  return;
}


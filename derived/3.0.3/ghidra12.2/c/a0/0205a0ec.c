
undefined8 FUN_0205a0ec(undefined8 param_1,byte *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined *local_60;
  undefined1 *puStack_58;
  undefined4 local_50;
  undefined1 local_4c [7];
  undefined1 local_45;
  
  local_45 = 0;
  local_50 = 8;
  local_4c[0] = 0;
  puStack_58 = local_4c;
  local_60 = PTR_DAT_04bb3768 + 0x10;
  FUN_038d1270(&local_60,"-----");
  if ((ulong)*param_2 < 0x23) {
    FUN_038d1270(&local_60,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*param_2 * 8 + 0xb0),
                 param_2[1]);
  }
  uVar3 = FUN_020a4f40(*(undefined8 *)PTR_DAT_04bb3968,&local_60,PTR_DAT_04bb3238,1);
  puVar2 = PTR_DAT_04bb27c0;
  if (uVar3 == 0) {
    return 1;
  }
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return 0;
  }
  plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) + (ulong)(uVar3 >> 0x14) * 8);
  if (((plVar9 == (long *)0x0) || ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar9 + 0x46) != uVar3)) {
    plVar9 = (long *)0x0;
  }
  if ((*(int *)(lVar8 + 0x288) == 1) || (*(int *)(lVar8 + 0x288) == -1)) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar3 = 1;
      goto joined_r0x0205a244;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar3 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0205a244;
    }
  }
  uVar3 = 0;
joined_r0x0205a244:
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0x2a];
    uVar1 = *(uint *)(plVar9 + 0x49);
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar5 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb37d0);
    if ((int)lVar8 != 1) {
      return 0;
    }
    if ((uVar5 & uVar3) == 0) {
      return 0;
    }
    if ((uVar1 >> 4 & 1) == 0) {
      return 0;
    }
    puVar10 = (undefined8 *)plVar9[0x77];
    if (((*PTR_DAT_04bb6988 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb6988), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb6980 = PTR_DAT_04bb6990 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb6988);
    }
    if (((puVar10 != (undefined8 *)0x0) &&
        (uVar7 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bb6980), (uVar7 & 1) != 0)) &&
       (uVar7 = FUN_01eb1630(puVar10), (uVar7 & 1) != 0)) {
      *(undefined4 *)(puVar10 + 0x1cb6) = 4;
      *(uint *)(puVar10[1] + 0x69c) = *(uint *)(puVar10[1] + 0x69c) | 0x10;
      FUN_0212eca8(puVar10 + 0x154a,1,0);
      *(uint *)(puVar10[1] + 0x69c) = *(uint *)(puVar10[1] + 0x69c) | 0x800000;
      FUN_01f40300(puVar10,0x42,0,0);
      return 1;
    }
  }
  return 0;
}


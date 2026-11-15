
bool FUN_0205a3c8(undefined8 param_1,byte *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined *local_58;
  undefined1 *puStack_50;
  undefined4 local_48;
  undefined1 local_44 [7];
  undefined1 local_3d;
  undefined4 local_34;
  
  local_3d = 0;
  local_48 = 8;
  local_44[0] = 0;
  puStack_50 = local_44;
  local_58 = PTR_DAT_04bb3768 + 0x10;
  FUN_038d1270(&local_58,"-----");
  if ((ulong)*param_2 < 0x23) {
    FUN_038d1270(&local_58,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*param_2 * 8 + 0xb0),
                 param_2[1]);
  }
  uVar3 = FUN_020a4f40(*(undefined8 *)PTR_DAT_04bb3968,&local_58,PTR_DAT_04bb3238,1);
  puVar2 = PTR_DAT_04bb27c0;
  if ((uVar3 == 0) || (lVar7 = *(long *)PTR_DAT_04bb27c0, lVar7 == 0)) goto LAB_0205a5d4;
  plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + (ulong)(uVar3 >> 0x14) * 8);
  if ((plVar8 == (long *)0x0) ||
     (((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar8 + 0x46) != uVar3)))) {
    plVar8 = (long *)0x0;
  }
  if ((*(int *)(lVar7 + 0x288) == 1) || (*(int *)(lVar7 + 0x288) == -1)) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar9 = 1;
    }
    else {
      if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_0205a50c;
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_0205a50c:
    uVar9 = 0;
  }
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
    if (((uVar6 & 1) != 0) && (uVar1 != 0)) {
      puVar10 = (undefined8 *)plVar8[0x77];
      if (((*PTR_DAT_04bb6988 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb6988), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bb6980 = PTR_DAT_04bb6990 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb6988);
      }
      if (((puVar10 != (undefined8 *)0x0) &&
          (uVar6 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bb6980), (uVar6 & 1) != 0)) &&
         ((*(uint *)(plVar8 + 0x49) >> 1 & 1) == 0)) {
        lVar7 = puVar10[2];
        local_34 = 0x22;
        if (((*(int *)(lVar7 + 0x360) == 0x22) && (*(int *)(lVar7 + 0x4b8) != 0)) &&
           (*(int *)(lVar7 + 0x378) == 0x23)) {
          FUN_006fb3d0(plVar8);
        }
      }
    }
  }
LAB_0205a5d4:
  return uVar3 == 0;
}


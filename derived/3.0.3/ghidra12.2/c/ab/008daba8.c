
undefined8 FUN_008daba8(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined *local_90;
  undefined8 *puStack_88;
  undefined *local_80;
  char *pcStack_78;
  
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_78 = "tkk";
  local_80 = puVar1;
  uVar4 = FUN_020a4f40(*(undefined8 *)PTR_DAT_04bb3968,&local_80,PTR_DAT_04bb3238,1);
  puVar3 = PTR_DAT_04bb27c0;
  uVar10 = 0;
  if ((uVar4 != 0) && (lVar8 = *(long *)PTR_DAT_04bb27c0, lVar8 != 0)) {
    plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) + (ulong)(uVar4 >> 0x14) * 8);
    if ((plVar9 == (long *)0x0) ||
       (((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar9 + 0x46) != uVar4)))) {
      plVar9 = (long *)0x0;
    }
    if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
      plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar8 = *(long *)puVar3;
      iVar5 = (**(code **)(*plVar7 + 0x60))();
      if (iVar5 < 0x11) {
        uVar4 = 1;
      }
      else {
        if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_008dacc0;
        uVar4 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_008dacc0:
      uVar4 = 0;
    }
    if (plVar9 != (long *)0x0) {
      lVar8 = plVar9[0x2a];
      uVar2 = *(uint *)(plVar9 + 0x49);
      if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37d8);
      }
      uVar6 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb37d0);
      if (((int)lVar8 == 1) && ((uVar6 & uVar4) != 0)) {
        uVar11 = 0;
        uVar12 = 0;
        if ((uVar2 >> 4 & 1) != 0) {
          lVar8 = plVar9[0xd];
          uVar10 = *(undefined4 *)(lVar8 + 0x278);
          uVar11 = *(undefined4 *)(lVar8 + 0x27c);
          uVar12 = *(undefined4 *)(lVar8 + 0x280);
        }
        goto LAB_008dad3c;
      }
    }
  }
  uVar11 = 0;
  uVar12 = 0;
LAB_008dad3c:
  FUN_008c3440(param_1,*(undefined4 *)(param_1 + 0x410));
  pcStack_78 = "PreTkkLive";
  puStack_88 = &DAT_0407ebb1;
  local_90 = puVar1;
  local_80 = puVar1;
  FUN_008c3200(param_1,&local_80,&local_90,PTR_DAT_04bb3238,0,0,0);
  *(undefined1 *)(param_1 + 0x37fb4) = 1;
  *(undefined4 *)(param_1 + 0x307b4) = uVar10;
  *(undefined4 *)(param_1 + 0x307b8) = uVar11;
  *(undefined4 *)(param_1 + 0x307bc) = uVar12;
  FUN_03ebb160(param_1 + 0x408,0x20);
  return 1;
}


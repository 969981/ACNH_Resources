
void FUN_0204f0c8(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  uint uVar11;
  undefined *local_40;
  undefined *puStack_38;
  
  puVar1 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    plVar10 = (long *)0x0;
    uVar6 = 0;
  }
  else {
    uVar6 = *(uint *)PTR_DAT_04bb32f8;
    if ((((uVar6 == 0) ||
         (plVar10 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                              ((ulong)(uVar6 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
        ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar6)) {
      plVar10 = (long *)0x0;
    }
    if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
      plVar3 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar7 = *(long *)puVar1;
      iVar2 = (**(code **)(*plVar3 + 0x60))();
      if (iVar2 < 0x11) {
        uVar11 = 1;
        uVar6 = 1;
      }
      else {
        uVar6 = *(uint *)(lVar7 + 0x5e8);
        if (4 < uVar6) goto LAB_0204f1ac;
        uVar11 = 0x1aU >> (ulong)(uVar6 & 0x1f) & 1;
        uVar6 = (uint)(0x101000100 >> (((ulong)uVar6 & 7) << 3)) & 1;
      }
    }
    else {
LAB_0204f1ac:
      uVar11 = 0;
      uVar6 = 0;
    }
    if (plVar10 != (long *)0x0) {
      if (((*PTR_DAT_04bb3280 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3280);
      }
      uVar4 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb3278);
      if ((uVar4 & 1) != 0) {
        if (uVar11 == 0) {
          bVar5 = true;
          iVar2 = *(int *)(param_1 + 0xa0);
        }
        else {
          FUN_009004b0(plVar10);
          bVar5 = false;
          iVar2 = *(int *)(param_1 + 0xa0);
        }
        goto joined_r0x0204f20c;
      }
      uVar6 = 0;
    }
  }
  bVar5 = plVar10 == (long *)0x0 || uVar6 == 0;
  iVar2 = *(int *)(param_1 + 0xa0);
joined_r0x0204f20c:
  if (iVar2 == 0) {
    lVar8 = *(long *)(param_1 + 8);
    lVar7 = *(long *)(lVar8 + 0x3b8);
    if (((ulong)*(byte *)(lVar7 + 0x7d68) < 8) && (*(long *)PTR_DAT_04bb4718 != 0)) {
      piVar9 = (int *)(*(long *)PTR_DAT_04bb4718 + (ulong)*(byte *)(lVar7 + 0x7d68) * 4 + 0xde8);
    }
    else {
      piVar9 = (int *)PTR_DAT_04bb3238;
    }
    iVar2 = *piVar9;
    if (*(int *)(*(long *)(lVar8 + 0x3b0) + 0x56c) == 0x11) {
      *(undefined4 *)(lVar8 + 0x6a0) = 4;
    }
    if (iVar2 == 0) {
      bVar5 = true;
    }
    if ((!bVar5) && (*(char *)(lVar7 + 0x7750) == '\0')) {
      if (((uint)*(ulong *)(lVar7 + 0xad58) >> 0x1b & 1) != 0) {
        FUN_008fb770(plVar10,iVar2,*(undefined4 *)(*(long *)(param_1 + 8) + 0x230));
        return;
      }
      local_40 = PTR_DAT_04bb2020 + 0x10;
      puStack_38 = PTR_s_cDefault_04bb5888 + 0x1e;
      FUN_008fb654(plVar10,iVar2,*(undefined4 *)(*(long *)(param_1 + 8) + 0x230),0,
                   *(ulong *)(lVar7 + 0xad58) >> 0x3b & 1,&local_40);
    }
  }
  return;
}


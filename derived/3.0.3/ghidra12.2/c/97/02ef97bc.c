
void FUN_02ef97bc(long param_1,byte *param_2,int param_3)

{
  uint *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  byte bVar7;
  byte *pbVar8;
  byte bVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar10 = *(long *)PTR_DAT_04bb39b0;
  pbVar8 = PTR_DAT_04bb32e0;
  if (lVar10 == 0) {
LAB_02ef9824:
    if (*pbVar8 < 8) goto LAB_02ef9890;
LAB_02ef9830:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02ef9888:
      pbVar8 = PTR_DAT_04bb5038;
      goto LAB_02ef9890;
    }
    lVar10 = **(long **)PTR_DAT_04bb27d0;
    bVar7 = *(byte *)(lVar10 + 0x473);
    pbVar8 = PTR_DAT_04bb5038;
    if ((long)(char)bVar7 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x20;
      if (7 < bVar7) {
        puVar1 = (uint *)(lVar10 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar8 = (byte *)(lVar10 + 0x471);
      }
    }
    bVar7 = *pbVar8;
    if (7 < bVar7) goto LAB_02ef9888;
  }
  else {
    if (*(int *)(lVar10 + 0x15c) != 0) {
      pbVar8 = (byte *)(lVar10 + 0x158);
    }
    if (7 < *pbVar8) {
      if ((*(int *)(lVar10 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar8 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_02ef9824;
      }
      goto LAB_02ef9830;
    }
LAB_02ef9890:
    bVar7 = *pbVar8;
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
  }
  bVar9 = *param_2;
  if (7 < bVar7) {
    bVar7 = 0xff;
  }
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  if (bVar7 != bVar9) {
    return;
  }
  if (*(int *)(param_1 + 0x434) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1b8) == 0) {
    return;
  }
  if ((param_3 == 0) && (**(char **)(param_1 + 0x388) != '\0')) {
    return;
  }
  lVar10 = *(long *)PTR_DAT_04bb27c0;
  if (lVar10 == 0) {
    return;
  }
  uVar12 = *(uint *)PTR_DAT_04bb32f8;
  if ((((uVar12 == 0) ||
       (plVar11 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                            ((ulong)(uVar12 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
      ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar11 + 0x46) != uVar12)) {
    plVar11 = (long *)0x0;
  }
  if ((*(int *)(lVar10 + 0x288) == 1) || (*(int *)(lVar10 + 0x288) == -1)) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar5 + 0x60))();
    if (iVar3 < 0x11) {
      uVar12 = 1;
    }
    else {
      if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_02ef9994;
      uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_02ef9994:
    uVar12 = 0;
  }
  if (plVar11 == (long *)0x0) {
    return;
  }
  if (((*PTR_DAT_04bb3280 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3280);
  }
  uVar4 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb3278);
  if ((uVar12 & uVar4) != 1) {
    return;
  }
  if (*(int *)(param_1 + 0x434) == 2) {
    FUN_008fcb94(plVar11);
  }
  puVar2 = PTR_DAT_04bb2720;
  if (((*(long *)PTR_DAT_04bb5ce0 == 0) || (lVar10 = *(long *)PTR_DAT_04bb2720, lVar10 == 0)) ||
     (*(long *)(lVar10 + 0x330) == 0)) {
LAB_02ef9a6c:
    if (*(int *)(param_1 + 0x434) == 3) {
      FUN_008fc6e4(plVar11,0,0xffffffff);
      goto LAB_02ef9a94;
    }
  }
  else {
    puVar6 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
    iVar3 = FUN_006bd550(*puVar6,0);
    if (((iVar3 != 0x758f7eaf) || (*(long *)puVar2 == 0)) ||
       ((lVar10 = *(long *)(*(long *)puVar2 + 0x330), lVar10 == 0 || (*(int *)(lVar10 + 0x244) == 0)
        ))) goto LAB_02ef9a6c;
  }
  FUN_00901830(plVar11);
LAB_02ef9a94:
  *(undefined4 *)(param_1 + 0x434) = 0;
  return;
}



undefined4 FUN_018a0884(long param_1,byte *param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  byte bVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  undefined4 uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  ulong uVar12;
  
  puVar4 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    uVar12 = 0;
    uVar8 = 0;
    goto LAB_018a09b0;
  }
  bVar3 = *param_2;
  bVar5 = 7 < bVar3;
  if (bVar5) {
    bVar3 = 0xff;
  }
  puVar2 = (uint *)(param_1 + 0x74c) + ((long)(char)bVar3 & 0xffffffff);
  if (bVar5) {
    puVar2 = (uint *)(param_1 + 0x74c);
  }
  uVar11 = *puVar2;
  if ((((uVar11 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
      ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar11)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar4;
    iVar6 = (**(code **)(*plVar7 + 0x60))();
    if (iVar6 < 0x11) {
      uVar12 = 1;
      uVar11 = 1;
    }
    else {
      if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_018a0960;
      uVar12 = 0x101000100 >> (((ulong)*(uint *)(lVar9 + 0x5e8) & 7) << 3);
      uVar11 = (uint)uVar12;
    }
  }
  else {
LAB_018a0960:
    uVar12 = 0;
    uVar11 = 0;
  }
  if (plVar10 == (long *)0x0) {
    uVar8 = 0;
  }
  else {
    if (((*PTR_DAT_04bb3ff0 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3ff0), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb3fe8 = PTR_DAT_04bb3fd0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3ff0);
    }
    uVar12 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb3fe8);
    uVar8 = 1;
    if ((uVar12 & 1) == 0) {
      uVar11 = 0;
    }
    uVar12 = (ulong)uVar11;
  }
LAB_018a09b0:
  uVar1 = 0;
  if ((uVar12 & 0xff) != 0) {
    uVar1 = uVar8;
  }
  return uVar1;
}


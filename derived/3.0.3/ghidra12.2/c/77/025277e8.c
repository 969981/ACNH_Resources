
undefined8 FUN_025277e8(byte *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  int local_4c;
  undefined1 local_48;
  undefined4 local_44;
  
  puVar3 = PTR_DAT_04bb27c0;
  if ((ulong)*param_1 < 8) {
    puVar1 = (uint *)PTR_DAT_04bb3238;
    if (DAT_054f5738 != 0) {
      puVar1 = (uint *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
    uVar10 = *puVar1;
  }
  else {
    uVar10 = *(uint *)PTR_DAT_04bb3238;
  }
  if (uVar10 == 0) {
    return 0;
  }
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return 0;
  }
  plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) + ((ulong)(uVar10 >> 0x11) & 0x7ff8));
  if (((plVar9 == (long *)0x0) || ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar9 + 0x46) != uVar10)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar10 = 1;
      goto joined_r0x0252798c;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0252798c;
    }
  }
  uVar10 = 0;
joined_r0x0252798c:
  if (plVar9 == (long *)0x0) {
    return 0;
  }
  lVar8 = plVar9[0x2a];
  uVar2 = *(uint *)(plVar9 + 0x49);
  if (((*PTR_DAT_04bb3778 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3778);
  }
  uVar5 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb3770);
  if ((int)lVar8 != 1) {
    return 0;
  }
  if ((uVar5 & uVar10) == 0) {
    return 0;
  }
  if ((uVar2 >> 4 & 1) == 0) {
    return 0;
  }
  local_4c = FUN_00a74b78(param_1);
  if (local_4c != 0x13) {
    FUN_0237432c(plVar9,6);
    return 1;
  }
  uVar7 = FUN_02546f34(plVar9 + 0x3dd,(int)plVar9[0x46]);
  if ((uVar7 & 1) == 0) {
    local_44 = 0;
    local_4c = 6;
    local_48 = 1;
    FUN_02374e74(plVar9,&local_4c);
    return 1;
  }
  return 1;
}


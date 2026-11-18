
void FUN_0369b904(long param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  bool bVar9;
  long *plVar10;
  uint uVar11;
  undefined8 *puVar12;
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return;
  }
  uVar11 = *param_2;
  if ((((uVar11 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                            ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
      ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar11)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar11 = 1;
    }
    else {
      if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_0369b9c0;
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_0369b9c0:
    uVar11 = 0;
  }
  if (plVar10 == (long *)0x0) {
    return;
  }
  lVar8 = plVar10[0x2a];
  uVar1 = *(uint *)(plVar10 + 0x49);
  if (((*PTR_DAT_04bb37d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  uVar5 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb37d0);
  if ((int)lVar8 != 1) {
    return;
  }
  if ((uVar5 & uVar11) == 0) {
    return;
  }
  if ((uVar1 >> 4 & 1) == 0) {
    return;
  }
  puVar12 = (undefined8 *)plVar10[0x77];
  if (((*PTR_DAT_04bb6710 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bb6708 = PTR_DAT_04bb6718 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6710);
  }
  if (puVar12 == (undefined8 *)0x0) {
    return;
  }
  uVar7 = (**(code **)*puVar12)(puVar12,PTR_DAT_04bb6708);
  if ((uVar7 & 1) == 0) {
    return;
  }
  uVar7 = FUN_02b81a4c(0x4079999a,**(undefined8 **)(param_1 + 8),plVar10[0xd] + 0x278);
  if ((uVar7 & 1) == 0) {
    return;
  }
  iVar4 = *(int *)((long)puVar12 + 0x77f4);
  iVar2 = *(int *)(puVar12 + 0xef6);
  if (iVar4 == 0x10) {
    bVar9 = false;
  }
  else {
    bVar9 = iVar2 != 0x10 && (iVar4 != 0x4c && iVar2 != 0x4c);
    if (iVar4 == 0x4b) goto LAB_0369bad8;
  }
  if ((*(ushort *)((long)puVar12 + 0xaf64) & 0x40) == 0) {
    bVar9 = true;
  }
  if ((iVar2 != 0x4b) && (bVar9)) {
    return;
  }
LAB_0369bad8:
  **(int **)(param_1 + 0x10) = **(int **)(param_1 + 0x10) + 1;
  return;
}


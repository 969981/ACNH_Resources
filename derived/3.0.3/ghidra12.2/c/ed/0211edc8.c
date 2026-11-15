
uint FUN_0211edc8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  uint uVar10;
  
  uVar2 = FUN_0211d110(param_1,param_2,1,0);
  puVar1 = PTR_DAT_04bb27c0;
  if (uVar2 == 0) {
    return *(uint *)PTR_DAT_04bb3238;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return uVar2;
  }
  plVar9 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + (ulong)(uVar2 >> 0x14) * 8);
  if (((plVar9 == (long *)0x0) || ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar9 + 0x46) != uVar2)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar1;
    iVar3 = (**(code **)(*plVar5 + 0x60))();
    if (iVar3 < 0x11) {
      uVar10 = 1;
      goto joined_r0x0211ee9c;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0211ee9c;
    }
  }
  uVar10 = 0;
joined_r0x0211ee9c:
  if (plVar9 != (long *)0x0) {
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar4 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb37d0);
    if ((uVar10 & uVar4) == 1) {
      *(ushort *)(param_1 + 0x1528) = *(ushort *)(param_1 + 0x1528) | 0x10;
      puVar8 = (undefined8 *)plVar9[0x77];
      if (((*PTR_DAT_04bc2280 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc2280), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bc2278 = PTR_DAT_04bb6718 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc2280);
      }
      if ((puVar8 != (undefined8 *)0x0) &&
         (uVar6 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc2278), (uVar6 & 1) != 0)) {
        *(ushort *)((long)puVar8 + 0xaf64) = *(ushort *)((long)puVar8 + 0xaf64) | 4;
      }
    }
  }
  return uVar2;
}


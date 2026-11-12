
void FUN_008fd3f0(long param_1,byte *param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long *plVar8;
  
  if (((((*(char *)(param_1 + 0x430) == '\0') && (*(long *)PTR_DAT_04bb27c0 != 0)) &&
       (uVar1 = *(uint *)(param_1 + 0x274), uVar1 != 0)) &&
      ((plVar8 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                           ((ulong)(uVar1 >> 0x11) & 0x7ff8)), plVar8 != (long *)0x0 &&
       ((*(uint *)(plVar8 + 0x49) >> 1 & 1) == 0)))) && (*(uint *)(plVar8 + 0x46) == uVar1)) {
    if (((*PTR_DAT_04bb32c0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb32c0), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb32b8 = PTR_DAT_04bb32c8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb32c0);
    }
    uVar4 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb32b8);
    if ((uVar4 & 1) != 0) {
      bVar5 = *param_2;
      FUN_008c3440(plVar8,(int)plVar8[0x82]);
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      iVar3 = *(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c);
      *(byte *)(plVar8 + 0x6137) = bVar5;
      bVar2 = iVar3 != 0;
      uVar7 = 0x15;
      if (bVar2) {
        uVar7 = (int)plVar8[0x60fd];
      }
      uVar6 = 0x28;
      if (bVar2) {
        uVar6 = 8;
      }
      *(undefined4 *)((long)plVar8 + 0x307e4) = uVar7;
      *(undefined4 *)((long)plVar8 + 0x307ec) = uVar6;
      uVar7 = 7;
      if (bVar2) {
        uVar7 = 8;
      }
      FUN_03ebb160(plVar8 + 0x81,uVar7);
      return;
    }
  }
  return;
}


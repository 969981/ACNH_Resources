
/* WARNING: Removing unreachable block (ram,0x009b574c) */

long FUN_009b56e8(long param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  puVar3 = PTR_DAT_04bb4f38;
  uVar5 = (ulong)param_2;
  if (3 < param_2) {
    uVar5 = 0;
  }
  lVar6 = *(long *)(param_1 + uVar5 * 8 + 0xf5b20);
  if ((lVar6 != 0) && (lVar6 == *(long *)(param_1 + 0x50))) {
    uVar1 = *(uint *)(lVar6 + 0xc30);
    if (*(uint *)(*(long *)PTR_DAT_04bb2648 + 0x330) <= uVar1) {
      uVar1 = 0;
    }
    lVar6 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb2648 + 0x338) + (long)(int)uVar1 * 8);
    if (lVar6 != 0) {
      puVar7 = *(undefined8 **)(lVar6 + 0xc20);
      if (((*PTR_DAT_04bb4f38 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb4f38), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bb4f30 = PTR_DAT_04bb4f40 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4f38);
      }
      puVar2 = PTR_DAT_04bb4f30;
      if ((puVar7 != (undefined8 *)0x0) &&
         (uVar5 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bb4f30), (uVar5 & 1) != 0)) {
        plVar8 = *(long **)(lVar6 + 0xc20);
        if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb4f38), iVar4 != 0)) {
          *(undefined **)puVar2 = PTR_DAT_04bb4f40 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb4f38);
        }
        uVar5 = (**(code **)*plVar8)(plVar8,PTR_DAT_04bb4f30);
        if ((uVar5 & 1) == 0) {
          plVar8 = (long *)0x0;
        }
        uVar5 = (**(code **)(*plVar8 + 0x30))();
        if ((uVar5 & 1) != 0) {
          return lVar6;
        }
      }
    }
    lVar6 = 0;
  }
  return lVar6;
}


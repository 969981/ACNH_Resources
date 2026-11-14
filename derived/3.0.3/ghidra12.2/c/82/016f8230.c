
void FUN_016f8230(long param_1,uint param_2,uint param_3,uint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *local_70;
  char *pcStack_68;
  
  plVar7 = *(long **)(param_1 + 0x60);
  if (plVar7 != (long *)0x0) {
    if (((*PTR_DAT_04bb37b8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37b8), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb37b0 = PTR_DAT_04bb3070 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37b8);
    }
    uVar6 = (**(code **)(*plVar7 + 0x10))(plVar7,PTR_DAT_04bb37b0);
    if ((uVar6 & 1) != 0) {
      (**(code **)(*plVar7 + 0x498))(plVar7,(param_2 ^ 0xffffffff) & 1);
    }
  }
  puVar3 = PTR_DAT_04bb30c8;
  puVar2 = PTR_DAT_04bb30c0;
  if (*(long *)(param_1 + 0xb0) != param_1 + 0xa8) {
    lVar8 = (long)*(int *)(param_1 + 0xbc);
    plVar7 = (long *)(*(long *)(param_1 + 0xb0) - lVar8);
    puVar1 = PTR_DAT_04bb2e38 + 0x10;
    do {
      if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
        *(undefined **)puVar2 = puVar1;
        __cxa_guard_release(puVar3);
      }
      if ((plVar7 != (long *)0x0) &&
         (uVar6 = (**(code **)(*plVar7 + 0x10))(plVar7,puVar2), (uVar6 & 1) != 0)) {
        if (((param_2 & 1) == 0) || (local_70 = PTR_DAT_04bb2020 + 0x10, (param_3 & 1) == 0)) {
          local_70 = PTR_DAT_04bb2020 + 0x10;
          pcStack_68 = "Havok_Tail";
          if ((plVar7[0x51] == 0) || (uVar4 = FUN_03efff10(plVar7[0x51],&local_70), (int)uVar4 < 0))
          break;
          if (*(uint *)(plVar7[0x51] + 0x10) <= uVar4) {
            uVar4 = 0;
          }
          lVar8 = *(long *)(plVar7[0x51] + 0x18) + (ulong)uVar4 * 0x48;
          uVar4 = *(uint *)(lVar8 + 0x18) & 0xfdffffff;
        }
        else {
          pcStack_68 = "Havok_Tail";
          if ((plVar7[0x51] == 0) || (uVar4 = FUN_03efff10(plVar7[0x51],&local_70), (int)uVar4 < 0))
          break;
          if (*(uint *)(plVar7[0x51] + 0x10) <= uVar4) {
            uVar4 = 0;
          }
          lVar8 = *(long *)(plVar7[0x51] + 0x18) + (ulong)uVar4 * 0x48;
          uVar4 = *(uint *)(lVar8 + 0x18) | 0x2000000;
        }
        *(uint *)(lVar8 + 0x18) = uVar4;
        break;
      }
      plVar7 = (long *)(*(long *)((long)plVar7 + lVar8 + 8) - lVar8);
    } while (plVar7 != (long *)((param_1 + 0xa8) - lVar8));
  }
  if (((param_4 & 1) == 0) && (plVar7 = *(long **)(param_1 + 0x60), plVar7 != (long *)0x0)) {
    if (((*PTR_DAT_04bb37b8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37b8), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb37b0 = PTR_DAT_04bb3070 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37b8);
    }
    uVar6 = (**(code **)(*plVar7 + 0x10))(plVar7,PTR_DAT_04bb37b0);
    if ((uVar6 & 1) != 0) {
      uVar9 = 0x3f800000;
      if ((param_2 & 1) == 0) {
        uVar9 = 0;
      }
      (**(code **)(*plVar7 + 0x4b8))(uVar9,plVar7);
    }
  }
  return;
}


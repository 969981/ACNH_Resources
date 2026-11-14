
void FUN_016f8a30(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined *local_60;
  char *pcStack_58;
  
  puVar3 = PTR_DAT_04bb30c8;
  puVar2 = PTR_DAT_04bb30c0;
  if (*(long *)(param_1 + 0xb0) != param_1 + 0xa8) {
    lVar8 = (long)*(int *)(param_1 + 0xbc);
    plVar7 = (long *)(*(long *)(param_1 + 0xb0) - lVar8);
    puVar1 = PTR_DAT_04bb2e38 + 0x10;
    do {
      if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar3), iVar4 != 0)) {
        *(undefined **)puVar2 = puVar1;
        __cxa_guard_release(puVar3);
      }
      if ((plVar7 != (long *)0x0) &&
         (uVar6 = (**(code **)(*plVar7 + 0x10))(plVar7,puVar2), (uVar6 & 1) != 0)) {
        local_60 = PTR_DAT_04bb2020 + 0x10;
        pcStack_58 = "Havok_Bag";
        if (plVar7[0x51] == 0) {
          return;
        }
        uVar5 = FUN_03efff10(plVar7[0x51],&local_60);
        if ((int)uVar5 < 0) {
          return;
        }
        lVar8 = plVar7[0x51];
        if (lVar8 == 0) {
          return;
        }
        if (*(uint *)(lVar8 + 0x10) <= uVar5) {
          uVar5 = 0;
        }
        lVar8 = *(long *)(lVar8 + 0x18) + (ulong)uVar5 * 0x48;
        uVar5 = 0;
        if ((param_2 & 1) == 0) {
          uVar5 = 8;
        }
        *(uint *)(lVar8 + 0x18) = *(uint *)(lVar8 + 0x18) & 0xfffffff7 | uVar5;
        return;
      }
      plVar7 = (long *)(*(long *)((long)plVar7 + lVar8 + 8) - lVar8);
    } while (plVar7 != (long *)((param_1 + 0xa8) - lVar8));
  }
  return;
}



void FUN_016f8d50(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  
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
         (uVar5 = (**(code **)(*plVar7 + 0x10))(plVar7,puVar2), (uVar5 & 1) != 0)) {
        lVar8 = plVar7[0x51];
        if ((lVar8 != 0) && ((param_2 & 1) != (*(uint *)(lVar8 + 0x48) & 0x10000) >> 0x10)) {
          uVar6 = 0x10000;
          if ((param_2 & 1) == 0) {
            uVar6 = 0;
          }
          *(uint *)(lVar8 + 0x48) = *(uint *)(lVar8 + 0x48) & 0xfffeffff | uVar6;
        }
        break;
      }
      plVar7 = (long *)(*(long *)((long)plVar7 + lVar8 + 8) - lVar8);
    } while (plVar7 != (long *)((param_1 + 0xa8) - lVar8));
  }
  plVar7 = *(long **)(param_1 + 0x60);
  if (plVar7 != (long *)0x0) {
    if (((*PTR_DAT_04bb37b8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37b8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb37b0 = PTR_DAT_04bb3070 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37b8);
    }
    uVar5 = (**(code **)(*plVar7 + 0x10))(plVar7,PTR_DAT_04bb37b0);
    if ((uVar5 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x016f8e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x4c8))(plVar7,param_2 & 1);
      return;
    }
  }
  return;
}


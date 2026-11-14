
void FUN_0150c9a0(uint *param_1,undefined4 param_2,uint param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  
  uVar6 = FUN_01503c40();
  if ((uVar6 & 1) != 0) {
    uVar2 = *param_1;
    if ((((uVar2 == 0) ||
         (plVar8 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                             ((ulong)(uVar2 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
        ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar2)) {
      plVar8 = (long *)0x0;
    }
    iVar5 = *(int *)(*(long *)PTR_DAT_04bb27c0 + 0x288);
    if (iVar5 == 1 || iVar5 == -1) {
      plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      (**(code **)(*plVar7 + 0x60))();
    }
    if (((*PTR_DAT_04bb5928 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5928);
    }
    (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb5920);
    puVar4 = PTR_DAT_04bb65e8;
    puVar3 = PTR_DAT_04bb65e0;
    if ((long *)plVar8[0x16] != plVar8 + 0x15) {
      lVar9 = (long)*(int *)((long)plVar8 + 0xbc);
      plVar7 = (long *)(plVar8[0x16] - lVar9);
      puVar1 = PTR_DAT_04bb65f0 + 0x10;
      do {
        if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
          *(undefined **)puVar3 = puVar1;
          __cxa_guard_release(puVar4);
        }
        if ((plVar7 != (long *)0x0) &&
           (uVar6 = (**(code **)(*plVar7 + 0x10))(plVar7,puVar3), (uVar6 & 1) != 0)) {
          FUN_014540a0(plVar7,param_2,param_3 & 1);
          return;
        }
        plVar7 = (long *)(*(long *)((long)plVar7 + lVar9 + 8) - lVar9);
      } while (plVar7 != (long *)((long)(plVar8 + 0x15) - lVar9));
    }
  }
  return;
}


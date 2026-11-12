
void FUN_009004b0(long param_1)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  
  if ((((*(long *)PTR_DAT_04bb27c0 != 0) && (uVar2 = *(uint *)(param_1 + 0x274), uVar2 != 0)) &&
      (plVar8 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                          ((ulong)(uVar2 >> 0x11) & 0x7ff8)), plVar8 != (long *)0x0)) &&
     (((*(uint *)(plVar8 + 0x49) >> 1 & 1) == 0 && (*(uint *)(plVar8 + 0x46) == uVar2)))) {
    if (((*PTR_DAT_04bb32c0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb32c0), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb32b8 = PTR_DAT_04bb32c8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb32c0);
    }
    uVar4 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb32b8);
    if ((uVar4 & 1) != 0) {
      iVar3 = (int)plVar8[0x6210];
      if (iVar3 != 0) {
        puVar5 = (undefined8 *)plVar8[0x6211];
        uVar1 = (long)iVar3 - 1U & 0x1fffffffffffffff;
        uVar4 = uVar1 + 1;
        uVar7 = 0;
        if (uVar1 != 0) {
          uVar7 = 0;
          puVar6 = puVar5;
          do {
            puVar5 = puVar6 + 2;
            if (*(int *)*puVar6 - 0xfU < 4 || *(int *)*puVar6 == 1) {
              iVar3 = (int)uVar7;
            }
            if (*(int *)puVar6[1] - 0xfU < 4 || *(int *)puVar6[1] == 1) {
              iVar3 = (int)uVar7 + 1;
            }
            uVar7 = uVar7 + 2;
            puVar6 = puVar5;
          } while ((uVar4 & 0x3ffffffffffffffe) != uVar7);
        }
        if (((uVar4 & 1) != 0) && ((*(int *)*puVar5 - 0xfU < 4 || (*(int *)*puVar5 == 1)))) {
          iVar3 = (int)uVar7;
        }
      }
      *(int *)(plVar8 + 0x62b4) = iVar3;
    }
  }
  return;
}


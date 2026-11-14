
void FUN_01b36130(long param_1,undefined8 param_2,int param_3,undefined8 param_4,uint param_5)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  
  if (*(long *)PTR_DAT_04bb46b0 != 0) {
    lVar4 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,param_3);
    if (lVar4 != 0) {
      if ((*(long **)(lVar4 + 0x17bb0) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x17bb0), puVar5 == (undefined8 *)0x0)) {
        uVar3 = 1;
      }
      else {
        uVar3 = (**(code **)*puVar5)();
        uVar3 = uVar3 ^ 1;
      }
      if (*(long *)(param_1 + 8) != param_1) {
        lVar7 = (long)*(int *)(param_1 + 0x14);
        plVar10 = (long *)(*(long *)(param_1 + 8) - lVar7);
        lVar11 = (long)plVar10 + lVar7;
        uVar6 = (param_5 ^ param_5 >> 0x1e) * 0x6c078965 + 1;
        uVar9 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 2;
        uVar8 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 3;
        uVar12 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 4;
        do {
          lVar11 = *(long *)(lVar11 + 8);
          if ((int)plVar10[1] == param_3) {
            uVar6 = uVar6 ^ uVar6 << 0xb;
            uVar2 = uVar12 >> 0x13 ^ uVar6 >> 8 ^ uVar12 ^ uVar6;
            (**(code **)(*plVar10 + 0x30))
                      (plVar10,param_2,*(long *)(lVar4 + 0x17b98) + *(long *)(lVar4 + 0x17b90),
                       param_4,uVar2);
            plVar1 = (long *)((long)plVar10 + (long)*(int *)(param_1 + 0x14));
            if (*plVar1 != 0) {
              *(long *)(*plVar1 + 8) = plVar1[1];
            }
            if ((long *)plVar1[1] != (long *)0x0) {
              *(long *)plVar1[1] = *plVar1;
            }
            *plVar1 = 0;
            plVar1[1] = 0;
            *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
            (**(code **)(*plVar10 + 0x18))(plVar10);
            uVar6 = uVar9;
            uVar9 = uVar8;
            uVar8 = uVar12;
            uVar12 = uVar2;
          }
          plVar10 = (long *)(lVar11 - lVar7);
        } while (plVar10 != (long *)(param_1 - lVar7));
      }
      if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x17bb0) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x17bb0) + 8), puVar5 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x01b36304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar5)();
        return;
      }
    }
  }
  return;
}


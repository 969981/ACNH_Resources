
/* WARNING: Removing unreachable block (ram,0x02c49564) */
/* WARNING: Removing unreachable block (ram,0x02c49748) */
/* WARNING: Removing unreachable block (ram,0x02c49758) */
/* WARNING: Removing unreachable block (ram,0x02c4976c) */

void FUN_02c494f0(long param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined *local_70;
  undefined4 local_68;
  
  uVar1 = *(uint *)(param_1 + 0x2a8);
  uVar2 = (ulong)uVar1;
  if (0 < (int)uVar1) {
    if (param_2 == 0) {
      uVar5 = 0;
      do {
        if ((uVar5 < (uVar2 & 0xffffffff)) &&
           (lVar3 = *(long *)(*(long *)(param_1 + 0x2b0) + uVar5 * 8), lVar3 != 0)) {
          plVar4 = (long *)**(undefined8 **)(lVar3 + 0x2f0);
          if (plVar4 != (long *)0x0) {
            local_68 = 1;
            local_70 = PTR_DAT_04bc4e68 + 0x10;
            (**(code **)(*plVar4 + 0x18))(plVar4,&local_70);
            (**(code **)(plVar4[3] + 400))(0x3f800000,plVar4[1]);
          }
          FUN_030bffe0(lVar3,0);
          local_70 = (undefined *)CONCAT44(local_70._4_4_,2);
                    /* WARNING: Could not recover jumptable at 0x02c49708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_02c4970c + (ulong)DAT_0417fd99 * 4))();
          return;
        }
        uVar2 = (ulong)*(int *)(param_1 + 0x2a8);
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)uVar2);
    }
    else {
      uVar5 = 0;
      do {
        if ((uVar5 < uVar2) &&
           (lVar3 = *(long *)(*(long *)(param_1 + 0x2b0) + uVar5 * 8), lVar3 != 0)) {
          if (*(uint *)(lVar3 + 0x2e8) <= param_2) {
            param_2 = 0;
          }
          plVar4 = *(long **)(*(long *)(lVar3 + 0x2f0) + (ulong)param_2 * 8);
          if (plVar4 != (long *)0x0) {
            local_68 = 1;
            local_70 = PTR_DAT_04bc4e68 + 0x10;
            (**(code **)(*plVar4 + 0x18))(plVar4,&local_70);
            (**(code **)(plVar4[3] + 400))(0x3f800000,plVar4[1]);
          }
          if (*(char *)(param_1 + 0x2e8) != '\0') {
            FUN_030bfe80(lVar3,0);
          }
          local_70 = (undefined *)((ulong)local_70 & 0xffffffff00000000);
                    /* WARNING: Could not recover jumptable at 0x02c4961c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_02c49554 + (ulong)DAT_0417fd92 * 4))();
          return;
        }
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)(int)uVar1);
    }
  }
  return;
}


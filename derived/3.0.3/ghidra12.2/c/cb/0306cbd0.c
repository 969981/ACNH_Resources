
void FUN_0306cbd0(long *param_1,long param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined1 auStack_16fa [2];
  undefined1 auStack_16f8 [5798];
  undefined1 auStack_52 [2];
  undefined *local_50;
  undefined4 local_48;
  
  if ((param_2 != 0) && (plVar3 = (long *)(**(code **)(*param_1 + 0x238))(), plVar3 != (long *)0x0))
  {
    FUN_007ef010(auStack_52,PTR_DAT_04bb3170);
    uVar7 = *(uint *)(param_1 + 0x2af);
    uVar8 = 0xffffffff;
    if ((-1 < (int)uVar7) && ((int)uVar7 < (int)param_1[0x2ac])) {
      plVar5 = param_1 + 0x2aa;
      uVar1 = uVar7 + 1 & 3;
      if (2 < uVar7) {
        uVar7 = uVar7 + 1 & 0xfffffffc;
        do {
          uVar7 = uVar7 - 4;
          plVar5 = *(long **)(*(long *)(*(long *)(plVar5[1] + 8) + 8) + 8);
        } while (uVar7 != 0);
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        plVar5 = (long *)plVar5[1];
      }
      uVar8 = 0xffffffff;
      if ((plVar5 != (long *)0x0) &&
         (lVar6 = (long)plVar5 - (long)*(int *)((long)param_1 + 0x1564), lVar6 != 0)) {
        uVar8 = *(undefined4 *)(lVar6 + 0x270);
      }
    }
    (**(code **)(*param_1 + 0x248))(param_1,auStack_52,param_3,uVar8);
    FUN_007ef010(auStack_16fa,auStack_52);
    FUN_007e4920(auStack_16f8,auStack_16fa);
    uVar4 = FUN_007e4bb0(auStack_16f8);
    uVar8 = 0;
    if ((uVar4 & 1) != 0) {
      iVar2 = FUN_007e68d0(auStack_16f8);
      if (iVar2 - 3U < 0x1c) {
        uVar8 = *(undefined4 *)(&DAT_041839d8 + (long)(int)(iVar2 - 3U) * 4);
      }
    }
    local_50 = PTR_DAT_04bc4f00 + 0x10;
    local_48 = 0x14;
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
    (**(code **)(plVar3[3] + 0x158))(uVar8,plVar3[1]);
  }
  return;
}



uint FUN_0311dcb8(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  undefined *local_40;
  undefined4 local_38;
  
  if (*(long *)(param_1 + 0x1068) == 0) {
    uVar1 = FUN_03463a4c(param_1 + 0x2c0,param_1 + 0x260,param_1 + 0x408);
    if (((uVar1 & 1) != 0) && (plVar9 = *(long **)(param_1 + 600), plVar9 != (long *)0x0)) {
      local_40 = PTR_DAT_04bc0cb8 + 0x10;
      local_38 = 0x1f;
      (**(code **)(*plVar9 + 0x18))(plVar9,&local_40);
      (**(code **)(plVar9[3] + 0x208))(plVar9[1],0,0,param_1 + 0x408);
    }
    uVar8 = FUN_03463a4c(param_1 + 0x4b8,param_1 + 0x458,param_1 + 0x600);
    if ((uVar8 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      plVar9 = *(long **)(param_1 + 0x450);
      if (plVar9 != (long *)0x0) {
        local_40 = PTR_DAT_04bc0cb8 + 0x10;
        local_38 = 0x1f;
        (**(code **)(*plVar9 + 0x18))(plVar9,&local_40);
        (**(code **)(plVar9[3] + 0x208))(plVar9[1],0,0,param_1 + 0x600);
      }
    }
    uVar8 = FUN_03463a4c(param_1 + 0x6b0,param_1 + 0x650,param_1 + 0x7f8);
    if ((uVar8 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      plVar9 = *(long **)(param_1 + 0x648);
      if (plVar9 != (long *)0x0) {
        local_40 = PTR_DAT_04bc0cb8 + 0x10;
        local_38 = 0x1f;
        (**(code **)(*plVar9 + 0x18))(plVar9,&local_40);
        (**(code **)(plVar9[3] + 0x208))(plVar9[1],0,0,param_1 + 0x7f8);
      }
    }
    uVar8 = FUN_03463a4c(param_1 + 0x8a8,param_1 + 0x848,param_1 + 0x9f0);
    if ((uVar8 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      plVar9 = *(long **)(param_1 + 0x840);
      if (plVar9 != (long *)0x0) {
        local_40 = PTR_DAT_04bc0cb8 + 0x10;
        local_38 = 0x1f;
        (**(code **)(*plVar9 + 0x18))(plVar9,&local_40);
        (**(code **)(plVar9[3] + 0x208))(plVar9[1],0,0,param_1 + 0x9f0);
      }
    }
    uVar8 = FUN_03463a4c(param_1 + 0xaa0,param_1 + 0xa40,param_1 + 0xbe8);
    if ((uVar8 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      plVar9 = *(long **)(param_1 + 0xa38);
      if (plVar9 != (long *)0x0) {
        local_40 = PTR_DAT_04bc0cb8 + 0x10;
        local_38 = 0x1f;
        (**(code **)(*plVar9 + 0x18))(plVar9,&local_40);
        (**(code **)(plVar9[3] + 0x208))(plVar9[1],0,0,param_1 + 0xbe8);
      }
    }
    uVar8 = FUN_03463a4c(param_1 + 0xc98,param_1 + 0xc38,param_1 + 0xde0);
    if ((uVar8 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      plVar9 = *(long **)(param_1 + 0xc30);
      if (plVar9 != (long *)0x0) {
        local_40 = PTR_DAT_04bc0cb8 + 0x10;
        local_38 = 0x1f;
        (**(code **)(*plVar9 + 0x18))(plVar9,&local_40);
        (**(code **)(plVar9[3] + 0x208))(plVar9[1],0,0,param_1 + 0xde0);
      }
    }
    uVar8 = FUN_03463a4c(param_1 + 0xe90,param_1 + 0xe30,param_1 + 0xfd8);
    if ((uVar8 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      plVar9 = *(long **)(param_1 + 0xe28);
      if (plVar9 != (long *)0x0) {
        local_40 = PTR_DAT_04bc0cb8 + 0x10;
        local_38 = 0x1f;
        (**(code **)(*plVar9 + 0x18))(plVar9,&local_40);
        (**(code **)(plVar9[3] + 0x208))(plVar9[1],0,0,param_1 + 0xfd8);
      }
    }
  }
  else {
    uVar1 = FUN_03120acc(param_1,0);
    uVar2 = FUN_03120acc(param_1,1);
    uVar3 = FUN_03120acc(param_1,2);
    uVar4 = FUN_03120acc(param_1,3);
    uVar5 = FUN_03120acc(param_1,4);
    uVar6 = FUN_03120acc(param_1,5);
    uVar7 = FUN_03120acc(param_1,6);
    uVar1 = uVar7 & uVar6 & uVar5 & uVar4 & uVar3 & uVar1 & uVar2;
  }
  return uVar1 & 1;
}


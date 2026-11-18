
void FUN_0320d198(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  float fVar6;
  undefined *local_50;
  undefined4 local_48;
  
  uVar2 = *(uint *)(param_1 + 0x268);
  uVar1 = uVar2;
  if (*(uint *)(param_1 + 0x350) <= uVar2) {
    uVar1 = 0;
  }
  iVar3 = *(int *)(*(long *)(param_1 + 0x358) + (long)(int)uVar1 * 0x70 + 8);
  if (iVar3 == 0x5f) {
    FUN_03210010(param_1);
    fVar6 = 2.0;
  }
  else if (iVar3 == 0x5e) {
    FUN_0320fa10(param_1);
    fVar6 = 1.0;
  }
  else {
    fVar6 = 0.0;
    if (iVar3 == 0x5d) {
      FUN_0320f5b0(param_1);
    }
  }
  plVar5 = *(long **)(*(long *)(param_1 + 0x210) + 0x588);
  if (plVar5 != (long *)0x0) {
    plVar4 = (long *)plVar5[0x36];
    if (uVar2 == 0) {
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x30))(plVar4,0);
      }
    }
    else {
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x28))(plVar4,0);
        (**(code **)(*plVar5 + 0xa8))(plVar5);
      }
      plVar5 = *(long **)plVar5[0x46];
      if (plVar5 != (long *)0x0) {
        local_50 = PTR_DAT_04bc4f00 + 0x10;
        local_48 = 0x14;
        (**(code **)(*plVar5 + 0x18))(plVar5,&local_50);
        (**(code **)(plVar5[3] + 0x158))(fVar6 + -1.0,plVar5[1]);
      }
    }
  }
  plVar5 = *(long **)(*(long *)(param_1 + 0x210) + 0x580);
  if (plVar5 != (long *)0x0) {
    plVar4 = (long *)plVar5[0x36];
    if (*(int *)(param_1 + 0x260) - 1U == uVar2) {
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x30))(plVar4,0);
      }
    }
    else {
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x28))(plVar4,0);
        (**(code **)(*plVar5 + 0xa8))(plVar5);
      }
      plVar5 = *(long **)plVar5[0x46];
      if (plVar5 != (long *)0x0) {
        local_50 = PTR_DAT_04bc4f00 + 0x10;
        local_48 = 0x14;
        (**(code **)(*plVar5 + 0x18))(plVar5,&local_50);
        (**(code **)(plVar5[3] + 0x158))(fVar6 + 1.0,plVar5[1]);
      }
    }
  }
  return;
}



void FUN_02f209b8(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined **local_40;
  undefined4 local_38;
  
  uVar1 = (**(code **)(*param_1 + 0x50))();
  if (((uVar1 & 1) != 0) && (plVar3 = (long *)param_1[5], plVar3 != (long *)0x0)) {
    if ((param_2 & 1) == 0) {
      local_40 = &PTR_FUN_04aa77b8;
      local_38 = 6;
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
      (**(code **)(plVar3[3] + 0x1b8))(plVar3[1]);
      lVar2 = param_1[8];
    }
    else {
      local_40 = &PTR_FUN_04aa77b8;
      local_38 = 0;
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
      (**(code **)(plVar3[3] + 0x188))(0x3f800000,plVar3[1],1);
      lVar2 = param_1[8];
    }
    if ((lVar2 != 0) && (plVar3 = (long *)param_1[10], plVar3 != (long *)0x0)) {
      if ((param_2 & 1) == 0) {
        local_40 = &PTR_FUN_04aa77b8;
        local_38 = 6;
        (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
        (**(code **)(plVar3[3] + 0x1b8))(plVar3[1]);
      }
      else {
        local_40 = &PTR_FUN_04aa77b8;
        local_38 = 0;
        (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
        (**(code **)(plVar3[3] + 0x188))(0x3f800000,plVar3[1],1);
      }
    }
  }
  return;
}


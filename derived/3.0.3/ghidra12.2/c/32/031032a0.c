
void FUN_031032a0(long param_1,uint param_2)

{
  long *plVar1;
  undefined **local_50;
  undefined4 local_48;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x2b0) + 0x48);
  local_48 = 7;
  local_50 = &PTR_LAB_04a3ee98;
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_50);
  (**(code **)(plVar1[3] + 0x88))(plVar1[1],param_2);
  local_50 = &PTR_LAB_04a3ee98;
  local_48 = 7;
  plVar1 = *(long **)(*(long *)(param_1 + 0x2b8) + 0x48);
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_50);
  (**(code **)(plVar1[3] + 0x88))(plVar1[1],param_2);
  local_50 = &PTR_LAB_04a3ee98;
  local_48 = 7;
  plVar1 = *(long **)(*(long *)(param_1 + 0x2c0) + 0x48);
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_50);
  (**(code **)(plVar1[3] + 0x88))(plVar1[1],param_2);
  if ((param_2 & 1) == 0) {
    plVar1 = *(long **)(param_1 + 0x298);
    local_50 = &PTR_LAB_04a3ee98;
    local_48 = 7;
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_50);
    (**(code **)(plVar1[3] + 0x88))(plVar1[1],0);
    plVar1 = *(long **)(param_1 + 0x2a0);
    local_50 = &PTR_LAB_04a3ee98;
    local_48 = 7;
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_50);
    (**(code **)(plVar1[3] + 0x88))(plVar1[1],0);
    plVar1 = *(long **)(param_1 + 0x2a8);
    local_50 = &PTR_LAB_04a3ee98;
    local_48 = 7;
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_50);
    (**(code **)(plVar1[3] + 0x88))(plVar1[1],0);
  }
  return;
}


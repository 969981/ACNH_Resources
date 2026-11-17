
int FUN_03038210(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  undefined **local_50;
  undefined4 local_48;
  
  plVar3 = *(long **)(*param_1 + 0x10);
  local_48 = 8;
  local_50 = &PTR_LAB_04a3ee98;
  (**(code **)(*plVar3 + 0x20))(plVar3,&local_50);
  lVar2 = (**(code **)(plVar3[3] + 0xa0))(plVar3[1]);
  fVar4 = *(float *)(lVar2 + 4);
  local_50 = &PTR_LAB_04a3ee98;
  local_48 = 8;
  plVar3 = *(long **)(*param_2 + 0x10);
  (**(code **)(*plVar3 + 0x20))(plVar3,&local_50);
  lVar2 = (**(code **)(plVar3[3] + 0xa0))(plVar3[1]);
  if (*(float *)(lVar2 + 4) <= fVar4) {
    local_50 = &PTR_LAB_04a3ee98;
    local_48 = 8;
    plVar3 = *(long **)(*param_2 + 0x10);
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_50);
    lVar2 = (**(code **)(plVar3[3] + 0xa0))(plVar3[1]);
    fVar4 = *(float *)(lVar2 + 4);
    local_50 = &PTR_LAB_04a3ee98;
    local_48 = 8;
    plVar3 = *(long **)(*param_1 + 0x10);
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_50);
    lVar2 = (**(code **)(plVar3[3] + 0xa0))(plVar3[1]);
    iVar1 = -(uint)(fVar4 < *(float *)(lVar2 + 4));
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}


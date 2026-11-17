
void FUN_0311d2a0(long param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined *local_50;
  undefined4 local_48;
  
  if (*param_2 != 0) {
    *(long *)(param_1 + 0x1068) = *param_2;
  }
  puVar1 = PTR_DAT_04bc0cb8;
  plVar2 = *(long **)(param_1 + 600);
  if (plVar2 != (long *)0x0) {
    local_50 = PTR_DAT_04bc0cb8 + 0x10;
    local_48 = 0x1f;
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_50);
    (**(code **)(plVar2[3] + 0x210))(param_1 + 0x428,plVar2[1],0,0);
  }
  plVar2 = *(long **)(param_1 + 0x450);
  if (plVar2 != (long *)0x0) {
    local_50 = puVar1 + 0x10;
    local_48 = 0x1f;
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_50);
    (**(code **)(plVar2[3] + 0x210))(param_1 + 0x620,plVar2[1],0,0);
  }
  plVar2 = *(long **)(param_1 + 0x648);
  if (plVar2 != (long *)0x0) {
    local_50 = puVar1 + 0x10;
    local_48 = 0x1f;
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_50);
    (**(code **)(plVar2[3] + 0x210))(param_1 + 0x818,plVar2[1],0,0);
  }
  plVar2 = *(long **)(param_1 + 0x840);
  if (plVar2 != (long *)0x0) {
    local_50 = puVar1 + 0x10;
    local_48 = 0x1f;
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_50);
    (**(code **)(plVar2[3] + 0x210))(param_1 + 0xa10,plVar2[1],0,0);
  }
  plVar2 = *(long **)(param_1 + 0xa38);
  if (plVar2 != (long *)0x0) {
    local_50 = puVar1 + 0x10;
    local_48 = 0x1f;
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_50);
    (**(code **)(plVar2[3] + 0x210))(param_1 + 0xc08,plVar2[1],0,0);
  }
  plVar2 = *(long **)(param_1 + 0xc30);
  if (plVar2 != (long *)0x0) {
    local_50 = puVar1 + 0x10;
    local_48 = 0x1f;
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_50);
    (**(code **)(plVar2[3] + 0x210))(param_1 + 0xe00,plVar2[1],0,0);
  }
  plVar2 = *(long **)(param_1 + 0xe28);
  if (plVar2 != (long *)0x0) {
    local_50 = puVar1 + 0x10;
    local_48 = 0x1f;
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_50);
    (**(code **)(plVar2[3] + 0x210))(param_1 + 0xff8,plVar2[1],0,0);
  }
  *(int *)(param_1 + 0x107c) = (int)param_2[1];
  return;
}


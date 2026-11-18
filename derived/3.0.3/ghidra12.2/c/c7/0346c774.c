
void FUN_0346c774(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  uint local_44;
  undefined *local_40;
  undefined4 local_38;
  
  puVar2 = PTR_DAT_04bc0cb8;
  if (*(char *)(param_1 + 0x624) != '\0') {
    if (param_2 == 0) {
      if (*(uint *)(param_1 + 0x620) < *(uint *)(param_1 + 0x5a0)) {
        plVar3 = *(long **)(*(long *)(param_1 + 0x5a8) + (long)(int)*(uint *)(param_1 + 0x620) * 8);
      }
      else {
        plVar3 = (long *)0x0;
      }
      local_40 = PTR_DAT_04bc0cb8 + 0x10;
      local_38 = 7;
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
      (**(code **)(plVar3[3] + 0x88))(plVar3[1],0);
      if (*(char *)(param_1 + 0x624) == '\0') {
        *(undefined4 *)(param_1 + 0x620) = 0;
      }
      if (*(uint *)(param_1 + 0x620) < *(uint *)(param_1 + 0x5a0)) {
        plVar3 = *(long **)(*(long *)(param_1 + 0x5a8) + (long)(int)*(uint *)(param_1 + 0x620) * 8);
      }
      else {
        plVar3 = (long *)0x0;
      }
      if (*(char *)(param_1 + 0x624) == '\0') {
        *(undefined4 *)(param_1 + 0x620) = 0;
      }
      local_40 = puVar2 + 0x10;
      local_38 = 0x1f;
      lVar1 = param_1 + 0x5c0 + (ulong)*(uint *)(param_1 + 0x620) * 0x20;
      if (1 < *(uint *)(param_1 + 0x620)) {
        lVar1 = param_1 + 0x5c0;
      }
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
      (**(code **)(plVar3[3] + 0x208))(plVar3[1],0,0,lVar1);
    }
    else {
      FUN_03b137d0(param_1 + 0x600,param_2,0);
      *(undefined4 *)(param_1 + 0x618) = 0;
      if (*(char *)(param_1 + 0x624) == '\0') {
        *(undefined4 *)(param_1 + 0x620) = 0;
      }
      puVar2 = PTR_DAT_04bc0cb8;
      if (*(uint *)(param_1 + 0x620) < *(uint *)(param_1 + 0x5a0)) {
        plVar3 = *(long **)(*(long *)(param_1 + 0x5a8) + (long)(int)*(uint *)(param_1 + 0x620) * 8);
      }
      else {
        plVar3 = (long *)0x0;
      }
      local_40 = PTR_DAT_04bc0cb8 + 0x10;
      local_38 = 0x1f;
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
      (**(code **)(plVar3[3] + 0x208))(plVar3[1],0,0,param_1 + 0x600);
      if (*(char *)(param_1 + 0x624) == '\0') {
        *(undefined4 *)(param_1 + 0x620) = 0;
      }
      if (*(uint *)(param_1 + 0x620) < *(uint *)(param_1 + 0x5a0)) {
        plVar3 = *(long **)(*(long *)(param_1 + 0x5a8) + (long)(int)*(uint *)(param_1 + 0x620) * 8);
      }
      else {
        plVar3 = (long *)0x0;
      }
      local_40 = puVar2 + 0x10;
      local_38 = 7;
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
      (**(code **)(plVar3[3] + 0x88))(plVar3[1],1);
      if (*(char *)(param_1 + 0x624) == '\0') {
        *(undefined4 *)(param_1 + 0x620) = 0;
      }
      if (*(uint *)(param_1 + 0x620) < *(uint *)(param_1 + 0x5a0)) {
        plVar3 = *(long **)(*(long *)(param_1 + 0x5a8) + (long)(int)*(uint *)(param_1 + 0x620) * 8);
      }
      else {
        plVar3 = (long *)0x0;
      }
      local_40 = puVar2 + 0x10;
      local_38 = 0x1a;
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_40);
      local_44 = (**(code **)(plVar3[3] + 0x1c0))(plVar3[1],0,0,0);
      if (*(char *)(param_1 + 0x624) == '\0') {
        *(undefined4 *)(param_1 + 0x620) = 0;
      }
      if (*(uint *)(param_1 + 0x620) < *(uint *)(param_1 + 0x5a0)) {
        plVar3 = *(long **)(*(long *)(param_1 + 0x5a8) + (long)(int)*(uint *)(param_1 + 0x620) * 8);
      }
      else {
        plVar3 = (long *)0x0;
      }
      local_44 = local_44 | 0xff;
      local_38 = 0x1a;
      local_40 = puVar2 + 0x10;
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
      (**(code **)(plVar3[3] + 0x1b8))(plVar3[1],0,0,0,&local_44);
    }
  }
  return;
}


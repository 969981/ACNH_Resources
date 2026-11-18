
/* WARNING: Removing unreachable block (ram,0x0346c6b8) */
/* WARNING: Removing unreachable block (ram,0x0346c734) */

void FUN_0346c650(long param_1)

{
  long *plVar1;
  undefined **local_50;
  undefined4 local_48;
  
  if (*(int *)(param_1 + 0x5a0) == 0) {
    plVar1 = (long *)0x0;
  }
  else {
    plVar1 = (long *)**(undefined8 **)(param_1 + 0x5a8);
  }
  local_48 = 0x1f;
  local_50 = &PTR_LAB_04a3ee98;
  (**(code **)(*plVar1 + 0x20))(plVar1,&local_50);
  (**(code **)(plVar1[3] + 0x210))(param_1 + 0x5c0,plVar1[1],0,0);
  if (*(uint *)(param_1 + 0x5a0) < 2) {
    plVar1 = (long *)0x0;
  }
  else {
    plVar1 = *(long **)(*(long *)(param_1 + 0x5a8) + 8);
  }
  local_50 = &PTR_LAB_04a3ee98;
  local_48 = 0x1f;
  (**(code **)(*plVar1 + 0x20))(plVar1,&local_50);
  (**(code **)(plVar1[3] + 0x210))(param_1 + 0x5e0,plVar1[1],0,0);
  return;
}


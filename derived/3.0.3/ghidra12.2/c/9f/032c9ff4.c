
/* WARNING: Removing unreachable block (ram,0x032ca070) */
/* WARNING: Removing unreachable block (ram,0x032ca054) */
/* WARNING: Removing unreachable block (ram,0x032ca094) */

void FUN_032c9ff4(long param_1,undefined8 param_2,undefined8 *param_3,uint param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined4 local_34;
  
  local_50 = PTR_DAT_04bb2020 + 0x10;
  local_40 = (param_4 & 1) == 0;
  if ((bool)local_40) {
    local_58 = *(undefined8 *)(*(long *)(DAT_05739190 + 8) + 0x48);
  }
  else {
    local_58 = *(undefined8 *)(*(long *)(DAT_05739190 + 8) + 0x50);
  }
  local_34 = 0;
  local_48 = param_2;
  plVar4 = (long *)(**(code **)(*(long *)*param_3 + 0x30))((long *)*param_3,0x50,8);
  puVar3 = PTR_DAT_04bc9428;
  *(undefined4 *)(plVar4 + 5) = 0x20;
  *(undefined1 *)((long)plVar4 + 0x4b) = 0;
  *(undefined1 *)((long)plVar4 + 0x2c) = 0;
  plVar4[4] = (long)plVar4 + 0x2c;
  puVar2 = PTR_DAT_04bb2028;
  *plVar4 = (long)(puVar3 + 0x10);
  plVar4[1] = 0;
  plVar4[2] = 0;
  plVar4[3] = (long)(puVar2 + 0x10);
  FUN_032c8f40(plVar4,&local_58,param_3);
  lVar5 = (**(code **)(*plVar4 + 0x18))(plVar4);
  if (lVar5 != 0) {
    if ((param_4 & 1) == 0) {
      plVar1 = (long *)(param_1 + 8) + *(uint *)(param_1 + 0x648);
      if (99 < *(uint *)(param_1 + 0x648)) {
        plVar1 = (long *)(param_1 + 8);
      }
      plVar6 = (long *)*plVar1;
      *plVar1 = (long)plVar4;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      *(int *)(param_1 + 0x648) = *(int *)(param_1 + 0x648) + 1;
    }
    else {
      plVar1 = (long *)(param_1 + 0x328) + *(uint *)(param_1 + 0x64c);
      if (99 < *(uint *)(param_1 + 0x64c)) {
        plVar1 = (long *)(param_1 + 0x328);
      }
      plVar6 = (long *)*plVar1;
      *plVar1 = (long)plVar4;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      *(int *)(param_1 + 0x64c) = *(int *)(param_1 + 0x64c) + 1;
    }
    *(long **)(param_1 + 0x650) = plVar4;
  }
  return;
}


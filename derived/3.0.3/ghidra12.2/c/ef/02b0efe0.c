
/* WARNING: Removing unreachable block (ram,0x02b0f0b0) */
/* WARNING: Removing unreachable block (ram,0x02b0f0b4) */

bool FUN_02b0efe0(long param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  uint local_90 [8];
  undefined *local_70;
  int local_68;
  undefined1 local_64;
  undefined8 local_62;
  undefined8 local_5a;
  undefined8 local_52;
  undefined6 local_4a;
  undefined2 uStack_44;
  undefined6 uStack_42;
  uint local_34;
  
  local_68 = 0;
  plVar1 = (long *)(param_1 + 8);
  local_64 = 0;
  local_62 = 0;
  local_70 = PTR_DAT_04bc4980 + 0x10;
  local_5a = 0;
  local_52 = 0;
  local_4a = 0;
  uStack_44 = 0;
  uStack_42 = 0;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 8);
  local_90[0] = *(uint *)(param_2 + 8);
  plVar5 = plVar1 + local_90[0];
  if (6 < local_90[0]) {
    plVar5 = plVar1;
  }
  plVar5 = (long *)*plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
    (**(code **)(*plVar5 + 0x28))(plVar5,&local_70,param_2);
    if (((local_68 == 0) && (DAT_05635578 != 0)) && (*(int *)(DAT_05635578 + 0x2680) == 0)) {
      piVar2 = (int *)(DAT_05635578 + 0x2680);
      FUN_02b0f1b0(local_90,param_1,param_2,&local_70);
      FUN_02b403f0(piVar2,local_90);
      iVar3 = *piVar2;
      if (iVar3 == 0) {
        return false;
      }
      FUN_02b0fa90(param_1,*(undefined4 *)(param_2 + 8),0);
      FUN_02b0fcc0(param_1,param_2,&local_70);
      uVar4 = DAT_04c9a0c8;
      if (*(char *)(param_2 + 0x1d) == '\0') {
        *(undefined4 *)(param_1 + 0x48) = DAT_04c9a0c8;
        *(undefined4 *)(param_1 + 0x4c) = uVar4;
      }
      else {
        FUN_02b10320(param_1,param_2);
      }
      *(undefined1 *)(param_1 + 0x44) = 1;
      FUN_02b109a0(param_1);
      local_34 = *(uint *)(param_1 + 0x40);
      plVar5 = plVar1 + local_34;
      if (6 < local_34) {
        plVar5 = plVar1;
      }
      if ((long *)*plVar5 == (long *)0x0) {
        return iVar3 != 0;
      }
      (**(code **)(*(long *)*plVar5 + 0x40))();
      return iVar3 != 0;
    }
  }
  return false;
}


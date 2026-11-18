
/* WARNING: Removing unreachable block (ram,0x0327eeac) */
/* WARNING: Removing unreachable block (ram,0x0327ef78) */

void FUN_0327ee7c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined1 local_6c [4];
  undefined *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined *local_40;
  undefined *puStack_38;
  
  local_68 = (undefined *)((ulong)local_68 & 0xffffffff00000000);
  plVar2 = (long *)(**(code **)(*(long *)*param_3 + 0x30))((long *)*param_3,0x40,8);
  plVar2[2] = 0;
  plVar2[3] = 0;
  plVar2[4] = 0;
  plVar2[5] = 0;
  puVar1 = PTR_DAT_04bc8e08 + 0x10;
  plVar2[6] = 0;
  plVar2[7] = 0;
  *plVar2 = (long)puVar1;
  plVar2[1] = 0;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  local_68 = PTR_DAT_04bc8db8 + 0x10;
  puStack_38 = PTR_DAT_04bb2120;
  uStack_60 = *param_3;
  local_58 = param_3[1];
  uStack_50 = *param_2;
  local_48 = *(undefined4 *)(param_2 + 1);
  uStack_44 = 1;
  (**(code **)(*plVar2 + 0x20))(plVar2,&local_68);
  (**(code **)(*plVar2 + 0x30))(plVar2,*(undefined1 *)((long)param_2 + 0xc));
  plVar3 = *(long **)(param_1 + 0x10);
  *(long **)(param_1 + 0x10) = plVar2;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))();
  }
  local_6c[0] = 0;
  local_68 = (undefined *)((ulong)local_68 & 0xffffffff00000000);
  puVar4 = (undefined8 *)(**(code **)(*(long *)*param_3 + 0x30))((long *)*param_3,0x20,8);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  plVar2 = *(long **)(param_1 + 0x18);
  *(undefined8 **)(param_1 + 0x18) = puVar4;
  if (plVar2 != (long *)0x0) {
    if ((long *)plVar2[3] != (long *)0x0) {
      (**(code **)(*(long *)plVar2[3] + 8))();
    }
    if ((long *)plVar2[2] != (long *)0x0) {
      (**(code **)(*(long *)plVar2[2] + 8))();
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      (**(code **)(*(long *)plVar2[1] + 8))();
    }
    if ((long *)*plVar2 != (long *)0x0) {
      (**(code **)(*(long *)*plVar2 + 0x18))();
    }
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(plVar2);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,plVar2);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,plVar2);
      }
    }
    puVar4 = *(undefined8 **)(param_1 + 0x18);
  }
  FUN_0327e1c0(puVar4,local_6c,param_3);
  return;
}


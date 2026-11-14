
/* WARNING: Removing unreachable block (ram,0x01581358) */
/* WARNING: Removing unreachable block (ram,0x015813f0) */

void FUN_015812cc(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_50;
  undefined8 local_48;
  undefined *local_40;
  char *pcStack_38;
  undefined8 local_18;
  
  plVar1 = *(long **)(param_1 + 0x38);
  if (plVar1 != (long *)0x0) {
    if (0xfffffffffffffffb < (long)*(int *)(param_1 + 0x2388) - 7U) {
      local_18 = 0;
      pcStack_38 = (&PTR_s_normal_bagldof_049abe48)[*(int *)(param_1 + 0x2388)];
      local_40 = PTR_DAT_04bb2020 + 0x10;
      uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,&local_40,&local_18);
      local_40 = (undefined *)((ulong)local_40 & 0xffffffff00000000);
      lVar3 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x58) + 0xe88) + 0x2e98);
      FUN_03964240(&local_50,uVar2);
      (**(code **)(*(long *)(lVar3 + 0x5e8) + 0x50))(lVar3 + 0x5e8,local_50);
      *(undefined1 *)(param_1 + 0x2382) = 1;
      return;
    }
    local_18 = 0;
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "env.bagldof";
    uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,&local_40,&local_18);
    local_40 = (undefined *)((ulong)local_40 & 0xffffffff00000000);
    lVar3 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x58) + 0xe88) + 0x2e98);
    FUN_03964240(&local_48,uVar2);
    (**(code **)(*(long *)(lVar3 + 0x5e8) + 0x50))(lVar3 + 0x5e8,local_48);
  }
  *(undefined1 *)(param_1 + 0x2382) = 0;
  return;
}


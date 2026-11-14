
void FUN_01581450(long param_1,int param_2)

{
  undefined **ppuVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined **local_40;
  undefined *puStack_38;
  undefined8 local_18;
  
  *(int *)(param_1 + 0x2388) = param_2;
  plVar2 = *(long **)(param_1 + 0x38);
  if (plVar2 != (long *)0x0) {
    if ((param_2 == 0) || ((*(uint *)(param_1 + 0x2388) & 0xfffffffc) == 8)) {
      FUN_0392a828(param_1 + 0x40,0);
    }
    else {
      local_18 = 0;
      puStack_38 = (&PTR_DAT_049abde8)[*(int *)(param_1 + 0x2388)];
      local_40 = &PTR_LAB_048f9770;
      uVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,&local_40,&local_18);
      plVar2 = (long *)(param_1 + 0x40);
      FUN_03964240(&local_40,uVar3);
      ppuVar1 = local_40;
      *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)((long)local_40 + 0xc);
      if (*(int *)(param_1 + 0xe0) != *(int *)(local_40 + 2)) {
        (**(code **)(*plVar2 + 0x60))(plVar2,local_40);
      }
      FUN_03955fe0(0,plVar2,0,(long)ppuVar1 + (ulong)*(uint *)((long)ppuVar1 + 0x14) + 0x30,0);
    }
  }
  *(bool *)(param_1 + 0x2381) = *(int *)(param_1 + 0x2388) != 0;
  return;
}


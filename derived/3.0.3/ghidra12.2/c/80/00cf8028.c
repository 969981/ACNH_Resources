
void FUN_00cf8028(undefined4 *param_1,undefined8 *param_2,int *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined *local_40;
  char *pcStack_38;
  
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "IsFacilityEditStartDemo";
  iVar1 = FUN_02758850(&local_40);
  switch(*param_1) {
  case 0:
    uVar5 = (uint)(iVar1 == 1);
    plVar4 = (long *)(*(long *)PTR_DAT_04bb3968 + 0x17dc8);
    plVar3 = (long *)(*(long *)PTR_DAT_04bb3968 + 0x17c40);
    break;
  case 1:
    uVar5 = (uint)(iVar1 == 1);
    plVar4 = (long *)(*(long *)PTR_DAT_04bb3968 + 0x17e70);
    plVar3 = (long *)(*(long *)PTR_DAT_04bb3968 + 0x17ce8);
    break;
  case 2:
    uVar5 = (uint)(iVar1 == 1);
    plVar4 = (long *)(*(long *)PTR_DAT_04bb3968 + 0x17e00);
    plVar3 = (long *)(*(long *)PTR_DAT_04bb3968 + 0x17c78);
    break;
  case 3:
    uVar5 = (uint)(iVar1 == 1);
    plVar4 = (long *)(*(long *)PTR_DAT_04bb3968 + 0x17e38);
    plVar3 = (long *)(*(long *)PTR_DAT_04bb3968 + 0x17cb0);
    break;
  case 4:
    uVar5 = (uint)(iVar1 == 1);
    plVar4 = (long *)(*(long *)PTR_DAT_04bb3968 + 0x17ea8);
    plVar3 = (long *)(*(long *)PTR_DAT_04bb3968 + 0x17d20);
    break;
  default:
    puVar2 = (undefined4 *)(**(code **)(*(long *)(DAT_053e0208 + 0x17c40) + 0xf0))();
    *(undefined4 *)param_2 = *puVar2;
    *(undefined4 *)((long)param_2 + 4) = puVar2[1];
    uVar6 = puVar2[2];
    param_4 = param_2;
    goto LAB_00cf81cc;
  }
  if (iVar1 != 1) {
    plVar4 = plVar3;
  }
  puVar2 = (undefined4 *)(**(code **)(*plVar4 + 0xf0))();
  *(undefined4 *)param_2 = *puVar2;
  *(undefined4 *)((long)param_2 + 4) = puVar2[1];
  *(undefined4 *)(param_2 + 1) = puVar2[2];
  *param_3 = uVar5 << 0x1f;
  uVar6 = 0;
  *param_4 = 0xc1700000;
LAB_00cf81cc:
  *(undefined4 *)(param_4 + 1) = uVar6;
  return;
}


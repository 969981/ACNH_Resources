
void FUN_03527634(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_50;
  undefined8 local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  plVar3 = param_2 + 4;
  (**(code **)(*plVar3 + 0x18))(plVar3);
  (**(code **)(*plVar3 + 0x18))(plVar3);
  if (((char *)param_2[5] == "") || (*(char *)param_2[5] == '\0')) {
    if (((DAT_05768288 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05768288), iVar1 != 0)) {
      DAT_05768278 = PTR_DAT_04bb2020 + 0x10;
      DAT_05768280 = "@T_Title_00";
      __cxa_guard_release(&DAT_05768288);
    }
    if (((DAT_057682b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057682b0), iVar1 != 0)) {
      DAT_05768290 = PTR_DAT_04bb2020 + 0x10;
      DAT_05768298 = "P_Image_00";
      DAT_057682a8 = "P_NPCIcon_00";
      DAT_057682a0 = DAT_05768290;
      __cxa_guard_release(&DAT_057682b0);
    }
    if (param_2[1] != 0) {
      local_48 = *param_2;
      local_28 = 2;
      local_38 = &DAT_04b35e58;
      uStack_30 = 0;
      puStack_40 = &DAT_04b35e68;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      lVar2 = *(long *)(param_2[1] + 0x10);
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}



void FUN_03467e54(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_50;
  undefined8 local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined8 *puStack_30;
  undefined4 local_28;
  
  plVar3 = param_2 + 4;
  (**(code **)(*plVar3 + 0x18))(plVar3);
  (**(code **)(*plVar3 + 0x18))(plVar3);
  if (((char *)param_2[5] == "") || (*(char *)param_2[5] == '\0')) {
    if (((DAT_0575ad48 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0575ad48), iVar1 != 0)) {
      DAT_0575ace8 = PTR_DAT_04bb2020 + 0x10;
      DAT_0575acf0 = &DAT_040fe5ab;
      DAT_0575ad00 = &DAT_0407ebb1;
      DAT_0575ad20 = &DAT_0407ebb1;
      DAT_0575ad40 = &DAT_0407ebb1;
      DAT_0575ad10 = "State";
      DAT_0575ad30 = &DAT_04088cfe;
      DAT_0575acf8 = DAT_0575ace8;
      DAT_0575ad08 = DAT_0575ace8;
      DAT_0575ad18 = DAT_0575ace8;
      DAT_0575ad28 = DAT_0575ace8;
      DAT_0575ad38 = DAT_0575ace8;
      __cxa_guard_release(&DAT_0575ad48);
    }
    if (((DAT_0575ad60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0575ad60), iVar1 != 0)) {
      DAT_0575ad50 = 0x300000002;
      DAT_0575ad58 = &DAT_0575ace8;
      __cxa_guard_release(&DAT_0575ad60);
    }
    if (((DAT_0575ad98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0575ad98), iVar1 != 0)) {
      DAT_0575ad68 = PTR_DAT_04bb2020 + 0x10;
      DAT_0575ad70 = "@T_Version_00";
      DAT_0575ad90 = "@T_Alphabet_00";
      DAT_0575ad80 = "@T_Num_00";
      DAT_0575ad78 = DAT_0575ad68;
      DAT_0575ad88 = DAT_0575ad68;
      __cxa_guard_release(&DAT_0575ad98);
    }
    if (((DAT_0575adc0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0575adc0), iVar1 != 0)) {
      DAT_0575ada0 = PTR_DAT_04bb2020 + 0x10;
      DAT_0575ada8 = "N_Align_00";
      DAT_0575adb8 = "N_Align_01";
      DAT_0575adb0 = DAT_0575ada0;
      __cxa_guard_release(&DAT_0575adc0);
    }
    if (param_2[1] != 0) {
      local_48 = *param_2;
      local_38 = &DAT_04b2ba50;
      puStack_30 = &DAT_0575ad50;
      local_28 = 0;
      puStack_40 = &DAT_04b2ba60;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      lVar2 = *(long *)(param_2[1] + 0x10);
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}


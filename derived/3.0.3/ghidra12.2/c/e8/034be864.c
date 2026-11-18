
void FUN_034be864(undefined8 param_1,undefined8 *param_2)

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
    if (((DAT_05761828 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05761828), iVar1 != 0)) {
      DAT_057617a8 = PTR_DAT_04bb2020 + 0x10;
      DAT_057617b0 = &DAT_040fe5ab;
      DAT_057617c0 = &DAT_0407ebb1;
      DAT_057617e0 = &DAT_0407ebb1;
      DAT_05761800 = &DAT_0407ebb1;
      DAT_057617d0 = "MyColor";
      DAT_057617f0 = "MyColorDeco";
      DAT_05761810 = "FacilityTitle";
      DAT_05761820 = &DAT_0407ebb1;
      DAT_057617b8 = DAT_057617a8;
      DAT_057617c8 = DAT_057617a8;
      DAT_057617d8 = DAT_057617a8;
      DAT_057617e8 = DAT_057617a8;
      DAT_057617f8 = DAT_057617a8;
      DAT_05761808 = DAT_057617a8;
      DAT_05761818 = DAT_057617a8;
      __cxa_guard_release(&DAT_05761828);
    }
    if (((DAT_05761840 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05761840), iVar1 != 0)) {
      DAT_05761830 = 0x400000002;
      DAT_05761838 = &DAT_057617a8;
      __cxa_guard_release(&DAT_05761840);
    }
    if (((DAT_05761898 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05761898), iVar1 != 0)) {
      DAT_05761848 = PTR_DAT_04bb2020 + 0x10;
      DAT_05761850 = "@T_PlannerID_00";
      DAT_05761860 = "@T_Name_00";
      DAT_05761870 = "@T_Title_02";
      DAT_05761880 = "@T_Title_01";
      DAT_05761890 = "@T_Title_00";
      DAT_05761858 = DAT_05761848;
      DAT_05761868 = DAT_05761848;
      DAT_05761878 = DAT_05761848;
      DAT_05761888 = DAT_05761848;
      __cxa_guard_release(&DAT_05761898);
    }
    if (((DAT_057618e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057618e0), iVar1 != 0)) {
      DAT_057618a0 = PTR_DAT_04bb2020 + 0x10;
      DAT_057618a8 = "P_Image_00";
      DAT_057618d8 = "N_Title_02";
      DAT_057618b8 = "P_Image_01";
      DAT_057618c8 = "N_Title_01";
      DAT_057618b0 = DAT_057618a0;
      DAT_057618c0 = DAT_057618a0;
      DAT_057618d0 = DAT_057618a0;
      __cxa_guard_release(&DAT_057618e0);
    }
    if (param_2[1] != 0) {
      local_48 = *param_2;
      local_38 = &DAT_04b2f7c0;
      puStack_30 = &DAT_05761830;
      local_28 = 2;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      puStack_40 = &DAT_04b2f7d0;
      lVar2 = *(long *)(param_2[1] + 0x10);
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}


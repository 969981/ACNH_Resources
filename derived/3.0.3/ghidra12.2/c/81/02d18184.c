
void FUN_02d18184(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_50;
  undefined8 local_48;
  undefined *puStack_40;
  undefined8 local_38;
  undefined8 *puStack_30;
  undefined4 local_28;
  
  plVar3 = param_2 + 4;
  (**(code **)(*plVar3 + 0x18))(plVar3);
  (**(code **)(*plVar3 + 0x18))(plVar3);
  if (((char *)param_2[5] == "") || (*(char *)param_2[5] == '\0')) {
    if (((DAT_056758d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056758d0), iVar1 != 0)) {
      DAT_056758b0 = PTR_DAT_04bb2020 + 0x10;
      DAT_056758b8 = &DAT_040fe5ab;
      DAT_056758c8 = &DAT_0407ebb1;
      DAT_056758c0 = DAT_056758b0;
      __cxa_guard_release(&DAT_056758d0);
    }
    if (((DAT_056758e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056758e8), iVar1 != 0)) {
      DAT_056758d8 = 0x100000002;
      DAT_056758e0 = &DAT_056758b0;
      __cxa_guard_release(&DAT_056758e8);
    }
    if (((DAT_05675920 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05675920), iVar1 != 0)) {
      DAT_056758f0 = PTR_DAT_04bb2020 + 0x10;
      DAT_056758f8 = "P_Icon_00";
      DAT_05675918 = "P_Icon_02";
      DAT_05675908 = "P_Icon_01";
      DAT_05675900 = DAT_056758f0;
      DAT_05675910 = DAT_056758f0;
      __cxa_guard_release(&DAT_05675920);
    }
    if (param_2[1] != 0) {
      local_48 = *param_2;
      local_28 = 3;
      local_38 = 0;
      puStack_30 = &DAT_056758d8;
      puStack_40 = &DAT_04abcff0;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      lVar2 = *(long *)(param_2[1] + 0x10);
      FUN_0386e230(lVar2 + 0x200,lVar2,&local_50);
    }
  }
  return;
}


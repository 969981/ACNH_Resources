
void FUN_00269d30(long param_1,int param_2,undefined4 param_3)

{
  long *plVar1;
  int local_38;
  undefined1 local_34;
  ulong local_30;
  undefined8 local_28;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_002ba324(&local_38,*(undefined8 *)PTR_DAT_04bc1510,&local_28,param_3);
    (**(code **)(param_1 + 0x58))(param_2,local_28);
  }
  plVar1 = *(long **)(param_1 + 0x110);
  if (plVar1 != (long *)0x0) {
    local_34 = (undefined1)param_3;
    local_30 = (ulong)((*(char *)(param_1 + 0xd3) != '\0' && *(char *)(param_1 + 0xaf) != '\0') &&
                      param_2 == 0);
    local_38 = param_2;
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_38);
  }
  return;
}


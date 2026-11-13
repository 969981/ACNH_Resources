
void FUN_0131a37c(long param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined *puStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  local_28 = 0;
  puStack_50 = PTR_DAT_04bb2020 + 0x10;
  local_48 = PTR_DAT_04bb2120;
  local_38 = DAT_0518a540;
  uStack_30 = 0;
  lVar4 = *(long *)PTR_DAT_04bb2698;
  local_58 = param_2;
  puStack_40 = puStack_50;
  if (lVar4 == 0) {
    plVar3 = malloc(0x28);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      param_2 = (long *)(lVar4 + 8);
      if (lVar2 != 0) {
        param_2 = (long *)(lVar2 + 0xa8);
      }
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) {
        plVar3 = (long *)0x0;
        goto LAB_0131a42c;
      }
    }
    plVar3 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0x28,8);
  }
LAB_0131a42c:
  *(undefined4 *)(plVar3 + 2) = 0;
  puVar1 = PTR_DAT_04bb5140;
  plVar3[3] = 0;
  plVar3[4] = 0;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[1] = 0;
  *(long **)(param_1 + 8) = plVar3;
  FUN_0082c840(plVar3,&local_58);
  return;
}


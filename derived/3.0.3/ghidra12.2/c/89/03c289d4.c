
void FUN_03c289d4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *local_40;
  char *pcStack_38;
  
  FUN_03c11314(param_1,param_2,"Lp::Sys::ParamMgr");
  *param_1 = &PTR_FUN_04b7e8f8;
  param_1[0x45] = &PTR_LAB_04b7e9d0;
  FUN_038e18e4(param_1 + 0x46);
  *(undefined4 *)(param_1 + 0x4e) = 0;
  *(undefined4 *)((long)param_1 + 0x274) = 0;
  FUN_038e3114(param_1 + 0x4f,0,0x7fff);
  *(undefined4 *)(param_1 + 0x58) = 0;
  FUN_038e3114(param_1 + 0x59,0,0x7fff);
  *(undefined4 *)(param_1 + 0x62) = 0;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0x65) = 0;
  param_1[0x66] = 0;
  plVar2 = DAT_05aed540;
  lVar5 = *(long *)PTR_DAT_04bb2698;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
  puVar1 = (undefined8 *)(lVar5 + 8);
  if (lVar4 != 0) {
    puVar1 = (undefined8 *)(lVar4 + 0xa8);
  }
  uVar6 = *puVar1;
  iVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "ParamMgr_Clear";
  uVar6 = FUN_038c6d48((long)iVar3,&local_40,uVar6,8,1,1);
  param_1[0x66] = uVar6;
  return;
}


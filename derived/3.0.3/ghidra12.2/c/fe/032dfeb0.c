
void FUN_032dfeb0(long *param_1,undefined8 param_2,long *param_3,undefined4 param_4)

{
  char *pcVar1;
  undefined *local_40;
  undefined1 *puStack_38;
  
  (**(code **)(*param_3 + 0x18))(param_3);
  (**(code **)(*param_3 + 0x18))(param_3);
  pcVar1 = (char *)param_3[1];
  if ((pcVar1 != "{") && ((*pcVar1 != '{' || (pcVar1[1] != '\0')))) {
    (**(code **)(*param_3 + 0x18))(param_3);
    (**(code **)(*param_3 + 0x18))(param_3);
    pcVar1 = (char *)param_3[1];
    if ((pcVar1 != "}") && ((*pcVar1 != '}' || (pcVar1[1] != '\0')))) {
      FUN_038e13d0(param_1,param_2,param_3,param_4);
      local_40 = PTR_DAT_04bb2020 + 0x10;
      puStack_38 = &DAT_04064e67;
      (**(code **)(*param_1 + 0xc0))(param_1,param_2,&local_40);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x032dffe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc0))(param_1,param_2,param_3);
  return;
}


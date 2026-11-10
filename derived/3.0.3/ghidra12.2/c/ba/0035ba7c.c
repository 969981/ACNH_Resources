
void FUN_0035ba7c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  FUN_00352d28();
  puVar1 = PTR_DAT_04bd0650;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar2 = PTR_DAT_04bd0658;
  param_1[4] = 0;
  param_1[9] = -1;
  *param_1 = (long)(puVar1 + 0x10);
  plVar3 = param_1 + 5;
  *plVar3 = (long)(puVar2 + 0x10);
  FUN_00352d04(plVar3,0,0xc,0,0,0,1);
  *(undefined1 *)(param_1 + 8) = 0;
  puVar1 = PTR_DAT_04bd0660;
  param_1[9] = -1;
  param_1[10] = 0;
  *plVar3 = (long)(puVar1 + 0x10);
  FUN_00352d04(plVar3,0,0xc,0,0,0,1);
  param_1[9] = -1;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
                    /* WARNING: Could not recover jumptable at 0x0035bb54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xd8))(param_1,1,1);
  return;
}


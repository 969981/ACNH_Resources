
void FUN_001dab24(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long in_x4;
  undefined8 in_x5;
  
  FUN_001d92ec();
  puVar1 = PTR_DAT_04bcbc48 + 0x10;
  *param_1 = (long)(PTR_DAT_04bcc800 + 0x10);
  param_1[0x3e] = (long)puVar1;
  *(undefined4 *)(param_1 + 0x3f) = 1;
  puVar2 = PTR_DAT_04bcc018;
  *(undefined1 *)((long)param_1 + 0x1fc) = 0;
  puVar2 = puVar2 + 0x10;
  param_1[0x3e] = (long)puVar2;
  FUN_00196a24(param_1 + 0x3e,(int)param_1[0x14],0);
  param_1[0x45] = (long)puVar1;
  *(undefined4 *)(param_1 + 0x46) = 1;
  *(undefined1 *)((long)param_1 + 0x234) = 0;
  param_1[0x45] = (long)puVar2;
  FUN_00196a24(param_1 + 0x45,(int)param_1[0x14],0);
  param_1[0x4c] = (long)puVar1;
  *(undefined4 *)(param_1 + 0x4d) = 1;
  *(undefined1 *)((long)param_1 + 0x26c) = 0;
  param_1[0x4c] = (long)puVar2;
  FUN_00196a24(param_1 + 0x4c,(int)param_1[0x14],0);
  puVar1 = PTR_DAT_04bcbb70;
  FUN_001c3500(param_1 + 0x53,in_x5,*(undefined4 *)PTR_DAT_04bcbb70);
  FUN_001c3500(param_1 + 0x70,in_x5,*(undefined4 *)puVar1);
  param_1[0x8d] = in_x4;
  param_1[0x8e] = 0;
  return;
}


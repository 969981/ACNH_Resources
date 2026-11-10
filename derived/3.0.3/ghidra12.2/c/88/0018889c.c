
void FUN_0018889c(long *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  *param_1 = (long)(PTR_DAT_04bcbd40 + 0x10);
  FUN_00188940(param_1 + 1,&DAT_0406f970);
  if (DAT_04c57ea0 == (code *)0x0) {
    puVar2 = malloc(0x28);
  }
  else {
    puVar2 = (undefined8 *)(*DAT_04c57ea0)(0x28);
  }
  puVar2[2] = 0;
  puVar1 = PTR_DAT_04bcba28;
  puVar2[3] = 0;
  *(undefined1 *)(puVar2 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = param_3;
  uVar3 = *(undefined8 *)puVar1;
  param_1[9] = 0;
  param_1[6] = (long)(puVar2 + 2);
  param_1[7] = 0;
  *puVar2 = uVar3;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((long)param_1 + 0x52) = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0x80000000;
  return;
}


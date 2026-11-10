
void FUN_001b825c(undefined8 *param_1,char *param_2)

{
  long lVar1;
  size_t sVar2;
  size_t sVar3;
  undefined4 *puVar4;
  
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[3] = param_1 + 4;
  param_1[5] = 0;
  param_1[6] = param_1 + 7;
  param_1[8] = 0;
  param_1[9] = param_1 + 10;
  *(undefined1 *)((long)param_1 + 0x6a) = 0;
  *param_1 = &PTR_FUN_0483aa78;
  *(undefined2 *)(param_1 + 0xd) = 0x100;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  lVar1 = FUN_00185a6c(0x90);
  if (lVar1 != 0) {
    FUN_001e1500(lVar1);
  }
  param_1[1] = lVar1;
  if (param_1[0xc] != 0) {
    FUN_00187e4c(param_1[0xc] + -4);
    param_1[0xc] = 0;
    *(undefined1 *)((long)param_1 + 0x69) = 0;
  }
  if (param_2 != (char *)0x0) {
    sVar2 = strlen(param_2);
    if (sVar2 < 0x201) {
      sVar3 = strlen(param_2);
      puVar4 = (undefined4 *)FUN_00187df4(sVar3 + 5);
      *puVar4 = (int)(sVar3 + 1);
      param_1[0xc] = puVar4 + 1;
      strncpy((char *)(puVar4 + 1),param_2,sVar3 + 1);
      *(undefined1 *)(param_1[0xc] + sVar3) = 0;
    }
    *(bool *)((long)param_1 + 0x69) = sVar2 < 0x201;
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)((long)param_1 + 0x6a) = 0;
  }
  return;
}



void FUN_001b81c0(long param_1,char *param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined4 *puVar3;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_00187e4c(*(long *)(param_1 + 0x60) + -4);
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0x69) = 0;
  }
  if (param_2 != (char *)0x0) {
    sVar1 = strlen(param_2);
    if (sVar1 < 0x201) {
      sVar2 = strlen(param_2);
      puVar3 = (undefined4 *)FUN_00187df4(sVar2 + 5);
      *puVar3 = (int)(sVar2 + 1);
      *(undefined4 **)(param_1 + 0x60) = puVar3 + 1;
      strncpy((char *)(puVar3 + 1),param_2,sVar2 + 1);
      *(undefined1 *)(*(long *)(param_1 + 0x60) + sVar2) = 0;
    }
    *(bool *)(param_1 + 0x69) = sVar1 < 0x201;
    *(undefined1 *)(param_1 + 0x68) = 0;
    *(undefined1 *)(param_1 + 0x6a) = 0;
  }
  return;
}


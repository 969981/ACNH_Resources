
void FUN_00322430(long param_1,undefined8 param_2,undefined4 param_3,uint param_4,undefined8 param_5
                 ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x160);
  if ((*(int *)(param_1 + 0x24) != 0x3f || *(char *)(*(long *)(param_1 + 0x248) + 0x28) != '\0') &&
      lVar1 != 0) {
    do {
      if (*(char *)(lVar1 + 4) != '\0') {
        FUN_00321f60(param_1,param_2,1,lVar1,param_3,param_4 & 1,param_5,param_6,param_7,param_8);
      }
      FUN_00322208(param_1,param_2,lVar1,param_3,param_4 & 1,param_5,param_6,param_7,param_8);
      if (*(char *)(lVar1 + 4) != '\0') {
        FUN_00321f60(param_1,param_2,0,lVar1,param_3,param_4 & 1,param_5,param_6,param_7,param_8);
      }
      lVar1 = *(long *)(lVar1 + 0x80);
    } while (lVar1 != 0);
  }
  return;
}


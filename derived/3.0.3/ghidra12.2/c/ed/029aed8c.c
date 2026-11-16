
void FUN_029aed8c(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *local_30;
  char *pcStack_28;
  
  if (*param_2 != 0) {
    lVar2 = param_2[1];
    if (lVar2 != 0) {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      pcStack_28 = "LayerReverbNear";
      local_30 = puVar1;
      FUN_03b3e860(0,lVar2,&local_30);
      pcStack_28 = "LayerReverbFar";
      local_30 = puVar1;
      FUN_03b3e860(0,lVar2,&local_30);
      pcStack_28 = "PingpongSpread";
      local_30 = puVar1;
      FUN_03b3e860(0,lVar2,&local_30);
    }
  }
  return;
}


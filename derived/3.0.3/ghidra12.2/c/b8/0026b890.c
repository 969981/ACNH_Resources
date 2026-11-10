
void FUN_0026b890(undefined8 param_1,long param_2,int *param_3)

{
  ulong uVar1;
  undefined1 auStack_44 [16];
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  if (param_3 == (int *)0x0) {
    if (*(int *)(param_2 + 0xa0) != 0) {
LAB_0026b904:
      if ((*(char *)(param_2 + 0x9c) == -3) ||
         (*(char *)(param_2 + 0x9c) == *(char *)(param_2 + 0x9b))) {
LAB_0026b970:
        local_34 = 0x10c08;
        goto LAB_0026b97c;
      }
      uVar1 = FUN_00267c64(*(undefined8 *)(param_2 + 0x10),param_3);
      if ((uVar1 & 1) == 0) {
        uVar1 = FUN_002212e4(*(undefined8 *)(param_2 + 0x50));
        if ((((uVar1 & 1) == 0) ||
            (uVar1 = FUN_00267b88(*(undefined8 *)(param_2 + 0x50),param_3), (uVar1 & 1) == 0)) &&
           (uVar1 = FUN_00267c2c(*(undefined8 *)(param_2 + 0x10),param_3), (uVar1 & 1) == 0))
        goto LAB_0026b970;
      }
      else {
        FUN_002211bc(*(undefined8 *)(param_2 + 0x10),0);
      }
    }
  }
  else {
    if (*param_3 == 1) goto LAB_0026b970;
    if (*(int *)(param_2 + 0xa0) != 0) goto LAB_0026b904;
    FUN_00220f78(param_3);
    local_34 = 0;
    local_24 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
    FUN_002296c4(auStack_44,&local_34);
    FUN_00220f8c(param_3,auStack_44);
  }
  local_34 = 0;
LAB_0026b97c:
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
  FUN_002296c4(param_1,&local_34);
  return;
}


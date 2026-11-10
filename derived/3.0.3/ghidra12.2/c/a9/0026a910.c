
void FUN_0026a910(undefined8 param_1,long param_2,int *param_3,undefined4 param_4)

{
  ushort uVar1;
  ulong uVar2;
  undefined1 auStack_50 [16];
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  if ((*(char *)(param_2 + 0x9c) == -3 || *(char *)(param_2 + 0x9c) != *(char *)(param_2 + 0x9b)) ||
     ((param_3 != (int *)0x0 && (*param_3 == 1)))) {
    local_40 = 0x10c08;
  }
  else {
    *(undefined1 *)(param_2 + 0x9a) = 0;
    uVar1 = FUN_0026aa40(param_2);
    if (uVar1 < 2) {
      *(undefined4 *)(param_2 + 0xa4) = param_4;
      FUN_0026c2a0(param_2,param_4,1);
      FUN_00269270(param_2);
      if (param_3 != (int *)0x0) {
        FUN_00220f78(param_3);
        local_40 = 0;
        local_24 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
        FUN_002296c4(auStack_50,&local_40);
        FUN_00220f8c(param_3,auStack_50);
      }
    }
    else {
      uVar2 = FUN_0026c934(*(undefined8 *)(param_2 + 0x28),param_3,param_4);
      if ((uVar2 & 1) == 0) {
        FUN_0026cdcc(*(undefined8 *)(param_2 + 0x28),param_3);
      }
      else {
        FUN_002211bc(*(undefined8 *)(param_2 + 0x28),0);
      }
    }
    local_40 = 0;
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
  FUN_002296c4(param_1,&local_40);
  return;
}


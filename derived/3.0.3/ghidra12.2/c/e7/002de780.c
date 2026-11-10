
void FUN_002de780(undefined8 param_1,long param_2,int *param_3,undefined4 param_4,long *param_5,
                 ushort param_6)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined4 local_60;
  ErrorResultVariant aEStack_5c [12];
  undefined4 local_44;
  
  if ((param_3 == (int *)0x0) || (*param_3 == 1)) {
    local_60 = 0x10c07;
  }
  else if ((*(long *)(param_2 + 0x2c0) == 0) && (*(int *)(param_2 + 0x154) != 1)) {
    *(int **)(param_2 + 0x2c0) = param_3;
    if (param_6 != 0) {
      uVar2 = (ulong)param_6;
      do {
        plVar3 = *(long **)(param_2 + 0x128);
        lVar4 = *param_5;
        plVar1 = (long *)FUN_00187df4(0x18);
        plVar1[1] = (long)plVar3;
        plVar1[2] = lVar4;
        uVar2 = uVar2 - 1;
        *plVar1 = 0;
        lVar4 = *plVar3;
        *plVar1 = lVar4;
        *(long **)(lVar4 + 8) = plVar1;
        *plVar3 = (long)plVar1;
        plVar3[2] = plVar3[2] + 1;
        param_5 = param_5 + 1;
      } while (uVar2 != 0);
    }
    uVar2 = FUN_0031986c(*(undefined8 *)(param_2 + 0x58),param_2 + 0x140,param_4,
                         *(undefined8 *)(param_2 + 0x128));
    lVar4 = DAT_04c5fbb0;
    if ((uVar2 & 1) == 0) {
      local_60 = 0xac5a;
      *(undefined8 *)(param_2 + 0x2c0) = 0;
    }
    else {
      plVar1 = (long *)FUN_00228380();
      *(long *)(param_2 + 0x2d8) = *(long *)(lVar4 + 0x30) + *plVar1 * 10000;
      FUN_00220f78(*(undefined8 *)(param_2 + 0x2c0));
      local_60 = 0;
    }
  }
  else {
    local_60 = 0x10c08;
  }
  local_44 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_44);
  FUN_002296c4(param_1,&local_60);
  return;
}


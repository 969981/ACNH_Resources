
void FUN_02807328(undefined4 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  switch(*param_3) {
  case 0:
    puVar2 = (undefined4 *)FUN_026e85f0();
    break;
  case 1:
    puVar2 = (undefined4 *)FUN_026e88f0();
    break;
  case 2:
    puVar2 = (undefined4 *)FUN_026e8b00();
    break;
  case 3:
    puVar2 = (undefined4 *)FUN_02815540();
    break;
  case 4:
    puVar2 = (undefined4 *)FUN_028159b0();
    break;
  case 5:
    puVar2 = (undefined4 *)FUN_026e9240();
    break;
  case 6:
    puVar2 = (undefined4 *)FUN_026e9470();
    break;
  default:
    puVar2 = (undefined4 *)FUN_026e96a0();
  }
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  return;
}


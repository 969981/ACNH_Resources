
undefined8 FUN_003d21f4(long *param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_3c;
  undefined1 local_34;
  
  lVar1 = param_1[1];
  if (lVar1 == 0) {
switchD_003d223c_caseD_2:
    return 0;
  }
  param_2 = param_2 & 0xffffffff;
  switch((int)(param_2 >> 0x18)) {
  case 1:
    FUN_003b84d0(lVar1,&local_3c,param_2);
    break;
  default:
    goto switchD_003d223c_caseD_2;
  case 3:
    local_3c = CONCAT44(local_3c._4_4_,0xffffffff);
    FUN_003b87e4(lVar1,&local_3c,param_2);
    break;
  case 5:
    local_34 = 0;
    local_3c = CONCAT44(local_3c._4_4_,0xffffffff);
    FUN_003b8858(lVar1,param_2,&local_3c);
    break;
  case 6:
    local_3c = 0xffffffff;
    FUN_003b8930(lVar1,&local_3c,param_2);
  }
  if ((int)local_3c == -1) {
    return 0;
  }
  uVar2 = (**(code **)(*param_1 + 0x20))(param_1);
  return uVar2;
}


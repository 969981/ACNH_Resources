
undefined8 FUN_03b2be14(long *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (char)param_1[7];
  if (cVar1 == '\x06') {
    uVar2 = 0;
  }
  else if ((cVar1 == '\x02') || (cVar1 == '\0')) {
    (**(code **)(*param_1 + 0xa8))(param_1);
    uVar2 = 1;
    (**(code **)(*param_1 + 0xe8))(param_1,1);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


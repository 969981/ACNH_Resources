
uint FUN_0087312c(undefined8 param_1,undefined2 param_2,undefined1 param_3,undefined1 param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined2 local_8;
  undefined1 local_6;
  undefined1 local_5;
  undefined2 local_4;
  undefined1 local_2;
  
  uVar1 = 1;
  local_4 = 5;
  local_2 = 0;
  local_8 = param_2;
  local_6 = param_3;
  local_5 = param_4;
  uVar2 = FUN_021eacf0(0,&local_8,1);
  if (((((((uVar2 & 1) == 0) && (uVar2 = FUN_021eacf0(1,&local_8,1), (uVar2 & 1) == 0)) &&
        (uVar2 = FUN_021eacf0(2,&local_8,1), (uVar2 & 1) == 0)) &&
       ((uVar2 = FUN_021eacf0(3,&local_8,1), (uVar2 & 1) == 0 &&
        (uVar2 = FUN_021eacf0(4,&local_8,1), (uVar2 & 1) == 0)))) &&
      ((uVar2 = FUN_021eacf0(5,&local_8,1), (uVar2 & 1) == 0 &&
       ((uVar2 = FUN_021eacf0(6,&local_8,1), (uVar2 & 1) == 0 &&
        (uVar2 = FUN_021eacf0(7,&local_8,1), (uVar2 & 1) == 0)))))) &&
     (uVar2 = FUN_021eacf0(8,&local_8,1), (uVar2 & 1) == 0)) {
    uVar1 = FUN_021eacf0(9,&local_8,1);
  }
  return uVar1 & 1;
}



char FUN_009763c0(undefined8 param_1)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_20;
  int local_18;
  int local_14;
  
  local_14 = 0;
  local_18 = 0;
  local_20 = 0;
  lVar3 = *(long *)PTR_DAT_04bb27c8;
  if (((lVar3 == 0) || (*(long *)(lVar3 + 0xa8) == 0)) ||
     (uVar2 = FUN_009493f8(lVar3 + 0x28,param_1,&local_14,&local_18,(long)&local_20 + 4,&local_20),
     (uVar2 & 1) == 0)) {
    cVar1 = '\0';
  }
  else {
    cVar1 = local_14 == 8 || local_14 == 0x1c;
    if (((local_18 == 0x1c) || (local_18 == 8)) &&
       (cVar1 = '\x01', local_14 == 8 || local_14 == 0x1c)) {
      cVar1 = '\x02';
    }
    if ((local_20._4_4_ == 0x1c) || (local_20._4_4_ == 8)) {
      cVar1 = cVar1 + '\x01';
    }
    if (((int)local_20 == 0x1c) || ((int)local_20 == 8)) {
      cVar1 = cVar1 + '\x01';
    }
  }
  return cVar1;
}



undefined8 FUN_034335b0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0xfffe;
  FUN_0277d4ac(&local_38);
  uVar4 = FUN_0124ccbc(param_1,&local_38);
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    FUN_0124c030(auStack_50,&local_38);
    uVar2 = FUN_0123db50(auStack_48,local_40);
  }
  local_38 = 0xfffe;
  FUN_0277d4ac(&local_38);
  uVar4 = FUN_0124ccbc(param_2,&local_38);
  if ((uVar4 & 1) == 0) {
    bVar1 = true;
    if (uVar2 != 0) {
      return 0xffffffff;
    }
  }
  else {
    FUN_0124c030(auStack_50,&local_38);
    uVar3 = FUN_0123db50(auStack_48,local_40);
    bVar1 = uVar3 <= uVar2;
    if (uVar3 < uVar2) {
      return 0xffffffff;
    }
  }
  if (bVar1) {
    uVar5 = FUN_01a4e630(param_1,param_2);
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}


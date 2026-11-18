
int FUN_0343d730(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0xfffe;
  FUN_0277d4ac(&local_28);
  uVar4 = FUN_0124ccbc(param_1,&local_28);
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    FUN_0124c030(auStack_40,&local_28);
    uVar2 = FUN_0123db50(auStack_38,local_30);
  }
  local_28 = 0xfffe;
  FUN_0277d4ac(&local_28);
  uVar4 = FUN_0124ccbc(param_2,&local_28);
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    FUN_0124c030(auStack_40,&local_28);
    uVar3 = FUN_0123db50(auStack_38,local_30);
  }
  iVar1 = -(uint)(uVar2 < uVar3);
  if (uVar3 < uVar2) {
    iVar1 = 1;
  }
  return iVar1;
}


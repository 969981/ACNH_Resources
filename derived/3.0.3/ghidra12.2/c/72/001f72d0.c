
void FUN_001f72d0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_30 [28];
  undefined4 local_14;
  
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  if ((ulong)(*(long *)(lVar1 + 0x18) - lVar2) < 4) {
    local_14 = 0;
    *(undefined1 *)(param_1 + 8) = 1;
  }
  else {
    local_14 = *(undefined4 *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 0x28) + lVar2);
    *(long *)(param_1 + 0x18) = lVar2 + 4;
  }
  FUN_0018aa70(auStack_30,&local_14);
  FUN_0018ab44(param_2,auStack_30);
  return;
}


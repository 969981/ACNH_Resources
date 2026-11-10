
void FUN_001f96c8(long param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_30 [28];
  undefined4 local_14;
  
  lVar1 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(param_1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x18);
  if (lVar3 == lVar4) {
    *(undefined1 *)(param_1 + 8) = 1;
    lVar4 = lVar3;
  }
  else {
    cVar2 = *(char *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 0x28) + lVar4);
    lVar4 = lVar4 + 1;
    *(long *)(param_1 + 0x18) = lVar4;
    if (cVar2 == '\x01') {
      local_14 = 0x10001;
      goto LAB_001f9760;
    }
    if (cVar2 != '\0') {
      local_14 = 0x80010001;
      goto LAB_001f9760;
    }
  }
  if ((ulong)(lVar3 - lVar4) < 4) {
    local_14 = 0;
    *(undefined1 *)(param_1 + 8) = 1;
  }
  else {
    local_14 = *(undefined4 *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 0x28) + lVar4);
    *(long *)(param_1 + 0x18) = lVar4 + 4;
  }
LAB_001f9760:
  FUN_0018aa70(auStack_30,&local_14);
  FUN_0018ab44(param_2,auStack_30);
  return;
}


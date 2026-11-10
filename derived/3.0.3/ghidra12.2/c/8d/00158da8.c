
undefined8 FUN_00158da8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 local_14 [4];
  
  if ((*(byte *)(param_1 + 0x2a0) & 1) == 0) {
    if (*(int *)(param_1 + 600) == -1) {
      return 0;
    }
    local_14[0] = 0;
    lVar1 = nnsocketRecv(*(int *)(param_1 + 600),local_14,1,2);
    if (lVar1 == 0) {
      return 0;
    }
  }
  else {
    uVar2 = thunk_FUN_0017b11c();
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  return 1;
}



long thunk_FUN_003e2a88(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_44 [8];
  int iStack_3c;
  
  uVar1 = FUN_003b8780(param_1,auStack_44);
  lVar2 = (long)iStack_3c;
  if ((uVar1 & 1) == 0) {
    lVar2 = 0;
  }
  return lVar2 * param_2;
}


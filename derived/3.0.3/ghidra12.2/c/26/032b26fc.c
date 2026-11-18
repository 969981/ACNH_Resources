
undefined8 FUN_032b26fc(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = FUN_032b3044();
  if (iVar1 == 2) {
    if (((uVar2 & 1) == 0) && (uVar2 = FUN_032b3490(param_1), (uVar2 & 1) == 0)) {
      return 0;
    }
    uVar2 = FUN_032b31ac(param_1);
    if ((uVar2 & 1) == 0) {
      uVar3 = FUN_032b3314(param_1);
      return uVar3;
    }
  }
  else if ((uVar2 & 1) == 0) {
    uVar3 = FUN_032b3490(param_1);
    return uVar3;
  }
  return 1;
}


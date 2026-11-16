
undefined8 FUN_026b35a0(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x20) == 0 || *(int *)(param_1 + 4) == 0) {
    return 0;
  }
  uVar1 = 1;
  if (((((*(int *)(param_1 + 0x610) == 0) || (*(int *)(param_1 + 0x5f4) == 0)) ||
       (uVar1 = 2, *(int *)(param_1 + 0xc00) == 0)) ||
      ((((*(int *)(param_1 + 0xbe4) == 0 || (uVar1 = 3, *(int *)(param_1 + 0x11f0) == 0)) ||
        ((*(int *)(param_1 + 0x11d4) == 0 ||
         ((uVar1 = 4, *(int *)(param_1 + 0x17e0) == 0 || (*(int *)(param_1 + 0x17c4) == 0)))))) ||
       (uVar1 = 5, *(int *)(param_1 + 0x1dd0) == 0)))) ||
     ((((*(int *)(param_1 + 0x1db4) == 0 || (uVar1 = 6, *(int *)(param_1 + 0x23c0) == 0)) ||
       (*(int *)(param_1 + 0x23a4) == 0)) ||
      ((uVar1 = 7, *(int *)(param_1 + 0x29b0) == 0 || (*(int *)(param_1 + 0x2994) == 0)))))) {
    return uVar1;
  }
  uVar1 = FUN_027d2ef0(8);
  return uVar1;
}



bool FUN_02665a80(long param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = FUN_0277d7b4();
  if (((((((uVar2 & 1) == 0) || (*(char *)(param_1 + 3) != *(char *)(param_2 + 3))) ||
        (*(int *)(param_1 + 4) != *(int *)(param_2 + 4))) ||
       (((uVar2 = FUN_0277d7b4(param_1 + 8,param_2 + 8), (uVar2 & 1) == 0 ||
         (*(char *)(param_1 + 0xb) != *(char *)(param_2 + 0xb))) ||
        ((*(int *)(param_1 + 0xc) != *(int *)(param_2 + 0xc) ||
         ((uVar2 = FUN_0277d7b4(param_1 + 0x10,param_2 + 0x10), (uVar2 & 1) == 0 ||
          (*(char *)(param_1 + 0x13) != *(char *)(param_2 + 0x13))))))))) ||
      ((*(int *)(param_1 + 0x14) != *(int *)(param_2 + 0x14) ||
       ((((((uVar2 = FUN_0277d7b4(param_1 + 0x18,param_2 + 0x18), (uVar2 & 1) == 0 ||
            (*(char *)(param_1 + 0x1b) != *(char *)(param_2 + 0x1b))) ||
           (*(int *)(param_1 + 0x1c) != *(int *)(param_2 + 0x1c))) ||
          ((uVar2 = FUN_0277d7b4(param_1 + 0x20,param_2 + 0x20), (uVar2 & 1) == 0 ||
           (*(char *)(param_1 + 0x23) != *(char *)(param_2 + 0x23))))) ||
         ((*(int *)(param_1 + 0x24) != *(int *)(param_2 + 0x24) ||
          ((uVar2 = FUN_0277d7b4(param_1 + 0x28,param_2 + 0x28), (uVar2 & 1) == 0 ||
           (*(char *)(param_1 + 0x2b) != *(char *)(param_2 + 0x2b))))))) ||
        (*(int *)(param_1 + 0x2c) != *(int *)(param_2 + 0x2c))))))) ||
     ((((uVar2 = FUN_0277d7b4(param_1 + 0x30,param_2 + 0x30), (uVar2 & 1) == 0 ||
        (*(char *)(param_1 + 0x33) != *(char *)(param_2 + 0x33))) ||
       (*(int *)(param_1 + 0x34) != *(int *)(param_2 + 0x34))) ||
      ((uVar2 = FUN_0277d7b4(param_1 + 0x38,param_2 + 0x38), (uVar2 & 1) == 0 ||
       (*(char *)(param_1 + 0x3b) != *(char *)(param_2 + 0x3b))))))) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(param_1 + 0x3c) == *(int *)(param_2 + 0x3c);
  }
  return bVar1;
}


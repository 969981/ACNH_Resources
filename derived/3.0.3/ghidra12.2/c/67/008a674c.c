
undefined8 FUN_008a674c(long param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x88);
  if ((((((((bVar1 & 1) == 0) || (param_2 == *(int *)(param_1 + 0x8c))) &&
         (((bVar1 >> 1 & 1) == 0 || (param_2 == *(int *)(param_1 + 0x90))))) &&
        (((bVar1 >> 2 & 1) == 0 || (param_2 == *(int *)(param_1 + 0x94))))) &&
       (((bVar1 >> 3 & 1) == 0 || (param_2 == *(int *)(param_1 + 0x98))))) &&
      (((((bVar1 >> 4 & 1) == 0 || (param_2 == *(int *)(param_1 + 0x9c))) &&
        (((bVar1 >> 5 & 1) == 0 || (param_2 == *(int *)(param_1 + 0xa0))))) &&
       (((bVar1 >> 6 & 1) == 0 || (param_2 == *(int *)(param_1 + 0xa4))))))) &&
     ((-1 < (char)bVar1 || (param_2 == *(int *)(param_1 + 0xa8))))) {
    return 1;
  }
  return 0;
}


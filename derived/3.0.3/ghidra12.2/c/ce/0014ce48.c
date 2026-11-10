
undefined4 FUN_0014ce48(long *param_1,long *param_2)

{
  bool bVar1;
  size_t sVar2;
  size_t sVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *param_1;
  lVar6 = *param_2;
  if (*(char **)(lVar5 + 0x18) == (char *)0x0) {
    sVar2 = 0;
  }
  else {
    sVar2 = strlen(*(char **)(lVar5 + 0x18));
  }
  sVar3 = 0;
  if (*(char **)(lVar6 + 0x18) != (char *)0x0) {
    sVar3 = strlen(*(char **)(lVar6 + 0x18));
  }
  if (sVar2 == sVar3) {
    if (*(char **)(lVar5 + 0x28) == (char *)0x0) {
      sVar2 = 0;
    }
    else {
      sVar2 = strlen(*(char **)(lVar5 + 0x28));
    }
    sVar3 = 0;
    if (*(char **)(lVar6 + 0x28) != (char *)0x0) {
      sVar3 = strlen(*(char **)(lVar6 + 0x28));
    }
    if (sVar2 == sVar3) {
      if (*(char **)(lVar5 + 8) == (char *)0x0) {
        sVar2 = 0;
      }
      else {
        sVar2 = strlen(*(char **)(lVar5 + 8));
      }
      sVar3 = 0;
      if (*(char **)(lVar6 + 8) != (char *)0x0) {
        sVar3 = strlen(*(char **)(lVar6 + 8));
      }
      if (sVar2 == sVar3) {
        bVar1 = *(int *)(lVar5 + 0x5c) < *(int *)(lVar6 + 0x5c);
        goto LAB_0014cf00;
      }
    }
  }
  bVar1 = sVar2 < sVar3;
LAB_0014cf00:
  uVar4 = 0xffffffff;
  if (bVar1) {
    uVar4 = 1;
  }
  return uVar4;
}


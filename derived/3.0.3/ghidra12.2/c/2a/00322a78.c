
void FUN_00322a78(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  cVar1 = *(char *)(*(long *)(param_2 + 0xa0) + 0x792);
  if (cVar1 == '\0') {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + *(int *)(param_2 + 0x2c);
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    cVar1 = *(char *)(*(long *)(param_2 + 0xa0) + 0x792);
  }
  if (cVar1 == '\x01') {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + *(int *)(param_2 + 0x28);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    cVar1 = *(char *)(*(long *)(param_2 + 0xa0) + 0x792);
  }
  if (cVar1 == '\x02') {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + *(int *)(param_2 + 0x28);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  iVar2 = *(int *)(*(long *)(param_2 + 0x240) + 0x340);
  if (iVar2 == 3) {
    iVar2 = FUN_0033a8f0(param_2);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + iVar2;
  }
  else if (iVar2 == 2) {
    iVar2 = FUN_00337620(param_2);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + iVar2;
  }
  else if (iVar2 == 1) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + *(int *)(param_2 + 0xc);
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + *(long *)(param_2 + 0x9b8);
  lVar3 = FUN_0031e3b8(param_2);
  *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + lVar3;
  uVar4 = FUN_0031ef00(param_2 + 0x838);
  lVar3 = *(long *)(param_2 + 0x848);
  if ((uVar4 & 1) == 0) {
    lVar3 = 0;
  }
  *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + lVar3;
  uVar4 = FUN_0031ed2c(param_2 + 0x880);
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_0031ed2c(param_2 + 0x8c8);
  }
  else {
    uVar4 = FUN_0031ef00(param_2 + 0x880);
    lVar3 = *(long *)(param_2 + 0x890);
    if ((uVar4 & 1) == 0) {
      lVar3 = 0;
    }
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + lVar3;
    uVar4 = FUN_0031ed2c(param_2 + 0x8c8);
  }
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_0031ed2c(param_2 + 0x910);
  }
  else {
    uVar4 = FUN_0031ef00(param_2 + 0x8c8);
    lVar3 = *(long *)(param_2 + 0x8d8);
    if ((uVar4 & 1) == 0) {
      lVar3 = 0;
    }
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + lVar3;
    uVar4 = FUN_0031ed2c(param_2 + 0x910);
  }
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_0031ed2c(param_2 + 0x958);
  }
  else {
    uVar4 = FUN_0031ef00(param_2 + 0x910);
    lVar3 = *(long *)(param_2 + 0x920);
    if ((uVar4 & 1) == 0) {
      lVar3 = 0;
    }
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + lVar3;
    uVar4 = FUN_0031ed2c(param_2 + 0x958);
  }
  if ((uVar4 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x40);
  }
  else {
    uVar4 = FUN_0031ef00(param_2 + 0x958);
    lVar3 = *(long *)(param_2 + 0x968);
    if ((uVar4 & 1) == 0) {
      lVar3 = 0;
    }
    lVar3 = *(long *)(param_1 + 0x40) + lVar3;
    *(long *)(param_1 + 0x40) = lVar3;
  }
  lVar3 = lVar3 + *(long *)(param_2 + 0x7b0);
  *(long *)(param_1 + 0x40) = lVar3;
  lVar3 = lVar3 + *(long *)(param_2 + 2000);
  *(long *)(param_1 + 0x40) = lVar3;
  lVar3 = lVar3 + *(long *)(param_2 + 0x7f0);
  *(long *)(param_1 + 0x40) = lVar3;
  lVar3 = lVar3 + *(long *)(param_2 + 0x810);
  *(long *)(param_1 + 0x40) = lVar3;
  *(long *)(param_1 + 0x40) = lVar3 + *(long *)(param_2 + 0x830);
  return;
}


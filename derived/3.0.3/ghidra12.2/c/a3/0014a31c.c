
long FUN_0014a31c(long *param_1,undefined8 param_2,undefined4 param_3)

{
  size_t sVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_140;
  char acStack_136 [262];
  
  lVar3 = *param_1;
  memset(acStack_136,0,0x106);
  FUN_0014a624(param_2,param_3,acStack_136);
  sVar1 = strlen(acStack_136);
  lVar2 = FUN_0014b0d0(*(undefined8 *)(lVar3 + 200),acStack_136,sVar1 + 1);
  if (lVar2 == 0) {
    if ((*(byte *)(lVar3 + 0xf88) >> 2 & 1) == 0) {
      return 0;
    }
    FUN_0014a624(&DAT_040cca3a,param_3,acStack_136);
    sVar1 = strlen(acStack_136);
    lVar2 = FUN_0014b0d0(*(undefined8 *)(lVar3 + 200),acStack_136,sVar1 + 1);
    if (lVar2 == 0) {
      return 0;
    }
  }
  if (*(long *)(lVar3 + 0xc28) == -1) {
    return lVar2;
  }
  uStack_140 = 0;
  FUN_00146418(&uStack_140);
  FUN_0014d430(lVar3,"Hostname in DNS cache was stale, zapped\n");
  FUN_0014b02c(*(undefined8 *)(lVar3 + 200),acStack_136,sVar1 + 1);
  return 0;
}


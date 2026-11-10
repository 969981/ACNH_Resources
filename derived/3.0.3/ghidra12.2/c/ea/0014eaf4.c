
undefined8 FUN_0014eaf4(long param_1,long *param_2)

{
  undefined4 *puVar1;
  size_t sVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  char acStack_c0 [128];
  
  lVar4 = *param_2;
  puVar1 = (undefined4 *)FUN_0014ea2c(param_2,*(undefined8 *)(lVar4 + 0x1120));
  if (puVar1 == (undefined4 *)0x0) {
    memset(acStack_c0,0,0x80);
    puVar1 = (undefined4 *)FUN_001432f0(0x30);
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined8 *)(puVar1 + 2) = 0;
      *puVar1 = 0;
      FUN_00143a84(puVar1 + 4,&LAB_0014f1d4);
      FUN_0014eaac(param_2,acStack_c0);
      uVar5 = *(undefined8 *)(lVar4 + 0x1120);
      sVar2 = strlen(acStack_c0);
      lVar3 = FUN_0014af3c(uVar5,acStack_c0,sVar2,puVar1);
      if (lVar3 != 0) goto LAB_0014eb2c;
      FUN_0014ec18(puVar1);
    }
    uVar5 = 0x1b;
  }
  else {
LAB_0014eb2c:
    FUN_00143a90(puVar1 + 4,*(undefined8 *)(puVar1 + 6),param_2,param_2 + 1);
    param_2[0xd0] = (long)puVar1;
    uVar5 = 0;
    *(long *)(puVar1 + 2) = *(long *)(puVar1 + 2) + 1;
    lVar3 = *(long *)(param_1 + 0x38);
    *(long *)(param_1 + 0x38) = lVar3 + 1;
    param_2[0xc] = lVar3;
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
  }
  if (*(long *)(lVar4 + 0xe8) != 0) {
    FUN_0014b80c(lVar4,5);
  }
  return uVar5;
}


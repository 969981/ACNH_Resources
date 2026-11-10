
long FUN_001f5d60(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar2 = FUN_001f4e40(param_2);
  if ((lVar2 != 0) && (iVar1 = FUN_001f6570(param_1), iVar1 == 0)) {
    lVar4 = 0;
    do {
      puVar3 = (undefined8 *)FUN_001f6550(param_1);
      memcpy((void *)(lVar2 + lVar4),(void *)*puVar3,puVar3[1]);
      lVar4 = puVar3[1] + lVar4;
      FUN_001f4e60(*puVar3);
      FUN_001f4e60(puVar3);
      FUN_001f6520(param_1);
      iVar1 = FUN_001f6570(param_1);
    } while (iVar1 == 0);
  }
  return lVar2;
}


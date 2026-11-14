
long * FUN_01cb11c0(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  lVar3 = *param_2;
  lVar4 = param_2[1];
  lVar7 = lVar4 - lVar3;
  if (lVar7 != 0) {
    lVar7 = lVar7 >> 3;
    if (0x222222222222222 < (ulong)(lVar7 * -0x1111111111111111)) {
      FUN_01c6e56c(param_1);
                    /* WARNING: Does not return */
      pcVar5 = (code *)UndefinedInstructionException(0,0x1cb12e8);
      (*pcVar5)();
    }
    lVar6 = FUN_00187df4();
    *param_1 = lVar6;
    param_1[1] = lVar6;
    lVar8 = 0;
    param_1[2] = lVar6 + lVar7 * 8;
    do {
      puVar2 = (undefined8 *)(lVar6 + lVar8);
      FUN_01c6e580(puVar2,lVar3 + lVar8);
      lVar8 = lVar8 + 0x78;
      *puVar2 = &PTR_FUN_04a42c70;
    } while (lVar3 + lVar8 != lVar4);
    param_1[1] = lVar6 + lVar8;
  }
  puVar1 = PTR_DAT_04bc0f40 + 0x10;
  param_1[3] = param_2[3];
  param_1[4] = (long)puVar1;
  (**(code **)(param_2[4] + 0x10))();
  param_1[8] = (long)(PTR_DAT_04bbba70 + 0x10);
  (**(code **)(param_2[8] + 0x10))(param_2 + 8);
  *(char *)(param_1 + 0xc) = (char)param_2[0xc];
  return param_1;
}



void FUN_00408750(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
  if ((ulong)((param_1[2] - *param_1 >> 3) * -0x1111111111111111) < param_2) {
    if (0x222222222222222 < param_2) {
      FUN_01c6e56c(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_01c67100("vector");
    }
    lVar2 = (param_1[1] - *param_1) / 0x78;
    lVar3 = FUN_00187df4(param_2 * 0x78);
    lVar1 = lVar3 + param_2 * 0x78;
    lVar7 = lVar3 + lVar2 * 0x78;
    puVar6 = (undefined8 *)*param_1;
    puVar5 = (undefined8 *)param_1[1];
    if (puVar5 == puVar6) {
      *param_1 = lVar7;
      param_1[1] = lVar7;
      param_1[2] = lVar1;
    }
    else {
      puVar4 = (undefined8 *)(lVar3 + lVar2 * 0x78);
      do {
        puVar4 = puVar4 + -0xf;
        puVar5 = puVar5 + -0xf;
        FUN_01c6e580(puVar4,puVar5);
        *puVar4 = &PTR_FUN_04a42c70;
      } while (puVar5 != puVar6);
      puVar5 = (undefined8 *)*param_1;
      puVar6 = (undefined8 *)param_1[1];
      *param_1 = (long)puVar4;
      param_1[1] = lVar7;
      param_1[2] = lVar1;
      while (puVar6 != puVar5) {
        puVar6 = puVar6 + -0xf;
        (**(code **)*puVar6)(puVar6);
      }
    }
    if (puVar5 != (undefined8 *)0x0) {
      FUN_00187e4c(puVar5);
      return;
    }
  }
  return;
}



void FUN_0019ca90(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = (long)(PTR_DAT_04bcbc48 + 0x10);
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = (long)&PTR_FUN_04839690;
  if ((long)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c6e7e8();
  }
  puVar3 = (undefined8 *)FUN_00187df4(param_2);
  puVar1 = (undefined8 *)((long)puVar3 + param_2);
  param_1[2] = (long)puVar3;
  param_1[4] = (long)puVar1;
  for (uVar2 = param_2 & 7; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined8 *)((long)puVar3 + 1);
  }
  if (7 < param_2) {
    do {
      puVar4 = puVar3 + 1;
      *puVar3 = 0;
      puVar3 = puVar4;
    } while (puVar4 != puVar1);
  }
  param_1[3] = (long)puVar1;
  memset((void *)param_1[2],0,param_2);
  return;
}



void FUN_002bc400(long *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  
  *param_1 = (long)(PTR_DAT_04bce1c0 + 0x10);
  puVar1 = (undefined8 *)param_1[0xb];
  if (puVar1 != (undefined8 *)0x0 || param_1[10] != 0) {
    if (puVar1 != (undefined8 *)0x0) {
      if ((undefined8 *)puVar1[1] != puVar1) {
        puVar3 = (undefined8 *)puVar1[1];
        do {
          iVar2 = *(int *)((long)puVar1 + 0x2c);
          puVar5 = (undefined8 *)puVar3[1];
          *puVar3 = 0;
          puVar3[1] = 0;
          FUN_002236e0(puVar1 + 3,puVar1 + 3,(long)iVar2 + (long)puVar3);
          puVar3 = puVar5;
        } while (puVar5 != puVar1);
      }
      FUN_002236b0(puVar1);
    }
    FUN_002aa9e8(param_1);
    if (param_1[0xb] != 0) {
      FUN_00285dc0();
      param_1[0xb] = 0;
    }
    lVar4 = param_1[10];
    if (lVar4 != 0) {
      FUN_00285e00(lVar4);
      FUN_00285dc0(lVar4);
      param_1[10] = 0;
    }
  }
  thunk_FUN_002aa8b4(param_1);
  return;
}


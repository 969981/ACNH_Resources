
void FUN_002bad20(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar3 = PTR_DAT_04bcb8c8;
  lVar4 = 0;
  do {
    puVar1 = (undefined4 *)(param_1 + lVar4);
    lVar4 = lVar4 + 0x30;
    *puVar1 = *(undefined4 *)puVar3;
    puVar1[6] = *(undefined4 *)puVar3;
  } while (lVar4 != 0xc00);
  FUN_002a6f8c(param_1);
  lVar4 = 0;
  do {
    lVar2 = param_1 + lVar4;
    lVar4 = lVar4 + 0x30;
    *(undefined4 *)(lVar2 + 0xd40) = *(undefined4 *)puVar3;
    *(undefined4 *)(lVar2 + 0xd58) = *(undefined4 *)puVar3;
  } while (lVar4 != 0xc00);
  FUN_002a6f8c(param_1 + 0xd40);
  lVar4 = -0xc00;
  do {
    lVar2 = param_1 + lVar4;
    lVar4 = lVar4 + 0x30;
    *(undefined4 *)(lVar2 + 0x2680) = *(undefined4 *)puVar3;
    *(undefined4 *)(lVar2 + 0x2698) = *(undefined4 *)puVar3;
  } while (lVar4 != 0);
  FUN_002a6f8c(param_1 + 0x1a80);
  lVar4 = -0xc00;
  do {
    lVar2 = param_1 + lVar4;
    lVar4 = lVar4 + 0x30;
    *(undefined4 *)(lVar2 + 0x33c0) = *(undefined4 *)puVar3;
    *(undefined4 *)(lVar2 + 0x33d8) = *(undefined4 *)puVar3;
  } while (lVar4 != 0);
  FUN_002a6f8c(param_1 + 0x27c0);
  FUN_002baac0(param_1 + 0x3500);
  *(undefined4 *)(param_1 + 0x390c) = 0;
  *(undefined8 *)(param_1 + 0x3904) = 0;
  return;
}


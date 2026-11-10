
void FUN_002a6fb0(long param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar3 = PTR_DAT_04bcb8c8;
  lVar4 = 0;
  do {
    uVar2 = *(undefined4 *)puVar3;
    puVar1 = (undefined4 *)(param_1 + lVar4);
    lVar4 = lVar4 + 0x18;
    *(undefined8 *)(puVar1 + 1) = 0;
    puVar1[3] = 0;
    *(undefined8 *)(puVar1 + 4) = 0;
    *puVar1 = uVar2;
  } while (lVar4 != 0xc00);
  *(undefined8 *)(param_1 + 0xc30) = 0;
  *(undefined8 *)(param_1 + 0xcb0) = 0;
  *(undefined8 *)(param_1 + 0xc74) = 0;
  *(undefined8 *)(param_1 + 0xc38) = 0;
  *(undefined8 *)(param_1 + 0xcf4) = 0;
  *(undefined8 *)(param_1 + 0xcb8) = 0;
  *(undefined8 *)(param_1 + 0xc7c) = 0;
  *(undefined8 *)(param_1 + 0xc40) = 0;
  *(undefined8 *)(param_1 + 0xc84) = 0;
  *(undefined8 *)(param_1 + 0xcc0) = 0;
  *(undefined8 *)(param_1 + 0xc8c) = 0;
  *(undefined8 *)(param_1 + 0xc48) = 0;
  *(undefined8 *)(param_1 + 0xc94) = 0;
  *(undefined8 *)(param_1 + 0xcc8) = 0;
  *(undefined8 *)(param_1 + 0xc9c) = 0;
  *(undefined8 *)(param_1 + 0xc50) = 0;
  *(undefined8 *)(param_1 + 0xcd0) = 0;
  *(undefined8 *)(param_1 + 0xc58) = 0;
  *(undefined8 *)(param_1 + 0xcd8) = 0;
  *(undefined8 *)(param_1 + 0xc60) = 0;
  *(undefined8 *)(param_1 + 0xce0) = 0;
  *(undefined8 *)(param_1 + 0xc68) = 0;
  *(undefined8 *)(param_1 + 0xce8) = 0;
  *(undefined4 *)(param_1 + 0xc70) = 0;
  *(undefined4 *)(param_1 + 0xcf0) = 0;
  *(undefined4 *)(param_1 + 0xcfc) = 0;
  *(undefined8 *)(param_1 + 0xd00) = 0;
  *(undefined8 *)(param_1 + 0xd08) = 0;
  *(undefined8 *)(param_1 + 0xd10) = 0;
  *(undefined8 *)(param_1 + 0xd18) = 0;
  *(undefined8 *)(param_1 + 0xd20) = 0;
  *(undefined8 *)(param_1 + 0xca4) = 0;
  *(undefined8 *)(param_1 + 0xd28) = 0;
  *(undefined4 *)(param_1 + 0xcac) = 0;
  *(undefined8 *)(param_1 + 0xc00) = 0;
  *(undefined8 *)(param_1 + 0xc28) = 0;
  *(undefined4 *)(param_1 + 0xd30) = 0;
  *(undefined8 *)(param_1 + 0xd38) = 0;
  return;
}


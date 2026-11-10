
void FUN_00261a50(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  FUN_00232ac4();
  *(undefined8 *)(param_1 + 0x438) = 0;
  *(undefined8 *)(param_1 + 0x430) = 0;
  FUN_002236b0();
  lVar1 = param_1 + 0x448;
  *(undefined8 *)(param_1 + 0x448) = 0;
  *(undefined8 *)(param_1 + 0x450) = 0;
  FUN_002236b0(lVar1);
  lVar5 = 0;
  *(long *)(param_1 + 0x460) = param_1 + 0x46c;
  lVar6 = 0x20;
  *(undefined4 *)(param_1 + 0x45c) = 0;
  *(undefined4 *)(param_1 + 0x468) = 0x20;
  do {
    iVar3 = *(int *)(param_1 + 0x45c);
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x460) + lVar5);
    *puVar2 = 0;
    puVar2[1] = 0;
    FUN_002236bc(lVar1,lVar1,(long)puVar2 + (long)iVar3);
    lVar6 = lVar6 + -1;
    lVar5 = lVar5 + 0x448;
  } while (lVar6 != 0);
  *(undefined2 *)(param_1 + 0x8d70) = 0;
  uVar4 = FUN_002214b4(param_1 + 0x8d78,10);
  FUN_00261af8(uVar4,param_1);
  return;
}


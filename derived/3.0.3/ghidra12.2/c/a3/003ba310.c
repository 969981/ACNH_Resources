
long FUN_003ba310(long param_1,ulong param_2)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar5 = (uint)(param_2 >> 0x18) & 0xff;
  uVar6 = param_2 & 0xffffffff;
  if (uVar5 == 3) {
    lVar4 = FUN_003b90f4(*(undefined8 *)(param_1 + 0x40),uVar6);
    return lVar4 + *(int *)(lVar4 + 8);
  }
  if (uVar5 == 2) {
    puVar3 = (uint *)FUN_003b9178(*(undefined8 *)(param_1 + 0x40),uVar6);
LAB_003ba3fc:
    lVar4 = (long)puVar3 + (long)(int)puVar3[5];
    if ((short)puVar3[4] != 0x2205) {
      lVar4 = 0;
    }
    return lVar4 + *(int *)(lVar4 + 4);
  }
  if (uVar5 == 1) {
    FUN_003b90ac(*(undefined8 *)(param_1 + 0x40),uVar6);
    iVar1 = FUN_003b93f0();
    if ((iVar1 == 3) &&
       (piVar2 = (int *)FUN_003b91b4(*(undefined8 *)(param_1 + 0x40)), *piVar2 != 0)) {
      uVar5 = 0;
      do {
        puVar3 = (uint *)FUN_003b9178(*(undefined8 *)(param_1 + 0x40),uVar5 | 0x2000000);
        if ((*puVar3 <= (uint)param_2) && ((uint)param_2 <= puVar3[1])) goto LAB_003ba3fc;
        uVar5 = uVar5 + 1;
        puVar3 = (uint *)FUN_003b91b4(*(undefined8 *)(param_1 + 0x40));
      } while (uVar5 < *puVar3);
    }
  }
  return 0;
}


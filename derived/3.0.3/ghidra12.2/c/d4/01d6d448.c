
undefined4 FUN_01d6d448(uint *param_1,byte *param_2)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  
  uVar2 = *param_1;
  if (uVar2 - 4 < 2) {
LAB_01d6d464:
    plVar5 = *(long **)(param_1 + 4);
    if (plVar5 == (long *)0x0) {
      return 3;
    }
  }
  else {
    if (uVar2 == 0) {
      return 3;
    }
    if (uVar2 == 1) goto LAB_01d6d464;
    if (((uVar2 & 0xfffffffe) != 8) || (plVar5 = *(long **)(param_1 + 4), plVar5 == (long *)0x0))
    goto LAB_01d6d4ac;
  }
  plVar1 = &DAT_04178a58;
  if ((char)plVar5[0xd7] != '\0') {
    plVar1 = plVar5;
  }
  if (*plVar1 != *(long *)(param_1 + 2)) {
    return 3;
  }
LAB_01d6d4ac:
  bVar3 = (byte)param_1[10];
  if ((bVar3 >> 2 & 1) != 0) {
    return 2;
  }
  lVar6 = *(long *)(param_1 + 6);
  if (lVar6 == 0) {
    if ((bVar3 & 1) == 0) {
      return 1;
    }
    lVar6 = *(long *)(param_1 + 8);
    if (lVar6 == 0) {
      uVar4 = 1;
      if ((bVar3 & 2) != 0) {
        uVar4 = 2;
      }
      return uVar4;
    }
  }
  *param_2 = *(byte *)(lVar6 + 0x74) ^ 1;
  return 0;
}


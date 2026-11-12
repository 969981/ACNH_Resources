
undefined8 FUN_007ee00c(uint *param_1)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  if (*DAT_04cb54f0 == 0) {
    return 0;
  }
  uVar2 = *param_1;
  if (uVar2 - 4 < 2) {
LAB_007ee038:
    plVar5 = *(long **)(param_1 + 4);
  }
  else {
    if (uVar2 == 0) {
      return 0;
    }
    if (uVar2 == 1) goto LAB_007ee038;
    plVar5 = *(long **)(param_1 + 4);
    if ((uVar2 & 0xfffffffe) != 8) {
      if (plVar5 == (long *)0x0) {
        return 0;
      }
      cVar3 = (char)plVar5[0xd7];
      goto LAB_007ee088;
    }
  }
  if (plVar5 == (long *)0x0) {
    return 0;
  }
  cVar3 = (char)plVar5[0xd7];
  plVar1 = &DAT_04178a58;
  if (cVar3 != '\0') {
    plVar1 = plVar5;
  }
  if (*plVar1 != *(long *)(param_1 + 2)) {
    return 0;
  }
LAB_007ee088:
  plVar1 = &DAT_04178a58;
  if (cVar3 != '\0') {
    plVar1 = plVar5;
  }
  lVar6 = *(long *)PTR_DAT_04bb4ca8;
  if (*(int *)(lVar6 + 8) != 0) {
    return 0;
  }
  lVar7 = *plVar1;
  uVar4 = 0;
  *(undefined1 *)(lVar6 + 0x160) = 0;
  if ((((*(char *)(lVar6 + 0x161) != '\0') && (*(char *)(lVar6 + 0x162) != '\0')) &&
      (*(char *)(lVar6 + 0x163) == '\0')) && (lVar7 != 0)) {
    *(long *)(lVar6 + 0x98) = lVar7;
    FUN_03ebb160(lVar6,4);
    uVar4 = 1;
  }
  return uVar4;
}


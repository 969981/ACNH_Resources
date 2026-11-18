
bool FUN_033fca80(byte *param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  uint uVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  long lVar18;
  byte local_24 [4];
  
  local_24[0] = *param_1;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  lVar15 = FUN_02583354(DAT_055021a0,local_24,1);
  if (lVar15 == 0) {
    return false;
  }
  lVar18 = lVar15 + 0x194b0;
  if (*(long *)(lVar15 + 0x194b8) == 0) {
    lVar18 = *(long *)(DAT_05574040 + 0x20);
    plVar17 = *(long **)(lVar18 + 0x28);
  }
  else {
    plVar17 = *(long **)(lVar15 + 0x194d8);
  }
  if ((plVar17 == (long *)0x0) || ((undefined8 *)*plVar17 == (undefined8 *)0x0)) {
    uVar14 = 1;
  }
  else {
    uVar14 = (*(code *)**(undefined8 **)*plVar17)();
    uVar14 = uVar14 ^ 1;
  }
  lVar15 = *(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8);
  cVar1 = *(char *)(lVar15 + 0x30088);
  cVar2 = *(char *)(lVar15 + 0x30089);
  cVar3 = *(char *)(lVar15 + 0x3008a);
  cVar4 = *(char *)(lVar15 + 0x3008b);
  cVar5 = *(char *)(lVar15 + 0x3008c);
  cVar6 = *(char *)(lVar15 + 0x3008d);
  cVar7 = *(char *)(lVar15 + 0x3008e);
  cVar8 = *(char *)(lVar15 + 0x30090);
  cVar9 = *(char *)(lVar15 + 0x3008f);
  cVar10 = *(char *)(lVar15 + 0x30091);
  cVar11 = *(char *)(lVar15 + 0x30092);
  cVar12 = *(char *)(lVar15 + 0x30093);
  cVar13 = *(char *)(lVar15 + 0x30094);
  if ((((uVar14 & 1) == 0) && (*(long *)(lVar18 + 0x28) != 0)) &&
     (puVar16 = *(undefined8 **)(*(long *)(lVar18 + 0x28) + 8), puVar16 != (undefined8 *)0x0)) {
    (**(code **)*puVar16)();
  }
  return ((((cVar1 != '\0' || cVar2 != '\0') || (cVar3 != '\0' || cVar4 != '\0')) ||
          ((cVar5 != '\0' || cVar6 != '\0') || cVar7 != '\0')) ||
         (((cVar9 != '\0' || cVar8 != '\0') || cVar10 != '\0') || cVar11 != '\0')) ||
         (cVar12 != '\0' || cVar13 != '\0');
}



bool FUN_033fcbd0(byte *param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  byte local_24 [4];
  
  local_24[0] = *param_1;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  lVar10 = FUN_02583354(DAT_055021a0,local_24,1);
  if (lVar10 == 0) {
    return false;
  }
  lVar13 = lVar10 + 0x194b0;
  if (*(long *)(lVar10 + 0x194b8) == 0) {
    lVar13 = *(long *)(DAT_05574040 + 0x20);
    plVar12 = *(long **)(lVar13 + 0x28);
  }
  else {
    plVar12 = *(long **)(lVar10 + 0x194d8);
  }
  if ((plVar12 == (long *)0x0) || ((undefined8 *)*plVar12 == (undefined8 *)0x0)) {
    uVar9 = 1;
  }
  else {
    uVar9 = (*(code *)**(undefined8 **)*plVar12)();
    uVar9 = uVar9 ^ 1;
  }
  lVar10 = *(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8);
  cVar1 = *(char *)(lVar10 + 0x301e4);
  cVar2 = *(char *)(lVar10 + 0x301e5);
  cVar3 = *(char *)(lVar10 + 0x301e7);
  cVar4 = *(char *)(lVar10 + 0x301e6);
  cVar5 = *(char *)(lVar10 + 0x301e9);
  cVar6 = *(char *)(lVar10 + 0x301e8);
  cVar7 = *(char *)(lVar10 + 0x301ea);
  cVar8 = *(char *)(lVar10 + 0x301eb);
  if ((((uVar9 & 1) == 0) && (*(long *)(lVar13 + 0x28) != 0)) &&
     (puVar11 = *(undefined8 **)(*(long *)(lVar13 + 0x28) + 8), puVar11 != (undefined8 *)0x0)) {
    (**(code **)*puVar11)();
  }
  return (((cVar1 != '\0' || cVar2 != '\0') || (cVar4 != '\0' || cVar3 != '\0')) ||
         ((cVar6 != '\0' || cVar5 != '\0') || cVar7 != '\0')) || cVar8 != '\0';
}


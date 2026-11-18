
bool FUN_033fcd00(byte *param_1)

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
  undefined *puVar14;
  uint uVar15;
  long lVar16;
  undefined8 *puVar17;
  long *plVar18;
  long lVar19;
  byte local_3c [4];
  byte local_38 [4];
  byte local_34 [4];
  
  puVar14 = PTR_DAT_04bb4f78;
  local_3c[0] = *param_1;
  if (7 < local_3c[0]) {
    local_3c[0] = 0xff;
  }
  lVar16 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_3c,1);
  if (lVar16 != 0) {
    lVar19 = lVar16 + 0x194b0;
    if (*(long *)(lVar16 + 0x194b8) == 0) {
      lVar19 = *(long *)(DAT_05574040 + 0x20);
      plVar18 = *(long **)(lVar19 + 0x28);
      if (plVar18 != (long *)0x0) goto LAB_033fcd7c;
LAB_033fcd98:
      uVar15 = 1;
    }
    else {
      plVar18 = *(long **)(lVar16 + 0x194d8);
      if (plVar18 == (long *)0x0) goto LAB_033fcd98;
LAB_033fcd7c:
      if ((undefined8 *)*plVar18 == (undefined8 *)0x0) goto LAB_033fcd98;
      uVar15 = (*(code *)**(undefined8 **)*plVar18)();
      uVar15 = uVar15 ^ 1;
    }
    lVar16 = *(long *)(lVar19 + 0x10) + *(long *)(lVar19 + 8);
    cVar1 = *(char *)(lVar16 + 0x3015e);
    cVar2 = *(char *)(lVar16 + 0x3015f);
    cVar3 = *(char *)(lVar16 + 0x30160);
    cVar4 = *(char *)(lVar16 + 0x30161);
    cVar5 = *(char *)(lVar16 + 0x30162);
    cVar6 = *(char *)(lVar16 + 0x30163);
    cVar7 = *(char *)(lVar16 + 0x30164);
    cVar8 = *(char *)(lVar16 + 0x30166);
    cVar9 = *(char *)(lVar16 + 0x30165);
    cVar10 = *(char *)(lVar16 + 0x30167);
    cVar11 = *(char *)(lVar16 + 0x30168);
    cVar12 = *(char *)(lVar16 + 0x30169);
    cVar13 = *(char *)(lVar16 + 0x3016a);
    if ((((uVar15 & 1) == 0) && (*(long *)(lVar19 + 0x28) != 0)) &&
       (puVar17 = *(undefined8 **)(*(long *)(lVar19 + 0x28) + 8), puVar17 != (undefined8 *)0x0)) {
      (**(code **)*puVar17)();
    }
    if (((((cVar1 != '\0' || cVar2 != '\0') || (cVar3 != '\0' || cVar4 != '\0')) ||
         ((cVar5 != '\0' || cVar6 != '\0') || cVar7 != '\0')) ||
        (((cVar9 != '\0' || cVar8 != '\0') || cVar10 != '\0') || cVar11 != '\0')) ||
        (cVar12 != '\0' || cVar13 != '\0')) {
      return true;
    }
  }
  local_38[0] = *param_1;
  if (7 < local_38[0]) {
    local_38[0] = 0xff;
  }
  lVar16 = FUN_02583354(*(undefined8 *)puVar14,local_38,1);
  if (lVar16 == 0) goto LAB_033fcf60;
  lVar19 = lVar16 + 0x194b0;
  if (*(long *)(lVar16 + 0x194b8) == 0) {
    lVar19 = *(long *)(DAT_05574040 + 0x20);
    plVar18 = *(long **)(lVar19 + 0x28);
    if (plVar18 != (long *)0x0) goto LAB_033fce98;
LAB_033fceb4:
    uVar15 = 1;
  }
  else {
    plVar18 = *(long **)(lVar16 + 0x194d8);
    if (plVar18 == (long *)0x0) goto LAB_033fceb4;
LAB_033fce98:
    if ((undefined8 *)*plVar18 == (undefined8 *)0x0) goto LAB_033fceb4;
    uVar15 = (*(code *)**(undefined8 **)*plVar18)();
    uVar15 = uVar15 ^ 1;
  }
  lVar16 = *(long *)(lVar19 + 0x10) + *(long *)(lVar19 + 8);
  cVar1 = *(char *)(lVar16 + 0x30088);
  cVar2 = *(char *)(lVar16 + 0x30089);
  cVar3 = *(char *)(lVar16 + 0x3008a);
  cVar4 = *(char *)(lVar16 + 0x3008b);
  cVar5 = *(char *)(lVar16 + 0x3008c);
  cVar6 = *(char *)(lVar16 + 0x3008d);
  cVar7 = *(char *)(lVar16 + 0x3008e);
  cVar8 = *(char *)(lVar16 + 0x30090);
  cVar9 = *(char *)(lVar16 + 0x3008f);
  cVar10 = *(char *)(lVar16 + 0x30091);
  cVar11 = *(char *)(lVar16 + 0x30092);
  cVar12 = *(char *)(lVar16 + 0x30093);
  cVar13 = *(char *)(lVar16 + 0x30094);
  if ((((uVar15 & 1) == 0) && (*(long *)(lVar19 + 0x28) != 0)) &&
     (puVar17 = *(undefined8 **)(*(long *)(lVar19 + 0x28) + 8), puVar17 != (undefined8 *)0x0)) {
    (**(code **)*puVar17)();
  }
  if (((((cVar1 != '\0' || cVar2 != '\0') || (cVar3 != '\0' || cVar4 != '\0')) ||
       ((cVar5 != '\0' || cVar6 != '\0') || cVar7 != '\0')) ||
      (((cVar9 != '\0' || cVar8 != '\0') || cVar10 != '\0') || cVar11 != '\0')) ||
      (cVar12 != '\0' || cVar13 != '\0')) {
    return true;
  }
LAB_033fcf60:
  local_34[0] = *param_1;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
  lVar16 = FUN_02583354(*(undefined8 *)puVar14,local_34,1);
  if (lVar16 == 0) {
    return false;
  }
  lVar19 = lVar16 + 0x194b0;
  if (*(long *)(lVar16 + 0x194b8) == 0) {
    lVar19 = *(long *)(DAT_05574040 + 0x20);
    plVar18 = *(long **)(lVar19 + 0x28);
  }
  else {
    plVar18 = *(long **)(lVar16 + 0x194d8);
  }
  if ((plVar18 == (long *)0x0) || ((undefined8 *)*plVar18 == (undefined8 *)0x0)) {
    uVar15 = 1;
  }
  else {
    uVar15 = (*(code *)**(undefined8 **)*plVar18)();
    uVar15 = uVar15 ^ 1;
  }
  lVar16 = *(long *)(lVar19 + 0x10) + *(long *)(lVar19 + 8);
  cVar1 = *(char *)(lVar16 + 0x301e4);
  cVar2 = *(char *)(lVar16 + 0x301e5);
  cVar3 = *(char *)(lVar16 + 0x301e7);
  cVar4 = *(char *)(lVar16 + 0x301e6);
  cVar5 = *(char *)(lVar16 + 0x301e9);
  cVar6 = *(char *)(lVar16 + 0x301e8);
  cVar7 = *(char *)(lVar16 + 0x301ea);
  cVar8 = *(char *)(lVar16 + 0x301eb);
  if ((((uVar15 & 1) == 0) && (*(long *)(lVar19 + 0x28) != 0)) &&
     (puVar17 = *(undefined8 **)(*(long *)(lVar19 + 0x28) + 8), puVar17 != (undefined8 *)0x0)) {
    (**(code **)*puVar17)();
  }
  return (((cVar1 != '\0' || cVar2 != '\0') || (cVar4 != '\0' || cVar3 != '\0')) ||
         ((cVar6 != '\0' || cVar5 != '\0') || cVar7 != '\0')) || cVar8 != '\0';
}


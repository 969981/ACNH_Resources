
void FUN_01d9781c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  uVar5 = FUN_02659360();
  if ((*(long *)PTR_DAT_04bb46b0 == 0) ||
     (lVar7 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,uVar5), lVar7 == 0)) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x24) = 0;
    *(undefined8 *)(param_1 + 0x2c) = 0;
    *(undefined8 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined1 *)(param_1 + 0x20) = 2;
  }
  else {
    if ((*(long **)(lVar7 + 0x28) == (long *)0x0) ||
       (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x28), puVar8 == (undefined8 *)0x0)) {
      uVar6 = 1;
    }
    else {
      uVar6 = (**(code **)*puVar8)();
      uVar6 = uVar6 ^ 1;
    }
    lVar1 = *(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8);
    uVar9 = *(undefined8 *)(lVar1 + 0xc168);
    uVar2 = *(undefined8 *)(lVar1 + 0xc150);
    uVar3 = *(undefined8 *)(lVar1 + 0xc158);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar1 + 0xc160);
    *(undefined8 *)(param_1 + 0x38) = uVar9;
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    uVar2 = *(undefined8 *)(lVar1 + 0xc138);
    uVar9 = *(undefined8 *)(lVar1 + 0xc148);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar1 + 0xc140);
    *(undefined8 *)(param_1 + 0x18) = uVar9;
    *(undefined8 *)(param_1 + 8) = uVar2;
    lVar1 = *(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8);
    *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(lVar1 + 0x1d18);
    *(undefined1 *)(param_1 + 0x41) = *(undefined1 *)(lVar1 + 0x1d19);
    *(undefined1 *)(param_1 + 0x42) = *(undefined1 *)(lVar1 + 0x1d1a);
    *(undefined1 *)(param_1 + 0x43) = *(undefined1 *)(lVar1 + 0x1d1b);
    *(undefined1 *)(param_1 + 0x44) = *(undefined1 *)(lVar1 + 0x1d1c);
    *(undefined1 *)(param_1 + 0x45) = *(undefined1 *)(lVar1 + 0x1d1d);
    *(undefined1 *)(param_1 + 0x46) = *(undefined1 *)(lVar1 + 0x1d1e);
    *(undefined1 *)(param_1 + 0x47) = *(undefined1 *)(lVar1 + 0x1d1f);
    *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(lVar1 + 0x1d20);
    *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(lVar1 + 0x1d22);
    if ((((uVar6 & 1) == 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
  }
  bVar4 = false;
  if (*(long *)(DAT_053762d8 + 200) != 0) {
    bVar4 = *(char *)(*(long *)(DAT_053762d8 + 200) + 0x1cb4) != '\0';
  }
  *(bool *)(param_1 + 0x4c) = bVar4;
  return;
}


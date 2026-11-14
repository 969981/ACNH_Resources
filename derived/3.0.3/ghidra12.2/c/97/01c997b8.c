
void FUN_01c997b8(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) {
    return;
  }
  uVar3 = *(uint *)(lVar7 + 8);
  if (uVar3 == 0xffffffff && *(char *)(lVar7 + 0x20) != '\0') {
    puVar8 = (undefined1 *)(lVar7 + 0x21);
    *puVar8 = 1;
    uVar2 = *(undefined4 *)(lVar7 + 0xc);
    *(undefined8 *)(lVar7 + 0xc) = 0xffffffff00000000;
    *(undefined4 *)(lVar7 + 0x14) = uVar2;
    uVar3 = *(uint *)(lVar7 + 0x18);
    *(uint *)(lVar7 + 8) = uVar3;
    if (uVar3 == 0xffffffff) {
      *puVar8 = 0;
      goto LAB_01c99888;
    }
    uVar5 = *(uint *)(lVar7 + 0x28);
    lVar4 = *(long *)(lVar7 + 0x30);
    uVar1 = uVar3;
    if (uVar5 <= uVar3) {
      uVar1 = 0;
    }
    puVar6 = *(undefined8 **)(lVar4 + (long)(int)uVar1 * 0x40);
    if (puVar6 != (undefined8 *)0x0) {
      (*(code *)*puVar6)();
      uVar3 = *(uint *)(lVar7 + 8);
      goto LAB_01c99838;
    }
    *puVar8 = 0;
  }
  else {
LAB_01c99838:
    *(undefined1 *)(lVar7 + 0x21) = 0;
    if (uVar3 == 0xffffffff) goto LAB_01c99888;
    uVar5 = *(uint *)(lVar7 + 0x28);
    lVar4 = *(long *)(lVar7 + 0x30);
  }
  if (uVar5 <= uVar3) {
    uVar3 = 0;
  }
  lVar4 = *(long *)(lVar4 + (long)(int)uVar3 * 0x40);
  if ((lVar4 != 0) && ((**(code **)(lVar4 + 8))(), *(char *)(lVar7 + 0x21) != '\0')) {
    return;
  }
LAB_01c99888:
  *(int *)(lVar7 + 0xc) = *(int *)(lVar7 + 0xc) + 1;
  return;
}



void FUN_01dcf338(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  
  if ((((*(long *)(param_1 + 0x60) != 0) && (lVar4 = *(long *)(param_1 + 0x58), lVar4 != 0)) &&
      (*(int *)(param_1 + 8) == 0)) &&
     ((*(int *)(lVar4 + 0x30) == 0 ||
      (((*(int *)(lVar4 + 0x30) == 1 && (*(int *)(*(long *)(lVar4 + 0x3a438) + 0x50) == 0)) &&
       (*(int *)(lVar4 + 0xe8) == 0)))))) {
    FUN_01d6bcf0();
  }
  uVar3 = *(uint *)(param_1 + 8);
  if ((uVar3 == 0xffffffff) && (*(char *)(param_1 + 0x20) != '\0')) {
    puVar8 = (undefined1 *)(param_1 + 0x21);
    *puVar8 = 1;
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    *(undefined8 *)(param_1 + 0xc) = 0xffffffff00000000;
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    uVar3 = *(uint *)(param_1 + 0x18);
    *(uint *)(param_1 + 8) = uVar3;
    if (uVar3 != 0xffffffff) {
      uVar6 = *(uint *)(param_1 + 0x28);
      lVar4 = *(long *)(param_1 + 0x30);
      uVar1 = uVar3;
      if (uVar6 <= uVar3) {
        uVar1 = 0;
      }
      puVar7 = *(undefined8 **)(lVar4 + (long)(int)uVar1 * 0x40);
      if (puVar7 != (undefined8 *)0x0) {
        (*(code *)*puVar7)();
        uVar3 = *(uint *)(param_1 + 8);
        goto LAB_01dcf3fc;
      }
      *puVar8 = 0;
      goto LAB_01dcf424;
    }
    *puVar8 = 0;
LAB_01dcf44c:
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  else {
LAB_01dcf3fc:
    *(undefined1 *)(param_1 + 0x21) = 0;
    if (uVar3 == 0xffffffff) goto LAB_01dcf44c;
    uVar6 = *(uint *)(param_1 + 0x28);
    lVar4 = *(long *)(param_1 + 0x30);
LAB_01dcf424:
    if (uVar6 <= uVar3) {
      uVar3 = 0;
    }
    lVar4 = *(long *)(lVar4 + (long)(int)uVar3 * 0x40);
    if ((lVar4 == 0) || ((**(code **)(lVar4 + 8))(), *(char *)(param_1 + 0x21) == '\0'))
    goto LAB_01dcf44c;
  }
  lVar4 = *(long *)(param_1 + 0x58);
  if (lVar4 == 0) {
    return;
  }
  uVar3 = *(uint *)(lVar4 + 0x30);
  if ((uVar3 == 0xffffffff) && (*(char *)(lVar4 + 0x48) != '\0')) {
    puVar8 = (undefined1 *)(lVar4 + 0x49);
    *puVar8 = 1;
    uVar2 = *(undefined4 *)(lVar4 + 0x34);
    *(undefined8 *)(lVar4 + 0x34) = 0xffffffff00000000;
    *(undefined4 *)(lVar4 + 0x3c) = uVar2;
    uVar3 = *(uint *)(lVar4 + 0x40);
    *(uint *)(lVar4 + 0x30) = uVar3;
    if (uVar3 == 0xffffffff) {
      *puVar8 = 0;
      goto LAB_01dcf51c;
    }
    uVar6 = *(uint *)(lVar4 + 0x50);
    lVar5 = *(long *)(lVar4 + 0x58);
    uVar1 = uVar3;
    if (uVar6 <= uVar3) {
      uVar1 = 0;
    }
    puVar7 = *(undefined8 **)(lVar5 + (long)(int)uVar1 * 0x40);
    if (puVar7 != (undefined8 *)0x0) {
      (*(code *)*puVar7)();
      uVar3 = *(uint *)(lVar4 + 0x30);
      goto LAB_01dcf4cc;
    }
    *puVar8 = 0;
  }
  else {
LAB_01dcf4cc:
    *(undefined1 *)(lVar4 + 0x49) = 0;
    if (uVar3 == 0xffffffff) goto LAB_01dcf51c;
    uVar6 = *(uint *)(lVar4 + 0x50);
    lVar5 = *(long *)(lVar4 + 0x58);
  }
  if (uVar6 <= uVar3) {
    uVar3 = 0;
  }
  lVar5 = *(long *)(lVar5 + (long)(int)uVar3 * 0x40);
  if ((lVar5 != 0) && ((**(code **)(lVar5 + 8))(), *(char *)(lVar4 + 0x49) != '\0')) {
    return;
  }
LAB_01dcf51c:
  *(int *)(lVar4 + 0x34) = *(int *)(lVar4 + 0x34) + 1;
  return;
}


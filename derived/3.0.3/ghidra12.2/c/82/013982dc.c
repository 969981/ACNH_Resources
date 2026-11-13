
void FUN_013982dc(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  
  if (-1 < *(int *)(param_1 + 0x48)) {
    if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x48)) {
      FUN_03ebb160(param_1);
    }
    *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  }
  uVar3 = *(uint *)(param_1 + 8);
  if ((uVar3 == 0xffffffff) && (*(char *)(param_1 + 0x20) != '\0')) {
    puVar7 = (undefined1 *)(param_1 + 0x21);
    *puVar7 = 1;
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    *(undefined8 *)(param_1 + 0xc) = 0xffffffff00000000;
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    uVar3 = *(uint *)(param_1 + 0x18);
    *(uint *)(param_1 + 8) = uVar3;
    if (uVar3 == 0xffffffff) {
      *puVar7 = 0;
      goto LAB_013983cc;
    }
    uVar5 = *(uint *)(param_1 + 0x28);
    lVar4 = *(long *)(param_1 + 0x30);
    uVar1 = uVar3;
    if (uVar5 <= uVar3) {
      uVar1 = 0;
    }
    puVar6 = *(undefined8 **)(lVar4 + (long)(int)uVar1 * 0x40);
    if (puVar6 != (undefined8 *)0x0) {
      (*(code *)*puVar6)();
      uVar3 = *(uint *)(param_1 + 8);
      goto LAB_0139837c;
    }
    *puVar7 = 0;
  }
  else {
LAB_0139837c:
    *(undefined1 *)(param_1 + 0x21) = 0;
    if (uVar3 == 0xffffffff) goto LAB_013983cc;
    uVar5 = *(uint *)(param_1 + 0x28);
    lVar4 = *(long *)(param_1 + 0x30);
  }
  if (uVar5 <= uVar3) {
    uVar3 = 0;
  }
  lVar4 = *(long *)(lVar4 + (long)(int)uVar3 * 0x40);
  if ((lVar4 != 0) && ((**(code **)(lVar4 + 8))(), *(char *)(param_1 + 0x21) != '\0')) {
    return;
  }
LAB_013983cc:
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return;
}


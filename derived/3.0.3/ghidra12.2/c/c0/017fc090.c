
void FUN_017fc090(long param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_04bb2200;
  if (*(char *)(param_1 + 0x17a) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x144) == '\0') goto LAB_017fc15c;
  iVar4 = *(int *)(param_1 + 0x17c);
  *(int *)(param_1 + 0x140) = iVar4;
  if ((iVar4 == 0) || (iVar4 == 1)) {
LAB_017fc0e0:
    lVar5 = *(long *)puVar2;
    *(int *)(*(long *)(lVar5 + 0x70) + 0x98) = iVar4;
    *(undefined1 *)(*(long *)(lVar5 + 0x80) + 0x60) = 1;
    iVar4 = *(int *)(param_1 + 0x140);
  }
  else {
    if (iVar4 == 3) {
      iVar4 = 2;
      goto LAB_017fc0e0;
    }
    lVar5 = *(long *)puVar2;
  }
  lVar6 = *(long *)(lVar5 + 0x70);
  *(bool *)(lVar6 + 0x9d) = iVar4 != 2;
  *(undefined1 *)(*(long *)(lVar5 + 0x80) + 0x60) = 1;
  uVar1 = *(undefined1 *)(lVar6 + 0x9d);
  *(undefined1 *)(lVar6 + 0x9c) = uVar1;
  if (*(long *)(lVar6 + 0xa8) != 0) {
    lVar5 = *(long *)(*(long *)(lVar6 + 0xa8) + 0x10);
    puVar3 = (undefined1 *)(**(code **)(*(long *)(lVar5 + 0x158) + 0xf0))(lVar5 + 0x158);
    *puVar3 = uVar1;
    *(uint *)(lVar5 + 0x178) = *(uint *)(lVar5 + 0x178) | 0x1000000;
  }
LAB_017fc15c:
  *(undefined1 *)(param_1 + 0x17a) = 0;
  *(undefined4 *)(param_1 + 0x17c) = 2;
  if (*(long *)(*(long *)puVar2 + 0x80) != 0) {
    *(undefined1 *)(*(long *)(*(long *)puVar2 + 0x80) + 0x60) = 1;
  }
  return;
}


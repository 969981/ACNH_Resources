
void FUN_01bfb1c8(undefined8 *param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  
  uVar3 = *(uint *)(param_1 + 9);
  if (uVar3 == 0xffffffff && *(char *)(param_1 + 0xc) != '\0') {
    puVar8 = (undefined1 *)((long)param_1 + 0x61);
    *puVar8 = 1;
    uVar4 = *(undefined4 *)((long)param_1 + 0x4c);
    *(undefined8 *)((long)param_1 + 0x4c) = 0xffffffff00000000;
    *(undefined4 *)((long)param_1 + 0x54) = uVar4;
    uVar3 = *(uint *)(param_1 + 0xb);
    *(uint *)(param_1 + 9) = uVar3;
    if (uVar3 != 0xffffffff) {
      uVar6 = *(uint *)(param_1 + 0xd);
      lVar5 = param_1[0xe];
      uVar1 = uVar3;
      if (uVar6 <= uVar3) {
        uVar1 = 0;
      }
      puVar7 = *(undefined8 **)(lVar5 + (long)(int)uVar1 * 0x40);
      if (puVar7 != (undefined8 *)0x0) {
        (*(code *)*puVar7)();
        uVar3 = *(uint *)(param_1 + 9);
        goto LAB_01bfb250;
      }
      *puVar8 = 0;
      goto LAB_01bfb278;
    }
    *puVar8 = 0;
LAB_01bfb2a0:
    *(int *)((long)param_1 + 0x4c) = *(int *)((long)param_1 + 0x4c) + 1;
  }
  else {
LAB_01bfb250:
    *(undefined1 *)((long)param_1 + 0x61) = 0;
    if (uVar3 == 0xffffffff) goto LAB_01bfb2a0;
    uVar6 = *(uint *)(param_1 + 0xd);
    lVar5 = param_1[0xe];
LAB_01bfb278:
    if (uVar6 <= uVar3) {
      uVar3 = 0;
    }
    lVar5 = *(long *)(lVar5 + (long)(int)uVar3 * 0x40);
    if ((lVar5 == 0) || ((**(code **)(lVar5 + 8))(), *(char *)((long)param_1 + 0x61) == '\0'))
    goto LAB_01bfb2a0;
  }
  (*(code *)(&PTR_LAB_04a3ec90)[(ulong)*(uint *)param_1[7] * 2])();
  *(undefined2 *)((long)param_1 + 0x244c) = 0;
  if (-10000 < *(int *)(param_1 + 0x481)) {
    *(int *)(param_1 + 0x481) = *(int *)(param_1 + 0x481) + -1;
  }
  (*(code *)(&PTR_LAB_04a3e2d8)[(ulong)*(uint *)(param_1 + 0x489) * 2])(param_1 + 0x480);
  lVar5 = param_1[4];
  if (*(int *)(lVar5 + 0x28) == 3) {
    uVar2 = (**(code **)(**(long **)(lVar5 + 0x20) + 0xe8))();
    if ((uVar2 & 1) == 0) goto LAB_01bfb354;
    uVar4 = 0;
  }
  else {
    if ((*(int *)(lVar5 + 0x28) != 1) ||
       (uVar2 = (**(code **)(**(long **)(lVar5 + 0x20) + 0xe0))(), (uVar2 & 1) == 0))
    goto LAB_01bfb354;
    uVar4 = 2;
  }
  *(undefined4 *)(lVar5 + 0x28) = uVar4;
LAB_01bfb354:
  if (*(code **)(&DAT_04a3ede8 + (ulong)*(uint *)(*(long *)(lVar5 + 8) + 8) * 0x10) != (code *)0x0)
  {
    (**(code **)(&DAT_04a3ede8 + (ulong)*(uint *)(*(long *)(lVar5 + 8) + 8) * 0x10))();
  }
  (**(code **)(**(long **)(lVar5 + 0x10) + 0x20))();
  if (*(code **)(&DAT_04a3ee48 + (ulong)*(uint *)(*(long *)(lVar5 + 0x18) + 8) * 0x10) !=
      (code *)0x0) {
    (**(code **)(&DAT_04a3ee48 + (ulong)*(uint *)(*(long *)(lVar5 + 0x18) + 8) * 0x10))();
  }
  FUN_01c02e34(*param_1);
  return;
}


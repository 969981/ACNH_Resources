
void FUN_026d45ac(long param_1,void *param_2)

{
  int iVar1;
  void *pvVar2;
  uint *puVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  pvVar2 = (void *)(param_1 + 8);
  puVar3 = (uint *)(param_1 + 0xe0a68);
  uVar6 = *(uint *)(param_1 + 0xe0adc);
  *(undefined4 *)(param_1 + 0xe0adc) = *(undefined4 *)(param_1 + 0xe0ad8);
  *(undefined8 *)(param_1 + 0xe0ad4) = *(undefined8 *)(param_1 + 0xe0ad0);
  *(undefined8 *)(param_1 + 0xe0acc) = *(undefined8 *)(param_1 + 0xe0ac8);
  *(undefined8 *)(param_1 + 0xe0ac4) = *(undefined8 *)(param_1 + 0xe0ac0);
  *(undefined8 *)(param_1 + 0xe0abc) = *(undefined8 *)(param_1 + 0xe0ab8);
  uVar7 = *(undefined4 *)(param_1 + 0xe0ab4);
  *(undefined4 *)(param_1 + 0xe0ab4) = *(undefined4 *)(param_1 + 0xe0ab0);
  *(undefined4 *)(param_1 + 0xe0ab8) = uVar7;
  uVar7 = *(undefined4 *)(param_1 + 0xe0aac);
  *(undefined4 *)(param_1 + 0xe0aac) = *(undefined4 *)(param_1 + 0xe0aa8);
  *(undefined4 *)(param_1 + 0xe0ab0) = uVar7;
  uVar7 = *(undefined4 *)(param_1 + 0xe0aa4);
  *(undefined4 *)(param_1 + 0xe0aa4) = *(undefined4 *)(param_1 + 0xe0aa0);
  *(undefined4 *)(param_1 + 0xe0aa8) = uVar7;
  uVar7 = *(undefined4 *)(param_1 + 0xe0a9c);
  *(undefined4 *)(param_1 + 0xe0a9c) = *(undefined4 *)(param_1 + 0xe0a98);
  *(undefined4 *)(param_1 + 0xe0aa0) = uVar7;
  uVar7 = *(undefined4 *)(param_1 + 0xe0a94);
  *(undefined4 *)(param_1 + 0xe0a94) = *(undefined4 *)(param_1 + 0xe0a90);
  *(undefined4 *)(param_1 + 0xe0a98) = uVar7;
  uVar7 = *(undefined4 *)(param_1 + 0xe0a8c);
  *(undefined4 *)(param_1 + 0xe0a8c) = *(undefined4 *)(param_1 + 0xe0a88);
  *(undefined4 *)(param_1 + 0xe0a90) = uVar7;
  uVar7 = *(undefined4 *)(param_1 + 0xe0a84);
  *(undefined4 *)(param_1 + 0xe0a84) = *(undefined4 *)(param_1 + 0xe0a80);
  *(undefined4 *)(param_1 + 0xe0a88) = uVar7;
  uVar7 = *(undefined4 *)(param_1 + 0xe0a7c);
  *(undefined4 *)(param_1 + 0xe0a7c) = *(undefined4 *)(param_1 + 0xe0a78);
  *(undefined4 *)(param_1 + 0xe0a80) = uVar7;
  uVar7 = *(undefined4 *)(param_1 + 0xe0a74);
  *(undefined4 *)(param_1 + 0xe0a74) = *(undefined4 *)(param_1 + 0xe0a70);
  *(undefined4 *)(param_1 + 0xe0a78) = uVar7;
  uVar5 = *puVar3;
  uVar7 = *(undefined4 *)(param_1 + 0xe0a6c);
  *puVar3 = uVar6;
  *(uint *)(param_1 + 0xe0a6c) = uVar5;
  *(undefined4 *)(param_1 + 0xe0a70) = uVar7;
  pvVar4 = (void *)((long)pvVar2 + (ulong)uVar6 * 0x77d0);
  if (0x1d < uVar6) {
    pvVar4 = pvVar2;
  }
  memcpy(pvVar4,param_2,0x777c);
  uVar10 = *(undefined8 *)((long)param_2 + 0x778c);
  uVar8 = *(undefined8 *)((long)param_2 + 0x777c);
  uVar9 = *(undefined8 *)((long)param_2 + 0x7784);
  *(undefined1 *)((long)pvVar4 + 0x7794) = *(undefined1 *)((long)param_2 + 0x7794);
  *(undefined8 *)((long)pvVar4 + 0x7784) = uVar9;
  *(undefined8 *)((long)pvVar4 + 0x778c) = uVar10;
  *(undefined8 *)((long)pvVar4 + 0x777c) = uVar8;
  uVar8 = *(undefined8 *)((long)param_2 + 0x77a8);
  uVar9 = *(undefined8 *)((long)param_2 + 0x77a0);
  *(undefined8 *)((long)pvVar4 + 0x7798) = *(undefined8 *)((long)param_2 + 0x7798);
  *(undefined8 *)((long)pvVar4 + 0x77a0) = uVar9;
  *(undefined8 *)((long)pvVar4 + 0x77a8) = uVar8;
  uVar5 = *(uint *)((long)param_2 + 0x77b0);
  if (1 < uVar5) {
    uVar5 = 0;
  }
  *(uint *)((long)pvVar4 + 0x77b0) = uVar5;
  uVar8 = *(undefined8 *)((long)param_2 + 0x77bc);
  uVar9 = *(undefined8 *)((long)param_2 + 0x77c4);
  *(undefined8 *)((long)pvVar4 + 0x77b4) = *(undefined8 *)((long)param_2 + 0x77b4);
  *(undefined8 *)((long)pvVar4 + 0x77bc) = uVar8;
  *(undefined8 *)((long)pvVar4 + 0x77c4) = uVar9;
  pvVar4 = (void *)((long)pvVar2 + (ulong)*puVar3 * 0x77d0);
  if (0x1d < *puVar3) {
    pvVar4 = pvVar2;
  }
  iVar1 = *(int *)(param_1 + 0xe0ae0) + 1;
  *(int *)(param_1 + 0xe0ae0) = iVar1;
  *(int *)((long)pvVar4 + 0x77c8) = iVar1;
  return;
}


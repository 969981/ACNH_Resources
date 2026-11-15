
void FUN_021bfa68(long param_1)

{
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined *local_70;
  char *pcStack_68;
  undefined *local_60;
  char *pcStack_58;
  byte local_34 [4];
  
  ppuVar8 = &local_70;
  *(int *)(param_1 + 0x55d30) = -1;
  lVar9 = *(long *)PTR_DAT_04bb46b0;
  if (lVar9 == 0) {
    return;
  }
  puVar10 = *(undefined8 **)(lVar9 + 0x10);
  if ((*(byte *)(lVar9 + 0x453) & 1) == 0) {
    lVar9 = (**(code **)(*(long *)*puVar10 + 0x38))();
    if (lVar9 == 0) {
      return;
    }
    lVar9 = lVar9 + 0x70;
  }
  else {
    if (puVar10 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar10[0x26] == (long *)0x0) {
      return;
    }
    lVar9 = (**(code **)(*(long *)puVar10[0x26] + 0x38))();
    if (lVar9 == 0) {
      return;
    }
  }
  if ((*(long **)(lVar9 + 0xd0) == (long *)0x0) ||
     (puVar10 = (undefined8 *)**(long **)(lVar9 + 0xd0), puVar10 == (undefined8 *)0x0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)*puVar10)();
    uVar5 = uVar5 & 0xffffffff;
  }
  cVar2 = *(char *)(*(long *)(lVar9 + 0xb8) + *(long *)(lVar9 + 0xb0) + 0x1e335d);
  if (((cVar2 < 0) || (FUN_0252d11c(local_34), 7 < local_34[0])) ||
     (lVar6 = FUN_0265cf70((int)cVar2,local_34), lVar6 == 0)) goto LAB_021bfc28;
  if ((*(long **)(lVar6 + 0x28) == (long *)0x0) ||
     (puVar10 = (undefined8 *)**(long **)(lVar6 + 0x28), puVar10 == (undefined8 *)0x0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = (**(code **)*puVar10)();
    uVar3 = uVar3 ^ 1;
  }
  lVar7 = *(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8);
  if (*(char *)(*(long *)(lVar9 + 0xb8) + *(long *)(lVar9 + 0xb0) + 0x1e3362) == cVar2) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_58 = "NextMoveOutTalk";
    local_60 = puVar1;
    iVar4 = FUN_02746e10(lVar7,&local_60);
    if (iVar4 != 0) {
      lVar7 = *(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8);
      pcStack_68 = "MoveCancelTalk";
      local_70 = puVar1;
      goto LAB_021bfbfc;
    }
  }
  else {
    ppuVar8 = &local_60;
    local_60 = PTR_DAT_04bb2020 + 0x10;
    pcStack_58 = "NextMoveOutTalk";
LAB_021bfbfc:
    iVar4 = FUN_02746e10(lVar7,ppuVar8);
    if (iVar4 == 0) {
      *(int *)(param_1 + 0x55d30) = (int)cVar2;
    }
  }
  if ((((uVar3 & 1) == 0) && (*(long *)(lVar6 + 0x28) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 8), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
LAB_021bfc28:
  if ((((uVar5 & 1) != 0) && (*(long *)(lVar9 + 0xd0) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0xd0) + 8), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
  return;
}


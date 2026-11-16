
undefined8 FUN_028478d0(int *param_1,byte *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  byte local_44 [4];
  
  local_44[0] = *param_2;
  if (7 < local_44[0]) {
    local_44[0] = 0xff;
  }
  lVar6 = FUN_025830c0(DAT_055021a0,local_44,1);
  if (DAT_05574040 == 0) {
    return 2;
  }
  puVar10 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar7 = (**(code **)(*(long *)*puVar10 + 0x38))();
    lVar8 = 0;
    if (lVar7 != 0) {
      lVar8 = lVar7 + 0x70;
    }
  }
  else {
    if (puVar10 == (undefined8 *)0x0) {
      return 2;
    }
    if ((long *)puVar10[0x26] == (long *)0x0) {
      return 2;
    }
    lVar8 = (**(code **)(*(long *)puVar10[0x26] + 0x38))();
  }
  if (lVar6 == 0) {
    return 2;
  }
  if (lVar8 == 0) {
    return 2;
  }
  if ((*(long **)(lVar6 + 0x17bb0) == (long *)0x0) ||
     (puVar10 = (undefined8 *)**(long **)(lVar6 + 0x17bb0), puVar10 == (undefined8 *)0x0)) {
    uVar5 = 1;
  }
  else {
    uVar5 = (**(code **)*puVar10)();
    uVar5 = uVar5 ^ 1;
  }
  piVar1 = (int *)(*(long *)(lVar6 + 0x17b98) + *(long *)(lVar6 + 0x17b90));
  if (*(long **)(lVar8 + 0xe7290) == (long *)0x0) {
    uVar9 = 0;
  }
  else {
    puVar10 = (undefined8 *)**(long **)(lVar8 + 0xe7290);
    uVar9 = 0;
    if (puVar10 != (undefined8 *)0x0) {
      uVar9 = (**(code **)*puVar10)();
    }
  }
  piVar2 = (int *)(*(long *)(lVar8 + 0xe7278) + *(long *)(lVar8 + 0xe7270));
  if (((short)piVar1[1] == 0) || ((short)piVar2[1] == 0)) {
    iVar3 = *piVar1;
    iVar4 = *piVar2;
    if (((uVar9 & 1) != 0) &&
       ((*(long *)(lVar8 + 0xe7290) != 0 &&
        (puVar10 = *(undefined8 **)(*(long *)(lVar8 + 0xe7290) + 8), puVar10 != (undefined8 *)0x0)))
       ) {
      (**(code **)*puVar10)();
    }
    if (iVar3 == iVar4) {
LAB_02847ab0:
      if ((*param_1 == 0) ||
         ((lVar8 = *(long *)(lVar6 + 0x17b98) + *(long *)(lVar6 + 0x17b90),
          *param_1 == *(int *)(lVar8 + 0x1c) &&
          ((*(long *)(lVar8 + 0x20) == *(long *)(param_1 + 1) &&
           *(long *)(lVar8 + 0x28) == *(long *)(param_1 + 3)) &&
           *(int *)(lVar8 + 0x30) == param_1[5])))) {
        uVar14 = 0;
      }
      else {
        uVar14 = 2;
      }
      goto joined_r0x02847b2c;
    }
  }
  else if (*piVar1 == *piVar2) {
    lVar7 = *(long *)(piVar2 + 1);
    lVar11 = *(long *)(piVar1 + 1);
    lVar12 = *(long *)(piVar2 + 3);
    lVar13 = *(long *)(piVar1 + 3);
    iVar3 = piVar2[5];
    iVar4 = piVar1[5];
    if ((((uVar9 & 1) != 0) && (*(long *)(lVar8 + 0xe7290) != 0)) &&
       (puVar10 = *(undefined8 **)(*(long *)(lVar8 + 0xe7290) + 8), puVar10 != (undefined8 *)0x0)) {
      (**(code **)*puVar10)();
    }
    if ((lVar7 == lVar11 && lVar12 == lVar13) && iVar3 == iVar4) goto LAB_02847ab0;
  }
  else if ((((uVar9 & 1) != 0) && (*(long *)(lVar8 + 0xe7290) != 0)) &&
          (puVar10 = *(undefined8 **)(*(long *)(lVar8 + 0xe7290) + 8), puVar10 != (undefined8 *)0x0)
          ) {
    (**(code **)*puVar10)();
  }
  uVar14 = 1;
joined_r0x02847b2c:
  if ((((uVar5 & 1) == 0) && (*(long *)(lVar6 + 0x17bb0) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar6 + 0x17bb0) + 8), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
  return uVar14;
}


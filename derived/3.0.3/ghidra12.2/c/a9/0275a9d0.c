
undefined8
FUN_0275a9d0(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5,byte *param_6)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  byte local_54 [4];
  
  local_54[0] = *param_6;
  if (7 < local_54[0]) {
    local_54[0] = 0xff;
  }
  lVar3 = FUN_025830c0(DAT_055021a0,local_54,1);
  if (lVar3 != 0) {
    if ((*(long **)(lVar3 + 0x18438) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x18438), puVar4 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar4)();
      uVar2 = uVar2 ^ 1;
    }
    lVar6 = *(long *)(*(long *)(lVar3 + 0x18420) + *(long *)(lVar3 + 0x18418));
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0x18438) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x18438) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
    if (lVar6 != 0) goto LAB_0275aaac;
  }
  lVar3 = FUN_026585a0(param_6);
  if (lVar3 == *param_2) {
    return 1;
  }
LAB_0275aaac:
  lVar3 = 0;
  while( true ) {
    uVar2 = *(uint *)((long)param_1 + lVar3 + 0x60e0);
    plVar1 = param_1 + (ulong)uVar2 * 0x1f;
    if (99 < uVar2) {
      plVar1 = param_1;
    }
    if (((*plVar1 == 0 || plVar1[1] == 0) || ((int)plVar1[2] == 0 || plVar1[6] == 0)) ||
       ((*(int *)((long)plVar1 + 0x54) == 0 || (int)plVar1[7] == 0 || ((short)plVar1[0xe] == 0))))
    break;
    lVar3 = lVar3 + 4;
    if (lVar3 == 400) {
      return 2;
    }
  }
  uVar2 = *(uint *)((long)param_1 + lVar3 + 0x60e0);
  plVar1 = param_1 + (ulong)uVar2 * 0x1f;
  if (99 < uVar2) {
    plVar1 = param_1;
  }
  lVar3 = param_2[1];
  *plVar1 = *param_2;
  plVar1[1] = lVar3;
  lVar5 = param_2[4];
  lVar3 = param_2[2];
  lVar6 = param_2[3];
  *(int *)(plVar1 + 5) = (int)param_2[5];
  plVar1[3] = lVar6;
  plVar1[4] = lVar5;
  plVar1[2] = lVar3;
  plVar1[6] = *param_3;
  lVar3 = *param_4;
  lVar6 = param_4[2];
  plVar1[8] = param_4[1];
  plVar1[9] = lVar6;
  plVar1[7] = lVar3;
  lVar3 = param_4[3];
  lVar6 = param_4[4];
  lVar5 = param_4[6];
  plVar1[0xc] = param_4[5];
  plVar1[0xd] = lVar5;
  plVar1[10] = lVar3;
  plVar1[0xb] = lVar6;
  plVar1[0xe] = *param_5;
  return 0;
}


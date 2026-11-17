
byte FUN_02c25690(int *param_1,byte *param_2)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  byte bVar7;
  byte local_14 [4];
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  uVar4 = FUN_02658470(param_2);
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  if (param_1[7] == 0) {
    return 0;
  }
  if (*param_1 == 0) {
    return 0;
  }
  local_14[0] = *param_2;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
  lVar5 = FUN_025830c0(DAT_055021a0,local_14,1);
  if (lVar5 == 0) {
    return 0;
  }
  if ((*(long **)(lVar5 + 0x17bb0) == (long *)0x0) ||
     (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x17bb0), puVar6 == (undefined8 *)0x0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = (**(code **)*puVar6)();
    uVar3 = uVar3 ^ 1;
  }
  piVar1 = (int *)(*(long *)(lVar5 + 0x17b98) + *(long *)(lVar5 + 0x17b90));
  if (((short)param_1[1] == 0) || ((short)piVar1[1] == 0)) {
    bVar2 = *param_1 == *piVar1;
  }
  else {
    if (*param_1 != *piVar1) {
      bVar7 = 1;
      goto joined_r0x02c257a8;
    }
    bVar2 = (*(long *)(piVar1 + 1) == *(long *)(param_1 + 1) &&
            *(long *)(piVar1 + 3) == *(long *)(param_1 + 3)) && piVar1[5] == param_1[5];
  }
  bVar7 = bVar2 ^ 1;
joined_r0x02c257a8:
  if ((((uVar3 & 1) == 0) && (*(long *)(lVar5 + 0x17bb0) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x17bb0) + 8), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return bVar7;
}



uint FUN_03640af0(undefined8 *param_1,undefined4 param_2)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  
  switch(param_2) {
  case 0x4030:
    uVar1 = *(uint *)*param_1;
    uVar4 = 0;
    if (*(char *)((long)param_1 + 0xb) != '\0') {
      uVar4 = (uint)(*(int *)(param_1 + 5) == 0) << 6;
    }
    uVar4 = uVar4 | uVar1 >> 5 & 3;
    *(uint *)*param_1 = uVar1 & 0xffffffdf;
    if (*(uint *)((long)param_1 + 0x94) == uVar4) {
      return uVar4;
    }
    *(undefined4 *)((long)param_1 + 0x8c) = 0;
    *(uint *)((long)param_1 + 0x94) = uVar4;
    return uVar4;
  case 0x4031:
    uVar4 = *(uint *)(param_1 + 3);
    *(uint *)*param_1 = *(uint *)*param_1 & 0xffffffbf;
    break;
  case 0x4032:
    uVar4 = *(uint *)(param_1 + 8);
    cVar2 = *(char *)((long)param_1 + 0x12);
    cVar3 = *(char *)(param_1 + 10);
    if ((uVar4 == 0xffffffff) || (*(int *)((long)param_1 + 0x24) == 0xff)) {
      *(undefined4 *)((long)param_1 + 0x8c) = 0;
    }
    else {
      uVar1 = *(int *)((long)param_1 + 0x8c) + 1;
      *(uint *)((long)param_1 + 0x8c) = uVar1;
      if (*(uint *)(param_1 + 0x12) <= uVar1) {
        *(undefined4 *)((long)param_1 + 0x8c) = 0;
        (*(code *)param_1[0x8f8])(uVar4 ^ 1,param_1[0x8f9]);
      }
    }
    uVar1 = uVar4 == 0xffffffff | 2;
    if (cVar2 != '\0') {
      uVar1 = (uint)(uVar4 == 0xffffffff);
    }
    if (cVar3 != '\0') {
      uVar1 = uVar1 | 4;
    }
    return uVar1 | 0x40;
  case 0x4033:
    uVar4 = *(uint *)((long)param_1 + 0x1c) & 0x80;
    break;
  default:
    return 0;
  }
  *(undefined4 *)((long)param_1 + 0x8c) = 0;
  return uVar4;
}



uint FUN_038dc570(long param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  *(undefined8 **)(param_1 + 0x10) = param_2;
  if (*(char *)(param_1 + 10) == '\0') {
    uVar4 = 8;
    *(undefined2 *)(param_1 + 9) = 0x108;
  }
  else {
    uVar4 = (uint)*(byte *)(param_1 + 9);
  }
  lVar1 = param_1 + 8;
  uVar6 = 8 - uVar4;
  uVar2 = uVar6;
  if (7 < uVar6) {
    uVar2 = 8;
  }
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = uVar4 & 0x1f;
    uVar4 = uVar4 + uVar2;
    uVar3 = (uint)(*(byte *)(param_1 + 8) >> (ulong)uVar3) &
            (-1 << (ulong)(uVar2 & 0x1f) ^ 0xffffffffU);
    *(char *)(param_1 + 9) = (char)uVar4;
  }
  if (uVar6 < 8) {
    uVar4 = 8 - uVar2;
    (**(code **)*param_2)(param_2,lVar1,1);
    *(char *)(param_1 + 9) = (char)uVar4;
    uVar3 = uVar3 | ((uint)*(byte *)(param_1 + 8) & (-1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU)) <<
                    (ulong)(uVar2 & 0x1f);
  }
  uVar6 = 8 - (uVar4 & 0xff);
  uVar2 = uVar6;
  if (7 < uVar6) {
    uVar2 = 8;
  }
  if (uVar2 == 0) {
    uVar7 = 0;
    uVar5 = uVar4;
  }
  else {
    uVar5 = uVar4 + uVar2;
    *(char *)(param_1 + 9) = (char)uVar5;
    uVar7 = (uint)(*(byte *)(param_1 + 8) >> (ulong)(uVar4 & 0x1f)) &
            (-1 << (ulong)(uVar2 & 0x1f) ^ 0xffffffffU);
  }
  if (uVar6 < 8) {
    uVar5 = 8 - uVar2;
    (**(code **)*param_2)(param_2,lVar1,1);
    *(char *)(param_1 + 9) = (char)uVar5;
    uVar7 = uVar7 | ((uint)*(byte *)(param_1 + 8) & (-1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU)) <<
                    (ulong)(uVar2 & 0x1f);
  }
  uVar2 = 8 - (uVar5 & 0xff);
  uVar4 = uVar2;
  if (7 < uVar2) {
    uVar4 = 8;
  }
  if (uVar4 == 0) {
    uVar8 = 0;
    uVar6 = uVar5;
  }
  else {
    uVar6 = uVar5 + uVar4;
    *(char *)(param_1 + 9) = (char)uVar6;
    uVar8 = (uint)(*(byte *)(param_1 + 8) >> (ulong)(uVar5 & 0x1f)) &
            (-1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU);
  }
  if (uVar2 < 8) {
    uVar6 = 8 - uVar4;
    (**(code **)*param_2)(param_2,lVar1,1);
    *(char *)(param_1 + 9) = (char)uVar6;
    uVar8 = uVar8 | ((uint)*(byte *)(param_1 + 8) & (-1 << (ulong)(uVar6 & 0x1f) ^ 0xffffffffU)) <<
                    (ulong)(uVar4 & 0x1f);
  }
  uVar2 = 8 - (uVar6 & 0xff);
  uVar4 = uVar2;
  if (7 < uVar2) {
    uVar4 = 8;
  }
  if (uVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (uint)(*(byte *)(param_1 + 8) >> (ulong)(uVar6 & 0x1f)) &
            (-1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU);
    *(char *)(param_1 + 9) = (char)uVar6 + (char)uVar4;
  }
  if (uVar2 < 8) {
    (**(code **)*param_2)(param_2,lVar1,1);
    *(char *)(param_1 + 9) = (char)(8 - uVar4);
    uVar5 = uVar5 | ((uint)*(byte *)(param_1 + 8) & (-1 << (ulong)(8 - uVar4 & 0x1f) ^ 0xffffffffU))
                    << (ulong)(uVar4 & 0x1f);
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x20;
  return (uVar8 & 0xff) << 0x10 | uVar5 << 0x18 | (uVar7 & 0xff) << 8 | uVar3 & 0xff;
}



void FUN_021e2c70(uint *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  uint local_38;
  uint local_34;
  
  param_1[0] = 0x12bf;
  param_1[1] = 0;
  FUN_0277d4ac(param_1);
  if (DAT_05574040 != 0) {
    puVar3 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar2 = (**(code **)(*(long *)*puVar3 + 0x38))();
      if (lVar2 == 0) {
        return;
      }
      lVar2 = lVar2 + 0x70;
    }
    else {
      if (puVar3 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar3[0x26] == (long *)0x0) {
        return;
      }
      lVar2 = (**(code **)(*(long *)puVar3[0x26] + 0x38))();
      if (lVar2 == 0) {
        return;
      }
    }
    if ((*(long **)(lVar2 + 0x1a0b70) == (long *)0x0) ||
       (puVar3 = (undefined8 *)**(long **)(lVar2 + 0x1a0b70), puVar3 == (undefined8 *)0x0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)*puVar3)();
      uVar1 = uVar1 ^ 1;
    }
    if (param_2 < 7) {
      lVar4 = *(long *)(&DAT_04179d00 + (long)(int)param_2 * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar5 = (uint)*(byte *)(*(long *)(lVar2 + 0x1a0b58) + *(long *)(lVar2 + 0x1a0b50) + 0x3084);
    if (uVar5 < 8) {
      local_38 = *(uint *)((&PTR_DAT_04a77238)[(int)uVar5] + lVar4 * 4);
    }
    else {
      local_38 = 0x12bf;
    }
    local_38 = local_38 & 0xffff;
    local_34 = 0;
    FUN_0277d4ac(&local_38);
    *param_1 = local_38;
    param_1[1] = local_34;
    if ((((uVar1 & 1) == 0) && (*(long *)(lVar2 + 0x1a0b70) != 0)) &&
       (puVar3 = *(undefined8 **)(*(long *)(lVar2 + 0x1a0b70) + 8), puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)();
    }
  }
  return;
}


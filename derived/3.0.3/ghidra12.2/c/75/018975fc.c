
void FUN_018975fc(long param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  float *pfVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  long local_50;
  long local_48;
  long lStack_40;
  long local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (*(long *)(param_1 + 0x3d0) == 0) {
    return;
  }
  local_38 = param_1 + 0x334;
  if (*(long *)(param_1 + 0x408) == 0) {
    local_28 = 0;
  }
  else {
    puVar2 = (undefined4 *)(**(code **)(*(long *)(*(long *)(param_1 + 0x408) + 0x98) + 0xf0))();
    local_28 = *puVar2;
    if (*(long *)(param_1 + 0x408) != 0) {
      puVar2 = (undefined4 *)(**(code **)(*(long *)(*(long *)(param_1 + 0x408) + 200) + 0xf0))();
      local_24 = *puVar2;
      goto LAB_01897660;
    }
  }
  local_24 = 0;
LAB_01897660:
  local_2c = *(undefined4 *)(param_1 + 800);
  if (*(long *)(param_1 + 0x400) == 0) {
    local_30 = 0;
  }
  else {
    pfVar3 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x400) + 0xf0) + 0xf0))();
    local_30 = (undefined4)(long)(*pfVar3 * 11930465.0);
  }
  local_48 = param_1 + 0x328;
  local_50 = param_1 + 0x3dc;
  lStack_40 = param_1 + 0x440;
  uVar4 = FUN_01907bb0(*(undefined8 *)(param_1 + 0x3d0),&local_38,&local_50);
  if ((uVar4 & 1) == 0) {
    uVar1 = (**(code **)(*(long *)(param_1 + 0x440) + (ulong)*(byte *)(param_1 + 0x454) * 8))
                      (param_1 + 0x440);
    *(undefined4 *)(param_1 + 0x448) = uVar1;
  }
  else {
    uVar1 = FUN_006f0400(*(float *)(param_1 + 0x328) -
                         *(float *)(*(long *)(param_1 + 0x300) + 0x278),
                         *(float *)(param_1 + 0x330) -
                         *(float *)(*(long *)(param_1 + 0x300) + 0x280));
    *(undefined4 *)(param_1 + 0x418) = uVar1;
    fVar5 = *(float *)(*(long *)(param_1 + 0x300) + 0x278) - *(float *)(param_1 + 0x328);
    fVar6 = *(float *)(*(long *)(param_1 + 0x300) + 0x280);
    *(undefined4 *)(param_1 + 0x448) = *(undefined4 *)(param_1 + 0x44c);
    fVar6 = fVar6 - *(float *)(param_1 + 0x330);
    *(undefined1 *)(param_1 + 0x420) = 1;
    *(float *)(param_1 + 0x41c) = SQRT(fVar6 * fVar6 + fVar5 * fVar5);
  }
  return;
}



void FUN_03a9ab30(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  byte local_68;
  
  puVar1 = (undefined8 *)(param_1 + 0x2c8);
  lVar6 = *(long *)(param_1 + 0x2c0);
  uVar3 = (**(code **)(*(long *)(param_1 + 0x2c8) + 0x10))(puVar1);
  if (((uVar3 & 1) == 0) || ((*(byte *)(param_1 + 0x27c) & 1) != 0)) {
    FUN_03a9b340(lVar6,param_2,*(undefined1 *)(param_3 + 8),param_8,param_9,param_4);
    return;
  }
  local_88 = param_9;
  uVar4 = (uint)*(byte *)(param_3 + 8);
  if ((*(uint *)(lVar6 + 0x48) & 1) == 0) {
    local_80 = 0;
  }
  else {
    uVar2 = uVar4;
    if (*(uint *)(lVar6 + 8) <= uVar4) {
      uVar2 = 0;
    }
    local_80 = *(undefined8 *)(*(long *)(lVar6 + 0x10) + (ulong)uVar2 * 0x118 + 0xf0);
  }
  if ((*(uint *)(lVar6 + 0x48) >> 1 & 1) == 0) {
    local_78 = 0;
  }
  else {
    uVar2 = uVar4;
    if (*(uint *)(lVar6 + 8) <= uVar4) {
      uVar2 = 0;
    }
    local_78 = *(undefined8 *)(*(long *)(lVar6 + 0x10) + (ulong)uVar2 * 0x118 + 0xe8);
  }
  if (*(uint *)(lVar6 + 8) <= uVar4) {
    uVar4 = 0;
  }
  lVar5 = *(long *)(lVar6 + 0x10) + (ulong)uVar4 * 0x118;
  local_70 = *(undefined4 *)(lVar5 + 0xf8);
  local_6c = *(undefined4 *)(lVar5 + 0xfc);
  local_68 = *(byte *)(lVar6 + 0x48) >> 2 & 1;
  local_b8 = param_3;
  uStack_b0 = param_4;
  local_a8 = param_5;
  uStack_a0 = param_6;
  local_98 = param_7;
  uStack_90 = param_8;
  (**(code **)*puVar1)(puVar1,param_2,&local_b8);
  return;
}


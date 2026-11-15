
void FUN_022c5084(long param_1,long param_2,uint param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined8 *local_78;
  uint local_70;
  uint uStack_6c;
  undefined8 *local_68;
  int local_60;
  int iStack_5c;
  uint local_58;
  undefined8 local_54;
  undefined1 local_4c;
  undefined1 local_4b;
  byte local_4a;
  undefined2 local_49;
  byte local_47;
  undefined8 *local_40;
  int local_38;
  int iStack_34;
  
  bVar1 = *(byte *)(param_2 + 0x1e);
  local_40 = &DAT_048f9750;
  local_60 = (*(byte *)(param_2 + 0x1d) & 0xf) + (int)*(short *)(param_2 + 0xc) + -8;
  iStack_5c = (int)*(short *)(param_2 + 0xe) + (uint)(*(byte *)(param_2 + 0x1d) >> 4) + -8;
  local_58 = (uint)bVar1;
  if (local_58 == 0) {
    return;
  }
  local_70 = (int)*(short *)(param_2 + 0xc) & 0xfffffffe;
  uStack_6c = (int)*(short *)(param_2 + 0xe) & 0xfffffffe;
  local_78 = &DAT_048f9750;
  local_4b = *(undefined1 *)(param_2 + 0x17);
  local_68 = &DAT_048f9750;
  local_4c = 0xff;
  local_49 = 0;
  local_47 = 0;
  local_4a = *(byte *)(param_2 + 0x1a) & 3;
  local_38 = local_60;
  iStack_34 = iStack_5c;
  if ((param_3 & 1) != 0) {
    local_47 = *(byte *)(param_2 + 0x1a) >> 2 & 1;
    local_54 = 0xf0000000c;
    FUN_011e8d00(&local_78,0);
    return;
  }
  local_54 = 0xe0000000a;
  uVar2 = FUN_011e8d00(&local_78,0);
  if ((uVar2 & 1) == 0) {
    FUN_011db844(&local_40);
    return;
  }
  uVar4 = (uint)bVar1;
  if (uVar4 == 0xd) {
    uVar2 = 1;
  }
  else if (((int)uVar4 < DAT_0547b48c) || (DAT_0547b490 < (int)uVar4)) {
    uVar2 = 0;
  }
  else {
    uVar4 = (uVar4 - DAT_0547b48c) + 2;
    uVar2 = (ulong)uVar4;
    if (0xd < uVar4) {
      puVar3 = &DAT_0547b494;
      goto LAB_022c51c0;
    }
  }
  puVar3 = &DAT_0547b494 + uVar2 * 10;
LAB_022c51c0:
  uVar4 = 1 << (ulong)(*(byte *)(param_2 + 0x17) & 0x1f);
  puVar3[8] = puVar3[8] & (uVar4 ^ 0xffffffff);
  puVar3[9] = puVar3[9] | uVar4;
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}


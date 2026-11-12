
void FUN_008a6380(byte *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  byte *pbVar4;
  byte local_b0 [4];
  undefined4 local_ac;
  undefined4 uStack_a8;
  uint local_a4;
  uint uStack_a0;
  uint local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulong uStack_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  local_b0[0] = param_1[2];
  if (7 < local_b0[0]) {
    local_b0[0] = 0xff;
  }
  uStack_a0 = param_1[1] >> 3 & 0xf;
  local_a4 = param_1[1] & 7;
  local_ac = *(undefined4 *)(param_1 + 4);
  uStack_a8 = *(undefined4 *)(param_1 + 8);
  local_9c = *param_1 & 3;
  pbVar4 = param_1 + 0x10;
  (**(code **)(*(long *)pbVar4 + 0x18))(pbVar4);
  lVar3 = 0;
  do {
    if (*(short *)(*(long *)(param_1 + 0x18) + lVar3 * 2) == 0) goto LAB_008a643c;
    lVar1 = *(long *)(param_1 + 0x18) + lVar3 * 2;
    if (*(short *)(lVar1 + 2) == 0) {
      lVar3 = lVar3 + 1;
      goto LAB_008a643c;
    }
    if (*(short *)(lVar1 + 4) == 0) {
      lVar3 = lVar3 + 2;
      goto LAB_008a643c;
    }
    lVar3 = lVar3 + 3;
  } while (lVar3 != 0x80001);
  lVar3 = 0;
LAB_008a643c:
  uVar2 = (uint)lVar3;
  if (0x2e < (int)uVar2) {
    uVar2 = 0x2f;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  (**(code **)(*(long *)(param_1 + 0x10) + 0x18))(pbVar4);
  memcpy(&local_98,*(void **)(param_1 + 0x18),(ulong)uVar2 << 1);
  uStack_40 = uStack_40 & 0xffffffffffff;
  local_38 = 0;
  local_32 = 0;
  local_34 = 0xff00;
  if (-1 < DAT_053fbc60) {
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053fbc60,&local_38,local_b0,0x78,0);
  }
  return;
}


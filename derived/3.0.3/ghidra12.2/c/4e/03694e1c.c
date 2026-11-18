
uint FUN_03694e1c(long param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined2 local_90;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined2 local_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined8 local_44;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  
  uVar1 = 0;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x278))) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x280) + (ulong)param_2 * 8);
    if ((*(int *)(lVar3 + 0x44) != 1) || (uVar1 = *(uint *)(lVar3 + 0x4c), uVar1 == 0xffffffff)) {
      return 0;
    }
    lVar3 = param_1 + 0x698 + (ulong)uVar1 * 0xd8;
    if (0x25 < uVar1) {
      lVar3 = param_1 + 0x698;
    }
    local_68 = *(undefined4 *)(lVar3 + 0x8c);
    uStack_64 = *(undefined4 *)(lVar3 + 0x90);
    local_60 = *(undefined8 *)(lVar3 + 0x94);
    uStack_58 = *(undefined8 *)(lVar3 + 0x9c);
    local_50 = *(undefined4 *)(lVar3 + 0xa4);
    uStack_4c = *(undefined4 *)(lVar3 + 0xa8);
    local_48 = *(undefined2 *)(lVar3 + 0xac);
    uStack_30 = *(undefined8 *)(lVar3 + 0xc4);
    local_46 = *(undefined1 *)(lVar3 + 0xae);
    local_45 = *(undefined1 *)(lVar3 + 0xaf);
    local_44 = *(undefined8 *)(lVar3 + 0xb0);
    local_3c = *(undefined4 *)(lVar3 + 0xb8);
    local_38 = *(undefined8 *)(lVar3 + 0xbc);
    local_28 = *(undefined4 *)(lVar3 + 0xcc);
    uStack_24 = *(undefined4 *)(lVar3 + 0xd0);
    local_b0 = *(undefined4 *)(lVar3 + 0x44);
    uStack_ac = *(undefined4 *)(lVar3 + 0x48);
    local_a8 = *(undefined8 *)(lVar3 + 0x4c);
    uStack_a0 = *(undefined8 *)(lVar3 + 0x54);
    local_98 = *(undefined4 *)(lVar3 + 0x5c);
    uStack_94 = *(undefined4 *)(lVar3 + 0x60);
    local_90 = *(undefined2 *)(lVar3 + 100);
    uStack_78 = *(undefined8 *)(lVar3 + 0x7c);
    local_8e = *(undefined1 *)(lVar3 + 0x66);
    local_8d = *(undefined1 *)(lVar3 + 0x67);
    local_8c = *(undefined8 *)(lVar3 + 0x68);
    local_84 = *(undefined4 *)(lVar3 + 0x70);
    local_80 = *(undefined8 *)(lVar3 + 0x74);
    local_70 = *(undefined4 *)(lVar3 + 0x84);
    uStack_6c = *(undefined4 *)(lVar3 + 0x88);
    uVar2 = FUN_0277d7b4(&local_68,&local_b0);
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_0277d7b4(&local_60,&local_a8);
    }
  }
  return uVar1 & 1;
}


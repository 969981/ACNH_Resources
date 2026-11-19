
void FUN_03afc794(long param_1,long param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float __x;
  undefined **local_120;
  undefined2 local_118;
  undefined1 auStack_114 [64];
  undefined1 auStack_d4 [64];
  undefined4 local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float fStack_70;
  undefined8 local_6c;
  
  if (*(char *)(param_2 + 499) == '\0') {
    lVar4 = *(long *)(param_2 + 0x28);
    uVar2 = *(ushort *)(lVar4 + 0x32);
    uVar3 = *(ushort *)(lVar4 + 0x30);
    uVar1 = uVar2;
    if (*(short *)(lVar4 + 0x3a) != 3) {
      uVar1 = 1;
    }
    if (uVar1 <= uVar2) {
      uVar1 = uVar2;
    }
    if (uVar3 < 2) {
      uVar3 = 1;
    }
    local_118._1_1_ = 1;
    local_94 = DAT_05ae77d0;
    local_80 = *(float *)(param_2 + 0x68);
    local_6c = 0;
    local_90 = DAT_04c4b9ac;
    uStack_8c = DAT_05ae77d4;
    local_88 = *(undefined4 *)(param_2 + 0x60);
    uStack_84 = *(undefined4 *)(param_2 + 100);
    local_120 = &PTR_FUN_04b65608;
    __x = local_80 * 0.5;
    local_7c = sinf(__x);
    local_78 = cosf(__x);
    local_74 = tanf(__x);
    local_118 = CONCAT11(local_118._1_1_,1);
    fStack_70 = (float)uVar3 / (float)uVar1;
    FUN_038e5968(&local_120,auStack_114);
    local_118 = 0x100;
    (*(code *)local_120[0xc])(&local_120,auStack_d4,auStack_114,local_94);
    local_118 = local_118 & 0xff;
    FUN_038e6014(param_1 + 200,auStack_114,0);
    uVar5 = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0x90);
    *(undefined8 *)(param_1 + 0x98) = uVar5;
    uVar5 = *(undefined8 *)(param_2 + 0x98);
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xa0);
    *(undefined8 *)(param_1 + 0xa8) = uVar5;
    uVar6 = *(undefined8 *)(param_2 + 0xb0);
    uVar5 = *(undefined8 *)(param_2 + 0xa8);
  }
  else {
    FUN_038e6014(param_1 + 200,param_2 + 0x118,0);
    uVar5 = *(undefined8 *)(param_2 + 0xe8);
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xf0);
    *(undefined8 *)(param_1 + 0x98) = uVar5;
    uVar5 = *(undefined8 *)(param_2 + 0xf8);
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0x100);
    *(undefined8 *)(param_1 + 0xa8) = uVar5;
    uVar6 = *(undefined8 *)(param_2 + 0x110);
    uVar5 = *(undefined8 *)(param_2 + 0x108);
  }
  *(undefined8 *)(param_1 + 0xc0) = uVar6;
  *(undefined8 *)(param_1 + 0xb8) = uVar5;
  (**(code **)(*(long *)(param_1 + 0x60) + 0x20))((long *)(param_1 + 0x60),param_1 + 0x68);
  return;
}


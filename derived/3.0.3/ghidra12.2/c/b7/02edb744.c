
void FUN_02edb744(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  byte bVar9;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar5 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar6 = PTR_DAT_04bd4738;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *param_1 = (long)(puVar5 + 0x10);
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  param_1[0x35] = (long)(puVar6 + 0x10);
  param_1[0x36] = 0xffffffff;
  if (param_3 != (undefined8 *)0x0) {
    bVar9 = *(byte *)((long)param_3 + 0xe);
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar9;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 2);
  }
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_FUN_04addca8;
  memset(param_1 + 0x42,0,0x140);
  *(undefined1 *)(param_1 + 0x43) = 0xff;
  puVar5 = PTR_DAT_04bb37e0;
  *(undefined8 *)((long)param_1 + 0x224) = 0;
  *(undefined2 *)((long)param_1 + 0x22c) = 0;
  uVar4 = *(undefined2 *)puVar5;
  uVar2 = puVar5[2];
  uVar3 = puVar5[3];
  uVar1 = *(undefined4 *)(puVar5 + 4);
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0xff;
  *(undefined1 *)((long)param_1 + 0x22e) = 1;
  *(undefined2 *)((long)param_1 + 0x254) = 0;
  *(undefined8 *)((long)param_1 + 0x24c) = 0;
  *(undefined1 *)((long)param_1 + 0x256) = 1;
  *(undefined1 *)(param_1 + 0x4b) = 0;
  *(undefined1 *)(param_1 + 0x4d) = 0xff;
  *(undefined2 *)((long)param_1 + 0x27c) = 0;
  *(undefined8 *)((long)param_1 + 0x274) = 0;
  *(undefined1 *)((long)param_1 + 0x27e) = 1;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x52) = 0xff;
  *(undefined2 *)((long)param_1 + 0x2a4) = 0;
  *(undefined8 *)((long)param_1 + 0x29c) = 0;
  *(undefined1 *)((long)param_1 + 0x2a6) = 1;
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x49) = uVar1;
  *(undefined4 *)(param_1 + 0x4e) = uVar1;
  *(undefined4 *)(param_1 + 0x53) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined4 *)(param_1 + 0x5d) = uVar1;
  *(undefined4 *)(param_1 + 0x62) = uVar1;
  *(undefined4 *)(param_1 + 0x67) = uVar1;
  *(undefined2 *)((long)param_1 + 0x21c) = uVar4;
  *(undefined1 *)((long)param_1 + 0x21e) = uVar2;
  *(undefined1 *)((long)param_1 + 0x21f) = uVar3;
  *(undefined2 *)((long)param_1 + 0x244) = uVar4;
  *(undefined1 *)((long)param_1 + 0x246) = uVar2;
  *(undefined1 *)((long)param_1 + 0x247) = uVar3;
  *(undefined2 *)((long)param_1 + 0x26c) = uVar4;
  *(undefined1 *)((long)param_1 + 0x26e) = uVar2;
  *(undefined1 *)((long)param_1 + 0x26f) = uVar3;
  *(undefined2 *)((long)param_1 + 0x294) = uVar4;
  *(undefined1 *)((long)param_1 + 0x296) = uVar2;
  *(undefined1 *)((long)param_1 + 0x297) = uVar3;
  *(undefined1 *)(param_1 + 0x55) = 0;
  *(undefined1 *)(param_1 + 0x57) = 0xff;
  *(undefined2 *)((long)param_1 + 700) = uVar4;
  *(undefined1 *)((long)param_1 + 0x2be) = uVar2;
  *(undefined1 *)((long)param_1 + 0x2bf) = uVar3;
  *(undefined8 *)((long)param_1 + 0x2c4) = 0;
  *(undefined2 *)((long)param_1 + 0x2cc) = 0;
  *(undefined1 *)((long)param_1 + 0x2ce) = 1;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0xff;
  *(undefined2 *)((long)param_1 + 0x2e4) = uVar4;
  *(undefined1 *)((long)param_1 + 0x2e6) = uVar2;
  *(undefined1 *)((long)param_1 + 0x2e7) = uVar3;
  *(undefined2 *)((long)param_1 + 0x2f4) = 0;
  *(undefined8 *)((long)param_1 + 0x2ec) = 0;
  *(undefined1 *)((long)param_1 + 0x2f6) = 1;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  *(undefined1 *)(param_1 + 0x61) = 0xff;
  *(undefined2 *)((long)param_1 + 0x30c) = uVar4;
  *(undefined1 *)((long)param_1 + 0x30e) = uVar2;
  *(undefined1 *)((long)param_1 + 0x30f) = uVar3;
  *(undefined2 *)((long)param_1 + 0x31c) = 0;
  *(undefined8 *)((long)param_1 + 0x314) = 0;
  *(undefined1 *)((long)param_1 + 0x31e) = 1;
  *(undefined1 *)(param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0x66) = 0xff;
  *(undefined2 *)((long)param_1 + 0x334) = uVar4;
  *(undefined1 *)((long)param_1 + 0x336) = uVar2;
  *(undefined1 *)((long)param_1 + 0x337) = uVar3;
  *(undefined2 *)((long)param_1 + 0x344) = 0;
  *(undefined8 *)((long)param_1 + 0x33c) = 0;
  *(undefined1 *)((long)param_1 + 0x346) = 1;
  puVar5 = PTR_DAT_04bc7228;
  *(undefined1 *)(param_1 + 0x69) = 0;
  param_1[0x6a] = 0;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc7228), iVar7 != 0)) {
    *(undefined **)PTR_DAT_04bc7220 = PTR_DAT_04bc5020 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7228);
  }
  if ((param_3 != (undefined8 *)0x0) &&
     (uVar8 = (**(code **)*param_3)(param_3,PTR_DAT_04bc7220), (uVar8 & 1) != 0)) {
    param_1[0x6a] = param_3[3];
  }
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 1;
  return;
}


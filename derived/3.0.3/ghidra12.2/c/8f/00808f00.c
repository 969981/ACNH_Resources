
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00808f00(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = *(byte *)(param_1 + 0x67) & 0xf;
  uVar4 = (uint)(*(byte *)(param_1 + 0x67) >> 4);
  if (((DAT_04ccae98 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04ccae98), iVar3 != 0)) {
    _DAT_04ccae20 = 0x300000000;
    _DAT_04ccae28 = 0x200000001;
    DAT_04ccae30 = 0xa00000002;
    DAT_04ccae38 = 0x800000003;
    DAT_04ccae40 = 0x500000004;
    DAT_04ccae48 = 0xd00000005;
    DAT_04ccae50 = 0x400000006;
    DAT_04ccae58 = 0x100000007;
    DAT_04ccae60 = 0xe00000008;
    DAT_04ccae68 = 0x900000009;
    DAT_04ccae70 = 0x70000000a;
    DAT_04ccae78 = 0xb0000000b;
    DAT_04ccae80 = 0x60000000c;
    DAT_04ccae88 = 0xc0000000d;
    DAT_04ccae90 = 0xe;
    __cxa_guard_release(&DAT_04ccae98);
  }
  iVar3 = DAT_04ccae20;
  if (uVar1 != DAT_04ccae24) {
    iVar3 = 0xe;
  }
  iVar5 = DAT_04ccae20;
  if (uVar4 != DAT_04ccae24) {
    iVar5 = 0xe;
  }
  iVar2 = DAT_04ccae28;
  if (uVar1 != DAT_04ccae2c) {
    iVar2 = iVar3;
  }
  iVar3 = DAT_04ccae28;
  if (uVar4 != DAT_04ccae2c) {
    iVar3 = iVar5;
  }
  iVar5 = (int)DAT_04ccae30;
  if (uVar1 != DAT_04ccae30._4_4_) {
    iVar5 = iVar2;
  }
  iVar2 = (int)DAT_04ccae30;
  if (uVar4 != DAT_04ccae30._4_4_) {
    iVar2 = iVar3;
  }
  iVar3 = (int)DAT_04ccae38;
  if (uVar1 != DAT_04ccae38._4_4_) {
    iVar3 = iVar5;
  }
  iVar5 = (int)DAT_04ccae38;
  if (uVar4 != DAT_04ccae38._4_4_) {
    iVar5 = iVar2;
  }
  iVar2 = (int)DAT_04ccae40;
  if (uVar1 != DAT_04ccae40._4_4_) {
    iVar2 = iVar3;
  }
  iVar3 = (int)DAT_04ccae40;
  if (uVar4 != DAT_04ccae40._4_4_) {
    iVar3 = iVar5;
  }
  iVar5 = (int)DAT_04ccae48;
  if (uVar1 != DAT_04ccae48._4_4_) {
    iVar5 = iVar2;
  }
  iVar2 = (int)DAT_04ccae48;
  if (uVar4 != DAT_04ccae48._4_4_) {
    iVar2 = iVar3;
  }
  iVar3 = (int)DAT_04ccae50;
  if (uVar1 != DAT_04ccae50._4_4_) {
    iVar3 = iVar5;
  }
  iVar5 = (int)DAT_04ccae50;
  if (uVar4 != DAT_04ccae50._4_4_) {
    iVar5 = iVar2;
  }
  iVar2 = (int)DAT_04ccae58;
  if (uVar1 != DAT_04ccae58._4_4_) {
    iVar2 = iVar3;
  }
  iVar3 = (int)DAT_04ccae58;
  if (uVar4 != DAT_04ccae58._4_4_) {
    iVar3 = iVar5;
  }
  iVar5 = (int)DAT_04ccae60;
  if (uVar1 != DAT_04ccae60._4_4_) {
    iVar5 = iVar2;
  }
  iVar2 = (int)DAT_04ccae60;
  if (uVar4 != DAT_04ccae60._4_4_) {
    iVar2 = iVar3;
  }
  iVar3 = (int)DAT_04ccae68;
  if (uVar1 != DAT_04ccae68._4_4_) {
    iVar3 = iVar5;
  }
  iVar5 = (int)DAT_04ccae68;
  if (uVar4 != DAT_04ccae68._4_4_) {
    iVar5 = iVar2;
  }
  iVar2 = (int)DAT_04ccae70;
  if (uVar1 != DAT_04ccae70._4_4_) {
    iVar2 = iVar3;
  }
  iVar3 = (int)DAT_04ccae70;
  if (uVar4 != DAT_04ccae70._4_4_) {
    iVar3 = iVar5;
  }
  iVar5 = (int)DAT_04ccae78;
  if (uVar1 != DAT_04ccae78._4_4_) {
    iVar5 = iVar2;
  }
  iVar2 = (int)DAT_04ccae78;
  if (uVar4 != DAT_04ccae78._4_4_) {
    iVar2 = iVar3;
  }
  iVar3 = (int)DAT_04ccae80;
  if (uVar1 != DAT_04ccae80._4_4_) {
    iVar3 = iVar5;
  }
  iVar5 = (int)DAT_04ccae80;
  if (uVar4 != DAT_04ccae80._4_4_) {
    iVar5 = iVar2;
  }
  iVar2 = (int)DAT_04ccae88;
  if (uVar1 != DAT_04ccae88._4_4_) {
    iVar2 = iVar3;
  }
  iVar3 = (int)DAT_04ccae88;
  if (uVar4 != DAT_04ccae88._4_4_) {
    iVar3 = iVar5;
  }
  iVar5 = (int)DAT_04ccae90;
  if (uVar1 != DAT_04ccae90._4_4_) {
    iVar5 = iVar2;
  }
  iVar2 = (int)DAT_04ccae90;
  if (uVar4 != DAT_04ccae90._4_4_) {
    iVar2 = iVar3;
  }
  return iVar5 + iVar2 * 0x10;
}


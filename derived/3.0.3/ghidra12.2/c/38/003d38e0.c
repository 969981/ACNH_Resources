
undefined8 FUN_003d38e0(long param_1)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_108 [40];
  undefined1 auStack_e0 [4];
  undefined1 local_dc;
  int local_d8;
  int local_d4;
  ulong local_c8;
  
  bVar3 = *(byte *)(param_1 + 0xf2);
  FUN_003d40cc(auStack_108,*(undefined8 *)(param_1 + 0x100),*(undefined1 *)(param_1 + 0xf3));
  uVar4 = FUN_003d41bc(auStack_108,auStack_e0,0);
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x128) & 1) != 0) {
    local_dc = *(undefined1 *)(param_1 + 300);
  }
  if (*(int *)(param_1 + 0x10c) == 1) {
    uVar4 = (*(long *)(param_1 + 0x110) * (long)local_d4) / 1000 & 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10c) != 0) {
      uVar4 = 0;
      if (0x7fffffffffffffff < local_c8) {
        return 0;
      }
      goto LAB_003d39c8;
    }
    uVar4 = (ulong)*(uint *)(param_1 + 0x110);
  }
  if ((long)local_c8 < (long)uVar4) {
    return 0;
  }
LAB_003d39c8:
  if (1 < local_d8) {
    local_d8 = 2;
  }
  lVar5 = FUN_003bfac0(local_d8,bVar3 + 0x40,PTR_LAB_04bd0550,param_1);
  if (lVar5 == 0) {
    return 0;
  }
  FUN_003d2534(auStack_108,*(undefined8 *)(param_1 + 0xf8));
  uVar6 = FUN_003d25b0(auStack_108,param_1 + 0x148,*(undefined4 *)(param_1 + 0x108));
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  lVar1 = lVar5 + 0x20;
  uVar2 = (uint)*(byte *)(param_1 + 0x150);
  if ((*(uint *)(param_1 + 0x120) & 1) != 0) {
    uVar2 = *(uint *)(param_1 + 0x11c);
  }
  FUN_003bfdb4(lVar1,*(undefined1 *)(param_1 + 0x14c));
  FUN_003bfdc8(lVar1,*(undefined1 *)(param_1 + 0x14f));
  FUN_003bfddc(lVar1,*(undefined1 *)(param_1 + 0x14d));
  FUN_003bfe60(lVar1,*(undefined1 *)(param_1 + 0x14e));
  FUN_003bfe68(lVar1,uVar2);
  *(undefined1 *)(lVar5 + 0xc4) = *(undefined1 *)(param_1 + 0xf1);
  FUN_003bf948(lVar5,*(undefined4 *)(param_1 + 0x168));
  FUN_003bf958(lVar5,*(undefined8 *)(param_1 + 0x30));
  FUN_003bf590(lVar5,auStack_e0,0xffffffff,uVar4,*(undefined1 *)(param_1 + 0x124));
  *(long *)(param_1 + 0x160) = lVar5;
  *(undefined1 *)(param_1 + 0xf0) = 1;
  return 1;
}



void FUN_00a715d0(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  byte local_5c [4];
  byte local_58 [4];
  byte local_54 [4];
  byte local_50 [4];
  byte local_4c [4];
  byte local_48 [4];
  byte local_44 [4];
  byte local_28 [4];
  byte local_24 [4];
  
  *(undefined4 *)(param_1 + 0x410) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0x13;
  *(undefined8 *)(param_1 + 0x40) = 0x13;
  *(undefined8 *)(param_1 + 0x60) = 0x13;
  *(undefined8 *)(param_1 + 0x80) = 0x13;
  *(undefined8 *)(param_1 + 0xa0) = 0x13;
  *(undefined8 *)(param_1 + 0xc0) = 0x13;
  *(undefined8 *)(param_1 + 0xe0) = 0x13;
  *(undefined8 *)(param_1 + 0x100) = 0x13;
  *(undefined8 *)(param_1 + 0x120) = 0x13;
  *(undefined8 *)(param_1 + 0x140) = 0x13;
  *(undefined8 *)(param_1 + 0x160) = 0x13;
  *(undefined8 *)(param_1 + 0x180) = 0x13;
  *(undefined8 *)(param_1 + 0x1a0) = 0x13;
  *(undefined8 *)(param_1 + 0x1c0) = 0x13;
  *(undefined8 *)(param_1 + 0x1e0) = 0x13;
  *(undefined8 *)(param_1 + 0x200) = 0x13;
  *(undefined8 *)(param_1 + 0x220) = 0x13;
  *(undefined8 *)(param_1 + 0x240) = 0x13;
  *(undefined8 *)(param_1 + 0x260) = 0x13;
  *(undefined8 *)(param_1 + 0x280) = 0x13;
  *(undefined8 *)(param_1 + 0x2a0) = 0x13;
  *(undefined8 *)(param_1 + 0x2c0) = 0x13;
  *(undefined8 *)(param_1 + 0x2e0) = 0x13;
  *(undefined8 *)(param_1 + 0x300) = 0x13;
  *(undefined8 *)(param_1 + 800) = 0x13;
  *(undefined8 *)(param_1 + 0x340) = 0x13;
  *(undefined8 *)(param_1 + 0x360) = 0x13;
  *(undefined8 *)(param_1 + 0x380) = 0x13;
  *(undefined8 *)(param_1 + 0x3a0) = 0x13;
  *(undefined8 *)(param_1 + 0x3c0) = 0x13;
  *(undefined8 *)(param_1 + 0x3e0) = 0x13;
  *(undefined8 *)(param_1 + 0x400) = 0x13;
  puVar2 = PTR_DAT_04bb6278;
  puVar1 = PTR_DAT_04bb27d0;
  if ((param_2 & 1) == 0) {
    if (((*(int *)(param_1 + 0x614) != 0) && (*(long *)PTR_DAT_04bb6278 != 0)) &&
       (*(long *)PTR_DAT_04bb27d0 != 0)) {
      local_5c[0] = *(byte *)(param_1 + 0x5f8);
      if (7 < local_5c[0]) {
        local_5c[0] = 0xff;
      }
      FUN_00a7cfcc(*(long *)PTR_DAT_04bb6278,local_5c);
    }
    *(undefined4 *)(param_1 + 0x614) = 0;
    *(undefined8 *)(param_1 + 0x528) = 0xffffffffffffffff;
    *(undefined1 *)(param_1 + 0x520) = 0xff;
    *(undefined4 *)(param_1 + 0x530) = 0;
    if (((*(int *)(param_1 + 0x63c) != 0) && (*(long *)puVar2 != 0)) && (*(long *)puVar1 != 0)) {
      local_58[0] = *(byte *)(param_1 + 0x620);
      if (7 < local_58[0]) {
        local_58[0] = 0xff;
      }
      FUN_00a7cfcc(*(long *)puVar2,local_58);
    }
    *(undefined4 *)(param_1 + 0x63c) = 0;
    *(undefined8 *)(param_1 + 0x540) = 0xffffffffffffffff;
    *(undefined1 *)(param_1 + 0x538) = 0xff;
    *(undefined4 *)(param_1 + 0x548) = 0;
    if (((*(int *)(param_1 + 0x664) != 0) && (*(long *)puVar2 != 0)) && (*(long *)puVar1 != 0)) {
      local_54[0] = *(byte *)(param_1 + 0x648);
      if (7 < local_54[0]) {
        local_54[0] = 0xff;
      }
      FUN_00a7cfcc(*(long *)puVar2,local_54);
    }
    *(undefined4 *)(param_1 + 0x664) = 0;
    *(undefined8 *)(param_1 + 0x558) = 0xffffffffffffffff;
    *(undefined1 *)(param_1 + 0x550) = 0xff;
    *(undefined4 *)(param_1 + 0x560) = 0;
    if (((*(int *)(param_1 + 0x68c) != 0) && (*(long *)puVar2 != 0)) && (*(long *)puVar1 != 0)) {
      local_50[0] = *(byte *)(param_1 + 0x670);
      if (7 < local_50[0]) {
        local_50[0] = 0xff;
      }
      FUN_00a7cfcc(*(long *)puVar2,local_50);
    }
    *(undefined4 *)(param_1 + 0x68c) = 0;
    *(undefined8 *)(param_1 + 0x570) = 0xffffffffffffffff;
    *(undefined1 *)(param_1 + 0x568) = 0xff;
    *(undefined4 *)(param_1 + 0x578) = 0;
    if (((*(int *)(param_1 + 0x6b4) != 0) && (*(long *)puVar2 != 0)) && (*(long *)puVar1 != 0)) {
      local_4c[0] = *(byte *)(param_1 + 0x698);
      if (7 < local_4c[0]) {
        local_4c[0] = 0xff;
      }
      FUN_00a7cfcc(*(long *)puVar2,local_4c);
    }
    *(undefined4 *)(param_1 + 0x6b4) = 0;
    *(undefined8 *)(param_1 + 0x588) = 0xffffffffffffffff;
    *(undefined1 *)(param_1 + 0x580) = 0xff;
    *(undefined4 *)(param_1 + 0x590) = 0;
    if (((*(int *)(param_1 + 0x6dc) != 0) && (*(long *)puVar2 != 0)) && (*(long *)puVar1 != 0)) {
      local_48[0] = *(byte *)(param_1 + 0x6c0);
      if (7 < local_48[0]) {
        local_48[0] = 0xff;
      }
      FUN_00a7cfcc(*(long *)puVar2,local_48);
    }
    *(undefined4 *)(param_1 + 0x6dc) = 0;
    *(undefined8 *)(param_1 + 0x5a0) = 0xffffffffffffffff;
    *(undefined1 *)(param_1 + 0x598) = 0xff;
    *(undefined4 *)(param_1 + 0x5a8) = 0;
    if (((*(int *)(param_1 + 0x704) != 0) && (*(long *)puVar2 != 0)) && (*(long *)puVar1 != 0)) {
      local_44[0] = *(byte *)(param_1 + 0x6e8);
      if (7 < local_44[0]) {
        local_44[0] = 0xff;
      }
      FUN_00a7cfcc(*(long *)puVar2,local_44);
    }
    *(undefined4 *)(param_1 + 0x704) = 0;
    *(undefined8 *)(param_1 + 0x5b8) = 0xffffffffffffffff;
    *(undefined1 *)(param_1 + 0x5b0) = 0xff;
    *(undefined4 *)(param_1 + 0x5c0) = 0;
    if (((*(int *)(param_1 + 0x72c) != 0) && (*(long *)puVar2 != 0)) && (*(long *)puVar1 != 0)) {
      local_28[0] = *(byte *)(param_1 + 0x710);
      if (7 < local_28[0]) {
        local_28[0] = 0xff;
      }
      FUN_00a7cfcc(*(long *)puVar2,local_28);
    }
    *(undefined4 *)(param_1 + 0x72c) = 0;
    *(undefined8 *)(param_1 + 0x5d0) = 0xffffffffffffffff;
    *(undefined1 *)(param_1 + 0x5c8) = 0xff;
    *(undefined4 *)(param_1 + 0x5d8) = 0;
    if (((*(int *)(param_1 + 0x754) != 0) && (*(long *)puVar2 != 0)) && (*(long *)puVar1 != 0)) {
      local_24[0] = *(byte *)(param_1 + 0x738);
      if (7 < local_24[0]) {
        local_24[0] = 0xff;
      }
      FUN_00a7cfcc(*(long *)puVar2,local_24);
    }
    *(undefined4 *)(param_1 + 0x754) = 0;
    *(undefined8 *)(param_1 + 0x5e8) = 0xffffffffffffffff;
    *(undefined1 *)(param_1 + 0x5e0) = 0xff;
    *(undefined4 *)(param_1 + 0x5f0) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x614) = 0;
    *(undefined8 *)(param_1 + 0x528) = 0xffffffffffffffff;
    *(undefined1 *)(param_1 + 0x520) = 0xff;
    *(undefined4 *)(param_1 + 0x530) = 0;
    *(undefined4 *)(param_1 + 0x63c) = 0;
    *(undefined8 *)(param_1 + 0x540) = 0xffffffffffffffff;
    *(undefined1 *)(param_1 + 0x538) = 0xff;
    *(undefined4 *)(param_1 + 0x548) = 0;
    *(undefined4 *)(param_1 + 0x664) = 0;
    *(undefined8 *)(param_1 + 0x558) = 0xffffffffffffffff;
    *(undefined1 *)(param_1 + 0x550) = 0xff;
    *(undefined4 *)(param_1 + 0x560) = 0;
    *(undefined4 *)(param_1 + 0x68c) = 0;
    *(undefined8 *)(param_1 + 0x570) = 0xffffffffffffffff;
    *(undefined1 *)(param_1 + 0x568) = 0xff;
    *(undefined4 *)(param_1 + 0x578) = 0;
    *(undefined4 *)(param_1 + 0x6b4) = 0;
    *(undefined8 *)(param_1 + 0x588) = 0xffffffffffffffff;
    *(undefined1 *)(param_1 + 0x580) = 0xff;
    *(undefined4 *)(param_1 + 0x590) = 0;
    *(undefined4 *)(param_1 + 0x6dc) = 0;
    *(undefined8 *)(param_1 + 0x5a0) = 0xffffffffffffffff;
    *(undefined1 *)(param_1 + 0x598) = 0xff;
    *(undefined4 *)(param_1 + 0x5a8) = 0;
    *(undefined4 *)(param_1 + 0x704) = 0;
    *(undefined8 *)(param_1 + 0x5b8) = 0xffffffffffffffff;
    *(undefined1 *)(param_1 + 0x5b0) = 0xff;
    *(undefined4 *)(param_1 + 0x5c0) = 0;
    *(undefined4 *)(param_1 + 0x72c) = 0;
    *(undefined8 *)(param_1 + 0x5d0) = 0xffffffffffffffff;
    *(undefined1 *)(param_1 + 0x5c8) = 0xff;
    *(undefined4 *)(param_1 + 0x5d8) = 0;
    *(undefined4 *)(param_1 + 0x754) = 0;
    *(undefined8 *)(param_1 + 0x5e8) = 0xffffffffffffffff;
    uVar3 = *(undefined8 *)PTR_DAT_04bb6278;
    *(undefined1 *)(param_1 + 0x5e0) = 0xff;
    *(undefined4 *)(param_1 + 0x5f0) = 0;
    FUN_00a7ab3c(uVar3);
    *(undefined8 *)(param_1 + 0x770) = 0x13;
  }
  return;
}


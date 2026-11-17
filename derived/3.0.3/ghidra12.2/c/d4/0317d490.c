
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0317d490(int param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  if (((DAT_056ff808 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_056ff808), iVar2 != 0)) {
    _DAT_056ff62c = 0xc;
    DAT_056ff634 = 0x100000001;
    DAT_056ff63c = 0x200000032;
    DAT_056ff644 = 0x300000033;
    DAT_056ff64c = 0x400000034;
    DAT_056ff654 = 0x500000035;
    DAT_056ff65c = 0x600000002;
    DAT_056ff664 = 0x700000005;
    DAT_056ff66c = 0x800000006;
    DAT_056ff674 = 0x900000004;
    DAT_056ff67c = 0xa0000001e;
    DAT_056ff684 = 0xb00000017;
    DAT_056ff68c = 0xd00000018;
    DAT_056ff694 = 0xc00000016;
    DAT_056ff69c = 0xe0000000a;
    DAT_056ff6a4 = 0xf00000008;
    DAT_056ff6ac = 0x100000000b;
    DAT_056ff6b4 = 0x1100000009;
    DAT_056ff6bc = 0x1400000025;
    DAT_056ff6c4 = 0x1500000026;
    DAT_056ff6cc = 0x1600000027;
    DAT_056ff6d4 = 0x1700000024;
    DAT_056ff6dc = 0x1200000007;
    DAT_056ff6e4 = 0x1300000030;
    DAT_056ff6ec = 0x180000002e;
    DAT_056ff6f4 = 0x1900000010;
    DAT_056ff6fc = 0x1a00000029;
    DAT_056ff704 = 0x1b0000002b;
    DAT_056ff70c = 0x1c0000002a;
    DAT_056ff714 = 0x1d00000031;
    DAT_056ff71c = 0x1e0000002f;
    DAT_056ff724 = 0x1f0000001f;
    DAT_056ff72c = 0x2000000023;
    DAT_056ff734 = 0x2100000000;
    DAT_056ff73c = 0x2200000020;
    DAT_056ff744 = 0x230000000d;
    DAT_056ff74c = 0x240000000e;
    DAT_056ff754 = 0x2500000011;
    DAT_056ff75c = 0x2700000015;
    DAT_056ff764 = 0x2800000013;
    DAT_056ff76c = 0x2600000012;
    DAT_056ff774 = 0x2900000021;
    DAT_056ff77c = 0x2a00000019;
    DAT_056ff784 = 0x2b00000037;
    DAT_056ff78c = 0x2c00000038;
    DAT_056ff794 = 0x2d00000036;
    DAT_056ff79c = 0x2e00000003;
    DAT_056ff7a4 = 0x2f0000002d;
    DAT_056ff7ac = 0x3000000022;
    DAT_056ff7b4 = 0x310000001a;
    DAT_056ff7bc = 0x320000001b;
    DAT_056ff7c4 = 0x330000001c;
    DAT_056ff7cc = 0x340000001d;
    DAT_056ff7d4 = 0x3500000028;
    DAT_056ff7dc = 0x360000002c;
    DAT_056ff7e4 = 0x370000000f;
    DAT_056ff7ec = 0x3800000014;
    DAT_056ff7f4 = 0x390000003d;
    DAT_056ff7fc = 0x3a0000003e;
    __cxa_guard_release(&DAT_056ff808);
  }
  uVar3 = 0;
  do {
    if (*(int *)((long)&DAT_056ff62c + (-(uVar3 >> 0x1f) & 0xfffffff800000000 | uVar3 << 3)) ==
        param_1) {
      return *(undefined4 *)(&DAT_056ff630 + (long)(int)uVar3 * 8);
    }
    uVar1 = (int)uVar3 + 1;
    uVar3 = (ulong)uVar1;
  } while (uVar1 != 0x3b);
  return 0xffffffff;
}


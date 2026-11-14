
bool FUN_01baca48(undefined8 param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  
  if ((DAT_0533a358 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_0533a358);
    if (iVar1 != 0) {
      DAT_0533a170 = 0x100000055;
      DAT_0533a178 = 0x70000006e;
      DAT_0533a180 = 0xa0000006e;
      DAT_0533a188 = 0xb0000006e;
      DAT_0533a190 = 0xc0000006e;
      DAT_0533a198 = 0xf0000006e;
      DAT_0533a1a0 = 0x100000006e;
      DAT_0533a1a8 = 0x170000006e;
      DAT_0533a1b0 = 0x180000006e;
      DAT_0533a1b8 = 0x1f0000006e;
      DAT_0533a1c0 = 0x230000006e;
      DAT_0533a1c8 = 0x240000006e;
      DAT_0533a1d0 = 0x250000006e;
      DAT_0533a1d8 = 0x270000006e;
      DAT_0533a1e0 = 0x73;
      DAT_0533a1e8 = 0x100000073;
      DAT_0533a1f0 = 0x700000073;
      DAT_0533a1f8 = 0x800000073;
      DAT_0533a200 = 0x7d;
      DAT_0533a208 = 0x10000007d;
      DAT_0533a210 = 0x20000007d;
      DAT_0533a218 = 0x30000007d;
      DAT_0533a220 = 0x40000007d;
      DAT_0533a228 = 0x50000007d;
      DAT_0533a230 = 0x60000007d;
      DAT_0533a238 = 0x70000007d;
      DAT_0533a240 = 0x80000007d;
      DAT_0533a248 = 0x90000007d;
      DAT_0533a250 = 0x82;
      DAT_0533a258 = 0x87;
      DAT_0533a260 = 0x100000087;
      DAT_0533a268 = 0x200000087;
      DAT_0533a270 = 0x300000087;
      DAT_0533a278 = 0x400000087;
      DAT_0533a280 = 0x500000087;
      DAT_0533a288 = 0x600000087;
      DAT_0533a290 = 0x700000087;
      DAT_0533a298 = 0x800000087;
      DAT_0533a2a0 = 0x900000087;
      DAT_0533a2a8 = 0xa00000087;
      DAT_0533a2b0 = 0xb00000087;
      DAT_0533a2b8 = 0xc00000087;
      DAT_0533a2c0 = 0xd00000087;
      DAT_0533a2c8 = 0x8c;
      DAT_0533a2d0 = 0x10000008c;
      DAT_0533a2d8 = 0x20000008c;
      DAT_0533a2e0 = 0x50000008c;
      DAT_0533a2e8 = 0x60000008c;
      DAT_0533a2f0 = 0x70000008c;
      DAT_0533a2f8 = 0x80000008c;
      DAT_0533a300 = 0xa0000008c;
      DAT_0533a308 = 0xb0000008c;
      DAT_0533a310 = 0xc0000008c;
      DAT_0533a318 = 0x120000008c;
      DAT_0533a320 = 0x140000008c;
      DAT_0533a328 = 0x190000008c;
      DAT_0533a330 = 0x1a0000008c;
      DAT_0533a338 = 0x1b0000008c;
      DAT_0533a340 = 0x100000096;
      DAT_0533a348 = 0x200000096;
      DAT_0533a350 = 0x900000096;
      __cxa_guard_release(&DAT_0533a358);
    }
  }
  if (param_3 < 0x3d) {
    *param_2 = *(undefined4 *)(&DAT_0533a170 + param_3);
    param_2[1] = *(undefined4 *)((long)&DAT_0533a170 + (ulong)param_3 * 8 + 4);
  }
  return param_3 < 0x3d;
}



/* WARNING: Removing unreachable block (ram,0x028f2f7c) */
/* WARNING: Removing unreachable block (ram,0x028f2f64) */
/* WARNING: Removing unreachable block (ram,0x028f2f90) */

void FUN_028f2ec0(undefined8 *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  param_1[2] = 0xffffffffffffffff;
  param_1[3] = 0xffffffffffffffff;
  *param_1 = 0xffffffffffffffff;
  param_1[1] = 0xffffffffffffffff;
  memset(param_1 + 4,0,0x297d0);
  FUN_028e54e4(param_1 + 4);
  param_1[0x52fe] = 0xffffffffffffffff;
  param_1[0x52ff] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5300) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x297fc) = 0x1e;
  *(undefined1 *)((long)param_1 + 0x297fd) = 0x1e;
  *(undefined1 *)((long)param_1 + 0x297fe) = 0x1e;
  *(undefined1 *)((long)param_1 + 0x297ff) = 0;
  memset(param_1 + 0x5301,0xff,0x3fa);
  param_1[0x5381] = 0;
  *(undefined1 *)(param_1 + 0x5382) = 0;
  *(undefined4 *)((long)param_1 + 0x29c17) = 0;
  *(undefined4 *)((long)param_1 + 0x29c14) = 0;
  FUN_028f50f0((long)param_1 + 0x29c1c);
  *(undefined8 *)((long)param_1 + 0x2e4f4) = 0;
  *(undefined8 *)((long)param_1 + 0x2e4cc) = 0;
  *(undefined8 *)((long)param_1 + 0x2e4fb) = 0;
  *(undefined8 *)((long)param_1 + 0x2e4fa) = 0;
  *(undefined2 *)(param_1 + 0x5ca3) = 0xffff;
  *(undefined8 *)((long)param_1 + 0x2e4d4) = 0;
  *(undefined8 *)((long)param_1 + 0x2e4dc) = 0;
  *(undefined8 *)((long)param_1 + 0x2e4e4) = 0;
  *(undefined8 *)((long)param_1 + 0x2e4ec) = 0;
  *(undefined8 *)((long)param_1 + 0x2e4f4) = 0;
  *(undefined4 *)((long)param_1 + 0x2e4c4) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x5c99) = 0;
  *(undefined2 *)((long)param_1 + 0x2e504) = 0;
  *(undefined4 *)((long)param_1 + 0x2e506) = 0x101;
  *(undefined1 *)((long)param_1 + 0x2e50a) = 0;
  *(undefined4 *)((long)param_1 + 0x2e50c) = 0;
  param_1[0x5ca2] = 0;
  *(undefined4 *)((long)param_1 + 0x2e51c) = 0;
  *(undefined2 *)(param_1 + 0x5ca4) = 0;
  memset((void *)((long)param_1 + 0x2e524),0,0x4014);
  FUN_028f8bb0((void *)((long)param_1 + 0x2e524));
  FUN_028f8bb0(param_1 + 0x5f50);
  FUN_028f8bb0((long)param_1 + 0x30fdc);
  param_1[0x64b2] = 0;
  param_1[0x64a7] = 0xffffffffffffffff;
  param_1[0x64a8] = 0;
  param_1[0x64a9] = 0;
  *(undefined8 *)((long)param_1 + 0x32596) = 0;
  param_1[0x64aa] = 0;
  param_1[0x64b5] = 0x500000000;
  param_1[0x64ab] = 0;
  param_1[0x64ac] = 0;
  param_1[0x64ad] = 0;
  param_1[0x64ae] = 0;
  param_1[0x64af] = 0;
  param_1[0x64b0] = 0;
  param_1[0x64b1] = 0;
  *(undefined4 *)((long)param_1 + 0x3259e) = 0x101;
  *(undefined1 *)((long)param_1 + 0x325a2) = 0;
  *(undefined2 *)((long)param_1 + 0x325a4) = 0;
  *(undefined4 *)(param_1 + 0x64b6) = 0;
  *(undefined1 *)((long)param_1 + 0x325b4) = 0;
  FUN_028ee9e8(param_1 + 0x64b7);
  FUN_028e3b58((long)param_1 + 0x36644);
  FUN_028ee744(param_1 + 0x74da);
  FUN_028e3774((long)param_1 + 0x3e75c);
  FUN_028eec88(param_1 + 0x84fd);
  memset((void *)((long)param_1 + 0x46874),0,0x18000);
  lVar5 = 0;
  do {
    FUN_012cfe50((long)param_1 + 0x46874 + lVar5);
    lVar5 = lVar5 + 0x300;
  } while (lVar5 != 0x18000);
  memset((void *)((long)param_1 + 0x5e874),0,0x18000);
  lVar5 = 0;
  do {
    FUN_012cfe50((long)param_1 + 0x5e874 + lVar5);
    lVar5 = lVar5 + 0x300;
  } while (lVar5 != 0x18000);
  memset((void *)((long)param_1 + 0x76874),0,0x600);
  uVar4 = 0;
  do {
    uVar2 = uVar4 << 2;
    uVar3 = uVar4 >> 0x1f;
    uVar1 = (int)uVar4 + 1;
    uVar4 = (ulong)uVar1;
    *(undefined4 *)((long)param_1 + 0x76874 + (-uVar3 & 0xfffffffc00000000 | uVar2)) = 0;
  } while (uVar1 != 0x180);
  memset((void *)((long)param_1 + 0x76e74),0,0x600);
  uVar4 = 0;
  do {
    uVar2 = uVar4 << 2;
    uVar3 = uVar4 >> 0x1f;
    uVar1 = (int)uVar4 + 1;
    uVar4 = (ulong)uVar1;
    *(undefined4 *)((long)param_1 + 0x76e74 + (-uVar3 & 0xfffffffc00000000 | uVar2)) = 0;
  } while (uVar1 != 0x180);
  memset(param_1 + 0xee8f,0,0xaa0);
  FUN_027c0ee4(param_1 + 0xee90);
  memset(param_1 + 0xee9e,0,0x238);
  FUN_027c0ee4(param_1 + 0xeee5);
  memset(param_1 + 0xeef3,0,0x238);
  FUN_027c0ee4(param_1 + 0xef3a);
  memset(param_1 + 0xef48,0,0x238);
  FUN_027c0ee4(param_1 + 0xef8f);
  memset(param_1 + 0xef9d,0,0x230);
  return;
}


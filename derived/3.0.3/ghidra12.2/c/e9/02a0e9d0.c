
void FUN_02a0e9d0(long param_1)

{
  FUN_02a0ead0();
  *(undefined8 *)(param_1 + 0x1a048) = 0;
  if (*(long *)(param_1 + 0x1a018) != 0) {
    FUN_03f45838(param_1 + 0x1a008);
  }
  if (*(long *)(param_1 + 0x1a000) != 0) {
    *(long *)(param_1 + 0x1a000) = 0;
    FUN_03831710(DAT_05ae2a30 + 0xe8);
  }
  FUN_03830084(param_1 + 0x19ff8);
  FUN_03f2a9b0(param_1 + 0x19ee8);
  FUN_038e1a84(param_1 + 0x19f58);
  FUN_03f2d448(param_1 + 0x19eb0);
  FUN_029dd1ec(param_1 + 0x10400);
  FUN_029ae1e4(param_1 + 0xd5f0);
  FUN_029c29fc(param_1 + 0xa7e0);
  FUN_029f0a60(param_1 + 0x90a0);
  FUN_029e55d0(param_1 + 0x7958);
  FUN_0298c954(param_1 + 0x518);
  *(undefined **)(param_1 + 0x288) = PTR_DAT_04bdf010 + 0x10;
  FUN_03f10620(param_1 + 0x288);
  *(undefined **)(param_1 + 0x2a8) = PTR_DAT_04bdefd0 + 0x10;
  FUN_03f11920(param_1 + 0x2a8);
  return;
}


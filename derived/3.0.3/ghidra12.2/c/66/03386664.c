
/* WARNING: Removing unreachable block (ram,0x033867a4) */

void FUN_03386664(long param_1)

{
  long lVar1;
  
  (**(code **)(**(long **)(param_1 + 0x48) + 0xb8))();
  (**(code **)(**(long **)(param_1 + 0x50) + 0xb8))();
  (**(code **)(**(long **)(param_1 + 0x58) + 0xb8))();
  (**(code **)(**(long **)(param_1 + 0x60) + 0xb8))();
  (**(code **)(**(long **)(param_1 + 0x68) + 0xb8))();
  (**(code **)(**(long **)(param_1 + 0x70) + 0xb8))();
  (**(code **)(**(long **)(param_1 + 0x78) + 0xb8))();
  (**(code **)(**(long **)(param_1 + 0x80) + 0xb8))();
  (**(code **)(**(long **)(param_1 + 0x88) + 0xb8))();
  (**(code **)(**(long **)(param_1 + 0x90) + 0xb8))();
  (**(code **)(**(long **)(param_1 + 0x98) + 0xb8))();
  (**(code **)(**(long **)(param_1 + 0xa0) + 0xb8))();
  (**(code **)(**(long **)(param_1 + 0xa8) + 0xb8))();
  (**(code **)(**(long **)(param_1 + 0xb0) + 0xb8))();
  (**(code **)(**(long **)(param_1 + 0xb8) + 0xb8))();
  (**(code **)(**(long **)(param_1 + 0xc0) + 0xb8))();
  (**(code **)(**(long **)(param_1 + 200) + 0xb8))();
  lVar1 = *(long *)(DAT_05739190 + 0x58);
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0xa8) - 3U < 5)) {
    FUN_0386b2b0(*(undefined8 *)(lVar1 + 0x98));
  }
  *(undefined1 *)(param_1 + 0x428) = 0xff;
  return;
}


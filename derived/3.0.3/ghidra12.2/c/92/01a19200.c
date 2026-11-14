
/* WARNING: Removing unreachable block (ram,0x01a19238) */

undefined8 FUN_01a19200(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(DAT_05231900 + 0x58) == 0) {
    return 0;
  }
  uVar1 = FUN_0073e274(*(undefined4 *)(param_1 + 0xc),*(long *)(DAT_05231900 + 0x58) + 0x138);
  return uVar1;
}


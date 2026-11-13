
undefined8 FUN_011cf510(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_011d0750();
  if ((uVar1 & 1) != 0) {
    if (*(int *)(param_1 + 0x100) != 3) {
      uVar2 = 1;
      if (*(short *)(param_1 + 0x112) == 0) {
        uVar2 = 2;
      }
      FUN_011e9b38(param_1,param_1 + 0xb8,uVar2,2,1);
    }
    if (*(short *)(param_1 + 0x112) == 0) {
      if (*(int *)(param_1 + 0x100) == 3) {
        return 0;
      }
      uVar1 = *(ulong *)(param_1 + 0x108);
      if (((uint)uVar1 >> 0x1b & 1) != 0) {
        FUN_0252b11c(param_1 + 0x110);
        uVar1 = *(ulong *)(param_1 + 0x108);
      }
      *(undefined4 *)(param_1 + 0x100) = 0;
      *(ulong *)(param_1 + 0x108) = uVar1 | 3;
      if (((uint)uVar1 >> 0x14 & 1) != 0) {
        FUN_01957640(param_1 + 0xb8);
        DAT_0547a508 = 0;
        FUN_0254ee28(param_1 + 0x110,param_1 + 0xb8);
        *(ulong *)(param_1 + 0x108) = *(ulong *)(param_1 + 0x108) & 0xffffffffffefffff;
      }
    }
  }
  return 1;
}



void FUN_03676a30(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  
  FUN_04000e70();
  *(long *)(param_1 + 0x340) = param_1;
  *(undefined8 *)(param_1 + 0x288) = 0xff;
  *(ulong *)(param_1 + 0x280) = param_3;
  iVar1 = FUN_03fff8d0(param_1 + 0x290,~param_3 + param_3 * 0x100);
  if (iVar1 != 0) {
    FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
  }
  iVar1 = FUN_03fffa3c(param_1 + 0x2d0,0xff);
  if (iVar1 != 0) {
    FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
  }
  *(undefined4 *)(param_1 + 0x348) = 1;
  *(undefined4 *)(param_1 + 0x634) = 0;
  *(undefined4 *)(param_1 + 0x630) = 0;
  return;
}


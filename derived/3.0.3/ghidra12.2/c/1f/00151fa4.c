
void FUN_00151fa4(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  long local_40;
  undefined8 local_38;
  
  auVar3 = FUN_00147178();
  iVar1 = FUN_001471a8(auVar3._0_8_,auVar3._8_8_,*(undefined8 *)(*(long *)(param_1 + 0x1120) + 0x40)
                       ,*(undefined8 *)(*(long *)(param_1 + 0x1120) + 0x48));
  if (999 < iVar1) {
    local_38 = 0;
    local_40 = param_1;
    uVar2 = FUN_0014ed90(param_1,*(undefined8 *)(param_1 + 0x1120),&local_40,FUN_00152fcc);
    while ((uVar2 & 1) != 0) {
      FUN_0014f784(param_1,local_38,1);
      uVar2 = FUN_0014ed90(param_1,*(undefined8 *)(param_1 + 0x1120),&local_40,FUN_00152fcc);
    }
    *(undefined1 (*) [16])(*(long *)(param_1 + 0x1120) + 0x40) = auVar3;
  }
  return;
}


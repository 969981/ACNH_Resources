
void FUN_0036ee20(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 )

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  
  *(undefined8 *)(param_1 + 0x30) = param_3;
  *(undefined8 *)(param_1 + 0x38) = param_5;
  uVar2 = *(ushort *)(param_4 + 0x60);
  if ((uVar2 & 1) != 0) {
    *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) | 1;
    uVar2 = *(ushort *)(param_4 + 0x60);
  }
  uVar3 = *(ushort *)(param_1 + 0x60);
  bVar1 = (uVar2 >> 1 & 1) != 0;
  if (bVar1) {
    *(ushort *)(param_1 + 0x60) = uVar3 | 2;
  }
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_4 + 0x44);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_4 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_4 + 0x50);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_4 + 0x40);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_4 + 0x28);
  if (bVar1 || (uVar3 & 2) != 0) {
    FUN_0036ecd8();
    return;
  }
  return;
}


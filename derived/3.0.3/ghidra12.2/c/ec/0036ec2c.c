
void FUN_0036ec2c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 )

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  *(undefined8 *)(param_1 + 0x30) = param_3;
  *(undefined8 *)(param_1 + 0x38) = param_5;
  if (*(char *)(param_4 + 0x22) != '\0') {
    *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) | 1;
  }
  if (*(char *)(param_4 + 0x23) != '\0') {
    *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) | 2;
  }
  *(uint *)(param_1 + 0x44) = (uint)*(ushort *)(param_4 + 0x20);
  uVar1 = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_4 + 0x18);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  *(uint *)(param_1 + 0x40) = (uint)*(ushort *)(param_4 + 0x24);
  uVar2 = FUN_0038ce60(param_4);
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  if ((*(ushort *)(param_1 + 0x60) >> 1 & 1) == 0) {
    return;
  }
  FUN_0036ecd8(param_1,param_2,*(undefined8 *)(param_1 + 0x30),0);
  return;
}


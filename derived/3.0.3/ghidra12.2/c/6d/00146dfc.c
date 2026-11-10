
void FUN_00146dfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  if ((0 < *(long *)(param_1 + 0x7f8)) &&
     (iVar1 = FUN_001471a8(param_2,param_3,*(undefined8 *)(param_1 + 0x1070),
                           *(undefined8 *)(param_1 + 0x1078)), 2999 < iVar1)) {
    *(undefined8 *)(param_1 + 0x1070) = param_2;
    *(undefined8 *)(param_1 + 0x1078) = param_3;
    *(undefined8 *)(param_1 + 0x1080) = *(undefined8 *)(param_1 + 0xfb0);
  }
  if ((0 < *(long *)(param_1 + 0x7f0)) &&
     (iVar1 = FUN_001471a8(param_2,param_3,*(undefined8 *)(param_1 + 0x1058),
                           *(undefined8 *)(param_1 + 0x1060)), 2999 < iVar1)) {
    *(undefined8 *)(param_1 + 0x1058) = param_2;
    *(undefined8 *)(param_1 + 0x1060) = param_3;
    *(undefined8 *)(param_1 + 0x1068) = *(undefined8 *)(param_1 + 0xfb8);
  }
  return;
}


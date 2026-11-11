
void FUN_00453ba0(long param_1,undefined8 param_2,uint param_3,uint param_4,undefined8 param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = FUN_004538e0(param_1,param_4);
  *(ulong *)(param_1 + 0x70) = *(ulong *)(param_1 + 0x70) | 0x800000;
  *(undefined8 *)(param_1 + 0x130) = 0;
  lVar4 = *(long *)(param_1 + 0x178);
  *(long *)(lVar2 + 0x178) = lVar4;
  if (lVar4 == 0) {
    uVar3 = *(ulong *)(lVar2 + 0x70) & 0xfffffffffbffffff;
    *(ulong *)(lVar2 + 0x70) = uVar3;
  }
  else {
    uVar3 = *(ulong *)(lVar2 + 0x70) | 0x4000000;
    *(ulong *)(lVar2 + 0x70) = uVar3;
    *(long *)(lVar2 + 0x148) = lVar4;
  }
  uVar1 = param_4 << 0x10 | 0x200000;
  if ((param_4 & 0x30) != 0) {
    uVar1 = param_4 << 0x10;
  }
  *(undefined8 *)(lVar2 + 0x68) = param_5;
  *(ulong *)(lVar2 + 0x70) = uVar3 | 0x70000;
  *(undefined8 *)(lVar2 + 0x108) = 0;
  *(undefined8 *)(lVar2 + 0xf8) = param_2;
  *(ulong *)(lVar2 + 0x100) = (ulong)(uVar1 | param_3 & 0xffff);
  return;
}


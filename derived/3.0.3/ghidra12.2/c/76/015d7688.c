
void FUN_015d7688(long param_1,uint *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  
  if ((*param_2 & 0xfff8) == 0x6008) {
    *(undefined8 *)(param_1 + 0x5e0) = 0;
    *(undefined4 *)(param_1 + 0x5dc) = 0xffffffff;
    puVar2 = (undefined1 *)(param_1 + 0x5e8);
  }
  else {
    uVar3 = (ulong)*param_2 & 7;
    FUN_015d88d0(param_1);
    lVar1 = param_1 + 0x518 + uVar3 * 0x20;
    if (2 < (uint)uVar3) {
      lVar1 = param_1 + 0x518;
    }
    *(undefined8 *)(lVar1 + 8) = 0;
    *(undefined4 *)(lVar1 + 4) = 0xffffffff;
    puVar2 = (undefined1 *)(lVar1 + 0x10);
  }
  *puVar2 = 0;
  return;
}


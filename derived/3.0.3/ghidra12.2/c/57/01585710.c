
void FUN_01585710(long param_1,uint *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  
  if ((*param_2 & 0xfff8) == 0x50) {
    *(undefined8 *)(param_1 + 0x5d0) = 0;
    puVar2 = (undefined1 *)(param_1 + 0x5d8);
  }
  else {
    uVar3 = (ulong)(*param_2 >> 6) & 0x3ff;
    FUN_01586b20(param_1);
    lVar1 = param_1 + 0x508 + uVar3 * 0x20;
    if (2 < (uint)uVar3) {
      lVar1 = param_1 + 0x508;
    }
    *(undefined8 *)(lVar1 + 8) = 0;
    puVar2 = (undefined1 *)(lVar1 + 0x10);
  }
  *puVar2 = 0;
  return;
}


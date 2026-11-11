
void FUN_004d3b80(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  *param_1 = *puVar3;
  param_1[1] = uVar2;
  uVar1 = *(ulong *)(param_2 + 0x50);
  param_1[2] = uVar1;
  if ((uVar1 & 1) == 0) {
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *puVar3 = 0;
    return;
  }
  FUN_0043dd30(uVar1 & 0xfffffffffffffffe);
  uVar1 = *(ulong *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *puVar3 = 0;
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_0043dd50(uVar1 & 0xfffffffffffffffe);
  return;
}


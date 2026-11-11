
void FUN_004dad30(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  uVar1 = FUN_00428440(uVar3);
  if ((uVar1 & 0x1f) != 8) {
    uVar3 = 0;
  }
  puVar2 = (undefined8 *)FUN_00426e90(uVar3,1);
  uVar1 = DAT_04c70e18;
  uVar3 = DAT_04c70e10;
  if (((puVar2 == (undefined8 *)0x0) || ((int)((ulong)*puVar2 >> 8) == 0)) &&
     (-1 < *(int *)*param_2)) {
    puVar2 = (undefined8 *)(*(long *)(param_2[2] + 0x238) + (long)*(int *)*param_2 * 0x20);
    uVar3 = puVar2[1];
    *param_1 = *puVar2;
    param_1[1] = uVar3;
    uVar1 = puVar2[2];
    param_1[2] = uVar1;
    if ((uVar1 & 1) != 0) {
      FUN_0043dd30(uVar1 & 0xfffffffffffffffe);
    }
    puVar2 = puVar2 + 3;
  }
  else {
    puVar2 = (undefined8 *)&DAT_04c70e20;
    *param_1 = DAT_04c70e08;
    param_1[1] = uVar3;
    param_1[2] = uVar1;
    if ((uVar1 & 1) != 0) {
      FUN_0043dd30(uVar1 & 0xfffffffffffffffe);
    }
  }
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)puVar2;
  return;
}


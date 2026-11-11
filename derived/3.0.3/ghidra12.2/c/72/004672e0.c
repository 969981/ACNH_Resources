
undefined8 * FUN_004672e0(undefined8 *param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *local_48 [2];
  ulong local_38;
  
  uVar4 = *param_1;
  iVar1 = FUN_00426fc0(uVar4);
  if (((iVar1 < 0x11) && (iVar1 = FUN_00427030(uVar4), iVar1 < 0x11)) &&
     (uVar2 = FUN_0044e270(uVar4), (uVar2 & 1) != 0)) {
    puVar3 = param_1 + 2;
    *puVar3 = 0;
    *(undefined1 *)(param_1 + 1) = 1;
    param_1[3] = 0;
  }
  else {
    if (*param_2 == 0) {
      FUN_0044e160(local_48,*param_1);
      puVar3 = local_48[0];
    }
    else {
      FUN_0044e1c0(local_48,param_2,param_2[1]);
      puVar3 = local_48[0];
    }
    if ((local_38 & 1) != 0) {
      FUN_0043dd50(local_38 & 0xfffffffffffffffe);
    }
    if (puVar3 != (undefined8 *)0x0) {
      param_1[2] = puVar3;
      param_1[3] = 1;
      *(undefined1 *)(param_1 + 1) = 2;
    }
  }
  return puVar3;
}


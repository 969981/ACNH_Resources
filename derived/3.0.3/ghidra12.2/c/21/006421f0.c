
/* WARNING: Removing unreachable block (ram,0x00642240) */

void FUN_006421f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = param_2[1];
  uVar3 = FUN_00428440(lVar5);
  if ((lVar5 == 0) || ((uVar3 & 0x1f) != 7)) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    if ((uVar3 & 1) == 0) {
      param_1[2] = uVar3;
      *param_1 = uVar1;
      param_1[1] = uVar2;
    }
    else {
      FUN_0043dd30(uVar3 & 0xfffffffffffffffe);
      *param_1 = uVar1;
      param_1[1] = uVar2;
      param_1[2] = uVar3;
      FUN_0043dd30(uVar3 & 0xfffffffffffffffe);
    }
    lVar5 = param_1[1];
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    if (lVar5 != 0) {
      uVar4 = FUN_00428440(lVar5);
      if ((uVar4 & 0x1f) != 7) {
        lVar5 = 0;
      }
      param_1[4] = lVar5;
      FUN_00641980(param_1);
    }
    if ((uVar3 & 1) != 0) {
      FUN_0043dd50(uVar3 & 0xfffffffffffffffe);
      return;
    }
  }
  else {
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


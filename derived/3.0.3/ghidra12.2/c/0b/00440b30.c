
void FUN_00440b30(long *param_1,uint param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    if ((param_2 & 1) != 0) {
      lVar4 = param_1[1];
      puVar1 = (undefined8 *)FUN_00426e90(lVar4,0x100);
      if ((puVar1 != (undefined8 *)0x0) && ((code *)*puVar1 != (code *)0x0)) {
        (*(code *)*puVar1)(lVar3,lVar4,1);
      }
    }
    if ((param_2 >> 1 & 1) != 0) {
      FUN_0044e230(*param_1,param_1[1]);
      uVar2 = param_1[2];
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      if ((uVar2 & 1) != 0) {
        FUN_0043dd50(uVar2 & 0xfffffffffffffffe);
        return;
      }
    }
  }
  return;
}


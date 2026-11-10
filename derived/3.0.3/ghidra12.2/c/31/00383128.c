
void FUN_00383128(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar2 = FUN_0037c748(param_1,6);
  lVar3 = FUN_0037c9ac(param_1,0x12);
  if (lVar3 != 0) {
    lVar4 = FUN_0037e530(param_1);
    uVar5 = *(undefined8 *)(lVar4 + 0x20);
    lVar4 = FUN_0037e530(param_1);
    uVar5 = FUN_00386110(uVar5,*(undefined2 *)(lVar4 + 0x4a));
    uVar1 = FUN_0034e3c0(uVar5,4,3,"uProceduralShape");
    *(undefined4 *)(lVar3 + 4) = uVar1;
    if (param_2 != (long *)0x0) {
      lVar3 = FUN_0038cb40(param_3,0x10,0x120);
      *param_2 = *param_2 + lVar3;
      if ((*(byte *)(lVar2 + 4) >> 4 & 1) != 0) {
        lVar2 = FUN_0038cb40(param_3,0x10,0x230);
        *param_2 = *param_2 + lVar2;
        lVar2 = FUN_0038cb40(param_3,0x10,0x120);
        *param_2 = *param_2 + lVar2;
      }
    }
  }
  return;
}


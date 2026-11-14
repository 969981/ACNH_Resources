
void FUN_01d4c0d4(long param_1,int param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_03ebb160(param_1 + 0x378,param_2);
  if (param_2 == *(int *)(param_1 + 0x3e0)) {
    lVar1 = *(long *)(param_1 + 0x3f0);
    if (*(int *)(param_1 + 1000) == 0) {
      if (lVar1 == 0) {
        return;
      }
      uVar2 = 0;
      uVar3 = 0;
      uVar4 = 1;
    }
    else {
      if (lVar1 == 0) {
        return;
      }
      uVar2 = *(undefined4 *)(param_1 + 1000);
      uVar4 = 0xffffffff;
      uVar3 = *(undefined4 *)(param_1 + 0x3ec);
    }
    *(undefined4 *)(lVar1 + 8) = uVar4;
    *(undefined4 *)(lVar1 + 0xc) = uVar2;
    *(undefined4 *)(lVar1 + 0x10) = uVar3;
    *(undefined4 *)(lVar1 + 0x14) = 0;
    if (*(undefined8 **)(param_1 + 0x3f0) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0x3f0) = 0;
      *(undefined8 *)(param_1 + 0x3f0) = 0;
    }
  }
  return;
}


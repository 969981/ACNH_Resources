
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0170b428(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_1[0x227] != 0) {
    FUN_03850a90(param_1[0x227],0x2b,0,0);
  }
  *(undefined4 *)((long)param_1 + 0x1614) = 0x3a83126f;
  (**(code **)(*param_1 + 0x4e0))((int)param_1[0x2c1],param_1);
  *(uint *)((long)param_1 + 0x15f4) = *(uint *)((long)param_1 + 0x15f4) | 0x20;
  lVar4 = FUN_0170b82c(param_1,*(undefined4 *)(param_1[9] + 0x230),2);
  uVar3 = _UNK_04102888;
  uVar2 = _DAT_04102880;
  uVar1 = _DAT_04102200;
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x34c) = _UNK_04102208;
    *(undefined8 *)(lVar4 + 0x344) = uVar1;
    *(undefined8 *)(lVar4 + 0x35c) = uVar3;
    *(undefined8 *)(lVar4 + 0x354) = uVar2;
    uVar1 = _DAT_041023d0;
    *(undefined8 *)(lVar4 + 0x36c) = _UNK_041023d8;
    *(undefined8 *)(lVar4 + 0x364) = uVar1;
  }
  *(undefined1 *)(param_1 + 0xbd1) = 0;
  return;
}


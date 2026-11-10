
void FUN_001e4e68(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0xd0);
  if (lVar3 != 0) {
    lVar1 = 0;
    if (*(long *)(lVar3 + 0x10) != 0) {
      lVar1 = DAT_04bcbf58;
    }
    if (lVar1 != 0) {
      FUN_001e4ef0(*(undefined8 *)(lVar3 + 0x10),DAT_04be22e8);
    }
  }
  uVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 0xb0) + 0x10) + 0x40))();
  FUN_001e2c34(param_1,uVar2);
  return;
}


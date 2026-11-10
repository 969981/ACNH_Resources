
void FUN_00347570(long param_1,undefined8 param_2,long *param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  
  piVar2 = (int *)(param_1 + 0xc);
  if (0 < *piVar2) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      puVar1 = (undefined1 *)(*(long *)(param_1 + 0x10) + lVar3);
      FUN_0034d6e0(puVar1 + 0x30,param_2);
      *puVar1 = 0;
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0xa8;
    } while (lVar4 < *(int *)(param_1 + 0xc));
  }
  (**(code **)(*param_3 + 0x18))(param_3,*(undefined8 *)(param_1 + 0x10));
  (**(code **)(*param_3 + 0x18))(param_3,*(undefined8 *)(param_1 + 0x18));
  *(undefined1 *)(param_1 + 8) = 0;
  piVar2[0] = 0;
  piVar2[1] = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


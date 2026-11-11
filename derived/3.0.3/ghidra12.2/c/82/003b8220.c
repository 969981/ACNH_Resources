
void FUN_003b8220(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  
  lVar2 = *(long *)(param_1 + 0x608);
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x300) < 0x40)) {
    puVar3 = (undefined4 *)(lVar2 + (long)*(int *)(lVar2 + 0x300) * 0xc);
    *puVar3 = param_2;
    puVar3[1] = param_3;
    puVar3[2] = param_4;
    iVar1 = *(int *)(lVar2 + 0x300) + 1;
    *(int *)(lVar2 + 0x300) = iVar1;
    if (iVar1 == 0x3f) {
      *(undefined8 *)(lVar2 + 0x2f4) = 0xffffffff00000002;
      *(undefined8 *)(lVar2 + 0x2fc) = 0x40ffffffff;
    }
  }
  return;
}



uint FUN_0098f0d0(long *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  
  uVar2 = (**(code **)(*param_1 + 0x160))();
  uVar3 = *(uint *)(param_1 + 0x54);
  if (*(uint *)(param_1 + 0x51) <= uVar3) {
    uVar3 = 0;
  }
  lVar4 = param_1[0x52] + (long)(int)uVar3 * 0x30;
  uVar3 = 1;
  if ((uVar2 & 0xff) < 0xfb) {
    uVar3 = uVar2 + 1;
  }
  iVar1 = *(int *)(lVar4 + 0x20);
  if (iVar1 == 0) {
LAB_0098f160:
    (**(code **)(*param_1 + 0x168))(param_1,uVar3);
    return uVar3;
  }
  do {
    iVar5 = 0;
    while ((uint)*(byte *)(*(long *)(lVar4 + 0x28) + (long)iVar5) != (uVar3 & 0xff)) {
      iVar5 = iVar5 + 1;
      if (iVar1 == iVar5) goto LAB_0098f160;
    }
    uVar2 = 1;
    if ((uVar3 & 0xff) < 0xfb) {
      uVar2 = uVar3 + 1;
    }
    uVar3 = uVar2;
  } while( true );
}


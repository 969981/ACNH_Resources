
void FUN_033489f0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (0 < *(int *)(param_1 + 0x20d0)) {
    iVar1 = *(int *)(*(long *)(param_1 + 0x4e0) + 0xc);
    lVar4 = *(long *)(DAT_05355a60 + 0x20);
    if ((iVar1 < *(int *)(DAT_05355a60 + 0x494)) || (*(int *)(param_1 + 0x20d0) < iVar1)) {
      lVar3 = *(long *)(lVar4 + 0x6e0);
      if (*(int *)(lVar4 + 0xcf4) == *(int *)(lVar4 + 0xcf8)) {
        if (lVar3 == 0) {
          return;
        }
        if (*(long *)(lVar3 + 8) == 0) {
          return;
        }
        uVar5 = *(undefined8 *)(*(long *)(lVar3 + 8) + 0x338);
        FUN_03289894(uVar5,0);
        uVar2 = 0;
        goto LAB_03348aa8;
      }
      if (lVar3 == 0) {
        return;
      }
      lVar4 = *(long *)(lVar3 + 8);
    }
    else {
      if (*(long *)(lVar4 + 0x6e0) == 0) {
        return;
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0x6e0) + 8);
    }
    if (lVar4 != 0) {
      uVar5 = *(undefined8 *)(lVar4 + 0x338);
      FUN_03289894(uVar5,1);
      uVar2 = 1;
LAB_03348aa8:
      FUN_0328a2b0(uVar5,uVar2);
      return;
    }
  }
  return;
}


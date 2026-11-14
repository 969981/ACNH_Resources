
void FUN_014f3010(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (*(int *)(param_1 + 0x278) == 0) {
    iVar1 = *(int *)(param_1 + 0x27c);
    uVar6 = 0;
    lVar5 = -(long)iVar1;
    lVar4 = *(long *)(param_1 + 0x270) - (long)iVar1;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x27c);
    lVar2 = (long)iVar1;
    lVar5 = -lVar2;
    lVar4 = *(long *)(param_1 + 0x270) - lVar2;
    if (*(long *)(param_1 + 0x270) != param_1 + 0x268) {
      lVar3 = lVar4;
      do {
        if (*(uint *)(lVar3 + 0x18) < 8 &&
            (1 << (ulong)(*(uint *)(lVar3 + 0x18) & 0x1f) & 0xd0U) != 0) {
          uVar6 = 1;
          goto LAB_014f30b0;
        }
        lVar3 = *(long *)(lVar3 + lVar2 + 8) + lVar5;
      } while (lVar3 != (param_1 + 0x268) - lVar2);
    }
    uVar6 = 0;
  }
LAB_014f30b0:
  uVar7 = *(undefined4 *)(param_2 + 8);
  lVar2 = param_1 + lVar5 + 0x268;
  *(undefined4 *)(param_1 + 0x14) = uVar7;
  uVar8 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = uVar8;
  uVar9 = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 8) = uVar7;
  *(undefined4 *)(param_1 + 0xc) = uVar8;
  *(undefined4 *)(param_1 + 0x1c) = uVar9;
  *(undefined4 *)(param_1 + 0x10) = uVar9;
  if (lVar4 != lVar2) {
    do {
      *(undefined1 *)(lVar4 + 0x74) = uVar6;
      FUN_014e9d24(lVar4,param_2);
      lVar4 = lVar5 + *(long *)(lVar4 + iVar1 + 8);
    } while (lVar4 != lVar2);
  }
  return;
}


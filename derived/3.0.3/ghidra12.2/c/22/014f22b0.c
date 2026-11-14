
undefined8 FUN_014f22b0(long param_1,undefined4 *param_2)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (*(int *)(param_1 + 0x278) == 0) {
    iVar1 = *(int *)(param_1 + 0x27c);
    bVar2 = false;
    lVar6 = -(long)iVar1;
    lVar5 = *(long *)(param_1 + 0x270) - (long)iVar1;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x27c);
    lVar3 = (long)iVar1;
    lVar6 = -lVar3;
    lVar5 = *(long *)(param_1 + 0x270) - lVar3;
    if (*(long *)(param_1 + 0x270) != param_1 + 0x268) {
      lVar4 = lVar5;
      do {
        if (*(uint *)(lVar4 + 0x18) < 8 &&
            (1 << (ulong)(*(uint *)(lVar4 + 0x18) & 0x1f) & 0xd0U) != 0) {
          bVar2 = true;
          goto LAB_014f2350;
        }
        lVar4 = *(long *)(lVar4 + lVar3 + 8) + lVar6;
      } while (lVar4 != (param_1 + 0x268) - lVar3);
    }
    bVar2 = false;
  }
LAB_014f2350:
  uVar7 = *param_2;
  lVar3 = param_1 + lVar6 + 0x268;
  *(undefined4 *)(param_1 + 0x14) = uVar7;
  uVar8 = param_2[1];
  *(undefined4 *)(param_1 + 0x18) = uVar8;
  uVar9 = param_2[2];
  *(undefined4 *)(param_1 + 8) = uVar7;
  *(undefined4 *)(param_1 + 0xc) = uVar8;
  *(undefined4 *)(param_1 + 0x1c) = uVar9;
  *(undefined4 *)(param_1 + 0x10) = uVar9;
  if (lVar5 != lVar3) {
    if (bVar2) {
      do {
        *(undefined1 *)(lVar5 + 0x74) = 1;
        FUN_014e9900(lVar5,lVar5 + 0x20,param_2,0);
        lVar5 = lVar6 + *(long *)(lVar5 + iVar1 + 8);
      } while (lVar5 != lVar3);
    }
    else {
      do {
        FUN_014e9900(lVar5,lVar5 + 0x20,param_2,0);
        lVar5 = lVar6 + *(long *)(lVar5 + iVar1 + 8);
      } while (lVar5 != lVar3);
    }
  }
  return 1;
}


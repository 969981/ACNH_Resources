
void FUN_03a04c80(long param_1,long param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  
  if (param_5 == 0) {
    *(undefined4 *)(param_1 + 0x565c) = 5;
    uVar4 = *(uint *)(param_1 + 0x5678);
    if (0 < (int)uVar4) {
      uVar7 = 0;
      do {
        uVar2 = uVar7 + 1;
        if (uVar4 <= uVar7) {
          uVar7 = 0;
        }
        *(undefined4 *)(*(long *)(param_1 + 0x5680) + (long)(int)uVar7 * 4) = 0;
        uVar4 = *(uint *)(param_1 + 0x5678);
        uVar7 = uVar2;
      } while ((int)uVar2 < (int)uVar4);
    }
    *(undefined8 *)(param_1 + 0x56a8) = 0;
    *(undefined4 *)(param_1 + 0x5600) = 0;
  }
  if (param_3 < 2) {
    if ((param_4 != 0) && (iVar3 = *(int *)(param_1 + 0x108), iVar3 != 0)) {
      iVar5 = 0;
      while( true ) {
        if (iVar3 != 0) {
          lVar6 = *(long *)(param_1 + 0x110);
          iVar8 = 0;
          iVar9 = 0;
          do {
            if ((*(byte *)(lVar6 + (long)iVar9 * 0x430 + 0x3c8) & 1) != 0) {
              uVar4 = *(uint *)(param_1 + 0x56b0);
              lVar10 = *(long *)(param_1 + 0x56b8);
              *(undefined4 *)(param_1 + 0x565c) = 3;
              uVar7 = *(uint *)(param_1 + 0x56a8);
              if (uVar7 < *(uint *)(param_1 + 0x5698)) {
                uVar2 = param_5;
                if (uVar4 <= param_5) {
                  uVar2 = 0;
                }
                *(uint *)(param_1 + 0x56a8) = uVar7 + 1;
                *(long *)(*(long *)(param_1 + 0x56a0) + (long)(int)uVar7 * 8) =
                     lVar10 + (long)(int)uVar2 * 0x30;
                uVar4 = *(uint *)(param_1 + 0x56b0);
                lVar10 = *(long *)(param_1 + 0x56b8);
              }
              uVar7 = param_5;
              if (uVar4 <= param_5) {
                uVar7 = 0;
              }
              param_5 = param_5 + 1;
              lVar10 = lVar10 + (long)(int)uVar7 * 0x30;
              *(uint *)(lVar10 + 0x20) = param_3;
              *(int *)(lVar10 + 0x24) = iVar5;
              *(int *)(lVar10 + 0x28) = iVar8;
            }
            iVar9 = iVar9 + 1;
            iVar8 = iVar8 + 1;
          } while (iVar3 != iVar9);
        }
        iVar5 = iVar5 + 1;
        if (iVar5 == param_4) break;
        iVar3 = *(int *)(param_1 + 0x108);
      }
    }
  }
  else if (param_4 != 0) {
    iVar3 = 0;
    do {
      uVar7 = *(uint *)(param_1 + 0x56b0);
      uVar4 = param_5 + iVar3;
      lVar6 = *(long *)(param_1 + 0x56b8);
      *(undefined4 *)(param_1 + 0x565c) = 3;
      uVar2 = *(uint *)(param_1 + 0x56a8);
      if (uVar2 < *(uint *)(param_1 + 0x5698)) {
        uVar1 = uVar4;
        if (uVar7 <= uVar4) {
          uVar1 = 0;
        }
        *(uint *)(param_1 + 0x56a8) = uVar2 + 1;
        *(long *)(*(long *)(param_1 + 0x56a0) + (long)(int)uVar2 * 8) =
             lVar6 + (long)(int)uVar1 * 0x30;
        uVar7 = *(uint *)(param_1 + 0x56b0);
        lVar6 = *(long *)(param_1 + 0x56b8);
      }
      if (uVar7 <= uVar4) {
        uVar4 = 0;
      }
      lVar6 = lVar6 + (long)(int)uVar4 * 0x30;
      *(uint *)(lVar6 + 0x20) = param_3;
      *(int *)(lVar6 + 0x24) = iVar3;
      iVar3 = iVar3 + 1;
      *(undefined4 *)(lVar6 + 0x28) = 0;
    } while (param_4 != iVar3);
    param_5 = param_5 + iVar3;
  }
  if (param_2 != 0) {
    FUN_03a0cd90(param_2,"ModelScene::calc",param_1 + 0x55e8,DAT_05ae7890,0,0);
    return;
  }
  if (param_5 != 0) {
    uVar4 = 0;
    do {
      uVar7 = uVar4;
      if (*(uint *)(param_1 + 0x56b0) <= uVar4) {
        uVar7 = 0;
      }
      (**(code **)(*(long *)(*(long *)(param_1 + 0x56b8) + (long)(int)uVar7 * 0x30) + 0x10))();
      uVar4 = uVar4 + 1;
    } while (param_5 != uVar4);
  }
  return;
}


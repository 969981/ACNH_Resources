
void FUN_03b65cf0(undefined4 param_1,long param_2,long *param_3)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_78 [24];
  
  uVar4 = (**(code **)(*param_3 + 0x48))(param_3);
  puVar1 = (uint *)(param_2 + 0x20);
  if ((puVar1[uVar4 >> 5 & 0x7ff] >> (ulong)(uVar4 & 0x1f) & 1) != 0) {
    if ((*puVar1 & *puVar1 - 1) == 0) {
      uVar2 = *(ushort *)(param_2 + 0x78);
      if (uVar2 != 0) {
        uVar4 = 1;
        uVar10 = 0;
        do {
          uVar9 = uVar10 + 1;
          if ((int)uVar10 < (int)*(uint *)(param_2 + 0xf8)) {
            if (uVar10 < *(uint *)(param_2 + 0xf8)) {
              lVar6 = param_2 + 0xe8;
              if (6 < uVar10) {
                uVar7 = uVar4 & 0xfffffff8;
                do {
                  uVar7 = uVar7 - 8;
                  lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(
                                                  long *)(lVar6 + 8) + 8) + 8) + 8) + 8) + 8) + 8) +
                                   8);
                } while (uVar7 != 0);
              }
              if ((uVar9 & 7) != 0) {
                uVar7 = uVar4 & 7;
                do {
                  lVar6 = *(long *)(lVar6 + 8);
                  uVar7 = uVar7 - 1;
                } while (uVar7 != 0);
              }
            }
            else {
              lVar6 = 0;
            }
            lVar5 = 0;
            if (lVar6 != 0) {
              lVar5 = lVar6 - *(int *)(param_2 + 0xfc);
            }
          }
          else {
            lVar5 = 0;
          }
          FUN_006bb3f0(0x18,lVar5 + 0x1d0,auStack_78,5);
          FUN_03b66350(param_1,param_2,param_3,uVar10,auStack_78);
          uVar4 = uVar4 + 1;
          uVar10 = uVar9;
        } while (uVar9 != uVar2);
      }
    }
    else {
      uVar4 = (**(code **)(*param_3 + 0x48))(param_3);
      if ((puVar1[uVar4 >> 5 & 0x7ff] >> (ulong)(uVar4 & 0x1f) & 1) == 0) {
        iVar8 = -1;
      }
      else {
        uVar4 = uVar4 & 0xffff;
        if (0x1f < uVar4) {
          uVar4 = 0x20;
        }
        if (uVar4 == 0) {
          iVar8 = 0;
        }
        else {
          uVar10 = *puVar1;
          if (uVar4 == 1) {
            iVar8 = 0;
            uVar9 = 0;
          }
          else {
            iVar8 = 0;
            uVar9 = 0;
            do {
              uVar3 = uVar9 & 0x1f;
              uVar7 = uVar9 + 1;
              uVar9 = uVar9 + 2;
              iVar8 = (uVar10 >> (ulong)(uVar7 & 0x1f) & 1) + (uVar10 >> (ulong)uVar3 & 1) + iVar8;
            } while (uVar9 != (uVar4 & 0x3e));
          }
          if ((uVar4 & 1) != 0) {
            iVar8 = (uVar10 >> (ulong)(uVar9 & 0x1f) & 1) + iVar8;
          }
        }
      }
      uVar2 = *(ushort *)(param_2 + 0x78);
      if (uVar2 != 0) {
        uVar4 = 1;
        uVar10 = 0;
        do {
          uVar9 = uVar10 + 1;
          if ((int)uVar10 < (int)*(uint *)(param_2 + 0xf8)) {
            if (uVar10 < *(uint *)(param_2 + 0xf8)) {
              lVar6 = param_2 + 0xe8;
              if (6 < uVar10) {
                uVar7 = uVar4 & 0xfffffff8;
                do {
                  uVar7 = uVar7 - 8;
                  lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(
                                                  long *)(lVar6 + 8) + 8) + 8) + 8) + 8) + 8) + 8) +
                                   8);
                } while (uVar7 != 0);
              }
              if ((uVar9 & 7) != 0) {
                uVar7 = uVar4 & 7;
                do {
                  lVar6 = *(long *)(lVar6 + 8);
                  uVar7 = uVar7 - 1;
                } while (uVar7 != 0);
              }
            }
            else {
              lVar6 = 0;
            }
            lVar5 = 0;
            if (lVar6 != 0) {
              lVar5 = lVar6 - *(int *)(param_2 + 0xfc);
            }
          }
          else {
            lVar5 = 0;
          }
          FUN_006bb3f0(0x18,lVar5 + 0x1d0,auStack_78,5);
          FUN_03b66000(param_1,param_2,iVar8,param_3,uVar10,auStack_78);
          uVar4 = uVar4 + 1;
          uVar10 = uVar9;
        } while (uVar9 != uVar2);
      }
    }
  }
  return;
}


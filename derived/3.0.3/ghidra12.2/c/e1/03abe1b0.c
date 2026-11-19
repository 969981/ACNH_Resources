
void FUN_03abe1b0(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  
  if ((*(byte *)(param_1 + 0x818) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x5d8) = 0;
    *(undefined4 *)(param_1 + 0x5d4) = *(undefined4 *)(param_1 + 0x81c);
    iVar4 = *(int *)(param_1 + 0x820);
    if (0 < iVar4) {
      uVar3 = 0;
      do {
        lVar5 = *(long *)(param_1 + 0x830);
        uVar1 = uVar3;
        if (*(uint *)(param_1 + 0x828) <= uVar3) {
          uVar1 = 0;
        }
        fVar8 = *(float *)(lVar5 + (ulong)uVar1 * 0x2c + 0x14);
        uVar2 = *(uint *)(param_1 + 0x5d8);
        if (fVar8 == 0.0) {
          if ((int)uVar2 < *(int *)(param_1 + 8)) {
            lVar5 = lVar5 + (ulong)uVar1 * 0x2c;
            uVar7 = *(undefined4 *)(lVar5 + 0x28);
            uVar9 = *(undefined4 *)(lVar5 + 0x10);
            *(uint *)(param_1 + 0x5d8) = uVar2 + 1;
            uVar1 = uVar2;
            if (*(uint *)(param_1 + 0x20) <= uVar2) {
              uVar1 = 0;
            }
            *(undefined4 *)(*(long *)(param_1 + 0x28) + (long)(int)uVar1 * 0x2c) = 0;
            uVar1 = uVar2;
            if (*(uint *)(param_1 + 0x20) <= uVar2) {
              uVar1 = 0;
            }
            lVar6 = *(long *)(param_1 + 0x28) + (long)(int)uVar1 * 0x2c;
            *(undefined4 *)(lVar6 + 4) = *(undefined4 *)(lVar5 + 4);
            *(undefined4 *)(lVar6 + 8) = *(undefined4 *)(lVar5 + 8);
            *(undefined4 *)(lVar6 + 0xc) = *(undefined4 *)(lVar5 + 0xc);
            uVar1 = uVar2;
            if (*(uint *)(param_1 + 0x20) <= uVar2) {
              uVar1 = 0;
            }
            *(undefined4 *)(*(long *)(param_1 + 0x28) + (long)(int)uVar1 * 0x2c + 0x10) = uVar9;
LAB_03abe1e4:
            uVar1 = uVar2;
            if (*(uint *)(param_1 + 0x20) <= uVar2) {
              uVar1 = 0;
            }
            lVar5 = *(long *)(param_1 + 0x28) + (long)(int)uVar1 * 0x2c;
            *(undefined1 **)(lVar5 + 0x18) = &DAT_3f8000003f800000;
            *(undefined1 **)(lVar5 + 0x20) = &DAT_3f8000003f800000;
            if (*(uint *)(param_1 + 0x20) <= uVar2) {
              uVar2 = 0;
            }
            *(undefined4 *)(*(long *)(param_1 + 0x28) + (long)(int)uVar2 * 0x2c + 0x28) = uVar7;
            iVar4 = *(int *)(param_1 + 0x820);
          }
        }
        else if ((int)uVar2 < *(int *)(param_1 + 8)) {
          lVar5 = lVar5 + (ulong)uVar1 * 0x2c;
          uVar7 = *(undefined4 *)(lVar5 + 0x28);
          uVar9 = *(undefined4 *)(lVar5 + 0x10);
          *(uint *)(param_1 + 0x5d8) = uVar2 + 1;
          uVar1 = uVar2;
          if (*(uint *)(param_1 + 0x20) <= uVar2) {
            uVar1 = 0;
          }
          *(undefined4 *)(*(long *)(param_1 + 0x28) + (long)(int)uVar1 * 0x2c) = 1;
          uVar1 = uVar2;
          if (*(uint *)(param_1 + 0x20) <= uVar2) {
            uVar1 = 0;
          }
          lVar6 = *(long *)(param_1 + 0x28) + (long)(int)uVar1 * 0x2c;
          *(undefined4 *)(lVar6 + 4) = *(undefined4 *)(lVar5 + 4);
          *(undefined4 *)(lVar6 + 8) = *(undefined4 *)(lVar5 + 8);
          *(undefined4 *)(lVar6 + 0xc) = *(undefined4 *)(lVar5 + 0xc);
          uVar1 = uVar2;
          if (*(uint *)(param_1 + 0x20) <= uVar2) {
            uVar1 = 0;
          }
          *(undefined4 *)(*(long *)(param_1 + 0x28) + (long)(int)uVar1 * 0x2c + 0x10) = uVar9;
          uVar1 = uVar2;
          if (*(uint *)(param_1 + 0x20) <= uVar2) {
            uVar1 = 0;
          }
          *(float *)(*(long *)(param_1 + 0x28) + (long)(int)uVar1 * 0x2c + 0x14) = fVar8;
          goto LAB_03abe1e4;
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < iVar4);
    }
  }
  return;
}


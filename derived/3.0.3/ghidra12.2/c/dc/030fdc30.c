
void FUN_030fdc30(long param_1,long param_2,uint param_3,short *param_4,undefined4 param_5)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  
  if ((((int)param_3 < *(int *)(param_1 + 0x18)) && (-1 < (int)param_3)) &&
     (*(int *)(param_1 + 0x18) != 0)) {
    uVar5 = *(uint *)(param_1 + 0x20);
    lVar4 = *(long *)(param_1 + 0x28);
    uVar1 = param_3;
    if (uVar5 <= param_3) {
      uVar1 = 0;
    }
    if (*(int *)(lVar4 + (ulong)uVar1 * 0x60 + 0x48) != -1) {
      uVar2 = FUN_0277d7b4(lVar4 + (ulong)uVar1 * 0x60 + 0x54,param_4);
      if ((uVar2 & 1) != 0) {
        return;
      }
      uVar5 = *(uint *)(param_1 + 0x20);
      lVar4 = *(long *)(param_1 + 0x28);
    }
    uVar1 = param_3;
    if (uVar5 <= param_3) {
      uVar1 = 0;
    }
    lVar4 = lVar4 + (ulong)uVar1 * 0x60;
    *(undefined4 *)(lVar4 + 0x4c) = *(undefined4 *)(lVar4 + 0x48);
    uVar1 = param_3;
    if (*(uint *)(param_1 + 0x20) <= param_3) {
      uVar1 = 0;
    }
    *(undefined1 *)(*(long *)(param_1 + 0x28) + (ulong)uVar1 * 0x60 + 0x5c) = 0;
    if ((*PTR_DAT_04c4b988 == '\0') && (*param_4 == -2)) {
      iVar6 = -1;
    }
    else {
      iVar6 = 0;
      iVar3 = 0;
      do {
        if ((*(int *)(param_2 + 8 + (long)iVar3 * 0x1a8 + 0x1a0) == 0) &&
           (lVar4 = param_2 + 8 + (long)iVar3 * 0x1a8, (*(byte *)(lVar4 + 0x18) >> 1 & 1) == 0)) {
          FUN_03412d40(lVar4,PTR_PTR_04bb2238,param_4,param_5);
          goto LAB_030fdd68;
        }
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + 1;
      } while (iVar3 != 0x10e);
      iVar6 = -1;
    }
LAB_030fdd68:
    if (*(uint *)(param_1 + 0x20) <= param_3) {
      param_3 = 0;
    }
    lVar4 = *(long *)(param_1 + 0x28) + (ulong)param_3 * 0x60;
    *(int *)(lVar4 + 0x48) = iVar6;
    *(bool *)(lVar4 + 0x50) = iVar6 != -1;
    *(short *)(lVar4 + 0x54) = *param_4;
    *(char *)(lVar4 + 0x56) = (char)param_4[1];
    *(undefined1 *)(lVar4 + 0x57) = *(undefined1 *)((long)param_4 + 3);
    *(undefined4 *)(lVar4 + 0x58) = *(undefined4 *)(param_4 + 2);
  }
  return;
}


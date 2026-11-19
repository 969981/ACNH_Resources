
void FUN_03b45fcc(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined1 uVar7;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar5 = uVar2 | param_2;
  if ((param_3 & 1) == 0) {
    uVar5 = uVar2 & (param_2 ^ 0xffffffff);
  }
  *(uint *)(param_1 + 0x18) = uVar5;
  if (uVar2 == 0) {
    if (uVar5 == 0) {
      return;
    }
    if ((*(ushort *)(param_1 + 0x1d0) >> 1 & 1) != 0) goto LAB_03b46094;
LAB_03b46054:
    lVar6 = *(long *)(param_1 + 0x120);
    lVar4 = *(long *)(lVar6 + 8);
    if (lVar4 == 0) {
      return;
    }
    lVar1 = *(long *)(lVar4 + 0x38);
    if (DAT_05aebc00 != '\0') {
      lVar1 = lVar4 + 0x70;
    }
    if ((lVar1 == 0) || ((*(byte *)(lVar1 + 0x11) >> 5 & 1) == 0)) {
      uVar7 = 1;
      FUN_03b60f94(lVar4,1);
    }
    else {
      uVar7 = 1;
    }
  }
  else {
    if (uVar5 != 0) {
      return;
    }
    if ((*(ushort *)(param_1 + 0x1d0) >> 1 & 1) != 0) {
LAB_03b46094:
      if (*(long *)(param_1 + 0x1f0) == 0) {
        return;
      }
      lVar4 = *(long *)(*(long *)(param_1 + 0x1f0) + 0x48);
      if (lVar4 == 0) {
        return;
      }
      param_1 = *(long *)(lVar4 + 8);
      if (param_1 == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x10) != *(int *)(lVar4 + 0x10)) {
        return;
      }
      do {
        bVar3 = uVar2 != 0;
        uVar2 = *(uint *)(param_1 + 0x18);
        uVar5 = 0xff;
        if (bVar3) {
          uVar5 = 0;
        }
        uVar5 = uVar2 & 0xffffff00 | uVar5;
        *(uint *)(param_1 + 0x18) = uVar5;
        if (uVar2 == 0) {
          if (uVar5 == 0) {
            return;
          }
          if ((*(ushort *)(param_1 + 0x1d0) >> 1 & 1) == 0) goto LAB_03b46054;
        }
        else {
          if (uVar5 != 0) {
            return;
          }
          if ((*(ushort *)(param_1 + 0x1d0) >> 1 & 1) == 0) break;
        }
        if (*(long *)(param_1 + 0x1f0) == 0) {
          return;
        }
        lVar4 = *(long *)(*(long *)(param_1 + 0x1f0) + 0x48);
        if (lVar4 == 0) {
          return;
        }
        param_1 = *(long *)(lVar4 + 8);
        if (param_1 == 0) {
          return;
        }
        if (*(int *)(param_1 + 0x10) != *(int *)(lVar4 + 0x10)) {
          return;
        }
      } while( true );
    }
    lVar6 = *(long *)(param_1 + 0x120);
    lVar4 = *(long *)(lVar6 + 8);
    if (lVar4 == 0) {
      return;
    }
    lVar1 = *(long *)(lVar4 + 0x38);
    if (DAT_05aebc00 != '\0') {
      lVar1 = lVar4 + 0x70;
    }
    if ((lVar1 == 0) || ((*(byte *)(lVar1 + 0x11) >> 5 & 1) == 0)) {
      FUN_03b60f94(lVar4,0);
    }
    uVar7 = 0;
  }
  *(undefined1 *)(lVar6 + 0x18) = uVar7;
  return;
}


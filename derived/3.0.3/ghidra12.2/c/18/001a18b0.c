
/* WARNING: Removing unreachable block (ram,0x001a1a34) */

uint FUN_001a18b0(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x50);
  if (lVar6 == param_1 + 0x48) {
    uVar5 = 0;
    iVar4 = *(int *)(param_1 + 0x3c);
  }
  else {
    uVar5 = 0;
    do {
      uVar3 = (**(code **)(**(long **)(lVar6 + 0x10) + 0x70))();
      lVar6 = *(long *)(lVar6 + 8);
      uVar5 = uVar3 | uVar5;
    } while (lVar6 != param_1 + 0x48);
    iVar4 = *(int *)(param_1 + 0x3c);
  }
  if (iVar4 == 0) {
    if ((uVar5 >> 7 & 1) == 0) {
      if ((uVar5 >> 8 & 1) != 0) {
        return 0x100;
      }
      if ((uVar5 != 1) && (uVar5 != 0x40)) {
        if ((uVar5 & 0xfffffff3) == 0) {
          return 4;
        }
        uVar3 = 0x10;
        if ((uVar5 & 0xffffff83) != 0) {
          uVar3 = 0x100;
        }
        uVar2 = 2;
        if (0xf < uVar5) {
          uVar2 = uVar3;
        }
        return uVar2;
      }
    }
    else {
      uVar5 = 0x80;
    }
    return uVar5;
  }
  if ((uVar5 >> 7 & 1) == 0) {
    if ((uVar5 >> 8 & 1) == 0) {
      if ((uVar5 != 1) && (uVar5 != 0x40)) {
        if ((uVar5 & 0xfffffff3) == 0) {
          uVar5 = 0;
        }
        else {
          iVar4 = 0x10;
          if ((uVar5 & 0xffffff83) != 0) {
            iVar4 = 0x100;
          }
          iVar1 = 2;
          if (0xf < uVar5) {
            iVar1 = iVar4;
          }
          uVar5 = (uint)(CONCAT44(iVar1,iVar1 + -4) >> 2);
          if (7 < uVar5) {
            return 0x100;
          }
        }
        goto LAB_001a1a00;
      }
    }
    else {
      uVar5 = 0x100;
    }
    uVar5 = (uint)(CONCAT44(uVar5,uVar5 - 4) >> 2);
    if (uVar5 < 8) {
LAB_001a1a00:
      return (&DAT_04057fc0)[(int)uVar5];
    }
  }
  return 0x100;
}


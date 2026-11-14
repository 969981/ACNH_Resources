
/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool FUN_01a1aa10(long param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_30 = 0xffffffff;
  uStack_2c = 0xffffffff;
  local_28 = 0x1ff;
  local_24 = 7;
  uStack_2c = 0xffffffff;
  local_30 = 0xffffff7f;
  local_24 = 7;
  local_28 = 0x1ff;
  if (((DAT_04cfae30 == 0) || (*(long *)(DAT_04cfae30 + 0xa8) == 0)) ||
     (uVar4 = FUN_009499b0(DAT_04cfae30 + 0x28,param_1,&local_30), (uVar4 & 1) == 0)) {
LAB_01a1ab08:
    bVar3 = false;
  }
  else {
    if ((DAT_04cfae30 != 0) && (lVar5 = *(long *)(DAT_04cfae30 + 0xa8), lVar5 != 0)) {
      uVar1 = *(uint *)(param_1 + 8);
      if ((((-1 < (int)uVar1) &&
           ((uVar2 = *(uint *)(param_1 + 0xc), -1 < (int)uVar2 && (uVar1 < *(uint *)(lVar5 + 0x38)))
           )) && (uVar2 < *(uint *)(lVar5 + 0x3c))) &&
         (((uVar1 = uVar1 + *(uint *)(lVar5 + 0x38) * uVar2, uVar1 < *(uint *)(lVar5 + 0x68) &&
           (*(long *)(lVar5 + 0x70) != 0)) &&
          ((*(uint *)(*(long *)(lVar5 + 0x70) + (long)(int)uVar1 * 4) >> 5 & 1) != 0))))
      goto LAB_01a1ab08;
      uVar1 = *(uint *)(param_1 + 8);
      if (-1 < (int)uVar1) {
        uVar2 = *(uint *)(param_1 + 0xc);
        if ((int)uVar2 < 0) {
          return true;
        }
        if (*(uint *)(lVar5 + 0x38) <= uVar1) {
          return true;
        }
        if (*(uint *)(lVar5 + 0x3c) <= uVar2) {
          return true;
        }
        uVar1 = uVar1 + *(uint *)(lVar5 + 0x38) * uVar2;
        if (*(uint *)(lVar5 + 0x68) <= uVar1) {
          return true;
        }
        if (*(long *)(lVar5 + 0x70) == 0) {
          return true;
        }
        return (*(uint *)(*(long *)(lVar5 + 0x70) + (long)(int)uVar1 * 4) >> 3 & 1) == 0;
      }
    }
    bVar3 = true;
  }
  return bVar3;
}


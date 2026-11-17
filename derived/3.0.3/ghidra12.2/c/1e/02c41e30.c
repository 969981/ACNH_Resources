
void FUN_02c41e30(long param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  if (param_3 < *(uint *)(param_1 + 0x248)) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x250) + (long)(int)param_3 * 8);
  }
  else {
    lVar6 = 0;
  }
  switch(param_2) {
  case 1:
    FUN_033c211c(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x30),param_3);
    iVar4 = *(int *)(param_1 + 0x2a8);
    if (0 < iVar4) {
      uVar3 = 0;
      do {
        if ((uVar3 < *(uint *)(param_1 + 0x248)) &&
           (lVar5 = *(long *)(*(long *)(param_1 + 0x250) + uVar3 * 8), *(int *)(lVar5 + 0x8c) == 7))
        {
          *(undefined4 *)(lVar5 + 0x8c) = 9;
          *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x250) + uVar3 * 8) + 0x90) = 0;
          iVar4 = *(int *)(param_1 + 0x2a8);
        }
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)iVar4);
    }
    param_2 = 0;
    uVar1 = 0;
    break;
  case 2:
    FUN_033c2294(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x30),param_3);
    iVar4 = *(int *)(param_1 + 0x2a8);
    if (0 < iVar4) {
      uVar3 = 0;
      do {
        if ((uVar3 < *(uint *)(param_1 + 0x248)) &&
           (lVar5 = *(long *)(*(long *)(param_1 + 0x250) + uVar3 * 8), *(int *)(lVar5 + 0x8c) == 7))
        {
          *(undefined4 *)(lVar5 + 0x8c) = 9;
          *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x250) + uVar3 * 8) + 0x90) = 0;
          iVar4 = *(int *)(param_1 + 0x2a8);
        }
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)iVar4);
    }
    uVar1 = 0x3c;
    param_2 = 2;
    break;
  case 3:
    FUN_033c240c(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x30),param_3);
    uVar1 = 0x1e;
    param_2 = 3;
    break;
  case 4:
    FUN_033c2584(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x30),param_3);
    uVar1 = 0x1e;
    param_2 = 4;
    break;
  case 5:
    FUN_033c1fa4(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x30),param_3);
    uVar1 = 0;
    param_2 = 5;
    break;
  case 6:
    FUN_033c2874(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x30),param_3);
    uVar1 = 0x1e;
    param_2 = 6;
    break;
  case 7:
    iVar4 = *(int *)(param_1 + 0x2a8);
    if (iVar4 < 1) {
      uVar2 = 0;
    }
    else {
      uVar3 = 0;
      uVar2 = 0;
      do {
        if ((param_3 == uVar3) || (param_4 == uVar3)) {
          uVar2 = uVar2 | 1 << (ulong)((uint)uVar3 & 0x1f);
        }
        else {
          *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x250) + uVar3 * 8) + 0x8c) = 7;
          iVar4 = *(int *)(param_1 + 0x2a8);
        }
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)iVar4);
    }
    FUN_033c2d34(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x30),param_3,uVar2 & 0xff);
    return;
  case 8:
    iVar4 = *(int *)(param_1 + 0x2a8);
    if (0 < iVar4) {
      uVar3 = 0;
      do {
        if ((uVar3 < *(uint *)(param_1 + 0x248)) &&
           (lVar6 = *(long *)(*(long *)(param_1 + 0x250) + uVar3 * 8), *(int *)(lVar6 + 0x8c) == 7))
        {
          *(undefined4 *)(lVar6 + 0x8c) = 0;
          iVar4 = *(int *)(param_1 + 0x2a8);
        }
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)iVar4);
    }
    FUN_033c2ed0(*(undefined8 *)(DAT_05739190 + 0x30));
    return;
  case 9:
    iVar4 = *(int *)(param_1 + 0x2a8);
    if (iVar4 < 1) {
      return;
    }
    uVar3 = 0;
    do {
      if ((uVar3 < *(uint *)(param_1 + 0x248)) &&
         (lVar6 = *(long *)(*(long *)(param_1 + 0x250) + uVar3 * 8), *(int *)(lVar6 + 0x8c) == 7)) {
        *(undefined4 *)(lVar6 + 0x8c) = 9;
        *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x250) + uVar3 * 8) + 0x90) = 0;
        iVar4 = *(int *)(param_1 + 0x2a8);
      }
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 < (long)iVar4);
    return;
  case 10:
    iVar4 = *(int *)(param_1 + 0x2a8);
    if (0 < iVar4) {
      uVar3 = 0;
      do {
        if ((uVar3 < *(uint *)(param_1 + 0x248)) &&
           (lVar6 = *(long *)(*(long *)(param_1 + 0x250) + uVar3 * 8), *(int *)(lVar6 + 0x8c) == 7))
        {
          *(undefined4 *)(lVar6 + 0x8c) = 0;
          iVar4 = *(int *)(param_1 + 0x2a8);
        }
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)iVar4);
    }
    FUN_033c3044(*(undefined8 *)(DAT_05739190 + 0x30));
    return;
  case 0xb:
    uVar1 = 0x1e;
    param_2 = 0xb;
    break;
  default:
    uVar1 = 0;
  }
  *(undefined4 *)(lVar6 + 0x8c) = param_2;
  *(undefined4 *)(lVar6 + 0x90) = uVar1;
  return;
}


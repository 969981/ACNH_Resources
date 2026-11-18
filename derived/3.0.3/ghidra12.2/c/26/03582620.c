
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03582620(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined4 local_2c;
  int local_28;
  int local_24;
  
  local_2c = 0;
  local_28 = 0;
  uVar2 = FUN_03582920(param_1 + 0x340,&local_28,&local_2c,param_2);
  if ((uVar2 & 1) != 0) {
    local_24 = local_28;
    if (DAT_05771764 == local_28) {
      lVar4 = 0;
    }
    else if (_DAT_0577176c == local_28) {
      lVar4 = 1;
    }
    else if (_DAT_05771774 == local_28) {
      lVar4 = 2;
    }
    else if (_DAT_0577177c == local_28) {
      lVar4 = 3;
    }
    else if (_DAT_05771784 == local_28) {
      lVar4 = 4;
    }
    else if (_DAT_0577178c == local_28) {
      lVar4 = 5;
    }
    else if (_DAT_05771794 == local_28) {
      lVar4 = 6;
    }
    else if (_DAT_0577179c == local_28) {
      lVar4 = 7;
    }
    else if (_DAT_057717a4 == local_28) {
      lVar4 = 8;
    }
    else if (_DAT_057717ac == local_28) {
      lVar4 = 9;
    }
    else {
      if (_DAT_057717b4 != local_28) {
        return;
      }
      lVar4 = 10;
    }
    lVar3 = FUN_033d0598(&DAT_0548e140);
    uVar1 = local_2c;
    local_24 = (&DAT_05771760)[lVar4 * 2];
    *(int *)(lVar3 + 0x390) = local_24;
    if (DAT_05771228 == local_24) {
      lVar4 = 0;
    }
    else if (DAT_05771298 == local_24) {
      lVar4 = 1;
    }
    else if (DAT_05771308 == local_24) {
      lVar4 = 2;
    }
    else if (DAT_05771378 == local_24) {
      lVar4 = 3;
    }
    else if (DAT_057713e8 == local_24) {
      lVar4 = 4;
    }
    else if (DAT_05771458 == local_24) {
      lVar4 = 5;
    }
    else if (DAT_057714c8 == local_24) {
      lVar4 = 6;
    }
    else if (DAT_05771538 == local_24) {
      lVar4 = 7;
    }
    else if (DAT_057715a8 == local_24) {
      lVar4 = 8;
    }
    else if (DAT_05771618 == local_24) {
      lVar4 = 9;
    }
    else {
      if (DAT_05771688 != local_24) {
        FUN_033d0598(&DAT_0548e140);
        return;
      }
      lVar4 = 10;
    }
    lVar3 = FUN_033d0598(PTR_DAT_04bb32e0);
    *(ulong *)(lVar3 + lVar4 * 8 + 0x338) = CONCAT44(uVar1,uVar1);
  }
  return;
}


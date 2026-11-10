
int FUN_001584c8(long *param_1,long *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined1 local_40 [16];
  
  lVar6 = *param_1;
  local_40 = FUN_00147178();
  uVar1 = FUN_00157b2c(lVar6,local_40,1);
  if ((int)uVar1 < 0) {
    FUN_0014d5f8(lVar6,"Connection time-out");
    iVar4 = 0x1c;
  }
  else {
    uVar2 = FUN_0014a1c0(*param_2);
    *(undefined4 *)(param_1 + 0x86) = uVar2;
    lVar5 = *param_2;
    param_1[0x4c] = -1;
    param_1[0xf] = lVar5;
    param_1[0x10] = 0;
    param_1[0x87] = (ulong)(uVar1 >> (*(long *)(lVar5 + 0x28) != 0));
    do {
      iVar3 = FUN_001585c4(param_1,lVar5,param_1 + 0x4c);
      if (iVar3 == 0) break;
      lVar5 = *(long *)(param_1[0xf] + 0x28);
      param_1[0xf] = lVar5;
    } while (lVar5 != 0);
    if ((int)param_1[0x4c] == -1) {
      iVar4 = 7;
      if (iVar3 != 0) {
        iVar4 = iVar3;
      }
    }
    else {
      *(long *)(lVar6 + 0x1650) = *(long *)(lVar6 + 0x1650) + 1;
      FUN_00147570(*param_1,*(undefined8 *)(lVar6 + 0x7c0),4);
      iVar4 = 0;
    }
  }
  return iVar4;
}



void FUN_029b1748(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong local_60;
  long *local_58;
  undefined2 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined *local_30;
  undefined8 uStack_28;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x18) == 0) {
      lVar4 = *(long *)(lVar2 + 8);
      if ((lVar4 != 0) && (*(int *)(lVar2 + 0x10) == *(int *)(lVar4 + 0x10))) {
        lVar5 = *(long *)(*(long *)(lVar4 + 0x120) + 8);
        lVar6 = *(long *)(lVar5 + 0x38);
        if ((DAT_05aebc00 != '\0') || (lVar6 != 0)) {
          if (DAT_05aebc00 != '\0') {
            lVar6 = lVar5 + 0x70;
          }
          lVar6 = *(long *)(lVar6 + 8);
          if (((lVar6 != 0) && (*(uint *)(lVar6 + 0x18) != 0)) &&
             (*(long *)((ulong)*(uint *)(lVar6 + 0x18) + lVar6) == 0x101feff464e494d))
          goto LAB_029b1774;
        }
      }
    }
    else {
      lVar4 = *(long *)(lVar2 + 8);
LAB_029b1774:
      if (((lVar4 != 0) && (*(int *)(lVar4 + 0x10) == *(int *)(lVar2 + 0x10))) &&
         ((*(int *)(lVar4 + 0xc) != 0 && (*(int *)(lVar4 + 0xc) != 7)))) {
        local_50 = 0xff;
        local_60 = 0;
        local_58 = (long *)0x0;
        local_48 = 0;
        uStack_40 = 0;
        local_38 = 0;
        local_30 = PTR_DAT_04bb2020 + 0x10;
        uStack_28 = DAT_055e72d0;
        uVar1 = FUN_02a0c5d4(*(long *)PTR_DAT_04bb26a8 + 0xa5968,&local_60,&local_30);
        if ((((uVar1 & 1) != 0) && (local_58 != (long *)0x0)) &&
           ((*(uint *)((long)local_58 + 0x18) != 0 &&
            (local_58 = (long *)((ulong)*(uint *)((long)local_58 + 0x18) + (long)local_58),
            *local_58 == 0x101feff464e494d)))) {
          uVar3 = (undefined4)param_2[1];
          goto LAB_029b1898;
        }
      }
    }
  }
  local_58 = (long *)0x0;
  uVar3 = 0xffffffff;
LAB_029b1898:
  local_60 = CONCAT44(uVar3,(int)local_60) & 0xffffffffffffff00;
  FUN_029e69e0(param_1 + 0x10,&local_60);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x2c);
  return;
}


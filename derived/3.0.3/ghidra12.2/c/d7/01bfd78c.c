
void FUN_01bfd78c(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined *local_30;
  undefined4 local_28;
  
  *(undefined8 *)(param_1 + 0x2190) = 0;
  *(undefined4 *)(param_1 + 0x21b0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x21a8) = 0;
  (**(code **)(*(long *)(param_1 + 0x218) + 0x38))(param_1 + 0x218);
  (**(code **)(*(long *)(param_1 + 0x6f8) + 0x38))(param_1 + 0x6f8);
  *(undefined4 *)(param_1 + 0xbd8) = 0;
  lVar3 = *(long *)(*(long *)(param_1 + 0x210) + 0x20);
  if (lVar3 != 0) {
    iVar1 = *(int *)(*(long *)(param_1 + 0x210) + 0x2c);
    if (iVar1 == 2) {
      plVar2 = *(long **)(lVar3 + 0x228);
    }
    else if (iVar1 == 1) {
      plVar2 = *(long **)(lVar3 + 0x220);
    }
    else {
      if (iVar1 != 0) {
        return;
      }
      plVar2 = *(long **)(lVar3 + 0x218);
    }
    if (((plVar2 != (long *)0x0) && (lVar3 = (**(code **)(*plVar2 + 0x228))(), lVar3 != 0)) &&
       (plVar2 = *(long **)(lVar3 + 0x48), plVar2[1] != 0)) {
      local_30 = PTR_DAT_04bc0878 + 0x10;
      local_28 = 9;
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_30);
      (**(code **)(plVar2[3] + 0x5e0))(plVar2[1],PTR_DAT_04bb2da0,0);
      FUN_03d7dd80(lVar3);
    }
  }
  return;
}


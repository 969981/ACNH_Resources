
void FUN_01bfd8a4(long *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined *local_40;
  undefined4 local_38;
  
  (**(code **)(*param_1 + 0x10))();
  param_1[0x432] = 0;
  *(undefined4 *)(param_1 + 0x436) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x435) = 0;
  (**(code **)(param_1[0x43] + 0x38))(param_1 + 0x43);
  (**(code **)(param_1[0xdf] + 0x38))(param_1 + 0xdf);
  *(undefined4 *)(param_1 + 0x17b) = 0;
  lVar3 = *(long *)(param_1[0x42] + 0x20);
  if (lVar3 != 0) {
    iVar1 = *(int *)(param_1[0x42] + 0x2c);
    if (iVar1 == 2) {
      plVar2 = *(long **)(lVar3 + 0x228);
    }
    else if (iVar1 == 1) {
      plVar2 = *(long **)(lVar3 + 0x220);
    }
    else {
      if (iVar1 != 0) goto LAB_01bfd9c4;
      plVar2 = *(long **)(lVar3 + 0x218);
    }
    if (((plVar2 != (long *)0x0) && (lVar3 = (**(code **)(*plVar2 + 0x228))(), lVar3 != 0)) &&
       (plVar2 = *(long **)(lVar3 + 0x48), plVar2[1] != 0)) {
      local_40 = PTR_DAT_04bc0878 + 0x10;
      local_38 = 9;
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
      (**(code **)(plVar2[3] + 0x5e0))(plVar2[1],PTR_DAT_04bb2da0,0);
      FUN_03d7dd80(lVar3);
    }
  }
LAB_01bfd9c4:
  (**(code **)(param_1[0x17c] + 0x10))(param_1 + 0x17c);
  param_1[0x1bd] = 0;
  *(undefined8 *)((long)param_1 + 0xdf6) = 0;
  param_1[0x1be] = 0;
  (**(code **)(param_1[0x1c6] + 0x38))(param_1 + 0x1c6);
  (**(code **)(param_1[0x1e6] + 0x38))(param_1 + 0x1e6);
  FUN_01b95ab8(param_1 + 0x206);
  *(undefined1 *)(param_1 + 0x290) = 0;
  FUN_01b9684c(param_1 + 0x291);
  FUN_01b9684c(param_1 + 0x35f);
  *(undefined4 *)(param_1 + 0x431) = 0;
  *(undefined2 *)((long)param_1 + 0x218c) = 0;
  param_1[0x430] = -1;
  *(undefined4 *)((long)param_1 + 0x21b4) = 0;
  param_1[0x43d] = 0;
  param_1[0x43e] = 0;
  *(undefined1 *)(param_1 + 0x437) = 0;
  return;
}



void FUN_01edb374(long *param_1)

{
  float *pfVar1;
  int iVar2;
  undefined1 uVar3;
  
  pfVar1 = (float *)((long)param_1 + 0x56ec);
  if (((*pfVar1 != 0.0) || (*(float *)(param_1 + 0xade) != 0.0)) ||
     (*(float *)((long)param_1 + 0x56f4) != 0.0)) {
    FUN_020d1018(param_1 + 0x1133);
    if ((*(byte *)((long)param_1 + 0xaa44) >> 2 & 1) == 0) {
      if ((*(byte *)((long)param_1 + 0xaa44) >> 5 & 1) == 0) {
        return;
      }
      uVar3 = 0;
      pfVar1[0] = 0.0;
      pfVar1[1] = 0.0;
      *(undefined4 *)((long)param_1 + 0x56f4) = 0;
      goto LAB_01edb3e8;
    }
  }
  uVar3 = 1;
LAB_01edb3e8:
  iVar2 = *(int *)((long)param_1 + 0x77b4);
  if ((*(int *)((long)param_1 + 0x787c) < 1) || (iVar2 < *(int *)((long)param_1 + 0x787c))) {
    *(undefined1 *)((long)param_1 + 0x789f) = uVar3;
    (**(code **)(*param_1 + 0x38))
              (param_1,0xb,param_1 + 0xf00,*(undefined1 *)((long)param_1 + 0x7b41));
    *(int *)((long)param_1 + 0x77b4) = iVar2;
    return;
  }
  FUN_01ea5c80(param_1,PTR_PTR_04bb2238,PTR_PTR_04bb2238,1,0,PTR_DAT_04bb32e0);
  return;
}


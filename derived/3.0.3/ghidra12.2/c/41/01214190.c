
undefined8 FUN_01214190(undefined4 *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined2 local_50;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined4 local_18;
  undefined4 uStack_14;
  
  if (param_2 - 1U < 6) {
    piVar4 = (int *)(&PTR_DAT_04987220)[(int)(param_2 - 1U)];
  }
  else {
    piVar4 = &DAT_04c47ee0;
  }
  local_48 = param_2;
  iVar1 = FUN_0277d6c4(param_1);
  if (iVar1 != *piVar4) {
    iVar1 = FUN_0277d6c4(param_1);
    if (iVar1 == piVar4[1]) {
      return 1;
    }
    iVar1 = FUN_0277d6c4(param_1);
    if (iVar1 == piVar4[2]) {
      return 2;
    }
    iVar1 = FUN_0277d6c4(param_1);
    if (iVar1 == piVar4[3]) {
      return 3;
    }
    iVar1 = FUN_0277d6c4(param_1);
    if (iVar1 == piVar4[4]) {
      return 4;
    }
    iVar1 = FUN_0277d6c4(param_1);
    if (iVar1 == piVar4[5]) {
      return 5;
    }
    iVar1 = FUN_0277d6c4(param_1);
    if (iVar1 == piVar4[6]) {
      return 6;
    }
    uVar2 = FUN_0277db54(param_1);
    if ((uVar2 & 1) != 0) {
      FUN_0124c030(&local_48,param_1);
      iVar1 = FUN_0123db50(auStack_40,local_38);
      if (iVar1 - 0x18U < 7) {
        local_18 = *param_1;
        uStack_14 = param_1[1];
        FUN_01201bc0(&local_48,&local_18,param_2);
        *(undefined2 *)param_1 = (undefined2)local_48;
        *(undefined1 *)((long)param_1 + 2) = local_48._2_1_;
        *(undefined1 *)((long)param_1 + 3) = local_48._3_1_;
        param_1[1] = local_44;
        local_50 = (undefined2)local_48;
        local_4e = local_48._2_1_;
        local_4d = local_48._3_1_;
        local_4c = local_44;
        uVar3 = FUN_01214190(&local_50,param_2);
        return uVar3;
      }
    }
  }
  return 0;
}



undefined4 FUN_00441150(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *local_48;
  long *local_38;
  
  if (*param_1 == 0) {
    return 0x80040200;
  }
  if (*param_2 == 0) {
    return 0x80040200;
  }
  uVar1 = FUN_00428440(param_1[1]);
  uVar2 = FUN_00428440(param_2[1]);
  if (((uVar2 ^ uVar1) & 0x1f) != 0) {
    return 0x80040200;
  }
  lVar6 = param_2[1];
  if (lVar6 != 0) {
    lVar8 = *param_2;
    uVar4 = FUN_00427110(lVar6,param_1[1]);
    if (((((uVar4 & 1) != 0) && (uVar1 = FUN_004274f0(lVar6), lVar8 != 0)) &&
        ((uVar1 >> 3 & 1) == 0)) && ((*(byte *)(param_1 + 2) & 1) == 0)) {
      lVar6 = param_1[1];
      FUN_00429460(&local_38,lVar6);
      if ((long *)0x1 < local_38) {
        FUN_00429460(&local_38,lVar6);
        local_48 = local_38;
        uVar4 = FUN_004290b0(&local_48);
        if ((uVar4 & 0x50) != 0) goto LAB_00441268;
      }
      uVar1 = FUN_004274f0(param_2[1]);
      if ((uVar1 >> 3 & 1) == 0) {
        lVar6 = *param_1;
        lVar8 = param_1[1];
        lVar7 = *param_2;
        puVar5 = (undefined8 *)FUN_00426e90(lVar8,0x200);
        if ((puVar5 != (undefined8 *)0x0) && ((code *)*puVar5 != (code *)0x0)) {
          (*(code *)*puVar5)(lVar6,lVar7,lVar8,1);
          return 0;
        }
      }
    }
  }
LAB_00441268:
  local_38 = param_1;
  uVar3 = FUN_004412a0(&local_38,param_2);
  return uVar3;
}


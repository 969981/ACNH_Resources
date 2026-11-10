
void FUN_002b83b0(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  Result *pRVar2;
  long lVar3;
  ulong local_58;
  undefined4 local_50;
  ErrorResultVariant aEStack_4c [12];
  undefined4 local_34;
  
  if (param_3 == 0) {
    local_50 = 0x10c07;
  }
  else {
    plVar1 = *(long **)(param_2 + 0x48);
    if (plVar1 == (long *)0x0) {
      local_50 = 0x10c08;
    }
    else {
      if (*(int *)(param_2 + 0x700) == 0 && *(int *)(param_2 + 0x10) == 0) {
                    /* WARNING: Could not recover jumptable at 0x002b8410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x10))(param_1,plVar1,param_3);
        return;
      }
      if (*(int *)(param_2 + 0x10) != 0) {
        local_58 = 0;
        FUN_002282f0(&local_58);
        lVar3 = param_2;
        do {
          lVar3 = *(long *)(lVar3 + 8);
          if (lVar3 == param_2) {
            local_50 = 0x2c09;
            goto LAB_002b850c;
          }
        } while (local_58 <= *(ulong *)(lVar3 + 0x670));
        FUN_0022b96c(param_3,lVar3 + 0x10);
        FUN_0022b59c(&local_50,param_3);
        FUN_0022b830(lVar3 + 0x10);
        FUN_00223704(param_2,lVar3);
        FUN_002236e0(param_2 + 0x18,param_2 + 0x18,lVar3 + *(int *)(param_2 + 0x2c));
        local_50 = 0;
LAB_002b850c:
        pRVar2 = (Result *)&local_34;
        local_34 = 0;
        goto LAB_002b84d4;
      }
      local_50 = 0x2c09;
    }
  }
  pRVar2 = (Result *)&local_58;
  local_58 = local_58 & 0xffffffff00000000;
LAB_002b84d4:
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,pRVar2);
  FUN_002296c4(param_1,&local_50);
  return;
}


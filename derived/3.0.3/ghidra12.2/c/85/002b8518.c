
void FUN_002b8518(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_68;
  undefined2 local_50;
  ulong local_48;
  
  if (*(int *)(param_2 + 0x700) == 0) {
                    /* WARNING: Could not recover jumptable at 0x002b8640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_2 + 0x50) + 0x38))(param_1,*(long **)(param_2 + 0x50),param_3);
    return;
  }
  if (*(int *)(param_2 + 0x28) == 0) {
    local_68 = (undefined *)CONCAT44(local_68._4_4_,0x4c0d);
  }
  else {
    lVar3 = FUN_002237a8(param_2 + 0x18);
    lVar1 = 0;
    if (lVar3 != 0) {
      lVar1 = lVar3 - *(int *)(param_2 + 0x2c);
    }
    lVar3 = lVar1 + 0x10;
    FUN_0022b6dc(lVar3);
    *(undefined8 *)(lVar1 + 0x670) = 0;
    FUN_0022b7ac(lVar3);
    FUN_002236bc(param_2,param_2,lVar1);
    FUN_0022b96c(param_2 + 0x88,param_3);
    local_48 = 0;
    FUN_002282f0(&local_48);
    local_68 = PTR_DAT_04bccf70 + 0x10;
    FUN_0021f5a0(&local_68,0xffffffff);
    local_50 = 0;
    iVar2 = FUN_002b8690(param_2,&local_68);
    plVar4 = (long *)FUN_00228380();
    *(ulong *)(param_2 + 0x6e8) = local_48 + *plVar4 * (long)iVar2;
    FUN_0021f584(&local_68);
    FUN_0022b96c(lVar3,param_2 + 0x88);
    local_68 = (undefined *)((ulong)local_68 & 0xffffffff00000000);
    *(undefined8 *)(lVar1 + 0x670) = *(undefined8 *)(param_2 + 0x6e8);
  }
  local_48 = local_48 & 0xffffffff00000000;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_68 + 4),(Result *)&local_48);
  FUN_002296c4(param_1,&local_68);
  return;
}


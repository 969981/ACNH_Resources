
bool FUN_0281850c(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  long lStack_28;
  int local_4;
  
  if (7 < param_2) {
    return false;
  }
  plVar4 = (long *)(param_1 + (ulong)param_2 * 0x48);
  if (*plVar4 == 0 && plVar4[1] == 0) {
    bVar3 = false;
  }
  else {
    local_4 = 0;
    local_30 = 0;
    lStack_28 = 0;
    local_40 = 0;
    local_38 = 0;
    local_50 = 0;
    local_48 = 0;
    local_60 = 0;
    local_58 = 0;
    local_70 = 0;
    local_68 = 0;
    local_80 = 0;
    local_78 = 0;
    local_90 = 0;
    local_88 = 0;
    local_a0 = 0;
    local_98 = 0;
    nn::account::ListQualifiedUsers(&local_4,(Uid *)&local_a0,8);
    lVar1 = *plVar4;
    lVar2 = plVar4[1];
    if ((((((local_a0 == lVar1) && (local_98 == lVar2)) ||
          ((local_90 == lVar1 && (local_88 == lVar2)))) ||
         ((local_80 == lVar1 && (local_78 == lVar2)))) ||
        ((local_70 == lVar1 && (local_68 == lVar2)))) ||
       ((((local_60 == lVar1 && (local_58 == lVar2)) || ((local_50 == lVar1 && (local_48 == lVar2)))
         ) || ((local_40 == lVar1 && (local_38 == lVar2)))))) {
      bVar3 = true;
    }
    else {
      bVar3 = local_30 == lVar1 && lStack_28 == lVar2;
    }
  }
  return bVar3;
}


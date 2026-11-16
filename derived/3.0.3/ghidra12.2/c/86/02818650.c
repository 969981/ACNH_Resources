
bool FUN_02818650(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
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
  uint local_4;
  
  if (7 < param_2) {
    return false;
  }
  plVar3 = (long *)(param_1 + (ulong)param_2 * 0x48);
  if (*plVar3 != 0 || plVar3[1] != 0) {
    local_4 = 0;
    nn::account::ListAllUsers((int *)&local_4,(Uid *)&local_a0,8);
    if ((int)local_4 < 1) {
      return true;
    }
    lVar1 = *plVar3;
    lVar2 = plVar3[1];
    if ((lVar1 != local_a0) || (lVar2 != local_98)) {
      if (local_4 == 1) {
        return true;
      }
      if ((lVar1 == local_90) && (lVar2 == local_88)) {
        return local_4 < 2;
      }
      if (local_4 == 2) {
        return true;
      }
      if ((lVar1 == local_80) && (lVar2 == local_78)) {
        return local_4 < 3;
      }
      if (local_4 == 3) {
        return true;
      }
      if ((lVar1 == local_70) && (lVar2 == local_68)) {
        return local_4 < 4;
      }
      if (local_4 == 4) {
        return true;
      }
      if ((lVar1 == local_60) && (lVar2 == local_58)) {
        return local_4 < 5;
      }
      if (local_4 == 5) {
        return true;
      }
      if ((lVar1 == local_50) && (lVar2 == local_48)) {
        return local_4 < 6;
      }
      if (local_4 == 6) {
        return true;
      }
      if ((lVar1 == local_40) && (lVar2 == local_38)) {
        return local_4 < 7;
      }
      if (local_4 == 7) {
        return true;
      }
      return (lVar1 != local_30 || lVar2 != lStack_28) || local_4 < 8;
    }
  }
  return false;
}


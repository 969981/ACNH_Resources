
/* WARNING: Removing unreachable block (ram,0x013557fc) */
/* WARNING: Removing unreachable block (ram,0x0135580c) */

void FUN_01355690(int param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  int local_70 [2];
  undefined8 *local_68;
  uint local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined2 local_50;
  undefined *local_48;
  undefined1 local_40;
  undefined4 local_3c;
  undefined8 *local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined2 local_24;
  
  local_48 = (undefined *)CONCAT44(local_48._4_4_,param_1);
  if (DAT_05612514 == param_1) {
    lVar3 = 0;
  }
  else if (DAT_0561253c == param_1) {
    lVar3 = 1;
  }
  else if (DAT_05612564 == param_1) {
    lVar3 = 2;
  }
  else if (DAT_0561258c == param_1) {
    lVar3 = 3;
  }
  else if (DAT_056125b4 == param_1) {
    lVar3 = 4;
  }
  else if (DAT_056125dc == param_1) {
    lVar3 = 5;
  }
  else if (DAT_05612604 == param_1) {
    lVar3 = 6;
  }
  else if (DAT_0561262c == param_1) {
    lVar3 = 7;
  }
  else {
    if (DAT_05612654 != param_1) {
      return;
    }
    lVar3 = 8;
  }
  if (((code *)(&DAT_05612530)[lVar3 * 5] != (code *)0x0) &&
     (uVar2 = (*(code *)(&DAT_05612530)[lVar3 * 5])(), (uVar2 & 1) == 0)) {
    return;
  }
  lVar3 = FUN_02acf1d8(param_1);
  if (lVar3 == 0) {
    local_60 = 0;
  }
  else {
    local_60 = (uint)*(byte *)(lVar3 + 8);
    if (*(byte *)(lVar3 + 8) != 0) {
      local_60 = *(uint *)(lVar3 + 0x18);
      uStack_5c = *(undefined4 *)(lVar3 + 0x1c);
      goto LAB_013557e4;
    }
  }
  uStack_5c = 0;
LAB_013557e4:
  puVar1 = &DAT_05636dd8;
  if (*(long *)(DAT_0519d040 + 0x1f8) != 0) {
    puVar1 = (undefined8 *)(*(long *)(DAT_0519d040 + 0x1f8) + 0x148);
  }
  if (puVar1[1] != 0) {
    local_40 = 0;
    local_48 = PTR_DAT_04bc4608 + 0x10;
    local_3c = 0;
    local_28 = 0;
    local_24 = 0;
    local_50 = 0;
    local_58 = 0;
    local_68 = &DAT_048f9750;
    local_38 = &DAT_048f9750;
    uStack_30 = 0;
    local_70[0] = param_1;
    FUN_02a8f958(&local_48,local_70);
    FUN_02a59250(puVar1,&local_48);
  }
  return;
}


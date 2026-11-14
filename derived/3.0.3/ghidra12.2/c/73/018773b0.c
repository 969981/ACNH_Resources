
uint FUN_018773b0(uint param_1,uint param_2,char *param_3)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  undefined *local_88;
  uint local_80;
  uint local_7c;
  undefined **local_78;
  undefined **local_70;
  undefined *local_68;
  int local_60;
  int local_5c;
  undefined *local_58;
  undefined *puStack_50;
  int local_48;
  int iStack_44;
  undefined *local_40;
  int local_38;
  int iStack_34;
  
  puVar4 = PTR_DAT_04bb2010;
  local_88 = PTR_DAT_04bb2010 + 0x10;
  local_80 = param_1;
  local_7c = param_2;
  uVar6 = FUN_01a1d760(&local_88,0);
  if ((uVar6 & 1) == 0) {
    if ((*param_3 != '\0') && (DAT_04c487d4 != -1)) {
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((((*puVar2 >> 0x1a & 1) != 0) && ((*puVar2 >> 1 & 1) != 0)) && (DAT_05abff60 != 0)) {
        uVar5 = 0;
        if (((int)local_80 < *(int *)(DAT_05abff60 + 0x28)) ||
           (*(int *)(DAT_05abff60 + 0x38) < (int)local_80)) goto LAB_01877588;
        if (((int)local_7c < *(int *)(DAT_05abff60 + 0x2c)) ||
           (*(int *)(DAT_05abff60 + 0x3c) < (int)local_7c)) goto LAB_018773ec;
      }
    }
    local_68 = puVar4 + 0x10;
    local_78 = &puStack_50;
    local_70 = &local_40;
    local_58 = PTR_DAT_04bbc1a0 + 0x10;
    iVar3 = local_80 - ((local_80 & 0x80000001) == 1);
    local_5c = local_7c - ((local_7c & 0x80000001) == 1);
    local_38 = iVar3 + 1;
    iStack_34 = local_5c + 1;
    iVar1 = local_5c + 2;
    local_60 = iVar3;
    puStack_50 = local_68;
    local_48 = iVar3;
    iStack_44 = local_5c;
    local_40 = local_68;
    do {
      uVar5 = FUN_01a1da00(&local_68);
      if ((uVar5 & 1) != 0) break;
      if (local_60 < *(int *)(local_70 + 1)) {
        local_60 = local_60 + 1;
      }
      else {
        local_5c = local_5c + 1;
        local_60 = *(int *)(local_78 + 1);
      }
    } while (iVar3 != local_60 || iVar1 != local_5c);
    uVar5 = uVar5 ^ 1;
  }
  else {
LAB_018773ec:
    uVar5 = 0;
  }
LAB_01877588:
  return uVar5 & 1;
}



undefined8 FUN_034e7e80(long param_1,uint *param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  byte local_50 [4];
  undefined1 auStack_4c [4];
  undefined *local_48;
  char *local_40;
  undefined4 local_38;
  char local_34 [7];
  undefined1 local_2d;
  char local_24 [4];
  
  param_1 = param_1 + 8;
  *param_2 = 0xffffffff;
  uVar4 = FUN_01d77c78(param_1);
  if ((uVar4 & 1) == 0) {
    return 4;
  }
  local_24[0] = '\0';
  iVar3 = FUN_01d78784(param_1,local_24);
  if ((iVar3 == 0) && (local_24[0] != '\0')) {
    local_2d = 0;
    local_38 = 8;
    local_40 = local_34;
    local_34[0] = '\0';
    local_48 = PTR_DAT_04bb3768 + 0x10;
    uVar5 = FUN_01d7908c(param_1,&local_48,auStack_4c);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    (**(code **)(local_48 + 0x18))(&local_48);
    (**(code **)(local_48 + 0x18))(&local_48);
    if (local_40 != "kpp") {
      uVar4 = 0;
      bVar2 = true;
      do {
        if (local_40[uVar4] != (&DAT_0406d3be)[uVar4]) break;
        if (local_40[uVar4] == '\0') {
          if (bVar2) goto LAB_034e8020;
          break;
        }
        bVar2 = uVar4 < 0x80000;
        uVar4 = uVar4 + 1;
      } while (uVar4 != 0x80001);
      (**(code **)(local_48 + 0x18))(&local_48);
      (**(code **)(local_48 + 0x18))(&local_48);
      if (local_40 != "hgs") {
        if (*local_40 != 'h') {
LAB_034e803c:
          local_50[0] = 0;
          uVar5 = FUN_01d78fb0(param_1,local_50);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          uVar6 = (uint)local_50[0];
          goto LAB_034e8028;
        }
        lVar7 = 0;
        do {
          if ((lVar7 == 0x80000) || (lVar1 = lVar7 + 1, local_40[lVar1] != (&DAT_04076981)[lVar7]))
          goto LAB_034e803c;
          lVar7 = lVar7 + 1;
        } while (local_40[lVar1] != '\0');
      }
    }
LAB_034e8020:
    uVar5 = 0;
    uVar6 = 2;
  }
  else {
    local_48 = (undefined *)CONCAT44(local_48._4_4_,5);
    uVar5 = FUN_01d79ca4(param_1,&local_48);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    uVar6 = 3;
    if ((int)local_48 == 5) {
      uVar6 = 0xffffffff;
    }
  }
LAB_034e8028:
  *param_2 = uVar6;
  return uVar5;
}


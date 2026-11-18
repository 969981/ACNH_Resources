
undefined8 FUN_03770550(long *param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  bool bVar3;
  ulong uVar4;
  undefined *local_70;
  undefined1 *local_68;
  undefined4 local_60;
  undefined1 local_5c [7];
  undefined1 local_55;
  undefined *local_50;
  undefined1 *local_48;
  undefined4 local_40;
  undefined1 local_3c [7];
  undefined1 local_35;
  
  if ((DAT_0545a5e4 >> 1 & 1) == 0) {
    return 0;
  }
  local_35 = 0;
  local_40 = 8;
  local_3c[0] = 0;
  local_48 = local_3c;
  puVar1 = PTR_DAT_04bb3768 + 0x10;
  local_50 = puVar1;
  FUN_038d1270(&local_50,"-----");
  if ((ulong)DAT_0545a400 < 0x23) {
    FUN_038d1270(&local_50,"%s%02d",
                 *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)DAT_0545a400 * 8 + 0xb0),DAT_0545a401);
  }
  local_68 = local_5c;
  local_60 = 8;
  local_55 = 0;
  local_5c[0] = 0;
  local_70 = puVar1;
  FUN_038d1270(&local_70,"-----");
  if ((ulong)DAT_0545a403 < 0x23) {
    FUN_038d1270(&local_70,"%s%02d",
                 *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)DAT_0545a403 * 8 + 0xb0),DAT_0545a404);
  }
  (**(code **)(local_50 + 0x18))(&local_50);
  (**(code **)(local_50 + 0x18))(&local_50);
  puVar2 = local_48;
  (**(code **)(*param_1 + 0x18))(param_1);
  if (puVar2 != (undefined1 *)param_1[1]) {
    uVar4 = 0;
    bVar3 = true;
    do {
      if (local_48[uVar4] != ((undefined1 *)param_1[1])[uVar4]) break;
      if (local_48[uVar4] == '\0') {
        if (bVar3) {
          return 1;
        }
        break;
      }
      bVar3 = uVar4 < 0x80000;
      uVar4 = uVar4 + 1;
    } while (uVar4 != 0x80001);
    (**(code **)(local_70 + 0x18))(&local_70);
    (**(code **)(local_70 + 0x18))(&local_70);
    puVar2 = local_68;
    (**(code **)(*param_1 + 0x18))(param_1);
    if (puVar2 != (undefined1 *)param_1[1]) {
      uVar4 = 0;
      bVar3 = true;
      while( true ) {
        if (local_68[uVar4] != ((undefined1 *)param_1[1])[uVar4]) {
          return 0;
        }
        if (local_68[uVar4] == '\0') break;
        bVar3 = uVar4 < 0x80000;
        uVar4 = uVar4 + 1;
        if (uVar4 == 0x80001) {
          return 0;
        }
      }
      if (bVar3) {
        return 1;
      }
      return 0;
    }
  }
  return 1;
}


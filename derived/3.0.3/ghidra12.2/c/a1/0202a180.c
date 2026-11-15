
void FUN_0202a180(undefined8 param_1)

{
  int iVar1;
  undefined1 *__src;
  undefined1 *__dest;
  long lVar2;
  long local_1d0;
  undefined1 *local_1c8;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined8 local_124;
  undefined8 local_11c;
  undefined8 local_114;
  undefined *local_108;
  undefined1 *local_100;
  int local_f8;
  undefined1 local_f4 [127];
  undefined1 local_75;
  undefined4 local_70;
  undefined2 local_6c;
  undefined8 local_68;
  undefined *local_60;
  char *local_58;
  undefined4 local_50;
  char local_4c [7];
  undefined1 local_45;
  
  local_45 = 0;
  local_50 = 8;
  local_4c[0] = '\0';
  local_58 = local_4c;
  local_60 = PTR_DAT_04bb3768 + 0x10;
  FUN_021d62e0(&local_60,0);
  local_128 = 0;
  local_138 = 0xa00000000;
  uStack_130 = 0;
  local_124 = 0x3f800000;
  local_100 = local_f4;
  local_f8 = 0x80;
  local_75 = 0;
  local_108 = PTR_DAT_04bb2d88 + 0x10;
  local_f4[0] = 0;
  local_68 = 0;
  local_6c = 0;
  local_114 = 0;
  local_70 = 7;
  if (*local_58 != '\0') {
    local_11c = 0x400;
    (**(code **)(local_60 + 0x18))(&local_60);
    FUN_0074fda4(&local_1d0,"%s/AIC:Demo/AIF:AI_NPC_Invisible",local_58);
    __dest = local_100;
    (**(code **)(local_1d0 + 0x18))(&local_1d0);
    __src = local_1c8;
    if (__dest != local_1c8) {
      (**(code **)(local_1d0 + 0x18))(&local_1d0);
      lVar2 = 0;
      do {
        if (local_1c8[lVar2] == '\0') goto LAB_0202a2dc;
        if (local_1c8[lVar2 + 1] == '\0') {
          lVar2 = lVar2 + 1;
          goto LAB_0202a2dc;
        }
        if (local_1c8[lVar2 + 2] == '\0') {
          lVar2 = lVar2 + 2;
          goto LAB_0202a2dc;
        }
        lVar2 = lVar2 + 3;
      } while (lVar2 != 0x80001);
      lVar2 = 0;
LAB_0202a2dc:
      iVar1 = (int)lVar2;
      if (local_f8 <= (int)lVar2) {
        iVar1 = local_f8 + -1;
      }
      memcpy(__dest,__src,(long)iVar1);
      __dest[iVar1] = 0;
    }
    local_114 = CONCAT44(1,(undefined4)local_114);
    FUN_02030e80(param_1,&local_138);
  }
  return;
}


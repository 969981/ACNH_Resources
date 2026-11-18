
void FUN_0349ac40(long param_1,ushort param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  void *__dest;
  void *__src;
  undefined *local_d8;
  undefined1 *local_d0;
  undefined4 local_c8;
  undefined1 local_c4 [127];
  undefined1 local_45;
  
  plVar1 = (long *)(param_1 + 0x1cfd8);
  if ((param_2 == 0xffff) || (param_2 == 99)) {
    uVar3 = DAT_057603f0;
  }
  else {
    local_d8 = PTR_DAT_04bcacf0 + 0x10;
    if ((uint)param_2 - (uint)DAT_05abc378 < DAT_05abc358) {
      local_d0 = *(undefined1 **)
                  (DAT_05abc360 + (long)(int)((uint)param_2 - (uint)DAT_05abc378) * 8);
    }
    else {
      local_d0 = (undefined1 *)0x0;
    }
    uVar3 = FUN_03741df0(&local_d8);
  }
  local_45 = 0;
  local_c8 = 0x80;
  local_d0 = local_c4;
  local_c4[0] = 0;
  local_d8 = PTR_DAT_04bb2d88 + 0x10;
  if (((DAT_05ac1788 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_05ac1788), iVar4 != 0)) {
    DAT_05ac1783 = 0;
    DAT_05ac1760 = 0x20;
    DAT_05ac1758 = &DAT_05ac1764;
    DAT_05ac1782 = 0;
    DAT_05ac1764._0_1_ = s_Layout_WherearenIslandsSeason__0406ed59[0];
    DAT_05ac1764._1_1_ = s_Layout_WherearenIslandsSeason__0406ed59[1];
    DAT_05ac1764._2_1_ = s_Layout_WherearenIslandsSeason__0406ed59[2];
    DAT_05ac1764._3_1_ = s_Layout_WherearenIslandsSeason__0406ed59[3];
    DAT_05ac1764._4_1_ = s_Layout_WherearenIslandsSeason__0406ed59[4];
    DAT_05ac1764._5_1_ = s_Layout_WherearenIslandsSeason__0406ed59[5];
    DAT_05ac1764._6_1_ = s_Layout_WherearenIslandsSeason__0406ed59[6];
    DAT_05ac1764._7_1_ = s_Layout_WherearenIslandsSeason__0406ed59[7];
    DAT_05ac176c._0_1_ = s_Layout_WherearenIslandsSeason__0406ed59[8];
    DAT_05ac176c._1_1_ = s_Layout_WherearenIslandsSeason__0406ed59[9];
    DAT_05ac176c._2_1_ = s_Layout_WherearenIslandsSeason__0406ed59[10];
    DAT_05ac176c._3_1_ = s_Layout_WherearenIslandsSeason__0406ed59[0xb];
    DAT_05ac176c._4_1_ = s_Layout_WherearenIslandsSeason__0406ed59[0xc];
    DAT_05ac176c._5_1_ = s_Layout_WherearenIslandsSeason__0406ed59[0xd];
    DAT_05ac176c._6_1_ = s_Layout_WherearenIslandsSeason__0406ed59[0xe];
    DAT_05ac176c._7_1_ = s_Layout_WherearenIslandsSeason__0406ed59[0xf];
    DAT_05ac1774._0_1_ = s_Layout_WherearenIslandsSeason__0406ed59[0x10];
    DAT_05ac1774._1_1_ = s_Layout_WherearenIslandsSeason__0406ed59[0x11];
    DAT_05ac1774._2_1_ = s_Layout_WherearenIslandsSeason__0406ed59[0x12];
    DAT_05ac1774._3_1_ = s_Layout_WherearenIslandsSeason__0406ed59[0x13];
    DAT_05ac1774._4_1_ = s_Layout_WherearenIslandsSeason__0406ed59[0x14];
    DAT_05ac1774._5_1_ = s_Layout_WherearenIslandsSeason__0406ed59[0x15];
    DAT_05ac1774._6_1_ = s_Layout_WherearenIslandsSeason__0406ed59[0x16];
    DAT_05ac1774._7_1_ = s_Layout_WherearenIslandsSeason__0406ed59[0x17];
    uRam0000000005ac177c._0_1_ = s_Layout_WherearenIslandsSeason__0406ed59[0x18];
    uRam0000000005ac177c._1_1_ = s_Layout_WherearenIslandsSeason__0406ed59[0x19];
    uRam0000000005ac177c._2_1_ = s_Layout_WherearenIslandsSeason__0406ed59[0x1a];
    uRam0000000005ac177c._3_1_ = s_Layout_WherearenIslandsSeason__0406ed59[0x1b];
    uRam0000000005ac177c._4_1_ = s_Layout_WherearenIslandsSeason__0406ed59[0x1c];
    uRam0000000005ac177c._5_1_ = s_Layout_WherearenIslandsSeason__0406ed59[0x1d];
    DAT_05ac1750 = PTR_DAT_04bb2028 + 0x10;
    __cxa_guard_release(&DAT_05ac1788);
  }
  (**(code **)(DAT_05ac1750 + 0x18))(&DAT_05ac1750);
  FUN_038d1270(&local_d8,"%s%03u_%02u",DAT_05ac1758,param_2,uVar3);
  (**(code **)(local_d8 + 0x18))(&local_d8);
  FUN_038d1270(plVar1,&DAT_0409e973,local_d0);
  if ((*(byte *)(param_1 + 0x1ce60) >> 1 & 1) == 0) {
    __dest = *(void **)(param_1 + 0x1cea8);
    (**(code **)(*plVar1 + 0x18))(plVar1);
    __src = *(void **)(param_1 + 0x1cfe0);
    if (__dest != __src) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
      lVar5 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x1cfe0) + lVar5) == '\0') goto LAB_0349ae04;
        lVar2 = *(long *)(param_1 + 0x1cfe0) + lVar5;
        if (*(char *)(lVar2 + 1) == '\0') {
          lVar5 = lVar5 + 1;
          goto LAB_0349ae04;
        }
        if (*(char *)(lVar2 + 2) == '\0') {
          lVar5 = lVar5 + 2;
          goto LAB_0349ae04;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      lVar5 = 0;
LAB_0349ae04:
      iVar4 = (int)lVar5;
      if (*(int *)(param_1 + 0x1ceb0) <= (int)lVar5) {
        iVar4 = *(int *)(param_1 + 0x1ceb0) + -1;
      }
      memcpy(__dest,__src,(long)iVar4);
      *(undefined1 *)((long)__dest + (long)iVar4) = 0;
    }
    *(undefined1 *)(param_1 + 0x1cf38) = 1;
    uVar3 = 2;
    *(undefined4 *)(param_1 + 0x1cf3c) = 2;
  }
  else {
    uVar3 = 1;
  }
  *(undefined4 *)(param_1 + 0x1d070) = uVar3;
  return;
}


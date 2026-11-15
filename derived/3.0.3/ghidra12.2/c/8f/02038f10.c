
void FUN_02038f10(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined1 *__src;
  undefined1 *__dest;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  char *__src_00;
  long *plVar7;
  long local_1d0;
  undefined1 *local_1c8;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined *local_108;
  undefined1 *local_100;
  int local_f8;
  undefined1 local_f4 [127];
  undefined1 local_75;
  undefined4 local_70;
  undefined2 local_6c;
  undefined8 local_68;
  undefined **local_60;
  char *local_58;
  int local_50;
  char local_4c [7];
  undefined1 local_45;
  
  local_45 = 0;
  pcVar6 = local_4c;
  local_50 = 8;
  local_4c[0] = '\0';
  local_60 = &PTR_LAB_04908da0;
  local_58 = pcVar6;
  if ((DAT_0545a430 != 0) &&
     (plVar7 = *(long **)(DAT_0545a438 + (long)(DAT_0545a430 + -1) * 8), *(char *)plVar7[1] != '\0')
     ) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
    __src_00 = (char *)plVar7[1];
    if (pcVar6 == __src_00) goto LAB_02039028;
    (**(code **)(*plVar7 + 0x18))(plVar7);
    lVar5 = 0;
    do {
      if (*(char *)(plVar7[1] + lVar5) == '\0') goto LAB_02038ffc;
      lVar1 = plVar7[1] + lVar5;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_02038ffc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_02038ffc;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_02038ffc:
    iVar2 = (int)lVar5;
    if (local_50 <= (int)lVar5) {
      iVar2 = local_50 + -1;
    }
    memcpy(pcVar6,__src_00,(long)iVar2);
    pcVar6 = pcVar6 + iVar2;
  }
  *pcVar6 = '\0';
LAB_02039028:
  if (*local_58 != '\0') {
    FUN_0376baa0(&local_60);
    uVar4 = FUN_0376f950();
    local_138 = CONCAT53(local_138._3_5_,0x80023);
    FUN_020fd3a0(&local_138,&local_60);
    uVar3 = FUN_021d7d60(&local_138);
    local_75 = 0;
    local_100 = local_f4;
    local_f8 = 0x80;
    local_f4[0] = 0;
    local_68 = 0;
    local_6c = 0;
    local_108 = PTR_DAT_04bb2d88 + 0x10;
    local_11c = 0;
    uStack_118 = 0;
    local_114 = 0;
    uStack_110 = 0;
    local_120 = 0x80000000;
    local_70 = 7;
    local_128 = 0x3f80000044228000;
    local_138 = 0xa00000000;
    uStack_130 = 0x43cf8000;
    (*(code *)local_60[3])(&local_60);
    pcVar6 = "WherearenMainField";
    if ((uVar4 & 1) == 0) {
      pcVar6 = "WherearenVisitor";
    }
    FUN_0074fda4(&local_1d0,"%s/AIC:%s/AIF:AI_NPC_WherearenVillager",local_58,pcVar6);
    __dest = local_100;
    (**(code **)(local_1d0 + 0x18))(&local_1d0);
    __src = local_1c8;
    if (__dest != local_1c8) {
      (**(code **)(local_1d0 + 0x18))(&local_1d0);
      lVar5 = 0;
      do {
        if (local_1c8[lVar5] == '\0') goto LAB_02039190;
        if (local_1c8[lVar5 + 1] == '\0') {
          lVar5 = lVar5 + 1;
          goto LAB_02039190;
        }
        if (local_1c8[lVar5 + 2] == '\0') {
          lVar5 = lVar5 + 2;
          goto LAB_02039190;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      lVar5 = 0;
LAB_02039190:
      iVar2 = (int)lVar5;
      if (local_f8 <= (int)lVar5) {
        iVar2 = local_f8 + -1;
      }
      memcpy(__dest,__src,(long)iVar2);
      __dest[iVar2] = 0;
    }
    uStack_118 = 0xffffffff;
    local_114 = 0xe;
    local_11c = uVar3;
    FUN_02030e80(param_1,&local_138);
  }
  return;
}


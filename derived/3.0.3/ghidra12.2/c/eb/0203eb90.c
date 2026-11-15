
void FUN_0203eb90(undefined8 param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  undefined1 *__dest;
  undefined4 uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined2 local_1e0;
  undefined1 uStack_1de;
  undefined1 uStack_1dd;
  undefined4 uStack_1dc;
  undefined1 *local_1d8;
  undefined *local_148;
  undefined1 *local_140;
  int local_138;
  undefined1 auStack_134 [7];
  undefined1 local_12d;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_114;
  undefined8 local_10c;
  undefined8 local_104;
  undefined *local_f8;
  undefined1 *local_f0;
  int local_e8;
  undefined1 local_e4 [127];
  undefined1 local_65;
  undefined4 local_60;
  undefined2 local_5c;
  undefined8 local_58;
  
  local_65 = 0;
  local_e4[0] = 0;
  local_114 = 0x3f800000;
  local_128 = 0xa00000000;
  local_120 = 0;
  local_f0 = local_e4;
  local_f8 = PTR_DAT_04bb2d88 + 0x10;
  local_10c = 0;
  local_104 = 0;
  local_e8 = 0x80;
  local_60 = 7;
  local_58 = 0;
  local_5c = 0;
  local_138 = 8;
  local_12d = 0;
  local_148 = PTR_DAT_04bb6a30 + 0x10;
  local_118 = 0;
  local_140 = auStack_134;
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar5 = (undefined1 *)param_2[1];
  if (auStack_134 != puVar5) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar4 = 0;
    do {
      if (*(char *)(param_2[1] + lVar4) == '\0') goto LAB_0203ecac;
      lVar1 = param_2[1] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0203ecac;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0203ecac;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0203ecac:
    iVar2 = (int)lVar4;
    if (local_138 <= (int)lVar4) {
      iVar2 = local_138 + -1;
    }
    memcpy(auStack_134,puVar5,(long)iVar2);
    auStack_134[iVar2] = 0;
  }
  local_148 = PTR_DAT_04bb3768 + 0x10;
  lVar4 = *(long *)PTR_DAT_04bb4138;
  if (lVar4 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    local_140[(long)local_138 + -1] = 0;
    uVar3 = FUN_006bd550(local_140,0);
    local_1e0 = (undefined2)uVar3;
    uStack_1de = (undefined1)((uint)uVar3 >> 0x10);
    uStack_1dd = (undefined1)((uint)uVar3 >> 0x18);
    lVar4 = FUN_0079e770(lVar4,&local_1e0);
    if (lVar4 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      local_1e0 = 0x23;
      uStack_1de = 8;
      FUN_020fd3a0(&local_1e0,&local_148);
      uVar3 = FUN_021d7d60(&local_1e0);
    }
  }
  local_10c = CONCAT44(0xffffffff,uVar3);
  local_120 = 0x43e60000;
  local_118 = 0x43d98000;
  local_114 = CONCAT44(0xc0000000,(undefined4)local_114);
  (**(code **)(*param_2 + 0x18))(param_2);
  FUN_0074fda4(&local_1e0,"%s/AIC:WherearenMainField/AIF:AI_NPC_Wherearen",param_2[1]);
  __dest = local_f0;
  (**(code **)(CONCAT44(uStack_1dc,CONCAT13(uStack_1dd,CONCAT12(uStack_1de,local_1e0))) + 0x18))
            (&local_1e0);
  puVar5 = local_1d8;
  if (__dest != local_1d8) {
    (**(code **)(CONCAT44(uStack_1dc,CONCAT13(uStack_1dd,CONCAT12(uStack_1de,local_1e0))) + 0x18))
              (&local_1e0);
    lVar4 = 0;
    do {
      if (local_1d8[lVar4] == '\0') goto LAB_0203ee1c;
      if (local_1d8[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0203ee1c;
      }
      if (local_1d8[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0203ee1c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0203ee1c:
    iVar2 = (int)lVar4;
    if (local_e8 <= (int)lVar4) {
      iVar2 = local_e8 + -1;
    }
    memcpy(__dest,puVar5,(long)iVar2);
    __dest[iVar2] = 0;
  }
  FUN_02030e80(param_1,&local_128);
  return;
}


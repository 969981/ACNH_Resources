
void FUN_020441a0(long param_1,long *param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  undefined1 *puVar7;
  undefined1 *__dest;
  long lVar8;
  byte *__src;
  undefined *local_1c8;
  long lStack_1c0;
  undefined4 local_1b8;
  undefined8 local_1b4;
  undefined4 local_1ac;
  undefined **local_1a8;
  undefined1 *local_1a0;
  int local_198;
  undefined1 local_194 [63];
  undefined1 local_155;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_134;
  undefined8 local_12c;
  undefined *local_120;
  undefined1 *local_118;
  int local_110;
  undefined1 local_10c [127];
  undefined1 local_8d;
  undefined4 local_88;
  undefined2 local_84;
  undefined8 local_80;
  undefined **local_78;
  byte *local_70;
  int local_68;
  byte local_64 [15];
  undefined1 local_55;
  
  local_68 = 0x10;
  local_55 = 0;
  local_78 = &PTR_LAB_04904ac8;
  local_70 = local_64;
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (byte *)param_2[1];
  if (local_64 != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar8 = 0;
    do {
      if (*(char *)(param_2[1] + lVar8) == '\0') goto LAB_0204426c;
      lVar1 = param_2[1] + lVar8;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_0204426c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_0204426c;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_0204426c:
    iVar5 = (int)lVar8;
    if (local_68 <= (int)lVar8) {
      iVar5 = local_68 + -1;
    }
    memcpy(local_64,__src,(long)iVar5);
    local_64[iVar5] = 0;
  }
  local_78 = (undefined **)(PTR_DAT_04bb2ab0 + 0x10);
  local_70[(long)local_68 + -1] = 0;
  bVar6 = *local_70;
  if (bVar6 != 0) {
    bVar3 = bVar6 - 0x20;
    if (0x19 < bVar6 - 0x61) {
      bVar3 = bVar6;
    }
    *local_70 = bVar3;
  }
  local_138 = 0;
  local_148 = 0;
  local_140 = 0x3f80000000000000;
  local_150 = 0xa00000000;
  local_118 = local_10c;
  local_110 = 0x80;
  local_8d = 0;
  local_10c[0] = 0;
  local_120 = PTR_DAT_04bb2d88 + 0x10;
  local_80 = 0;
  local_84 = 0;
  local_134 = 0;
  local_12c = 0;
  local_1a0 = local_194;
  local_155 = 0;
  local_88 = 7;
  local_198 = 0x40;
  local_194[0] = 0;
  local_1a8 = &PTR_LAB_048fb9f8;
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar8 = param_2[1];
  (*(code *)local_78[3])(&local_78);
  FUN_038d1270(&local_1a8,"%s/AIC:Special/AIF:AI_NPC_%s",lVar8,local_70);
  puVar7 = local_1a0;
  if ((param_3 & 1) != 0) {
    (*(code *)local_1a8[3])(&local_1a8);
    lVar8 = 0;
    do {
      if (local_1a0[lVar8] == '\0') goto LAB_020443ec;
      if (local_1a0[lVar8 + 1] == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_020443ec;
      }
      if (local_1a0[lVar8 + 2] == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_020443ec;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_020443ec:
    uVar2 = (uint)lVar8 & ((int)(uint)lVar8 >> 0x1f ^ 0xffffffffU);
    uVar4 = 6;
    if ((int)(local_198 - uVar2) < 7) {
      uVar4 = local_198 + ~uVar2;
    }
    if (0 < (int)uVar4) {
      memcpy(puVar7 + uVar2,"_Visit",(ulong)uVar4);
      puVar7[(ulong)uVar4 + (ulong)uVar2] = 0;
    }
  }
  __dest = local_118;
  (*(code *)local_1a8[3])(&local_1a8);
  puVar7 = local_1a0;
  if (__dest != local_1a0) {
    (*(code *)local_1a8[3])(&local_1a8);
    lVar8 = 0;
    do {
      if (local_1a0[lVar8] == '\0') goto LAB_020444ac;
      if (local_1a0[lVar8 + 1] == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_020444ac;
      }
      if (local_1a0[lVar8 + 2] == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_020444ac;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_020444ac:
    iVar5 = (int)lVar8;
    if (local_110 <= (int)lVar8) {
      iVar5 = local_110 + -1;
    }
    memcpy(__dest,puVar7,(long)iVar5);
    __dest[iVar5] = 0;
  }
  local_1b8 = 0;
  (**(code **)(*param_2 + 0x18))(param_2);
  lStack_1c0 = param_2[1];
  local_1c8 = PTR_DAT_04bb2020 + 0x10;
  FUN_0203e280(param_1,&local_1c8,&local_1b4,&local_1b8);
  local_148 = local_1b4;
  local_140 = CONCAT44(local_140._4_4_,local_1ac);
  local_138 = local_1b8;
  FUN_0203e0f0(param_1 + 0x11058,&local_150);
  return;
}



undefined8 FUN_00b01450(long param_1)

{
  ulong uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  char *__dest;
  char *pcVar8;
  undefined *local_78;
  char *local_70;
  undefined4 local_68;
  undefined7 local_64;
  char cStack_5d;
  undefined3 uStack_5c;
  uint uStack_59;
  char cStack_55;
  undefined3 uStack_54;
  undefined1 local_51;
  undefined1 local_45;
  undefined4 local_3c;
  undefined8 local_38;
  
  lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x3b0);
  puVar3 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x60);
  if (puVar3 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar3 = &DAT_05240280;
    }
    else {
      puVar3 = &DAT_05240280;
    }
  }
  local_3c = *(undefined4 *)(*(long *)(param_1 + 8) + 0x230);
  iVar2 = *(int *)(param_1 + 0xae3c);
  if (iVar2 == 2) {
    local_45 = 0;
    local_68 = 0x20;
    uStack_59 = uStack_59 & 0xffffff00;
    local_70 = (char *)&local_64;
    local_64 = s_MaReNodding_040c47d2._0_7_;
    cStack_5d = s_MaReNodding_040c47d2[7];
    _cStack_5d = CONCAT31(0x676e69,cStack_5d);
    local_38 = local_38 & 0xffffffff;
    local_78 = PTR_DAT_04bb2028 + 0x10;
    if (puVar3[0x227] != 0) {
      lVar4 = *(long *)(puVar3[0x227] + 0x88);
      plVar7 = (long *)(lVar4 + 0x60);
      (**(code **)(*plVar7 + 0x18))(plVar7);
      (**(code **)(*plVar7 + 0x18))(plVar7);
      pcVar8 = *(char **)(lVar4 + 0x68);
      (**(code **)(local_78 + 0x18))(&local_78);
      if (pcVar8 == local_70) goto LAB_00b01808;
      pcVar8 = *(char **)(lVar4 + 0x68);
      if (*pcVar8 == *local_70) {
        if (*pcVar8 == '\0') goto LAB_00b01808;
        uVar1 = 0;
        do {
          uVar5 = uVar1;
          if ((uVar5 == 0x80000) || (pcVar8[uVar5 + 1] != local_70[uVar5 + 1])) goto LAB_00b017dc;
          if (pcVar8[uVar5 + 1] == '\0') goto LAB_00b017d4;
          if (pcVar8[uVar5 + 2] != local_70[uVar5 + 2]) goto LAB_00b017dc;
          uVar1 = uVar5 + 2;
        } while (pcVar8[uVar5 + 2] != '\0');
        uVar5 = uVar5 + 1;
LAB_00b017d4:
        if (uVar5 < 0x80000) goto LAB_00b01808;
      }
    }
LAB_00b017dc:
    if ((*(int *)(lVar6 + 0x378) == 0xd) || (*(int *)(lVar6 + 0x360) == 0xd)) goto LAB_00b01808;
    local_38 = 0;
    FUN_01e5a930(0x40000000,lVar6,0xd,PTR_DAT_04bb2150,(long)&local_38 + 4,&local_38,
                 PTR_DAT_04bc1600,6);
    __dest = *(char **)(lVar6 + 0x3b8);
    (**(code **)(local_78 + 0x18))(&local_78);
    pcVar8 = local_70;
    if (__dest == local_70) goto LAB_00b01944;
    (**(code **)(local_78 + 0x18))(&local_78);
    lVar4 = 0;
    do {
      if (local_70[lVar4] == '\0') goto LAB_00b0191c;
      if (local_70[lVar4 + 1] == '\0') goto LAB_00b01910;
      if (local_70[lVar4 + 2] == '\0') goto LAB_00b01918;
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
  }
  else {
    if (iVar2 != 0) {
      return 0;
    }
    local_45 = 0;
    local_51 = 0;
    local_68 = 0x20;
    local_64 = s_NpcConversationTalk_0406708a._0_7_;
    cStack_5d = s_NpcConversationTalk_0406708a[7];
    uStack_5c = s_NpcConversationTalk_0406708a._8_3_;
    uStack_59 = s_NpcConversationTalk_0406708a._11_4_;
    _cStack_55 = CONCAT31(0x6b6c61,s_NpcConversationTalk_0406708a[0xf]);
    local_70 = (char *)&local_64;
    local_38 = local_38 & 0xffffffff;
    local_78 = PTR_DAT_04bb2028 + 0x10;
    if (puVar3[0x227] != 0) {
      lVar4 = *(long *)(puVar3[0x227] + 0x88);
      plVar7 = (long *)(lVar4 + 0x60);
      (**(code **)(*plVar7 + 0x18))(plVar7);
      (**(code **)(*plVar7 + 0x18))(plVar7);
      pcVar8 = *(char **)(lVar4 + 0x68);
      (**(code **)(local_78 + 0x18))(&local_78);
      if (pcVar8 == local_70) goto LAB_00b01808;
      pcVar8 = *(char **)(lVar4 + 0x68);
      if (*pcVar8 == *local_70) {
        if (*pcVar8 == '\0') goto LAB_00b01808;
        uVar1 = 0;
        do {
          uVar5 = uVar1;
          if ((uVar5 == 0x80000) || (pcVar8[uVar5 + 1] != local_70[uVar5 + 1])) goto LAB_00b015e8;
          if (pcVar8[uVar5 + 1] == '\0') goto LAB_00b015e0;
          if (pcVar8[uVar5 + 2] != local_70[uVar5 + 2]) goto LAB_00b015e8;
          uVar1 = uVar5 + 2;
        } while (pcVar8[uVar5 + 2] != '\0');
        uVar5 = uVar5 + 1;
LAB_00b015e0:
        if (uVar5 < 0x80000) goto LAB_00b01808;
      }
    }
LAB_00b015e8:
    if ((*(int *)(lVar6 + 0x378) == 0xd) || (*(int *)(lVar6 + 0x360) == 0xd)) {
LAB_00b01808:
      if (*(int *)(lVar6 + 0x4b8) == 0) {
        return 0;
      }
      if (*(int *)(lVar6 + 0x378) == 0x23) {
        local_38 = 0;
        FUN_01e5a930(0x40000000,lVar6,0,PTR_DAT_04bb2150,(long)&local_38 + 4,&local_38,
                     PTR_DAT_04bc1600,6);
        *(int *)(param_1 + 0xae3c) = 5;
        FUN_020b4a90(*(undefined8 *)PTR_DAT_04bb3968,&local_3c);
        return 1;
      }
      return 0;
    }
    local_38 = 0;
    FUN_01e5a930(0x40000000,lVar6,0xd,PTR_DAT_04bb2150,(long)&local_38 + 4,&local_38,
                 PTR_DAT_04bc1600,6);
    __dest = *(char **)(lVar6 + 0x3b8);
    (**(code **)(local_78 + 0x18))(&local_78);
    pcVar8 = local_70;
    if (__dest == local_70) goto LAB_00b01944;
    (**(code **)(local_78 + 0x18))(&local_78);
    lVar4 = 0;
    do {
      if (local_70[lVar4] == '\0') goto LAB_00b0191c;
      if (local_70[lVar4 + 1] == '\0') goto LAB_00b01910;
      if (local_70[lVar4 + 2] == '\0') goto LAB_00b01918;
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
  }
  lVar4 = 0;
LAB_00b0191c:
  iVar2 = (int)lVar4;
  if (*(int *)(lVar6 + 0x3c0) <= (int)lVar4) {
    iVar2 = *(int *)(lVar6 + 0x3c0) + -1;
  }
  memcpy(__dest,pcVar8,(long)iVar2);
  __dest[iVar2] = '\0';
LAB_00b01944:
  *(undefined4 *)(lVar6 + 0x3a0) = 0;
  *(undefined1 *)(lVar6 + 0x410) = 1;
  return 0;
LAB_00b01910:
  lVar4 = lVar4 + 1;
  goto LAB_00b0191c;
LAB_00b01918:
  lVar4 = lVar4 + 2;
  goto LAB_00b0191c;
}


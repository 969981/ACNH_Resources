
/* WARNING: Removing unreachable block (ram,0x01ee2cd0) */

void FUN_01ee25a0(long param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  undefined8 *puVar12;
  long *plVar13;
  char *pcVar14;
  undefined *local_70;
  char *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined3 uStack_4c;
  undefined1 local_49;
  undefined1 local_3d;
  undefined8 local_38;
  
  piVar1 = (int *)(param_1 + 0x787c);
  iVar5 = *(int *)(param_1 + 0xae3c);
  if (iVar5 == 3) {
    lVar7 = *(long *)(param_1 + 0x10);
    if (*(int *)(lVar7 + 0x360) == 0xd) {
      iVar5 = *piVar1 + -1;
      if (*piVar1 < 1) {
        local_60 = 0;
        uStack_5c = 0;
        uStack_58 = 0;
        uStack_54 = 0;
        puVar12 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x60);
        local_70 = (undefined *)0x0;
        local_68 = (char *)0x0;
        if (puVar12 == (undefined8 *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar5 = __cxa_guard_acquire(&DAT_052461c0);
            puVar12 = &DAT_05240280;
            if (iVar5 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
          }
          else {
            puVar12 = &DAT_05240280;
          }
        }
        if (puVar12[0x227] == 0) {
          return;
        }
        uVar2 = *(uint *)(puVar12 + 0x2d3) >> 1 & 1;
        local_38 = CONCAT44(0x10,uVar2);
        uVar6 = FUN_03850a90(puVar12[0x227],0x10,&local_70,uVar2);
        if ((uVar6 & 1) == 0) {
          return;
        }
        if (CONCAT44(uStack_54,uStack_58) == 0) {
          iVar5 = 1;
        }
        else {
          iVar5 = FUN_03ec4c28(CONCAT44(uStack_5c,local_60),CONCAT44(uStack_54,uStack_58),0);
          if (iVar5 == 0) {
            local_38 = CONCAT44(*(undefined4 *)(*(long *)(param_1 + 8) + 0x230),(uint)local_38);
            FUN_020b5060(*(undefined8 *)PTR_DAT_04bb3968,(long)&local_38 + 4);
            return;
          }
        }
        *piVar1 = iVar5;
        return;
      }
      if (iVar5 != 0) {
        *piVar1 = iVar5;
        return;
      }
      lVar9 = *(long *)PTR_DAT_04bb3968;
      lVar7 = *(long *)(lVar9 + 0x2f50);
      if (lVar7 == lVar9 + 0x2f48) {
        return;
      }
      lVar10 = lVar7 + -0xe0;
      iVar5 = *(int *)(*(long *)(param_1 + 8) + 0x230);
      do {
        do {
          lVar10 = *(long *)(lVar10 + 8);
          if ((int *)(lVar10 + -0x10) == (int *)(lVar7 + -0xf0)) goto LAB_01ee27a0;
        } while (*(int *)(lVar10 + -0x10) != iVar5);
        *(undefined4 *)(lVar10 + -0xc) = 4;
LAB_01ee27a0:
        lVar7 = *(long *)(lVar7 + 8);
        lVar10 = lVar7 + -0xe0;
        if (lVar10 == lVar9 + 0x2e68) {
          return;
        }
      } while( true );
    }
    lVar9 = *(long *)(param_1 + 8);
    local_70 = (undefined *)((ulong)local_70 & 0xffffffff00000000);
    local_38 = (ulong)(uint)local_38;
    uVar3 = *(uint *)(lVar9 + 0x294);
    uVar2 = *(uint *)(lVar9 + 0x288) ^ *(uint *)(lVar9 + 0x288) << 0xb;
    *(undefined4 *)(lVar9 + 0x288) = *(undefined4 *)(lVar9 + 0x28c);
    uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
    uVar4 = *(undefined4 *)(lVar9 + 0x290);
    *(uint *)(lVar9 + 0x290) = uVar3;
    *(uint *)(lVar9 + 0x294) = uVar2;
    *(undefined4 *)(lVar9 + 0x28c) = uVar4;
    iVar5 = (int)((ulong)uVar2 + (ulong)uVar2 * 2 >> 0x20);
    pcVar14 = "NpcTalkEh";
    if (iVar5 != 1) {
      pcVar14 = "NpcTalkAha";
    }
    pcVar11 = "NpcTalkShocked";
    if (iVar5 != 0) {
      pcVar11 = pcVar14;
    }
    FUN_01e5a930(0x40000000,lVar7,0xd,PTR_DAT_04bb2150,&local_70,(long)&local_38 + 4,
                 PTR_DAT_04bc1600,6);
    pcVar14 = *(char **)(lVar7 + 0x3b8);
    if (pcVar14 != pcVar11) {
      lVar9 = 0;
      do {
        if (pcVar11[lVar9] == '\0') goto LAB_01ee2c80;
        if (pcVar11[lVar9 + 1] == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_01ee2c80;
        }
        if (pcVar11[lVar9 + 2] == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_01ee2c80;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_01ee2c80:
      iVar5 = (int)lVar9;
      if (*(int *)(lVar7 + 0x3c0) <= (int)lVar9) {
        iVar5 = *(int *)(lVar7 + 0x3c0) + -1;
      }
      memcpy(pcVar14,pcVar11,(long)iVar5);
      pcVar14[iVar5] = '\0';
    }
    *(undefined4 *)(lVar7 + 0x3a0) = 0;
    *(undefined1 *)(lVar7 + 0x410) = 0;
    return;
  }
  if (iVar5 == 2) {
    local_3d = 0;
    local_60 = 0x20;
    local_68 = (char *)&uStack_5c;
    uStack_5c = s_MaReNodding_040c47d2._0_4_;
    uStack_58 = s_MaReNodding_040c47d2._4_4_;
    uStack_54 = 0x676e69;
    local_70 = PTR_DAT_04bb2028 + 0x10;
    puVar12 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x60);
    if (puVar12 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0);
        puVar12 = &DAT_05240280;
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar12 = &DAT_05240280;
      }
    }
    local_38 = (ulong)(uint)local_38;
    if (puVar12[0x227] == 0) {
LAB_01ee29d0:
      lVar7 = *(long *)(param_1 + 0x10);
    }
    else {
      lVar7 = *(long *)(puVar12[0x227] + 0x88);
      plVar13 = (long *)(lVar7 + 0x60);
      (**(code **)(*plVar13 + 0x18))(plVar13);
      (**(code **)(*plVar13 + 0x18))(plVar13);
      pcVar14 = *(char **)(lVar7 + 0x68);
      (**(code **)(local_70 + 0x18))(&local_70);
      if (pcVar14 == local_68) goto LAB_01ee2a74;
      pcVar14 = *(char **)(lVar7 + 0x68);
      if (*pcVar14 != *local_68) goto LAB_01ee29d0;
      if (*pcVar14 == '\0') goto LAB_01ee2a74;
      uVar6 = 0;
      do {
        uVar8 = uVar6;
        if ((uVar8 == 0x80000) || (pcVar14[uVar8 + 1] != local_68[uVar8 + 1])) goto LAB_01ee29d0;
        if (pcVar14[uVar8 + 1] == '\0') goto LAB_01ee2920;
        if (pcVar14[uVar8 + 2] != local_68[uVar8 + 2]) goto LAB_01ee29d0;
        uVar6 = uVar8 + 2;
      } while (pcVar14[uVar8 + 2] != '\0');
      uVar8 = uVar8 + 1;
LAB_01ee2920:
      lVar7 = *(long *)(param_1 + 0x10);
      if (uVar8 < 0x80000) goto LAB_01ee2a78;
    }
    local_38 = 0;
    FUN_01e5a930(0x40000000,lVar7,0xd,PTR_DAT_04bb2150,(long)&local_38 + 4,&local_38,
                 PTR_DAT_04bc1600,6);
    pcVar11 = *(char **)(lVar7 + 0x3b8);
    (**(code **)(local_70 + 0x18))(&local_70);
    pcVar14 = local_68;
    if (pcVar11 == local_68) goto LAB_01ee2c04;
    (**(code **)(local_70 + 0x18))(&local_70);
    lVar9 = 0;
    do {
      if (local_68[lVar9] == '\0') goto LAB_01ee2bdc;
      if (local_68[lVar9 + 1] == '\0') goto LAB_01ee2bd0;
      if (local_68[lVar9 + 2] == '\0') goto LAB_01ee2bd8;
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
  }
  else {
    if (iVar5 != 0) {
      return;
    }
    local_60 = 0x20;
    uStack_4c = 0x6b6c61;
    local_3d = 0;
    local_68 = (char *)&uStack_5c;
    uStack_5c = s_NpcConversationTalk_0406708a._0_4_;
    uStack_58 = s_NpcConversationTalk_0406708a._4_4_;
    uStack_54 = s_NpcConversationTalk_0406708a._8_4_;
    uStack_50 = s_NpcConversationTalk_0406708a._12_4_;
    local_49 = 0;
    puVar12 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x60);
    local_70 = PTR_DAT_04bb2028 + 0x10;
    if (puVar12 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0);
        puVar12 = &DAT_05240280;
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar12 = &DAT_05240280;
      }
    }
    local_38 = (ulong)(uint)local_38;
    if (puVar12[0x227] == 0) {
LAB_01ee2930:
      lVar7 = *(long *)(param_1 + 0x10);
    }
    else {
      lVar7 = *(long *)(puVar12[0x227] + 0x88);
      plVar13 = (long *)(lVar7 + 0x60);
      (**(code **)(*plVar13 + 0x18))(plVar13);
      (**(code **)(*plVar13 + 0x18))(plVar13);
      pcVar14 = *(char **)(lVar7 + 0x68);
      (**(code **)(local_70 + 0x18))(&local_70);
      if (pcVar14 == local_68) {
LAB_01ee2a74:
        lVar7 = *(long *)(param_1 + 0x10);
LAB_01ee2a78:
        if (*(int *)(lVar7 + 0x4b8) == 0) {
          return;
        }
        if (*(int *)(lVar7 + 0x378) == 0x23) {
          local_38 = 0;
          FUN_01e5a930(0x40000000,lVar7,0,PTR_DAT_04bb2150,(long)&local_38 + 4,&local_38,
                       PTR_DAT_04bc1600,6);
          *(undefined4 *)(param_1 + 0xae3c) = 5;
          local_38 = CONCAT44(*(undefined4 *)(*(long *)(param_1 + 8) + 0x230),(uint)local_38);
          FUN_020b4a90(*(undefined8 *)PTR_DAT_04bb3968,(long)&local_38 + 4);
          return;
        }
        return;
      }
      pcVar14 = *(char **)(lVar7 + 0x68);
      if (*pcVar14 != *local_68) goto LAB_01ee2930;
      if (*pcVar14 == '\0') goto LAB_01ee2a74;
      uVar6 = 0;
      do {
        uVar8 = uVar6;
        if ((uVar8 == 0x80000) || (pcVar14[uVar8 + 1] != local_68[uVar8 + 1])) goto LAB_01ee2930;
        if (pcVar14[uVar8 + 1] == '\0') goto LAB_01ee2724;
        if (pcVar14[uVar8 + 2] != local_68[uVar8 + 2]) goto LAB_01ee2930;
        uVar6 = uVar8 + 2;
      } while (pcVar14[uVar8 + 2] != '\0');
      uVar8 = uVar8 + 1;
LAB_01ee2724:
      lVar7 = *(long *)(param_1 + 0x10);
      if (uVar8 < 0x80000) goto LAB_01ee2a78;
    }
    local_38 = 0;
    FUN_01e5a930(0x40000000,lVar7,0xd,PTR_DAT_04bb2150,(long)&local_38 + 4,&local_38,
                 PTR_DAT_04bc1600,6);
    pcVar11 = *(char **)(lVar7 + 0x3b8);
    (**(code **)(local_70 + 0x18))(&local_70);
    pcVar14 = local_68;
    if (pcVar11 == local_68) goto LAB_01ee2c04;
    (**(code **)(local_70 + 0x18))(&local_70);
    lVar9 = 0;
    do {
      if (local_68[lVar9] == '\0') goto LAB_01ee2bdc;
      if (local_68[lVar9 + 1] == '\0') goto LAB_01ee2bd0;
      if (local_68[lVar9 + 2] == '\0') goto LAB_01ee2bd8;
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
  }
  lVar9 = 0;
LAB_01ee2bdc:
  iVar5 = (int)lVar9;
  if (*(int *)(lVar7 + 0x3c0) <= (int)lVar9) {
    iVar5 = *(int *)(lVar7 + 0x3c0) + -1;
  }
  memcpy(pcVar11,pcVar14,(long)iVar5);
  pcVar11[iVar5] = '\0';
LAB_01ee2c04:
  *(undefined4 *)(lVar7 + 0x3a0) = 0;
  *(undefined1 *)(lVar7 + 0x410) = 1;
  return;
LAB_01ee2bd0:
  lVar9 = lVar9 + 1;
  goto LAB_01ee2bdc;
LAB_01ee2bd8:
  lVar9 = lVar9 + 2;
  goto LAB_01ee2bdc;
}


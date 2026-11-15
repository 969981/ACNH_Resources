
void FUN_01fe5990(long *param_1,long param_2)

{
  undefined8 *__src;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined *puVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int iVar9;
  uint *puVar10;
  long lVar11;
  char cVar12;
  undefined8 *puVar13;
  int *piVar14;
  long lVar15;
  char local_19c [8];
  char local_194 [5];
  char cStack_18f;
  undefined2 uStack_18e;
  char local_18c [5];
  char cStack_187;
  char acStack_186 [2];
  char acStack_184 [5];
  char local_17f;
  undefined1 local_17e;
  undefined1 local_15d;
  undefined4 local_158;
  undefined2 local_154;
  undefined1 uStack_152;
  undefined1 uStack_151;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148 [8];
  undefined *local_140;
  undefined1 *puStack_138;
  undefined4 local_130;
  undefined1 local_12c [63];
  undefined1 local_ed;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined *local_d8;
  undefined8 *puStack_d0;
  undefined4 local_c8;
  undefined8 local_c4 [7];
  undefined1 local_85;
  undefined4 local_80;
  undefined2 local_7c;
  bool local_7a;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_6c [3];
  
  lVar15 = *param_1;
  uVar7 = FUN_021fc000(*(long *)(*(long *)(lVar15 + 8) + 0x68) + 0x278,
                       *(long *)(*(long *)(param_2 + 8) + 0x68) + 0x278);
  puVar8 = (undefined8 *)PTR_DAT_04bc23c8;
  puVar5 = PTR_DAT_04bc23c0;
  if ((uVar7 & 1) != 0) {
    return;
  }
  local_85 = 0;
  local_c4[0]._0_1_ = 0;
  local_80 = 0;
  uVar1 = *(undefined4 *)PTR_DAT_04bb3238;
  local_7a = false;
  local_c8 = 0x40;
  local_7c = 1;
  local_d8 = PTR_DAT_04bb2bc0 + 0x10;
  puStack_d0 = local_c4;
  local_6c[0] = *(undefined4 *)(*(long *)(lVar15 + 8) + 0x230);
  puVar10 = (uint *)param_1[1];
  local_78 = 0xffffffff;
  uStack_74 = uVar1;
  local_130 = 0x40;
  local_ed = 0;
  local_12c[0] = 0;
  local_e8 = 0;
  local_e4 = CONCAT53(local_e4._3_5_,1);
  local_e4 = CONCAT44(0xffffffff,(undefined4)local_e4);
  local_dc = uVar1;
  local_148[0] = 0;
  local_140 = PTR_DAT_04bb2bc0 + 0x10;
  puStack_138 = local_12c;
  uVar2 = *puVar10;
  if (uVar2 != 0) {
    cVar12 = *PTR_DAT_04bc23c0;
    do {
      if (cVar12 == '\0') {
        *puVar8 = 0xffffffffffffffff;
        *(undefined8 *)((long)puVar8 + 8) = 0xffffffffffffffff;
        cVar12 = '\x01';
        *puVar5 = 1;
        *(undefined8 *)((long)puVar8 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)((long)puVar8 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)((long)puVar8 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)((long)puVar8 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)((long)puVar8 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)((long)puVar8 + 0x38) = 0xffffffffffffffff;
        uVar2 = *puVar10;
      }
      else {
        uVar3 = *(uint *)((long)puVar8 + 0x38);
        if (-1 < (int)uVar3) {
          puVar13 = (undefined8 *)((ulong)uVar3 + (long)puVar10);
          goto LAB_01fe5b4c;
        }
        if (uVar3 != 0xffffffff) break;
      }
      puVar4 = (uint *)(ulong)uVar2;
      puVar13 = (undefined8 *)0x0;
      if ((puVar4 == (uint *)0x0) || (puVar13 = (undefined8 *)0x0, puVar10 == puVar4))
      goto LAB_01fe5b4c;
      lVar11 = 0xc;
      if (*(char *)((long)puVar10 + (10 - (long)puVar4)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar10 + (lVar11 - (long)puVar4);
      puVar13 = (undefined8 *)0x0;
      if (lVar11 == 0) goto LAB_01fe5b4c;
      uVar7 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar4));
      *(undefined4 *)((long)puVar8 + 0x38) = 0xfffffffe;
      if (uVar7 == 0) break;
      piVar14 = (int *)(lVar11 + 4);
      while (piVar14[-1] != -0x4a4a700c) {
        piVar14 = piVar14 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_01fe5b48;
      }
      iVar9 = 0;
      if (*piVar14 != -1) {
        iVar9 = *piVar14;
      }
      *(int *)((long)puVar8 + 0x38) = iVar9;
      uVar2 = *puVar10;
      if (uVar2 == 0) break;
    } while( true );
  }
LAB_01fe5b48:
  puVar13 = (undefined8 *)0x0;
LAB_01fe5b4c:
  __src = &DAT_0407ebb1;
  if (puVar13 != (undefined8 *)0x0) {
    __src = puVar13;
  }
  if (local_c4 != __src) {
    lVar11 = 0;
    do {
      if (*(char *)((long)__src + lVar11) == '\0') {
LAB_01fe5be8:
        iVar9 = (int)lVar11;
        goto LAB_01fe5bec;
      }
      if (*(char *)((long)__src + lVar11 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_01fe5be8;
      }
      if (*(char *)((long)__src + lVar11 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_01fe5be8;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    iVar9 = 0;
LAB_01fe5bec:
    if (0x3e < iVar9) {
      iVar9 = 0x3f;
    }
    memcpy(local_c4,__src,(long)iVar9);
    *(undefined1 *)((long)local_c4 + (long)iVar9) = 0;
    puVar8 = (undefined8 *)PTR_DAT_04bc23c8;
  }
  puVar10 = (uint *)param_1[1];
  uVar2 = *puVar10;
  if (uVar2 != 0) {
    cVar12 = *puVar5;
    do {
      if (cVar12 == '\0') {
        *puVar8 = 0xffffffffffffffff;
        puVar8[1] = 0xffffffffffffffff;
        cVar12 = '\x01';
        *puVar5 = 1;
        puVar8[2] = 0xffffffffffffffff;
        puVar8[3] = 0xffffffffffffffff;
        puVar8[4] = 0xffffffffffffffff;
        puVar8[5] = 0xffffffffffffffff;
        puVar8[6] = 0xffffffffffffffff;
        puVar8[7] = 0xffffffffffffffff;
        uVar2 = *puVar10;
      }
      else {
        uVar3 = *(uint *)(puVar8 + 6);
        if (-1 < (int)uVar3) {
          if ((char *)((ulong)uVar3 + (long)puVar10) != (char *)0x0) {
            local_7a = *(char *)((ulong)uVar3 + (long)puVar10) != '\0';
            goto LAB_01fe5d30;
          }
          break;
        }
        if (uVar3 != 0xffffffff) break;
      }
      puVar4 = (uint *)(ulong)uVar2;
      local_7a = false;
      if ((puVar4 == (uint *)0x0) || (local_7a = false, puVar10 == puVar4)) goto LAB_01fe5d30;
      lVar11 = 0xc;
      if (*(char *)((long)puVar10 + (10 - (long)puVar4)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar10 + (lVar11 - (long)puVar4);
      local_7a = false;
      if (lVar11 == 0) goto LAB_01fe5d30;
      uVar7 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar4));
      *(undefined4 *)(puVar8 + 6) = 0xfffffffe;
      if (uVar7 == 0) break;
      piVar14 = (int *)(lVar11 + 4);
      while (piVar14[-1] != 0x26e57a14) {
        piVar14 = piVar14 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_01fe5d2c;
      }
      iVar9 = 0;
      if (*piVar14 != -1) {
        iVar9 = *piVar14;
      }
      *(int *)(puVar8 + 6) = iVar9;
      uVar2 = *puVar10;
      if (uVar2 == 0) break;
    } while( true );
  }
LAB_01fe5d2c:
  local_7a = false;
LAB_01fe5d30:
  puVar10 = (uint *)param_1[1];
  uVar2 = *puVar10;
  if (uVar2 != 0) {
    cVar12 = *puVar5;
    do {
      if (cVar12 == '\0') {
        *puVar8 = 0xffffffffffffffff;
        puVar8[1] = 0xffffffffffffffff;
        cVar12 = '\x01';
        *puVar5 = 1;
        puVar8[2] = 0xffffffffffffffff;
        puVar8[3] = 0xffffffffffffffff;
        puVar8[4] = 0xffffffffffffffff;
        puVar8[5] = 0xffffffffffffffff;
        puVar8[6] = 0xffffffffffffffff;
        puVar8[7] = 0xffffffffffffffff;
        uVar2 = *puVar10;
      }
      else {
        uVar3 = *(uint *)(puVar8 + 6);
        if (-1 < (int)uVar3) {
          if ((char *)((ulong)uVar3 + (long)puVar10) != (char *)0x0) {
            bVar6 = *(char *)((ulong)uVar3 + (long)puVar10) != '\0';
            goto LAB_01fe5e18;
          }
          break;
        }
        if (uVar3 != 0xffffffff) break;
      }
      puVar4 = (uint *)(ulong)uVar2;
      bVar6 = false;
      if ((puVar4 == (uint *)0x0) || (bVar6 = false, puVar10 == puVar4)) goto LAB_01fe5e18;
      lVar11 = 0xc;
      if (*(char *)((long)puVar10 + (10 - (long)puVar4)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar10 + (lVar11 - (long)puVar4);
      bVar6 = false;
      if (lVar11 == 0) goto LAB_01fe5e18;
      uVar7 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar4));
      *(undefined4 *)(puVar8 + 6) = 0xfffffffe;
      if (uVar7 == 0) break;
      piVar14 = (int *)(lVar11 + 4);
      while (piVar14[-1] != 0x26e57a14) {
        piVar14 = piVar14 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_01fe5e14;
      }
      iVar9 = 0;
      if (*piVar14 != -1) {
        iVar9 = *piVar14;
      }
      *(int *)(puVar8 + 6) = iVar9;
      uVar2 = *puVar10;
      if (uVar2 == 0) break;
    } while( true );
  }
LAB_01fe5e14:
  bVar6 = false;
LAB_01fe5e18:
  local_7c = CONCAT11(bVar6,(undefined1)local_7c);
  uVar7 = (ulong)*(uint *)(lVar15 + 0x123bc);
  if (0x3b < *(uint *)(lVar15 + 0x123bc)) goto LAB_01fe604c;
  if ((1L << (uVar7 & 0x3f) & 0xc00021000002000U) == 0) {
    if (uVar7 == 8) {
      local_158 = 0;
      local_78 = 0xc;
      lVar15 = 0;
      uStack_152 = 0;
      uStack_150 = 0xffffffff;
      uStack_14c = uVar1;
      cStack_18f = '\0';
      local_154 = 0;
      local_15d = 0;
      local_19c[0] = s_MaReSurprised_040e4ee9[0];
      local_19c[1] = s_MaReSurprised_040e4ee9[1];
      local_19c[2] = s_MaReSurprised_040e4ee9[2];
      local_19c[3] = s_MaReSurprised_040e4ee9[3];
      local_19c[4] = s_MaReSurprised_040e4ee9[4];
      local_19c[5] = s_MaReSurprised_040e4ee9[5];
      local_19c[6] = s_MaReSurprised_040e4ee9[6];
      local_19c[7] = s_MaReSurprised_040e4ee9[7];
      local_194[0] = s_MaReSurprised_040e4ee9[8];
      local_194[1] = s_MaReSurprised_040e4ee9[9];
      local_194[2] = s_MaReSurprised_040e4ee9[10];
      local_194[3] = s_MaReSurprised_040e4ee9[0xb];
      local_194[4] = s_MaReSurprised_040e4ee9[0xc];
      do {
        if (local_19c[lVar15] == '\0') goto LAB_01fe6014;
        if (local_19c[lVar15 + 1] == '\0') goto LAB_01fe6000;
        if (local_19c[lVar15 + 2] == '\0') goto LAB_01fe6010;
        lVar15 = lVar15 + 3;
      } while (lVar15 != 0x80001);
    }
    else {
      if (uVar7 != 0x1e) goto LAB_01fe604c;
      local_158 = 0;
      local_78 = 0x1e;
      lVar15 = 0;
      uStack_152 = 0;
      uStack_150 = 0xffffffff;
      uStack_14c = uVar1;
      local_17f = '\0';
      local_15d = 0;
      local_19c._0_5_ = s_NpcConversationTalkApprentice_0405d277._0_5_;
      local_19c._5_3_ = s_NpcConversationTalkApprentice_0405d277._5_3_;
      local_194 = s_NpcConversationTalkApprentice_0405d277._8_5_;
      cStack_18f = s_NpcConversationTalkApprentice_0405d277[0xd];
      uStack_18e = s_NpcConversationTalkApprentice_0405d277._14_2_;
      local_18c[0] = s_NpcConversationTalkApprentice_0405d277[0x10];
      local_18c[1] = s_NpcConversationTalkApprentice_0405d277[0x11];
      local_18c[2] = s_NpcConversationTalkApprentice_0405d277[0x12];
      local_18c[3] = s_NpcConversationTalkApprentice_0405d277[0x13];
      local_18c[4] = s_NpcConversationTalkApprentice_0405d277[0x14];
      cStack_187 = s_NpcConversationTalkApprentice_0405d277[0x15];
      acStack_186 = s_NpcConversationTalkApprentice_0405d277._22_2_;
      acStack_184[0] = s_NpcConversationTalkApprentice_0405d277[0x18];
      acStack_184[1] = s_NpcConversationTalkApprentice_0405d277[0x19];
      acStack_184[2] = s_NpcConversationTalkApprentice_0405d277[0x1a];
      acStack_184[3] = s_NpcConversationTalkApprentice_0405d277[0x1b];
      acStack_184[4] = s_NpcConversationTalkApprentice_0405d277[0x1c];
      local_154 = 0x101;
      do {
        if (local_19c[lVar15] == '\0') goto LAB_01fe6014;
        if (local_19c[lVar15 + 1] == '\0') goto LAB_01fe6000;
        if (local_19c[lVar15 + 2] == '\0') goto LAB_01fe6010;
        lVar15 = lVar15 + 3;
      } while (lVar15 != 0x80001);
    }
  }
  else {
    local_158 = 0;
    local_78 = 0x1e;
    lVar15 = 0;
    uStack_152 = 0;
    uStack_150 = 0xffffffff;
    uStack_14c = uVar1;
    local_17e = 0;
    local_15d = 0;
    local_19c._0_5_ = s_NpcConversationTalkAnswerExist_040fa2be._0_5_;
    local_19c._5_3_ = s_NpcConversationTalkAnswerExist_040fa2be._5_3_;
    local_194 = s_NpcConversationTalkAnswerExist_040fa2be._8_5_;
    cStack_18f = s_NpcConversationTalkAnswerExist_040fa2be[0xd];
    uStack_18e = s_NpcConversationTalkAnswerExist_040fa2be._14_2_;
    local_18c = s_NpcConversationTalkAnswerExist_040fa2be._16_5_;
    cStack_187 = s_NpcConversationTalkAnswerExist_040fa2be[0x15];
    acStack_186[0] = s_NpcConversationTalkAnswerExist_040fa2be[0x16];
    acStack_186[1] = s_NpcConversationTalkAnswerExist_040fa2be[0x17];
    acStack_184 = s_NpcConversationTalkAnswerExist_040fa2be._24_5_;
    local_17f = s_NpcConversationTalkAnswerExist_040fa2be[0x1d];
    local_154 = 0x101;
    do {
      if (local_19c[lVar15] == '\0') goto LAB_01fe6014;
      if (local_19c[lVar15 + 1] == '\0') goto LAB_01fe6000;
      if (local_19c[lVar15 + 2] == '\0') goto LAB_01fe6010;
      lVar15 = lVar15 + 3;
    } while (lVar15 != 0x80001);
  }
  iVar9 = 0;
  uStack_14c = uVar1;
  goto LAB_01fe6020;
LAB_01fe6000:
  iVar9 = (int)lVar15 + 1;
  uStack_14c = uVar1;
  goto joined_r0x01fe6008;
LAB_01fe6010:
  lVar15 = lVar15 + 2;
  uStack_14c = uVar1;
LAB_01fe6014:
  iVar9 = (int)lVar15;
joined_r0x01fe6008:
  if (0x3f < iVar9) {
    iVar9 = 0x3f;
  }
LAB_01fe6020:
  uStack_150 = 0xffffffff;
  uStack_152 = 0;
  local_158 = 0;
  local_15d = 0;
  memcpy(local_12c,local_19c,(long)iVar9);
  local_12c[iVar9] = 0;
  local_e8 = 0;
  local_148[0] = 1;
  local_e4 = CONCAT44(uStack_150,CONCAT13(uStack_151,CONCAT12(uStack_152,local_154)));
  local_dc = uVar1;
LAB_01fe604c:
  FUN_01fa36d0(param_2,local_6c,&local_d8,local_148);
  return;
}


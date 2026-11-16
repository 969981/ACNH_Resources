
/* WARNING: Removing unreachable block (ram,0x02535b34) */
/* WARNING: Removing unreachable block (ram,0x02535c74) */

undefined8 FUN_02535880(byte *param_1,long param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  byte bVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  long *plVar15;
  char *pcVar16;
  int local_74;
  long *local_70;
  char local_68;
  char local_67;
  char local_66;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined1 uStack_4a;
  uint uStack_49;
  undefined1 local_45;
  undefined4 local_28;
  uint local_24;
  
  puVar6 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar6 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_28 = *puVar6;
  local_5c = *param_3;
  FUN_0071cb58(&local_70,&local_28,&local_5c,0);
  plVar15 = local_70;
  if (local_70 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar5 = (**(code **)(*plVar15 + 0x20))(plVar15,PTR_DAT_04bb3770);
    if ((uVar5 & 1) == 0) {
      local_66 = '\0';
    }
  }
  uVar2 = local_5c;
  plVar15 = local_70;
  if (local_70 == (long *)0x0) {
    return 0;
  }
  if (local_68 == '\0') {
    return 0;
  }
  if (local_66 == '\0') {
    return 0;
  }
  if (local_67 == '\0') {
    return 0;
  }
  local_58 = (undefined *)CONCAT44(local_58._4_4_,0x66);
  if (local_70[0xe] == 0) {
    local_24 = 0;
  }
  else {
    uVar12 = *(uint *)(local_70[0xe] + 0x280);
    local_24 = 0;
    if (uVar12 < 0x149) {
      local_24 = uVar12;
    }
    if ((local_24 == 0x66) ||
       (local_58 = (undefined *)CONCAT44(local_58._4_4_,0xc9), local_24 == 0xc9)) goto LAB_02535ac0;
  }
  local_58 = (undefined *)CONCAT44(local_58._4_4_,0xf6);
  if (local_24 != 0xf6) {
    bVar10 = *param_1;
    local_45 = 0;
    uStack_49 = 0;
    uStack_4c = 0;
    uStack_4a = 0;
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    local_58._0_4_ = (uint)bVar10;
    local_58 = (undefined *)CONCAT44(1,(uint)local_58);
    local_50 = local_5c;
    uVar5 = FUN_02530cec(&local_58);
    if (((uVar5 & 1) == 0) && (uVar5 = FUN_02535e8c(param_1,uVar2,0,1), (uVar5 & 1) == 0)) {
      bVar10 = *param_1;
      local_45 = 0;
      uStack_49 = 0;
      local_58 = (undefined *)CONCAT44(2,(uint)local_58);
      local_50 = uVar2;
      uStack_4c = 0;
      uStack_4a = 0;
      if (7 < bVar10) {
        bVar10 = 0xff;
      }
      local_58 = (undefined *)CONCAT71(local_58._1_7_,bVar10);
      uVar5 = FUN_02530cec(&local_58);
      if ((uVar5 & 1) == 0) {
        bVar10 = *param_1;
        local_45 = 0;
        uStack_49 = 0;
        local_58 = (undefined *)CONCAT44(8,(uint)local_58);
        local_50 = uVar2;
        uStack_4c = 0;
        uStack_4a = 0;
        if (7 < bVar10) {
          bVar10 = 0xff;
        }
        local_58 = (undefined *)CONCAT71(local_58._1_7_,bVar10);
        uVar5 = FUN_02530cec(&local_58);
        if (((uVar5 & 1) == 0) && (uVar5 = FUN_0315608c(), (uVar5 & 1) == 0)) {
          return 0;
        }
      }
    }
  }
LAB_02535ac0:
  puVar14 = (undefined8 *)plVar15[0xc];
  if (puVar14 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      puVar14 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar14 = &DAT_05240280;
    }
  }
  local_58 = PTR_DAT_04bb2020 + 0x10;
  local_50 = 0x40c97dc;
  uStack_4c = 0;
  uStack_4a = 0;
  uStack_49 = uStack_49 & 0xffffff00;
  lVar7 = puVar14[0x227];
  if (lVar7 == 0) {
    local_24 = 0;
  }
  else {
    local_24 = *(uint *)(puVar14 + 0x2d3) >> 1 & 1;
    uVar12 = 0;
    if (*(long *)(lVar7 + 0x78) != 0) {
      uVar12 = *(uint *)(*(long *)(lVar7 + 0x78) + 0x18);
    }
    uVar13 = local_24;
    if (uVar12 <= local_24) {
      uVar13 = 0;
    }
    if (*(uint *)(lVar7 + 0x80) <= uVar13) {
      uVar13 = 0;
    }
    lVar7 = *(long *)(lVar7 + 0x88) + (long)(int)uVar13 * 0xe8;
    plVar15 = (long *)(lVar7 + 0x60);
    (**(code **)(*plVar15 + 0x18))(plVar15);
    (**(code **)(*plVar15 + 0x18))(plVar15);
    pcVar16 = *(char **)(lVar7 + 0x68);
    (**(code **)(local_58 + 0x18))(&local_58);
    pcVar9 = (char *)CONCAT17((undefined1)uStack_49,CONCAT16(uStack_4a,CONCAT24(uStack_4c,local_50))
                             );
    if (pcVar16 == pcVar9) {
      return 0;
    }
    pcVar16 = *(char **)(lVar7 + 0x68);
    if (*pcVar16 == *pcVar9) {
      if (*pcVar16 == '\0') {
        return 0;
      }
      uVar5 = 0;
      do {
        uVar8 = uVar5;
        if ((uVar8 == 0x80000) || (pcVar16[uVar8 + 1] != pcVar9[uVar8 + 1])) goto LAB_02535c18;
        if (pcVar16[uVar8 + 1] == '\0') goto LAB_02535c10;
        if (pcVar16[uVar8 + 2] != pcVar9[uVar8 + 2]) goto LAB_02535c18;
        uVar5 = uVar8 + 2;
      } while (pcVar16[uVar8 + 2] != '\0');
      uVar8 = uVar8 + 1;
LAB_02535c10:
      if (uVar8 < 0x80000) {
        return 0;
      }
    }
  }
LAB_02535c18:
  puVar14 = (undefined8 *)local_70[0xc];
  if (puVar14 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      puVar14 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar14 = &DAT_05240280;
    }
  }
  lVar7 = puVar14[0x227];
  if (lVar7 == 0) {
    local_58 = (undefined *)((ulong)local_58._4_4_ << 0x20);
    pcVar9 = (char *)0x0;
  }
  else {
    uVar12 = *(uint *)(puVar14 + 0x2d3) >> 1 & 1;
    local_58 = (undefined *)
               (CONCAT44(local_58._4_4_,*(uint *)(puVar14 + 0x2d3) >> 1) & 0xffffffff00000001);
    uVar13 = 0;
    if (*(long *)(lVar7 + 0x78) != 0) {
      uVar13 = *(uint *)(*(long *)(lVar7 + 0x78) + 0x18);
    }
    if (uVar13 <= uVar12) {
      uVar12 = 0;
    }
    if (*(uint *)(lVar7 + 0x80) <= uVar12) {
      uVar12 = 0;
    }
    lVar7 = *(long *)(lVar7 + 0x88) + (long)(int)uVar12 * 0xe8;
    plVar15 = (long *)(lVar7 + 0x60);
    (**(code **)(*plVar15 + 0x18))(plVar15);
    (**(code **)(*plVar15 + 0x18))(plVar15);
    pcVar16 = *(char **)(lVar7 + 0x68);
    pcVar9 = "PlayerNetMove";
    if (pcVar16 == "PlayerNetMove") {
      return 0;
    }
    if (*pcVar16 == 'P') {
      pcVar3 = (char *)0x0;
      do {
        pcVar11 = pcVar3;
        if (pcVar11 == (char *)0x80000) goto LAB_02535d20;
        if (pcVar16[(long)(pcVar11 + 1)] != "PlayerNetMove"[(long)(pcVar11 + 1)]) goto LAB_02535d20;
        pcVar3 = pcVar11 + 1;
      } while (pcVar16[(long)(pcVar11 + 1)] != '\0');
      pcVar9 = pcVar11;
      if (pcVar11 < (char *)0x80000) {
        return 0;
      }
    }
  }
LAB_02535d20:
  uVar5 = FUN_02532880(pcVar9,param_1,&local_5c);
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_0315608c();
    puVar1 = PTR_DAT_04bb2230;
    if (((((uVar5 & 1) == 0) ||
         (lVar7 = FUN_0339be20(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x10),2,param_1),
         lVar7 == 0)) ||
        (uVar5 = FUN_0339bcb0(*(undefined8 *)(*(long *)puVar1 + 0x10),2,PTR_DAT_04bb32e0),
        (uVar5 & 1) != 0)) &&
       (((**(char **)(param_2 + 8) == '\0' || (local_74 = FUN_01d81750(param_2), local_74 < 0)) ||
        (uVar5 = FUN_02536144(param_1,&local_74), (uVar5 & 1) != 0)))) {
      return 1;
    }
  }
  return 0;
}


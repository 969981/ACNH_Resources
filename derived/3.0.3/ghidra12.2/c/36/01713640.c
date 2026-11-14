
void FUN_01713640(undefined4 param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  char *pcVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined **local_a0;
  char *pcStack_98;
  undefined2 local_90;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined4 local_8c;
  undefined **local_88;
  char *local_80;
  long local_78;
  byte local_70 [4];
  uint local_6c;
  uint local_68;
  uint local_64;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar8 = *(long *)(param_2 + 0x1480);
  if (*(char *)(lVar8 + 0x1d5) == '\0') {
LAB_017136e8:
    puVar7 = (undefined8 *)(lVar8 + 0xd4);
  }
  else {
    lVar9 = *(long *)PTR_DAT_04bb43c0;
    puVar7 = (undefined8 *)(lVar8 + 0xcc);
    uVar2 = FUN_0277d6c4(puVar7);
    if (*(long *)puVar1 == 0) {
LAB_017136c8:
      iVar3 = FUN_0277d6c4(puVar7);
      if (iVar3 != 0xfffd) goto LAB_017136e8;
      puVar7 = (undefined8 *)&DAT_05586008;
    }
    else {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((*(uint *)(lVar9 + 0x1d8) <= uVar2) ||
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar2 * 8) == 0)) goto LAB_017136c8;
    }
  }
  local_90 = *(undefined2 *)puVar7;
  local_8e = *(undefined1 *)((long)puVar7 + 2);
  local_8d = *(undefined1 *)((long)puVar7 + 3);
  local_8c = *(undefined4 *)((long)puVar7 + 4);
  pcVar6 = (char *)*puVar7;
  local_a0 = &PTR_LAB_048f9770;
  pcStack_98 = "PitfallStruggleAnimRate";
  if (((*(long *)(param_2 + 0x1138) != 0) &&
      (lVar8 = *(long *)(*(long *)(param_2 + 0x1138) + 0x78), lVar8 != 0)) &&
     (plVar4 = *(long **)(lVar8 + 0x48), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x30))(param_1,plVar4,&local_a0);
  }
  lVar9 = *(long *)puVar1;
  uVar2 = FUN_0277d6c4(&local_90);
  lVar8 = *(long *)puVar1;
  if (lVar8 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      local_88 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
      local_78 = 0;
      local_80 = pcVar6;
      uVar2 = FUN_0277d6c4(&local_80);
      if (*(long *)puVar1 != 0) {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar8 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
          lVar8 = *(long *)PTR_DAT_04bc0428;
          uVar2 = FUN_0277d6c4(&local_90);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar8 + 0x1d8)) &&
             (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar2 * 8), lVar8 != 0)) {
            local_78 = lVar8;
          }
        }
      }
      local_70[0] = 0;
      local_70[1] = 0;
      FUN_01adab50(&local_88,local_70);
      uVar2 = 0;
      do {
        local_6c = uVar2;
        if ((local_6c != 0) && (local_68 = local_6c, local_6c < 0xe)) {
          uVar2 = local_6c + 7;
          if (-1 < (int)local_6c) {
            uVar2 = local_6c;
          }
          if (((uint)((int)uVar2 >> 3) < 2) &&
             ((local_70[(uint)((int)uVar2 >> 3)] >> (ulong)(local_6c & 7) & 1) != 0)) {
            if ((local_6c == 9) &&
               (local_64 = local_6c, uVar5 = FUN_01ad8bd0(&local_88), (uVar5 & 1) != 0)) {
              local_64 = 0;
              local_88 = &PTR_LAB_048f9770;
              local_80 = "CommonPitfallStruggle_NoPartial";
              if (*(long *)(param_2 + 0x1138) == 0) goto LAB_01713a40;
              lVar8 = *(long *)(*(long *)(param_2 + 0x1138) + 0x88);
              plVar4 = (long *)(lVar8 + 0x60);
              (**(code **)(*plVar4 + 0x18))(plVar4);
              (**(code **)(*plVar4 + 0x18))(plVar4);
              pcVar6 = *(char **)(lVar8 + 0x68);
              if (pcVar6 == "CommonPitfallStruggle_NoPartial") {
                return;
              }
              if (*pcVar6 != 'C') goto LAB_01713a40;
              lVar8 = 0;
              goto LAB_01713954;
            }
            break;
          }
        }
        uVar2 = local_6c + 1;
      } while (local_6c + 1 != 0xe);
    }
  }
  local_64 = 0;
  local_88 = &PTR_LAB_048f9770;
  local_80 = "CommonPitfallStruggle";
  if (*(long *)(param_2 + 0x1138) == 0) goto LAB_01713a40;
  lVar8 = *(long *)(*(long *)(param_2 + 0x1138) + 0x88);
  plVar4 = (long *)(lVar8 + 0x60);
  (**(code **)(*plVar4 + 0x18))(plVar4);
  (**(code **)(*plVar4 + 0x18))(plVar4);
  pcVar6 = *(char **)(lVar8 + 0x68);
  if (pcVar6 == "CommonPitfallStruggle") {
    return;
  }
  if (*pcVar6 != 'C') goto LAB_01713a40;
  lVar8 = 0;
  do {
    if ((lVar8 == 0x80000) ||
       (lVar9 = lVar8 + 1, pcVar6[lVar9] != "CommonPitfallStruggle"[lVar8 + 1])) goto LAB_01713a40;
    lVar8 = lVar8 + 1;
  } while (pcVar6[lVar9] != '\0');
  goto LAB_01713a34;
  while (lVar8 = lVar8 + 1, pcVar6[lVar9] != '\0') {
LAB_01713954:
    if ((lVar8 == 0x80000) ||
       (lVar9 = lVar8 + 1, pcVar6[lVar9] != "CommonPitfallStruggle_NoPartial"[lVar8 + 1]))
    goto LAB_01713a40;
  }
LAB_01713a34:
  if (lVar8 - 1U < 0x80000) {
    return;
  }
LAB_01713a40:
  FUN_017029bc(param_2,&local_88,6,0,0);
  return;
}


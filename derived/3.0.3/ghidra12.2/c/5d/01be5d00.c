
ulong FUN_01be5d00(undefined8 param_1,long *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 *__src;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined *local_318;
  undefined1 *local_310;
  undefined4 local_308;
  undefined1 local_304 [255];
  undefined1 local_205;
  undefined1 *local_200;
  undefined1 *puStack_1f8;
  undefined4 local_1f0;
  undefined1 local_1ec [127];
  undefined1 local_16d;
  undefined *local_168;
  undefined1 *local_160;
  int local_158;
  undefined1 local_154 [255];
  undefined1 local_55;
  
  lVar9 = *(long *)(*(long *)PTR_DAT_04bb2718 + 0x408);
  uVar4 = FUN_038cefc4();
  local_55 = 0;
  local_154[0] = 0;
  local_1f0 = 0x80;
  local_160 = local_154;
  local_16d = 0;
  puStack_1f8 = local_1ec;
  local_158 = 0x100;
  local_318 = PTR_DAT_04bb21f8 + 0x10;
  local_1ec[0] = 0;
  local_308 = 0x100;
  local_205 = 0;
  local_304[0] = 0;
  local_200 = &DAT_048fc708;
  local_310 = local_304;
  local_168 = local_318;
  (**(code **)(*param_2 + 0x18))(param_2);
  FUN_038d1270(&local_200,"%s.msbt",param_2[1]);
  lVar9 = *(long *)(lVar9 + 8);
  if (*(long *)(lVar9 + 0x10) != lVar9 + 8) {
    lVar8 = (long)*(int *)(lVar9 + 0x1c);
    lVar11 = *(long *)(lVar9 + 0x10) - lVar8;
    do {
      if ((lVar11 != 0) && (lVar5 = FUN_03d54360(lVar11,&local_200), puVar2 = local_160, lVar5 != 0)
         ) {
        plVar12 = (long *)(lVar11 + 0x58);
        (**(code **)(*plVar12 + 0x18))(plVar12);
        __src = *(undefined1 **)(lVar11 + 0x60);
        if (puVar2 == __src) goto LAB_01be5ecc;
        (**(code **)(*(long *)(lVar11 + 0x58) + 0x18))(plVar12);
        lVar9 = 0;
        goto LAB_01be5e60;
      }
      lVar11 = *(long *)(lVar11 + lVar8 + 8) - lVar8;
    } while (lVar11 != (lVar9 + 8) - lVar8);
  }
  return 0xc;
  while( true ) {
    lVar8 = *(long *)(lVar11 + 0x60) + lVar9;
    if (*(char *)(lVar8 + 1) == '\0') {
      lVar9 = lVar9 + 1;
      goto LAB_01be5ea4;
    }
    if (*(char *)(lVar8 + 2) == '\0') {
      lVar9 = lVar9 + 2;
      goto LAB_01be5ea4;
    }
    lVar9 = lVar9 + 3;
    if (lVar9 == 0x80001) break;
LAB_01be5e60:
    if (*(char *)(*(long *)(lVar11 + 0x60) + lVar9) == '\0') goto LAB_01be5ea4;
  }
  lVar9 = 0;
LAB_01be5ea4:
  iVar1 = (int)lVar9;
  if (local_158 <= (int)lVar9) {
    iVar1 = local_158 + -1;
  }
  memcpy(puVar2,__src,(long)iVar1);
  puVar2[iVar1] = 0;
LAB_01be5ecc:
  if (uVar4 < 0x10) {
    uVar10 = 0;
    uVar7 = *(undefined8 *)(PTR_DAT_04bb43e0 + (ulong)uVar4 * 8 + 0x60);
    do {
      FUN_038d1270(&local_318,"Message/%s_%s.sarc.zs",(&PTR_s_TalkNNpc_04a3d1a8)[uVar10 * 2],uVar7);
      (**(code **)(local_168 + 0x18))(&local_168);
      (**(code **)(local_168 + 0x18))(&local_168);
      puVar2 = local_160;
      (**(code **)(local_318 + 0x18))(&local_318);
      if (puVar2 == local_310) goto LAB_01be60ec;
      uVar6 = 0;
      bVar3 = true;
      do {
        if (local_160[uVar6] != local_310[uVar6]) break;
        if (local_160[uVar6] == '\0') {
          if (bVar3) goto LAB_01be60ec;
          break;
        }
        if (local_160[uVar6 + 1] != local_310[uVar6 + 1]) break;
        if (local_160[uVar6 + 1] == '\0') goto LAB_01be60ec;
        if (local_160[uVar6 + 2] != local_310[uVar6 + 2]) break;
        if (local_160[uVar6 + 2] == '\0') goto LAB_01be60ec;
        bVar3 = uVar6 < 0x7fffe;
        uVar6 = uVar6 + 3;
      } while (uVar6 != 0x80001);
      uVar10 = uVar10 + 1;
    } while (uVar10 != 0xc);
  }
  else {
    uVar10 = 0;
    do {
      FUN_038d1270(&local_318,"Message/%s_%s.sarc.zs",(&PTR_s_TalkNNpc_04a3d1a8)[uVar10 * 2],
                   &DAT_0407ebb1);
      (**(code **)(local_168 + 0x18))(&local_168);
      (**(code **)(local_168 + 0x18))(&local_168);
      puVar2 = local_160;
      (**(code **)(local_318 + 0x18))(&local_318);
      if (puVar2 == local_310) {
LAB_01be60ec:
        return uVar10 & 0xffffffff;
      }
      uVar6 = 0;
      bVar3 = true;
      do {
        if (local_160[uVar6] != local_310[uVar6]) break;
        if (local_160[uVar6] == '\0') {
          if (bVar3) goto LAB_01be60ec;
          break;
        }
        if (local_160[uVar6 + 1] != local_310[uVar6 + 1]) break;
        if (local_160[uVar6 + 1] == '\0') goto LAB_01be60ec;
        if (local_160[uVar6 + 2] != local_310[uVar6 + 2]) break;
        if (local_160[uVar6 + 2] == '\0') goto LAB_01be60ec;
        bVar3 = uVar6 < 0x7fffe;
        uVar6 = uVar6 + 3;
      } while (uVar6 != 0x80001);
      uVar10 = uVar10 + 1;
    } while (uVar10 != 0xc);
  }
  return 0xc;
}


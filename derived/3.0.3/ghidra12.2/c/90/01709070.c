
uint FUN_01709070(long param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  
  if (param_2 != 1) {
    if ((param_2 & 0xfffffffe) != 2) {
      return param_2;
    }
    lVar2 = *(long *)(param_1 + 0x1138);
    if (lVar2 == 0) {
      pcVar6 = DAT_04c931a8;
      if (*DAT_04c931a8 != '\0') {
        return param_2;
      }
    }
    else {
      lVar3 = *(long *)(lVar2 + 0x78);
      if (lVar3 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(uint *)(lVar3 + 0x18);
      }
      uVar7 = param_2;
      if (uVar8 <= param_2) {
        uVar7 = 0;
      }
      if (*(uint *)(lVar2 + 0x80) <= uVar7) {
        uVar7 = 0;
      }
      if (**(char **)(*(long *)(lVar2 + 0x88) + (long)(int)uVar7 * 0xe8 + 0x68) != '\0') {
        return param_2;
      }
      uVar8 = 0;
      if (lVar3 != 0) {
        uVar8 = *(uint *)(lVar3 + 0x18);
      }
      uVar8 = (uint)(1 < uVar8);
      if (*(uint *)(lVar2 + 0x80) <= uVar8) {
        uVar8 = 0;
      }
      pcVar6 = *(char **)(*(long *)(lVar2 + 0x88) + (long)(int)uVar8 * 0xe8 + 0x68);
    }
    return (uint)(*pcVar6 != '\0');
  }
  uVar8 = 6;
  lVar2 = *(long *)(param_1 + 0x1138);
  if (lVar2 != 0) {
    uVar7 = 0;
    if (*(long *)(lVar2 + 0x78) != 0) {
      uVar7 = *(uint *)(*(long *)(lVar2 + 0x78) + 0x18);
    }
    if (uVar7 < 7) {
      uVar8 = 0;
    }
    if (*(uint *)(lVar2 + 0x80) <= uVar8) {
      uVar8 = 0;
    }
    lVar2 = *(long *)(lVar2 + 0x88) + (long)(int)uVar8 * 0xe8;
    plVar9 = (long *)(lVar2 + 0x60);
    (**(code **)(*plVar9 + 0x18))(plVar9);
    (**(code **)(*plVar9 + 0x18))(plVar9);
    pcVar6 = *(char **)(lVar2 + 0x68);
    if (pcVar6 == "MaReClapping") goto LAB_01709250;
    if (*pcVar6 == 'M') {
      uVar1 = 0;
      do {
        uVar5 = uVar1;
        if ((uVar5 == 0x80000) || (pcVar6[uVar5 + 1] != "MaReClapping"[uVar5 + 1]))
        goto LAB_01709150;
        uVar1 = uVar5 + 1;
      } while (pcVar6[uVar5 + 1] != '\0');
      if (uVar5 < 0x80000) goto LAB_01709250;
    }
  }
LAB_01709150:
  uVar8 = 6;
  lVar2 = *(long *)(param_1 + 0x1138);
  if (lVar2 == 0) {
    if (*DAT_04c931a8 == '\0') goto LAB_01709250;
    puVar4 = &DAT_04c931a0;
    lVar2 = 6;
  }
  else {
    lVar3 = *(long *)(lVar2 + 0x78);
    if (lVar3 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(uint *)(lVar3 + 0x18);
    }
    if (uVar7 < 7) {
      uVar8 = 0;
    }
    if (*(uint *)(lVar2 + 0x80) <= uVar8) {
      uVar8 = 0;
    }
    if (**(char **)(*(long *)(lVar2 + 0x88) + (long)(int)uVar8 * 0xe8 + 0x68) == '\0')
    goto LAB_01709250;
    uVar8 = 6;
    uVar7 = 0;
    if (lVar3 != 0) {
      uVar7 = *(uint *)(lVar3 + 0x18);
    }
    if (uVar7 < 7) {
      uVar8 = 0;
    }
    if (*(uint *)(lVar2 + 0x80) <= uVar8) {
      uVar8 = 0;
    }
    lVar2 = *(long *)(lVar2 + 0x88) + (long)(int)uVar8 * 0xe8;
    puVar4 = (undefined8 *)(lVar2 + 0x60);
  }
  uVar1 = FUN_0171ef80(lVar2,puVar4,0x18);
  if ((uVar1 & 1) == 0) {
    return 6;
  }
LAB_01709250:
  lVar2 = *(long *)(param_1 + 0x1138);
  if (lVar2 == 0) {
    puVar4 = &DAT_04c931a0;
  }
  else {
    uVar8 = 0;
    if (*(long *)(lVar2 + 0x78) != 0) {
      uVar8 = *(uint *)(*(long *)(lVar2 + 0x78) + 0x18);
    }
    uVar8 = (uint)(1 < uVar8);
    if (*(uint *)(lVar2 + 0x80) <= uVar8) {
      uVar8 = 0;
    }
    puVar4 = (undefined8 *)(*(long *)(lVar2 + 0x88) + (long)(int)uVar8 * 0xe8 + 0x60);
  }
  return (uint)(*(char *)puVar4[1] != '\0');
}


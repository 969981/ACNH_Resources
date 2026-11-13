
ulong FUN_00cc5f50(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  char cVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  char *pcVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined *local_78;
  char *pcStack_70;
  undefined4 local_64;
  int local_48;
  uint local_44;
  
  plVar9 = (long *)(param_1 + 0xd8);
  (**(code **)(*plVar9 + 0x18))(plVar9);
  pcVar7 = *(char **)(param_1 + 0xe0);
  if ((pcVar7 == s_cSpecified_04947c28) ||
     ((((((*pcVar7 == 'c' && (pcVar7[1] == 'S')) && (pcVar7[2] == 'p')) &&
        ((pcVar7[3] == 'e' && (pcVar7[4] == 'c')))) &&
       ((pcVar7[5] == 'i' && ((pcVar7[6] == 'f' && (pcVar7[7] == 'i')))))) &&
      ((pcVar7[8] == 'e' && ((pcVar7[9] == 'd' && (pcVar7[10] == '\0')))))))) {
    if (*(long *)PTR_DAT_04bb2230 == 0) {
      lVar8 = 0;
      cVar3 = cRam0000000000000078;
    }
    else {
      lVar8 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
      cVar3 = *(char *)(lVar8 + 0x78);
    }
    if (cVar3 == '\0') {
      bVar5 = 1;
    }
    else {
      bVar5 = (**(code **)(*(long *)(lVar8 + 0x70) + 0x18))((long *)(lVar8 + 0x70));
      *(undefined1 *)(lVar8 + 0x78) = 0;
    }
    *(byte *)(lVar8 + 0x79) = bVar5 & 1;
    return (ulong)*(uint *)(lVar8 + 0x80);
  }
  (**(code **)(*(long *)(param_1 + 0xd8) + 0x18))(plVar9);
  pcVar7 = *(char **)(param_1 + 0xe0);
  if (pcVar7 == s_cVillageLeader_04947c34) {
    if (*(long *)PTR_DAT_04bb46b0 == 0) {
      return 0xffffffff;
    }
  }
  else {
    if (*pcVar7 != 'c') {
      return 0xffffffff;
    }
    if (pcVar7[1] != 'V') {
      return 0xffffffff;
    }
    if (pcVar7[2] != 'i') {
      return 0xffffffff;
    }
    if (pcVar7[3] != 'l') {
      return 0xffffffff;
    }
    if (pcVar7[4] != 'l') {
      return 0xffffffff;
    }
    if (pcVar7[5] != 'a') {
      return 0xffffffff;
    }
    if (pcVar7[6] != 'g') {
      return 0xffffffff;
    }
    if (pcVar7[7] != 'e') {
      return 0xffffffff;
    }
    if (pcVar7[8] != 'L') {
      return 0xffffffff;
    }
    if (pcVar7[9] != 'e') {
      return 0xffffffff;
    }
    if (pcVar7[10] != 'a') {
      return 0xffffffff;
    }
    if (pcVar7[0xb] != 'd') {
      return 0xffffffff;
    }
    if (pcVar7[0xc] != 'e') {
      return 0xffffffff;
    }
    if (pcVar7[0xd] != 'r') {
      return 0xffffffff;
    }
    if (pcVar7[0xe] != '\0') {
      return 0xffffffff;
    }
    if (*(long *)PTR_DAT_04bb46b0 == 0) {
      return 0xffffffff;
    }
  }
  FUN_02705554(&local_48,0,1);
  puVar4 = PTR_DAT_04bb46b0;
  uVar10 = (ulong)local_44;
  if (local_44 == 8) {
    return 0xffffffff;
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  do {
    uVar2 = uVar10;
    if (7 < uVar10) {
      uVar2 = 0xffffffff;
    }
    pcStack_70 = "MakeVillagePlayerFlag";
    local_64 = (undefined4)uVar2;
    local_78 = puVar1;
    iVar6 = FUN_0274ce10(&local_64,&local_78);
    if (iVar6 != 0) {
      return uVar2;
    }
    if (uVar10 < 8) {
      lVar8 = *(long *)puVar4;
      if (lVar8 == 0) {
        return 0xffffffff;
      }
      (**(code **)(*(long *)**(undefined8 **)(lVar8 + 0x10) + 0x18))();
      if ((local_48 == 0) && ((*(byte *)(lVar8 + 0x453) & 1) != 0)) {
        lVar8 = (**(code **)(**(long **)(*(long *)(lVar8 + 0x10) + 0x130) + 0x18))();
      }
      else {
        lVar8 = (**(code **)(*(long *)**(undefined8 **)(lVar8 + 0x10) + 0x18))();
        lVar8 = lVar8 + 0x110;
      }
      if (uVar10 == 7) {
        return 0xffffffff;
      }
      plVar9 = (long *)(lVar8 + uVar10 * 0x48 + 0x1e3400);
      while ((6 < uVar10 || (plVar9[-1] == 0 && *plVar9 == 0))) {
        uVar10 = uVar10 + 1;
        plVar9 = plVar9 + 9;
        if (uVar10 == 7) {
          return 0xffffffff;
        }
      }
      uVar10 = (ulong)((int)uVar10 + 1);
    }
    if (uVar10 == 8) {
      return 0xffffffff;
    }
  } while( true );
}


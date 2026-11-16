
undefined8 FUN_029d1a80(long param_1,long param_2,int *param_3,uint param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  int local_78 [2];
  undefined8 local_70;
  undefined4 local_68 [2];
  long local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined *local_48;
  long local_40;
  undefined1 local_38;
  
  if (((DAT_055eafb8 == 0) || (*(char *)(DAT_055eafb8 + 0x161) == '\0')) ||
     (*(long *)(param_1 + 0x28) == 0)) {
    local_78[0] = *param_3;
    local_70 = *(undefined8 *)(param_3 + 2);
    uVar7 = FUN_029d1eb0(param_1,local_78);
    if (param_2 == 0) {
      return 0;
    }
    goto joined_r0x029d1b8c;
  }
  local_68[0] = *(undefined4 *)(param_1 + 0x20);
  local_60 = *(long *)(param_1 + 0x28);
  uVar6 = FUN_029d1eb0(param_1,local_68);
  iVar3 = *param_3;
  uVar7 = uVar6;
  if (iVar3 != 0) {
    lVar9 = *(long *)(param_3 + 2);
    iVar16 = 0;
    iVar13 = 100;
    bVar4 = *(byte *)(param_1 + 0x4b);
    uVar15 = uVar6;
    do {
      uVar18 = *(byte *)(lVar9 + iVar16) - 0x18;
      iVar14 = uVar18 - uVar6;
      uVar7 = uVar6;
      if (iVar14 == 0) goto joined_r0x029d1cd0;
      uVar10 = (uint)bVar4;
      uVar19 = uVar18;
      if ((int)uVar18 < (int)uVar6) {
        if ((int)uVar18 <= (int)(uint)bVar4) {
          uVar19 = uVar10;
        }
        iVar14 = uVar6 - uVar18;
        if (iVar13 <= (int)(uVar6 - uVar18)) {
          iVar14 = iVar13;
          uVar19 = uVar15;
        }
      }
      else {
        uVar7 = uVar15;
        if ((int)(uint)*(byte *)(param_1 + 0x4c) < (int)uVar18) goto joined_r0x029d1cd0;
        if (iVar13 <= iVar14) goto LAB_029d1d3c;
      }
      iVar13 = iVar14;
      iVar16 = iVar16 + 1;
      uVar15 = uVar19;
    } while (iVar3 != iVar16);
    iVar16 = 0;
    do {
      uVar18 = *(byte *)(lVar9 + iVar16) - 0xc;
      iVar14 = uVar18 - uVar6;
      uVar7 = uVar6;
      if (iVar14 == 0) goto joined_r0x029d1cd0;
      uVar11 = (uint)bVar4;
      uVar12 = (uint)*(byte *)(param_1 + 0x4c);
      uVar19 = uVar18;
      if ((int)uVar18 < (int)uVar6) {
        if (uVar18 == uVar11 || (int)uVar18 < (int)uVar10) {
          uVar19 = uVar11;
        }
        iVar14 = uVar6 - uVar18;
        if (iVar13 <= (int)(uVar6 - uVar18)) {
          iVar14 = iVar13;
          uVar19 = uVar15;
        }
      }
      else {
        uVar7 = uVar15;
        if ((int)uVar12 < (int)uVar18) goto joined_r0x029d1cd0;
        if (iVar13 <= iVar14) goto LAB_029d1d3c;
      }
      iVar13 = iVar14;
      iVar16 = iVar16 + 1;
      uVar15 = uVar19;
    } while (iVar3 != iVar16);
    iVar16 = 0;
    do {
      uVar18 = (uint)*(byte *)(lVar9 + iVar16);
      uVar19 = (uint)*(byte *)(lVar9 + iVar16);
      iVar14 = uVar6 - uVar19;
      uVar7 = uVar6;
      if (iVar14 == 0) goto joined_r0x029d1cd0;
      if ((int)uVar6 < (int)uVar19) {
        uVar7 = uVar15;
        if (uVar12 < uVar19) goto joined_r0x029d1cd0;
        iVar14 = uVar19 - uVar6;
        if (iVar13 <= iVar14) goto LAB_029d1d3c;
      }
      else {
        if (uVar19 <= uVar11) {
          uVar19 = uVar10;
        }
        if (iVar13 <= iVar14) {
          iVar14 = iVar13;
          uVar19 = uVar15;
        }
      }
      iVar13 = iVar14;
      iVar16 = iVar16 + 1;
      uVar15 = uVar19;
    } while (iVar3 != iVar16);
    iVar16 = 0;
    do {
      uVar18 = *(byte *)(lVar9 + iVar16) + 0xc;
      iVar14 = uVar18 - uVar6;
      uVar7 = uVar6;
      if (iVar14 == 0) goto joined_r0x029d1cd0;
      uVar19 = uVar18;
      if ((int)uVar18 < (int)uVar6) {
        if (uVar18 == uVar11 || uVar18 < uVar10) {
          uVar19 = uVar11;
        }
        iVar14 = uVar6 - uVar18;
        if (iVar13 <= (int)(uVar6 - uVar18)) {
          iVar14 = iVar13;
          uVar19 = uVar15;
        }
      }
      else {
        uVar7 = uVar15;
        if (uVar12 < uVar18) goto joined_r0x029d1cd0;
        if (iVar13 <= iVar14) goto LAB_029d1d3c;
      }
      iVar13 = iVar14;
      iVar16 = iVar16 + 1;
      uVar15 = uVar19;
    } while (iVar3 != iVar16);
    iVar16 = 0;
    do {
      uVar18 = *(byte *)(lVar9 + iVar16) + 0x18;
      iVar14 = uVar18 - uVar6;
      uVar7 = uVar6;
      if (iVar14 == 0) break;
      if ((int)uVar18 < (int)uVar6) {
        uVar7 = uVar18;
        if (uVar18 <= uVar11) {
          uVar7 = uVar10;
        }
        iVar14 = uVar6 - uVar18;
        if (iVar13 <= (int)(uVar6 - uVar18)) {
          iVar14 = iVar13;
          uVar7 = uVar15;
        }
      }
      else {
        uVar7 = uVar15;
        if (uVar12 < uVar18) break;
        uVar7 = uVar18;
        if (iVar13 <= iVar14) goto LAB_029d1d3c;
      }
      iVar16 = iVar16 + 1;
      iVar13 = iVar14;
      uVar15 = uVar7;
    } while (iVar3 != iVar16);
  }
  goto joined_r0x029d1cd0;
LAB_029d1d3c:
  uVar7 = uVar18;
  if (iVar14 != iVar13) {
    uVar7 = uVar15;
  }
joined_r0x029d1cd0:
  if (param_2 == 0) {
    return 0;
  }
joined_r0x029d1b8c:
  if (uVar7 - 0x37 < 0x19) {
    puVar2 = &DAT_055eae28;
    if ((param_4 & 1) == 0) {
      puVar2 = &DAT_055eac98;
    }
    plVar1 = puVar2 + (ulong)(uVar7 - 0x37) * 2;
    (**(code **)(*plVar1 + 0x18))(plVar1);
    local_58 = 0;
    local_50 = 0;
    lVar17 = plVar1[1];
    lVar9 = (**(code **)(**(long **)(*(long *)(param_2 + 0x30) + 0x18) + 0x20))();
    if (((lVar17 != 0) && (*(char *)(lVar9 + 0x78) != '\0')) &&
       (uVar8 = FUN_03bf46a8(param_2,"searchAndEmit(%s)",lVar17), (uVar8 & 1) != 0)) {
      local_38 = 0;
      local_48 = PTR_DAT_04bcadf8 + 0x10;
      local_40 = FUN_03bf5ec0(*(undefined8 *)(*(long *)(param_2 + 0x30) + 0x18),lVar17);
      if (local_40 != 0) {
        FUN_03bf47b0(param_2,&local_48,&local_58);
      }
    }
    *(undefined8 *)(param_1 + 8) = local_58;
    *(undefined4 *)(param_1 + 0x10) = local_50;
    if ((*(long *)(param_1 + 8) != 0) &&
       (*(int *)(*(long *)(param_1 + 8) + 0x20) == *(int *)(param_1 + 0x10))) {
      uVar6 = *(byte *)(param_1 + 0x4e) + 1;
      bVar4 = *(byte *)(param_1 + 0x49);
      cVar5 = '\0';
      if (bVar4 != 0) {
        cVar5 = (char)(uVar6 / bVar4);
      }
      cVar5 = (char)uVar6 - cVar5 * bVar4;
      bVar4 = *(byte *)(param_1 + 0x4d);
      uVar6 = *(uint *)(DAT_0537d558 + 0x80);
      *(char *)(param_1 + 0x4d) = (char)uVar7;
      if (1 < uVar6) {
        cVar5 = '\x01';
      }
      *(char *)(param_1 + 0x4e) = cVar5;
      cVar5 = '\0';
      if (uVar7 == bVar4) {
        cVar5 = *(char *)(param_1 + 0x4f) + '\x01';
      }
      *(char *)(param_1 + 0x4f) = cVar5;
      return 1;
    }
  }
  return 0;
}


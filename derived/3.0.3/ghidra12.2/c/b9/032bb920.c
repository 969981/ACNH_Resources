
void FUN_032bb920(long param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  long *plVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  char *pcVar17;
  undefined *local_70;
  undefined8 uStack_68;
  undefined *local_60;
  char *pcStack_58;
  undefined8 local_38;
  
  plVar9 = *(long **)(param_1 + 0x70);
  iVar8 = (int)plVar9[2];
  plVar7 = *(long **)(param_1 + 0x78);
  if (*(long **)(param_1 + 0x80) != (long *)0x0) {
    plVar7 = *(long **)(param_1 + 0x80);
  }
  if (iVar8 < 1) {
    uVar14 = 0xffffffff;
  }
  else {
    uVar14 = 0;
    iVar10 = *(int *)((long)plVar9 + 0xc);
    do {
      iVar12 = (int)uVar14;
      iVar1 = 0;
      if ((int)plVar9[1] <= iVar10 + iVar12) {
        iVar1 = (int)plVar9[1];
      }
      if (*(int *)(*plVar9 + (long)iVar10 * 4 + (long)iVar1 * -4 + uVar14 * 4) == -1) {
        if (((-1 < (int)param_2) && (iVar12 < iVar8)) && ((int)param_2 < (int)plVar9[5])) {
          iVar8 = *(int *)((long)plVar9 + 0x24) + param_2;
          iVar2 = 0;
          if ((int)plVar9[4] <= iVar8) {
            iVar2 = (int)plVar9[4];
          }
          if (*(int *)(plVar9[3] + (long)(iVar8 - iVar2) * 4) == -1) {
            *(uint *)(*plVar9 + (long)iVar10 * 4 + (long)iVar1 * -4 + uVar14 * 4) = param_2;
            iVar8 = *(int *)((long)plVar9 + 0x24) + param_2;
            iVar10 = 0;
            if ((int)plVar9[4] <= iVar8) {
              iVar10 = (int)plVar9[4];
            }
            *(int *)(plVar9[3] + (long)(iVar8 - iVar10) * 4) = iVar12;
          }
        }
        goto LAB_032bb9b4;
      }
      uVar14 = uVar14 + 1;
    } while (iVar8 != (int)uVar14);
    uVar14 = 0xffffffff;
  }
LAB_032bb9b4:
  if (param_2 < *(uint *)(plVar7 + 2)) {
    iVar8 = *(int *)((long)plVar7 + 0xc) + param_2;
    iVar10 = 0;
    if ((int)plVar7[1] <= iVar8) {
      iVar10 = (int)plVar7[1];
    }
    pcVar17 = (char *)(*plVar7 + (long)(iVar8 - iVar10) * 0x38);
    cVar3 = pcVar17[0x30];
  }
  else {
    pcVar17 = (char *)0x0;
    cVar3 = cRam0000000000000030;
  }
  if (cVar3 == '\0') {
    bVar5 = *pcVar17 != '\0';
  }
  else {
    bVar5 = false;
  }
  uVar13 = (uint)uVar14;
  uVar16 = uVar14 & 0xffffffff;
  lVar15 = *(long *)(param_1 + 0x68) + 8;
  lVar6 = lVar15 + (uVar14 & 0xffffffff) * 0x68;
  if (0xe < uVar13) {
    lVar6 = lVar15;
  }
  FUN_032b6c7c(lVar6,param_3,bVar5,pcVar17 + 8,pcVar17[1]);
  lVar15 = *(long *)(param_1 + 0x68);
  if (uVar13 < 0xf) {
    lVar6 = *(long *)(lVar15 + uVar16 * 0x68 + 8);
    iVar8 = 1;
    if (pcVar17[0x30] == '\0') {
      iVar8 = 2;
    }
    local_60 = (undefined *)CONCAT44(local_60._4_4_,iVar8);
    iVar10 = (int)*(char *)(lVar6 + 0x57c);
    local_70 = (undefined *)CONCAT44(local_70._4_4_,iVar10);
    if (iVar8 != iVar10) {
      *(char *)(lVar6 + 0x57c) = (char)iVar8;
      lVar15 = *(long *)(param_1 + 0x68);
    }
  }
  if (param_2 == 0) {
    if (**(char **)(PTR_PTR_04bb2238 + 8) == '\0') {
      lVar6 = *(long *)(*(long *)(*(long *)(lVar15 + 0x650) + 0xf0) + 0x18);
    }
    else {
      local_60 = PTR_DAT_04bc8e68 + 0x10;
      pcStack_58 = *(char **)(PTR_PTR_04bb2238 + 8);
      lVar6 = FUN_032cb8e0(&local_70,&local_60,*(undefined8 *)(*(long *)(lVar15 + 0x650) + 0xf0));
    }
    *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 1;
    FUN_032b78a0(lVar15,uVar14 & 0xffffffff);
    lVar15 = *(long *)(param_1 + 0x68);
  }
  if (*(char *)(param_1 + 0x89) != '\0') {
    iVar8 = *(int *)((long)plVar7 + 0x24) + param_2;
    iVar10 = 0;
    if ((int)plVar7[4] <= iVar8) {
      iVar10 = (int)plVar7[4];
    }
    plVar9 = (long *)(lVar15 + 8) + uVar16 * 0xd;
    if (0xe < uVar13) {
      plVar9 = (long *)(lVar15 + 8);
    }
    uStack_68 = *(undefined8 *)(plVar7[3] + (long)(iVar8 - iVar10) * 0x10 + 8);
    local_70 = PTR_DAT_04bc8e78 + 0x10;
    local_60 = PTR_DAT_04bc8e68 + 0x10;
    local_38 = *(undefined8 *)(*(long *)(*plVar9 + 0x20) + 0x18);
    pcStack_58 = "T_01";
    local_60 = (undefined *)FUN_0328b6d0(&local_38,&local_60,0);
    FUN_032d67f0(&local_60,&local_70);
    lVar15 = *(long *)(param_1 + 0x68);
  }
  plVar7 = (long *)(lVar15 + 8) + uVar16 * 0xd;
  if (0xe < uVar13) {
    plVar7 = (long *)(lVar15 + 8);
  }
  lVar15 = *(long *)(*plVar7 + 0x428);
  if ((lVar15 != 0) && (plVar7 = (long *)(lVar15 + 8), *plVar7 == 0)) {
    plVar9 = (long *)(*(long *)(*(long *)(param_1 + 0x90) + 0x18) + 0x58);
    puVar4 = (undefined8 *)*plVar9;
    if ((undefined8 *)*plVar9 == (undefined8 *)0x0) {
      *plVar9 = (long)plVar7;
    }
    else {
      do {
        puVar11 = puVar4;
        puVar4 = (undefined8 *)puVar11[2];
      } while ((undefined8 *)puVar11[2] != (undefined8 *)0x0);
      puVar11[2] = plVar7;
      *(undefined8 **)(lVar15 + 0x10) = puVar11;
      plVar9 = (long *)*puVar11;
    }
    *plVar7 = (long)plVar9;
  }
  return;
}


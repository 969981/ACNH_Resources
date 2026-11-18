
void FUN_03414f00(long *param_1,long *param_2,int param_3)

{
  ulong uVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  void *__dest;
  long *plVar8;
  long *plVar9;
  char *pcVar10;
  void *__src;
  uint uVar11;
  uint *puVar12;
  undefined *local_60;
  undefined4 local_58;
  
  if (*param_1 == 0) {
    return;
  }
  if (param_1[1] == 0) {
    return;
  }
  plVar6 = param_1 + 6;
  plVar8 = plVar6 + (ulong)*(uint *)(param_1 + 0x2a) * 0x12;
  if (1 < *(uint *)(param_1 + 0x2a)) {
    plVar8 = plVar6;
  }
  if (((int)*plVar8 != -1) && (*(char *)plVar8[2] != '\0')) {
    plVar9 = plVar8 + 1;
    local_60._0_4_ = param_3;
    (**(code **)(*plVar9 + 0x18))(plVar9);
    (**(code **)(*plVar9 + 0x18))(plVar9);
    pcVar10 = (char *)plVar8[2];
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if (pcVar10 != pcVar3) {
      pcVar10 = (char *)plVar8[2];
      if (*pcVar10 != *pcVar3) goto LAB_0341501c;
      if (*pcVar10 != '\0') {
        lVar5 = 0;
        do {
          if ((lVar5 == 0x80000) || (pcVar10[lVar5 + 1] != pcVar3[lVar5 + 1])) goto LAB_0341501c;
          if (pcVar10[lVar5 + 1] == '\0') break;
          lVar4 = lVar5 + 2;
          if (pcVar10[lVar4] != pcVar3[lVar5 + 2]) goto LAB_0341501c;
          lVar5 = lVar5 + 2;
        } while (pcVar10[lVar4] != '\0');
      }
    }
    if ((int)plVar8[0xc] == (int)local_60) {
      return;
    }
  }
LAB_0341501c:
  local_60 = (undefined *)CONCAT44(local_60._4_4_,param_3);
  uVar11 = ~*(uint *)(param_1 + 0x2a) & 1;
  puVar12 = (uint *)(plVar6 + (ulong)uVar11 * 0x12);
  if ((*puVar12 != 0xffffffff) &&
     (plVar8 = plVar6 + (ulong)uVar11 * 0x12 + 2, *(char *)*plVar8 != '\0')) {
    plVar9 = plVar6 + (ulong)uVar11 * 0x12 + 1;
    (**(code **)(*plVar9 + 0x18))(plVar9);
    (**(code **)(*plVar9 + 0x18))(plVar9);
    pcVar10 = (char *)*plVar8;
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if (pcVar10 != pcVar3) {
      pcVar10 = (char *)*plVar8;
      if (*pcVar10 != *pcVar3) goto LAB_034151e0;
      if (*pcVar10 != '\0') {
        lVar5 = 0;
        do {
          if ((lVar5 == 0x80000) || (pcVar10[lVar5 + 1] != pcVar3[lVar5 + 1])) goto LAB_034151e0;
          if (pcVar10[lVar5 + 1] == '\0') break;
          lVar4 = lVar5 + 2;
          if (pcVar10[lVar4] != pcVar3[lVar5 + 2]) goto LAB_034151e0;
          lVar5 = lVar5 + 2;
        } while (pcVar10[lVar4] != '\0');
      }
    }
    if ((int)plVar6[(ulong)uVar11 * 0x12 + 0xc] == (int)local_60) {
      if ((char)plVar6[(ulong)uVar11 * 0x12 + 0x11] != '\0') {
        return;
      }
      if ((((*param_1 != 0) && (param_1[1] != 0)) && (uVar7 = *puVar12, uVar7 < 0x10e)) &&
         (lVar5 = param_1[1] + 8, *(int *)(lVar5 + (ulong)uVar7 * 0x1a8 + 0x1a0) == 2)) {
        plVar6 = plVar6 + (ulong)uVar11 * 0x12 + 0xd;
        uVar1 = FUN_03463a4c(lVar5 + (ulong)uVar7 * 0x1a8,lVar5 + (ulong)uVar7 * 0x1a8 + 0x148,
                             plVar6);
        plVar8 = (long *)*param_1;
        if ((uVar1 & 1) == 0) {
          plVar6 = param_1 + 2;
        }
        local_60 = PTR_DAT_04bc0cb8 + 0x10;
        local_58 = 0x1f;
        (**(code **)(*plVar8 + 0x18))(plVar8,&local_60);
        (**(code **)(plVar8[3] + 0x208))(plVar8[1],0,0,plVar6);
      }
      *(uint *)(param_1 + 0x2a) = (*(uint *)(param_1 + 0x2a) ^ 0xffffffff) & 1;
      return;
    }
  }
LAB_034151e0:
  uVar7 = *puVar12;
  lVar5 = param_1[1];
  if (uVar7 != 0xffffffff) {
    if (uVar7 < 0x10e) {
      lVar4 = lVar5 + 8 + (ulong)uVar7 * 0x1a8;
      if (*(int *)(lVar4 + 0x1a0) != 0) {
        lVar5 = lVar5 + 8 + (ulong)uVar7 * 0x1a8;
        **(undefined1 **)(lVar5 + 0x60) = 0;
        *(undefined1 *)(lVar5 + 0xf0) = 0;
        if (((*(int *)(lVar5 + 0x100) != 1) && ((*(byte *)(lVar5 + 0x18) >> 1 & 1) != 0)) &&
           (*(int *)(lVar5 + 0x140) == -1)) {
          *(undefined4 *)(lVar5 + 0x140) = 1;
        }
        *(undefined4 *)(lVar4 + 0x1a0) = 0;
      }
    }
    *puVar12 = 0xffffffff;
    *(undefined1 *)plVar6[(ulong)uVar11 * 0x12 + 2] = 0;
    *(int *)(plVar6 + (ulong)uVar11 * 0x12 + 0xc) = 0;
    *(undefined1 *)(plVar6 + (ulong)uVar11 * 0x12 + 0x11) = 0;
    plVar6[(ulong)uVar11 * 0x12 + 0xe] = -1;
    lVar5 = param_1[1];
  }
  if ((*(char *)param_2[1] == '\0') && (*(short *)PTR_DAT_04bb37e0 == -2)) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = 0;
    iVar2 = 0;
    do {
      if ((*(int *)(lVar5 + 8 + (long)iVar2 * 0x1a8 + 0x1a0) == 0) &&
         (lVar4 = lVar5 + 8 + (long)iVar2 * 0x1a8, (*(byte *)(lVar4 + 0x18) >> 1 & 1) == 0)) {
        FUN_03412d40(lVar4,param_2,PTR_DAT_04bb37e0,param_3);
        goto LAB_03415308;
      }
      iVar2 = iVar2 + 1;
      uVar7 = uVar7 + 1;
    } while (iVar2 != 0x10e);
    uVar7 = 0xffffffff;
  }
LAB_03415308:
  *puVar12 = uVar7;
  __dest = (void *)plVar6[(ulong)uVar11 * 0x12 + 2];
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (__dest != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar5 = 0;
    do {
      if (*(char *)(param_2[1] + lVar5) == '\0') goto LAB_0341539c;
      lVar4 = param_2[1] + lVar5;
      if (*(char *)(lVar4 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0341539c;
      }
      if (*(char *)(lVar4 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0341539c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0341539c:
    iVar2 = (int)lVar5;
    if ((int)plVar6[(ulong)uVar11 * 0x12 + 3] <= (int)lVar5) {
      iVar2 = (int)plVar6[(ulong)uVar11 * 0x12 + 3] + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  *(int *)(plVar6 + (ulong)uVar11 * 0x12 + 0xc) = param_3;
  *(undefined1 *)(plVar6 + (ulong)uVar11 * 0x12 + 0x11) = 1;
  return;
}



uint FUN_01711ed0(long param_1,long *param_2,undefined4 param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  char *pcVar11;
  
  if (*(int *)(param_1 + 0x16c0) == 0) {
    uVar8 = 3;
    lVar4 = *(long *)(param_1 + 0x1138);
    if (lVar4 != 0) {
      uVar3 = 0;
      if (*(long *)(lVar4 + 0x78) != 0) {
        uVar3 = *(uint *)(*(long *)(lVar4 + 0x78) + 0x18);
      }
      if (uVar3 < 4) {
        uVar8 = 0;
      }
      if (*(uint *)(lVar4 + 0x80) <= uVar8) {
        uVar8 = 0;
      }
      lVar4 = *(long *)(lVar4 + 0x88) + (long)(int)uVar8 * 0xe8;
      plVar10 = (long *)(lVar4 + 0x60);
      (**(code **)(*plVar10 + 0x18))(plVar10);
      (**(code **)(*plVar10 + 0x18))(plVar10);
      pcVar11 = *(char **)(lVar4 + 0x68);
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar7 = (char *)param_2[1];
      if (pcVar11 != pcVar7) {
        pcVar11 = *(char **)(lVar4 + 0x68);
        if (*pcVar11 != *pcVar7) goto LAB_01711ff8;
        if (*pcVar11 != '\0') {
          uVar2 = 0;
          do {
            uVar5 = uVar2;
            if ((uVar5 == 0x80000) || (pcVar11[uVar5 + 1] != pcVar7[uVar5 + 1])) goto LAB_01711ff8;
            if (pcVar11[uVar5 + 1] == '\0') goto LAB_01711ff0;
            if (pcVar11[uVar5 + 2] != pcVar7[uVar5 + 2]) goto LAB_01711ff8;
            uVar2 = uVar5 + 2;
          } while (pcVar11[uVar5 + 2] != '\0');
          uVar5 = uVar5 + 1;
LAB_01711ff0:
          if (0x7ffff < uVar5) goto LAB_01711ff8;
        }
      }
      goto LAB_01711efc;
    }
LAB_01711ff8:
    FUN_01707310(param_1,param_2,param_3,3,0);
    FUN_01707750(param_1,param_2);
    uVar8 = 1;
    iVar1 = *(int *)(param_1 + 0x16c4);
    plVar10 = (long *)PTR_DAT_04bb43c0;
  }
  else {
LAB_01711efc:
    uVar8 = 0;
    iVar1 = *(int *)(param_1 + 0x16c4);
    plVar10 = (long *)PTR_DAT_04bb43c0;
  }
  if (iVar1 != 0) {
    PTR_DAT_04bb43c0 = (undefined *)plVar10;
    return uVar8;
  }
  lVar4 = *(long *)(param_1 + 0x1480);
  if (lVar4 == 0) {
    PTR_DAT_04bb43c0 = (undefined *)plVar10;
    return uVar8;
  }
  lVar9 = *plVar10;
  PTR_DAT_04bb43c0 = (undefined *)plVar10;
  uVar3 = FUN_0277d6c4(lVar4 + ((ulong)*(uint *)(lVar4 + 0x10) & 1) * 0x20 + 0x14);
  if (*plVar10 != 0) {
    lVar4 = *(long *)(lVar9 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if (((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
        (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
       ((*(uint *)(param_1 + 0x15f4) >> 4 & 1) == 0)) {
      return uVar8;
    }
  }
  uVar3 = 2;
  lVar4 = *(long *)(param_1 + 0x1138);
  if (lVar4 == 0) {
LAB_017121ac:
    FUN_01707310(param_1,param_2,param_3,2,0);
    FUN_01707750(param_1,param_2);
    uVar3 = 1;
  }
  else {
    uVar6 = 0;
    if (*(long *)(lVar4 + 0x78) != 0) {
      uVar6 = *(uint *)(*(long *)(lVar4 + 0x78) + 0x18);
    }
    if (uVar6 < 3) {
      uVar3 = 0;
    }
    if (*(uint *)(lVar4 + 0x80) <= uVar3) {
      uVar3 = 0;
    }
    lVar4 = *(long *)(lVar4 + 0x88) + (long)(int)uVar3 * 0xe8;
    plVar10 = (long *)(lVar4 + 0x60);
    (**(code **)(*plVar10 + 0x18))(plVar10);
    (**(code **)(*plVar10 + 0x18))(plVar10);
    pcVar11 = *(char **)(lVar4 + 0x68);
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar7 = (char *)param_2[1];
    if (pcVar11 != pcVar7) {
      pcVar11 = *(char **)(lVar4 + 0x68);
      if (*pcVar11 != *pcVar7) goto LAB_017121ac;
      if (*pcVar11 != '\0') {
        uVar2 = 0;
        do {
          uVar5 = uVar2;
          if ((uVar5 == 0x80000) || (pcVar11[uVar5 + 1] != pcVar7[uVar5 + 1])) goto LAB_017121ac;
          if (pcVar11[uVar5 + 1] == '\0') goto LAB_0171219c;
          if (pcVar11[uVar5 + 2] != pcVar7[uVar5 + 2]) goto LAB_017121ac;
          uVar2 = uVar5 + 2;
        } while (pcVar11[uVar5 + 2] != '\0');
        uVar5 = uVar5 + 1;
LAB_0171219c:
        if (0x7ffff < uVar5) goto LAB_017121ac;
      }
    }
    uVar3 = 0;
  }
  return uVar8 | uVar3;
}


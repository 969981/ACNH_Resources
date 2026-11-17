
void FUN_030db7c0(long param_1,uint param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined *local_40;
  char *pcStack_38;
  
  if ((param_2 < 10) && (*(char *)param_3[1] != '\0')) {
    lVar5 = *(long *)(param_1 + 0x4a0);
    if (*(uint *)(param_1 + 0x498) <= param_2) {
      param_2 = 0;
    }
    if ((lVar5 != 0) && (lVar6 = *(long *)(param_1 + 0x490), lVar6 != 0)) {
      (**(code **)(*param_3 + 0x18))(param_3);
      pcStack_38 = (char *)param_3[1];
      local_40 = PTR_DAT_04bb2020 + 0x10;
      if ((*pcStack_38 != '\0') || (*(short *)PTR_DAT_04bb37e0 != -2)) {
        iVar4 = 0;
        iVar2 = 0;
        lVar6 = lVar6 + 8;
        do {
          if ((*(int *)(lVar6 + (long)iVar2 * 0x1a8 + 0x1a0) == 0) &&
             (lVar1 = lVar6 + (long)iVar2 * 0x1a8, (*(byte *)(lVar1 + 0x18) >> 1 & 1) == 0)) {
            FUN_03412d40(lVar1,&local_40,PTR_DAT_04bb37e0,0x11);
            if (iVar4 == 1) {
              return;
            }
            piVar3 = (int *)(lVar5 + (ulong)param_2 * 0x18 + 0x10);
            if (*piVar3 + iVar4 == 0) {
              return;
            }
            *piVar3 = -iVar4;
            *(undefined4 *)(lVar5 + (ulong)param_2 * 0x18 + 0x14) = 1;
            return;
          }
          iVar2 = iVar2 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar2 != 0x10e);
      }
    }
  }
  return;
}



void FUN_030b4238(float param_1,long param_2,float *param_3,float param_4,float param_5,byte param_6
                 )

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  long *plVar5;
  float *pfVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  
  if (0 < *(int *)(param_2 + 0xafcb0)) {
    plVar5 = *(long **)(param_2 + 0xafca8);
    if (*plVar5 != 0) {
      *(long *)(*plVar5 + 8) = plVar5[1];
    }
    if ((long *)plVar5[1] != (long *)0x0) {
      *(long *)plVar5[1] = *plVar5;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    *(int *)(param_2 + 0xafcb0) = *(int *)(param_2 + 0xafcb0) + -1;
    if ((plVar5 != (long *)0x0) &&
       (pfVar6 = (float *)((long)plVar5 - (long)*(int *)(param_2 + 0xafcb4)), pfVar6 != (float *)0x0
       )) {
      *pfVar6 = *param_3;
      fVar9 = param_3[1];
      *(byte *)((long)pfVar6 + 0x15) = param_6 & 1;
      pfVar6[4] = param_5;
      *(undefined1 *)(pfVar6 + 6) = 0;
      *(undefined2 *)((long)pfVar6 + 0x16) = 0x100;
      pfVar6[2] = param_4;
      pfVar6[3] = (float)(int)param_1;
      pfVar6[1] = fVar9;
      *(undefined1 *)(pfVar6 + 5) = 1;
      if ((-1 < (int)*param_3) &&
         ((((uint)(int)*param_3 < 0x4ce && (-1 < (int)param_3[1])) &&
          ((uint)(int)param_3[1] < 0x30c)))) {
        if ((param_6 & 1) != 0) {
          *(int *)(param_2 + 0xafcd0) = *(int *)(param_2 + 0xafcd0) + 1;
        }
        plVar8 = (long *)(param_2 + 0xafcb8);
        lVar7 = *plVar8;
        plVar5 = (long *)((long)pfVar6 + (long)*(int *)(param_2 + 0xafccc));
        *plVar8 = (long)plVar5;
        *plVar5 = lVar7;
        plVar5[1] = (long)plVar8;
        if (lVar7 != 0) {
          *(long **)(lVar7 + 8) = plVar5;
        }
        *(int *)(param_2 + 0xafcc8) = *(int *)(param_2 + 0xafcc8) + 1;
        *(int *)(param_2 + 0xafcd4) = *(int *)(param_2 + 0xafcd4) + 1;
      }
      plVar5 = *(long **)(param_2 + 0xafce0);
      if (plVar5 != (long *)0x0) {
        if (*(char *)(pfVar6 + 6) == '\0') {
          pfVar6[7] = 1.4013e-45;
          iVar1 = (int)plVar5[2];
          iVar4 = (int)plVar5[1];
          if (iVar1 < iVar4) {
            *(int *)(plVar5 + 2) = iVar1 + 1;
            iVar1 = *(int *)((long)plVar5 + 0xc) + iVar1;
            iVar2 = 0;
            if (iVar4 <= iVar1) {
              iVar2 = iVar4;
            }
            *(float **)(*plVar5 + (long)(iVar1 - iVar2) * 8) = pfVar6;
          }
          *(undefined1 *)(pfVar6 + 6) = 1;
        }
        piVar3 = (int *)plVar5[0x15f93];
        if (piVar3 != (int *)0x0) {
          iVar1 = *piVar3;
          iVar4 = 2;
          if ((iVar1 != 0) && (iVar1 != 4)) {
            if (iVar1 != 3) {
              return;
            }
            iVar4 = 5;
          }
          *piVar3 = iVar4;
          return;
        }
      }
    }
  }
  return;
}


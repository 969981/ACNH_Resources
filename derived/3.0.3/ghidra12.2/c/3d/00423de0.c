
long * FUN_00423de0(long *param_1,char *param_2,long param_3,undefined8 param_4)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  int iVar12;
  long lVar13;
  long alStack_78 [3];
  
  if (*(char *)*param_1 == '\0') {
    FUN_004225f0(param_1,param_2,0xffffffff);
    if (param_3 != 0) {
      FUN_00423de0(param_1,param_3,param_4,0);
    }
  }
  else {
    alStack_78[0] = param_3;
    alStack_78[1] = param_4;
    alStack_78[2] = 0;
    lVar13 = param_1[1];
    uVar9 = (int)lVar13 - 1;
    *(uint *)(param_1 + 1) = uVar9;
    puVar4 = PTR_DAT_048607c0;
    if (uVar9 == 0) {
      bVar5 = false;
    }
    else {
      bVar5 = ((char *)*param_1)[(long)(int)lVar13 + -2] != '/';
    }
    if (param_2 != (char *)0x0) {
      lVar13 = 0;
      do {
        while (cVar2 = *param_2, cVar2 != '\0') {
          while (cVar2 == '/') {
            param_2 = param_2 + 1;
            cVar2 = *param_2;
          }
          iVar6 = FUN_0043a2d0(param_2);
          if (iVar6 != 0) {
            uVar9 = iVar6 + 1;
            lVar7 = (long)iVar6;
            do {
              if (lVar7 == 0) {
                uVar9 = 0;
                goto LAB_00423f30;
              }
              lVar3 = lVar7 + -1;
              uVar9 = uVar9 - 1;
              lVar7 = lVar7 + -1;
            } while (param_2[lVar3] == '/');
            if (bVar5) {
              uVar8 = *(uint *)(param_1 + 1);
              if (uVar8 == (*(uint *)((long)param_1 + 0xc) & 0x3fffffff)) {
                FUN_00426990(puVar4,param_1,1);
                uVar8 = *(uint *)(param_1 + 1);
              }
              *(undefined1 *)(*param_1 + (long)(int)uVar8) = 0x2f;
              *(uint *)(param_1 + 1) = uVar8 + 1;
            }
LAB_00423f30:
            iVar12 = (int)param_1[1];
            lVar7 = *param_1;
            iVar6 = iVar12 + uVar9;
            if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) < iVar6) {
              lVar7 = FUN_00426720(puVar4,iVar6,1,lVar7,iVar12,(long)param_1 + 0xc);
              *param_1 = lVar7;
            }
            if (0 < (int)uVar9) {
              pcVar11 = (char *)(lVar7 + iVar12);
              uVar8 = uVar9 & 7;
              if (6 < uVar9 - 1) {
                iVar12 = uVar8 - uVar9;
                pcVar10 = pcVar11;
                do {
                  *pcVar10 = *param_2;
                  pcVar10[1] = param_2[1];
                  pcVar10[2] = param_2[2];
                  pcVar10[3] = param_2[3];
                  pcVar10[4] = param_2[4];
                  pcVar10[5] = param_2[5];
                  pcVar10[6] = param_2[6];
                  pcVar1 = param_2 + 7;
                  pcVar11 = pcVar10 + 8;
                  param_2 = param_2 + 8;
                  pcVar10[7] = *pcVar1;
                  iVar12 = iVar12 + 8;
                  pcVar10 = pcVar11;
                } while (iVar12 != 0);
              }
              if (uVar8 != 0) {
                iVar12 = -uVar8;
                do {
                  iVar12 = iVar12 + 1;
                  *pcVar11 = *param_2;
                  pcVar11 = pcVar11 + 1;
                  param_2 = param_2 + 1;
                } while (iVar12 != 0);
              }
            }
            *(int *)(param_1 + 1) = iVar6;
          }
          bVar5 = true;
          param_2 = (char *)alStack_78[lVar13];
          lVar13 = lVar13 + 1;
          if (param_2 == (char *)0x0) goto LAB_00424014;
        }
        param_2 = (char *)alStack_78[lVar13];
        lVar13 = lVar13 + 1;
      } while (param_2 != (char *)0x0);
LAB_00424014:
      uVar9 = *(uint *)(param_1 + 1);
    }
    if (uVar9 == (*(uint *)((long)param_1 + 0xc) & 0x3fffffff)) {
      FUN_00426990(PTR_DAT_048607c0,param_1,1);
      uVar9 = *(uint *)(param_1 + 1);
    }
    *(undefined1 *)(*param_1 + (long)(int)uVar9) = 0;
    *(uint *)(param_1 + 1) = uVar9 + 1;
  }
  return param_1;
}


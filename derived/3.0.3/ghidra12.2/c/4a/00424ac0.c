
long * FUN_00424ac0(long *param_1,int param_2,int param_3,long param_4,int param_5)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar10 = 0;
  if (param_4 != 0) {
    iVar4 = param_5;
    if (param_5 < 0) {
      iVar4 = 0x7fffffff;
    }
    if ((0 < iVar4) && (0 < param_3)) {
      if (param_5 < 1) {
        uVar10 = 0;
        while (*(char *)(param_4 + uVar10) != '\0') {
          *(char *)(*param_1 + (long)param_2 + uVar10) = *(char *)(param_4 + uVar10);
          uVar10 = uVar10 + 1;
          if (((long)iVar4 <= (long)uVar10) || ((long)param_3 <= (long)uVar10)) break;
        }
      }
      else {
        uVar10 = 0;
        do {
          *(undefined1 *)(*param_1 + (long)param_2 + uVar10) = *(undefined1 *)(param_4 + uVar10);
          uVar10 = uVar10 + 1;
          if ((long)iVar4 <= (long)uVar10) break;
        } while ((long)uVar10 < (long)param_3);
      }
    }
  }
  iVar4 = (int)uVar10;
  if (iVar4 < param_3) {
    lVar1 = (long)iVar4 + (long)param_2;
    lVar5 = (long)param_3 - (long)iVar4;
    iVar4 = (int)param_1[1] - (int)lVar5;
    iVar3 = iVar4 - (int)lVar1;
    *(int *)(param_1 + 1) = iVar4;
    if (0 < iVar3) {
      lVar7 = 0;
      puVar8 = (undefined1 *)(*param_1 + lVar1);
      do {
        lVar7 = (lVar7 << 0x20) + 0x100000000 >> 0x20;
        *puVar8 = puVar8[lVar5];
        puVar8 = puVar8 + 1;
      } while (lVar7 < iVar3);
    }
  }
  else if (param_4 != 0) {
    if (param_5 < 0) {
      param_5 = iVar4 + -1;
      pcVar6 = (char *)(param_4 + (uVar10 & 0xffffffff));
      do {
        cVar2 = *pcVar6;
        param_5 = param_5 + 1;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
    }
    uVar9 = (long)param_5 - (long)iVar4;
    if ((int)uVar9 != 0) {
      lVar7 = param_1[1];
      lVar1 = (long)iVar4 + (long)param_2;
      lVar5 = *param_1;
      iVar4 = (int)lVar7 + (int)uVar9;
      if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) < iVar4) {
        lVar5 = FUN_00426720(PTR_DAT_048607c0,iVar4,1);
        *param_1 = lVar5;
      }
      lVar5 = lVar5 + lVar1;
      FUN_0043aa30(lVar5 + uVar9,lVar5,(long)((int)lVar7 - (int)lVar1));
      *(int *)(param_1 + 1) = iVar4;
      FUN_0043a3b0(lVar5,param_4 + (uVar10 & 0xffffffff),uVar9 & 0xffffffff);
    }
  }
  return param_1;
}


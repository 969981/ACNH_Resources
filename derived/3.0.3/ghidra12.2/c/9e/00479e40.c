
int FUN_00479e40(int param_1,long *param_2,long *param_3,int param_4,long *param_5)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  uint uVar5;
  int *piVar6;
  undefined1 auStack_e8 [148];
  int local_54;
  
  if (*(int *)(*param_2 + (long)param_1 * 4) == -1) {
    *(undefined4 *)(*param_2 + (long)param_1 * 4) = 0xfffffffe;
    uVar5 = *(uint *)(param_5 + 1);
    local_54 = param_1;
    if (uVar5 == (*(uint *)((long)param_5 + 0xc) & 0x3fffffff)) {
      FUN_00426990(PTR_DAT_048607b8,param_5,4);
      uVar5 = *(uint *)(param_5 + 1);
    }
    *(int *)(*param_5 + (long)(int)uVar5 * 4) = local_54;
    *(uint *)(param_5 + 1) = uVar5 + 1;
    lVar4 = FUN_0047c340(param_3,&local_54);
    puVar3 = PTR_DAT_048607b8;
    if ((lVar4 != 0) &&
       (uVar5 = *(uint *)(lVar4 + 4) | ((int)lVar4 - (int)param_3[2]) * 0x20000000, -1 < (int)uVar5)
       ) {
      lVar4 = *param_3 + (long)(int)uVar5 * 0x18;
      iVar1 = *(int *)(lVar4 + 0x10);
      if (iVar1 != 0) {
        piVar6 = *(int **)(lVar4 + 8);
        lVar4 = (long)iVar1 << 2;
        do {
          while( true ) {
            iVar2 = *piVar6;
            iVar1 = *(int *)(*param_2 + (long)iVar2 * 4);
            if (iVar1 == -2) break;
            if (iVar1 == -1) {
              param_4 = FUN_00479e40(iVar2,param_2,param_3,param_4,param_5);
            }
            piVar6 = piVar6 + 1;
            lVar4 = lVar4 + -4;
            if (lVar4 == 0) goto LAB_00479fd4;
          }
          uVar5 = *(uint *)(param_5 + 1);
          if (uVar5 == (*(uint *)((long)param_5 + 0xc) & 0x3fffffff)) {
            FUN_00426990(puVar3,param_5,4);
            uVar5 = *(uint *)(param_5 + 1);
          }
          *(int *)(*param_5 + (long)(int)uVar5 * 4) = iVar2;
          *(uint *)(param_5 + 1) = uVar5 + 1;
          FUN_004225b0(auStack_e8);
          *(int *)(param_5 + 1) = (int)param_5[1] + -1;
          FUN_00422550(auStack_e8);
          piVar6 = piVar6 + 1;
          lVar4 = lVar4 + -4;
        } while (lVar4 != 0);
      }
    }
LAB_00479fd4:
    *(int *)(param_5 + 1) = (int)param_5[1] + -1;
    *(int *)(*param_2 + (long)local_54 * 4) = param_4;
    param_4 = param_4 + 1;
  }
  return param_4;
}


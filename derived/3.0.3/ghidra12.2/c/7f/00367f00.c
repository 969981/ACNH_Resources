
void FUN_00367f00(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar3 + 8);
  if (lVar6 != lVar3) {
    do {
      iVar1 = *(int *)(lVar6 + 0x48);
      lVar7 = *(long *)(lVar6 + 8);
      if (0 < iVar1) {
        lVar3 = *(long *)(lVar6 + 0x10);
        iVar8 = 0;
        iVar9 = 1;
        do {
          lVar4 = *(long *)(lVar6 + 0x40);
          if (lVar4 != lVar6 + 0x38) {
            iVar5 = iVar9;
            do {
              iVar5 = iVar5 + -1;
              if (iVar5 == 0) {
                plVar10 = (long *)(lVar4 + -0x20);
                if (*(long *)(*plVar10 + 0x38) != 0) goto LAB_00367f84;
                goto LAB_00367fe0;
              }
              lVar4 = *(long *)(lVar4 + 8);
            } while (lVar4 != lVar6 + 0x38);
          }
          plVar10 = (long *)0x0;
          if (*(long *)(lRam0000000000000000 + 0x38) == 0) {
LAB_00367fe0:
            uVar2 = (**(code **)(**(long **)(lVar3 + 0x18) + 0x60))
                              (*(long **)(lVar3 + 0x18),plVar10[3],1);
            if (plVar10[1] == 0) {
              if (plVar10[2] != 0) {
                FUN_0036ee20(*plVar10,param_2,lVar3);
              }
            }
            else {
              FUN_0036ec2c(*plVar10,param_2,lVar3,plVar10[1],uVar2);
            }
          }
LAB_00367f84:
          iVar8 = iVar8 + 1;
          iVar9 = iVar9 + 1;
        } while (iVar8 != iVar1);
        lVar3 = *(long *)(param_1 + 0x10);
      }
      lVar6 = lVar7;
    } while (lVar7 != lVar3);
  }
  return;
}


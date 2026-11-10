
int FUN_00165794(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  char *__s1;
  
  FUN_001532b0(param_2);
  if (param_3 == (long *)0x0) {
    iVar1 = 0;
  }
  else {
    lVar2 = FUN_00153910(param_1);
    if (lVar2 == 0) {
LAB_001659fc:
      iVar1 = 0x1b;
    }
    else {
      iVar1 = FUN_0015398c(param_2,lVar2);
      if (iVar1 == 0) {
        uVar6 = *(undefined8 *)PTR_stdin_04bcb8f0;
        do {
          lVar4 = lVar2;
          if (param_3[9] != 0) {
            lVar3 = FUN_00153994(lVar2);
            if (lVar3 == 0) {
              iVar1 = 0x1b;
              goto LAB_00165a08;
            }
            iVar1 = FUN_00165a34(lVar3,param_3[1],param_3[2]);
            if (iVar1 != 0) goto LAB_00165a08;
            lVar4 = FUN_00153910(param_1);
            if (lVar4 == 0) goto LAB_001659fc;
            iVar1 = FUN_0015398c(lVar3,lVar4);
            if (iVar1 != 0) goto LAB_00165a08;
          }
          plVar9 = param_3;
          do {
            lVar3 = FUN_00153994(lVar4);
            if (lVar3 == 0) {
              iVar1 = 0x1b;
              break;
            }
            iVar1 = FUN_00153a08(lVar3,plVar9[8],0);
            if (((iVar1 != 0) || ((plVar9[7] != 0 && (iVar1 = FUN_00153a80(lVar3), iVar1 != 0)))) ||
               ((param_3[9] == 0 && (iVar1 = FUN_00165a34(lVar3,param_3[1],param_3[2]), iVar1 != 0))
               )) goto LAB_00165a08;
            uVar7 = param_3[10];
            lVar8 = 0x20;
            if ((uVar7 & 0x80) != 0) {
              lVar8 = 0x68;
            }
            lVar8 = *(long *)((long)param_3 + lVar8);
            if (lVar8 == 0) {
              lVar8 = -1;
            }
            if ((uVar7 & 3) == 0) {
              if (((uint)uVar7 >> 4 & 1) == 0) {
                if (((uint)uVar7 >> 6 & 1) != 0) {
                  iVar1 = FUN_0015387c(lVar3,lVar8,param_4,0,0,param_3[0xc]);
                  goto LAB_00165994;
                }
                lVar5 = param_3[3];
              }
              else {
                lVar5 = param_3[5];
                lVar8 = param_3[6];
                if (lVar8 == 0) {
                  lVar8 = -1;
                }
              }
              iVar1 = FUN_001535f4(lVar3,lVar5,lVar8);
LAB_00165994:
              if (iVar1 != 0) goto LAB_00165a08;
            }
            else {
              __s1 = (char *)plVar9[3];
              iVar1 = strcmp(__s1,"-");
              if (iVar1 == 0) {
                iVar1 = FUN_0015387c(lVar3,0xffffffffffffffff,PTR_fread_04bcb720,PTR_fseek_04bcb728,
                                     0,uVar6);
              }
              else {
                iVar1 = FUN_001536e0(lVar3,__s1);
              }
              if (iVar1 != 0) goto LAB_00165a08;
              if ((*(byte *)(param_3 + 10) >> 1 & 1) != 0) {
                iVar1 = FUN_00153b30(lVar3,0);
                goto LAB_00165994;
              }
            }
            if ((param_3[0xb] == 0) ||
               ((param_3[9] == 0 && ((*(byte *)(param_3 + 10) & 0x51) == 0)))) {
              iVar1 = 0;
            }
            else {
              iVar1 = FUN_00153b30(lVar3);
              if (iVar1 != 0) break;
            }
            plVar9 = (long *)plVar9[9];
          } while (plVar9 != (long *)0x0);
        } while ((iVar1 == 0) && (param_3 = (long *)*param_3, param_3 != (long *)0x0));
        if (iVar1 == 0) {
          return 0;
        }
      }
    }
LAB_00165a08:
    FUN_001532b0(param_2);
  }
  return iVar1;
}


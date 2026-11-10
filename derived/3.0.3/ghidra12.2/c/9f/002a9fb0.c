
long * FUN_002a9fb0(long *param_1,undefined8 param_2,undefined8 param_3,int param_4,
                   undefined1 *param_5)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  
  uVar3 = FUN_00227404(param_3);
  if ((((uVar3 & 1) != 0) && (param_1[5] != 0)) && ((int)param_1[0x125] == 0)) {
    lVar4 = param_1[1];
    uVar1 = (param_4 + 0xfU & 0xfffffffc) + 4;
    if (uVar1 <= (int)lVar4 - 0x20U) {
      if ((param_5[1] == '\0') &&
         (lVar5 = FUN_002a9208(param_1[5],0), puVar2 = PTR_DAT_04bc1510, lVar5 != 0)) {
        iVar8 = 0;
        do {
          lVar5 = FUN_002a9208(param_1[5],iVar8);
          if ((((*(char *)(lVar5 + 0x629) == '\0') &&
               ((*(int *)((long)param_1 + 0xc) == 0 ||
                ((param_5[2] != '\0') == (*(char *)(lVar5 + 0x62a) != '\0'))))) &&
              (*(uint *)(lVar5 + 0x5f8) <= (int)lVar4 - uVar1)) &&
             (((param_5[3] != '\0') == (*(char *)(lVar5 + 0x62b) != '\0') &&
              (((*(int *)(lVar5 + 0x14) == 0 ||
                (lVar6 = FUN_002ba790(*(undefined8 *)puVar2), *(long *)(lVar6 + 0x98) == 0)) ||
               (lVar6 = FUN_002ba790(*(undefined8 *)puVar2),
               *(int *)(lVar5 + 0x14) == *(int *)(*(long *)(lVar6 + 0x98) + 0x48))))))) {
            lVar5 = FUN_002a9208(param_1[5],iVar8);
            uVar3 = FUN_0022740c(lVar5 + 0x600,param_3);
            if ((uVar3 & 1) != 0) {
              lVar4 = FUN_002a9208(param_1[5],iVar8);
              if (lVar4 != 0) goto LAB_002aa03c;
              break;
            }
          }
          iVar8 = iVar8 + 1;
          lVar5 = FUN_002a9208(param_1[5],iVar8);
        } while (lVar5 != 0);
      }
      lVar4 = FUN_002aa2a0(param_1,param_3,0,param_5);
      if (lVar4 != 0) {
LAB_002aa03c:
        lVar5 = FUN_0022b910(lVar4,uVar1);
        *(undefined4 *)(lVar5 + (ulong)((uVar1 >> 2) - 1) * 4) = 0;
        plVar7 = param_1 + 6;
        (**(code **)(*param_1 + 0x90))(param_1);
        FUN_002ac270(plVar7,param_2,param_4,0,param_5[1]);
        FUN_002ac58c(plVar7,lVar4,lVar5,0,*param_5,1,0,0);
        return plVar7;
      }
    }
  }
  return (long *)0x0;
}



undefined8 FUN_00157734(long *param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  long *__s;
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  int *piVar5;
  undefined1 (*pauVar6) [16];
  long *plVar7;
  undefined1 auVar8 [16];
  undefined4 local_54;
  
  local_54 = 0;
  pauVar6 = *(undefined1 (**) [16])(*param_1 + 0x12a8);
  *param_4 = 0;
  iVar1 = FUN_0014b5f8(2,param_2,&local_54);
  if (0 < iVar1) {
    uVar2 = FUN_0014b4d4(2,&local_54,param_2,param_3);
    return uVar2;
  }
  auVar8 = FUN_00147178();
  *pauVar6 = auVar8;
  plVar3 = (long *)FUN_00143330(1,0x90);
  param_1[0xaa] = (long)plVar3;
  if (plVar3 != (long *)0x0) {
    __s = plVar3 + 3;
    *(undefined4 *)(param_1 + 0xa7) = param_3;
    *(undefined4 *)(param_1 + 0xa9) = 0;
    param_1[0xa8] = 0;
    *(byte *)(param_1 + 0xab) = *(byte *)(param_1 + 0xab) & 0xfe;
    *plVar3 = 0;
    memset(__s,0,0x70);
    plVar3[0x11] = (long)plVar3;
    *(undefined4 *)(plVar3 + 6) = param_3;
    *(undefined4 *)(plVar3 + 4) = 1;
    lVar4 = FUN_001432f0(0x20);
    plVar3[3] = lVar4;
    if (lVar4 != 0) {
      nnosInitializeMutex(lVar4,0,1);
      *(undefined4 *)((long)plVar3 + 0x34) = 0;
      *(undefined1 *)(plVar3 + 10) = 0;
      plVar3[8] = 0x6400007531;
      plVar3[9] = 1;
      if (*param_1 != 0) {
        *(byte *)(plVar3 + 10) = *(byte *)(*param_1 + 0x6c1) ^ 1;
      }
      plVar7 = plVar3 + 0xb;
      *plVar7 = 0x6500002711;
      plVar3[0xc] = 4;
      nnsocketResolverGetOption(plVar7,0x2711);
      *(undefined1 *)(plVar3 + 0x10) = 1;
      *(undefined4 *)plVar7 = 0x7532;
      plVar3[0xe] = 0x6400007533;
      plVar3[0xf] = 1;
      if (*param_1 != 0) {
        *(byte *)(plVar3 + 0x10) = *(byte *)(*param_1 + 0x6c2) ^ 1;
      }
      lVar4 = FUN_00143320(param_2);
      plVar3[5] = lVar4;
      if (lVar4 != 0) {
        param_1 = param_1 + 0xa6;
        FUN_00143300(*param_1);
        lVar4 = FUN_00143320(param_2);
        *param_1 = lVar4;
        if (lVar4 == 0) {
          iVar1 = 0xc;
        }
        else {
          *(undefined4 *)(plVar3 + 4) = 0;
          lVar4 = FUN_001439ec(&DAT_001579d0,__s);
          *plVar3 = lVar4;
          if (lVar4 != 0) {
            *param_4 = 1;
            return 0;
          }
          *(undefined4 *)(plVar3 + 4) = 1;
          piVar5 = __errno_location();
          iVar1 = *piVar5;
        }
        FUN_001573a4(param_1);
        goto LAB_00157904;
      }
    }
    FUN_00157980(__s);
    param_1[0xaa] = 0;
    FUN_00143300(plVar3);
  }
  iVar1 = 0xc;
LAB_00157904:
  piVar5 = __errno_location();
  *piVar5 = iVar1;
  uVar2 = FUN_0015954c(param_2,param_3,0,0);
  return uVar2;
}



undefined8 FUN_01cab920(long *param_1,void *param_2,int *param_3,int param_4,undefined4 param_5)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  byte bVar9;
  long lVar10;
  byte *pbVar11;
  
  pcVar3 = (char *)FUN_01cabc80(param_1,param_5);
  if (pcVar3 == (char *)0x0) {
    return 0;
  }
  if (*pcVar3 != '\0') {
    FUN_01cabe80(param_1,param_5);
    return 0;
  }
  lVar8 = *(long *)(pcVar3 + 0x28);
  if (*(int *)(pcVar3 + 0x30) < 1) {
    lVar8 = 0;
  }
  piVar1 = (int *)0x0;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 - *(int *)(pcVar3 + 0x34));
  }
  iVar7 = *piVar1;
  if (param_3 == (int *)0x0) goto LAB_01caba58;
  *param_3 = iVar7;
  *(bool *)(param_3 + 1) = *(int *)(pcVar3 + 0x30) < 2;
  lVar8 = *(long *)(pcVar3 + 8);
  cVar2 = (char)piVar1[1];
  lVar10 = *(long *)(*(long *)PTR_DAT_04bb21d0 + 0xf88);
  if (*(long *)(lVar10 + 0x18) == lVar8 && *(char *)(lVar10 + 0x20) == cVar2) {
    lVar8 = 0;
LAB_01caba38:
    pbVar11 = &DAT_0548e168 + lVar8;
  }
  else {
    if (*(long *)(lVar10 + 0x38) == lVar8 && *(char *)(lVar10 + 0x40) == cVar2) {
      lVar8 = 1;
      goto LAB_01caba38;
    }
    if (*(long *)(lVar10 + 0x58) == lVar8 && *(char *)(lVar10 + 0x60) == cVar2) {
      lVar8 = 2;
      goto LAB_01caba38;
    }
    if ((*(long *)(lVar10 + 0x78) == lVar8) && (*(char *)(lVar10 + 0x80) == cVar2)) {
      lVar8 = 3;
      goto LAB_01caba38;
    }
    if ((*(long *)(lVar10 + 0x98) == lVar8) && (*(char *)(lVar10 + 0xa0) == cVar2)) {
      lVar8 = 4;
      goto LAB_01caba38;
    }
    if ((*(long *)(lVar10 + 0xb8) == lVar8) && (*(char *)(lVar10 + 0xc0) == cVar2)) {
      lVar8 = 5;
      goto LAB_01caba38;
    }
    if ((*(long *)(lVar10 + 0xd8) == lVar8) && (*(char *)(lVar10 + 0xe0) == cVar2)) {
      lVar8 = 6;
      goto LAB_01caba38;
    }
    pbVar11 = PTR_DAT_04bb32e0;
    if ((*(long *)(lVar10 + 0xf8) == lVar8) && (*(char *)(lVar10 + 0x100) == cVar2)) {
      lVar8 = 7;
      goto LAB_01caba38;
    }
  }
  bVar9 = *pbVar11;
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  *(byte *)((long)param_3 + 5) = bVar9;
LAB_01caba58:
  if (param_4 < iVar7) {
    uVar4 = 0;
  }
  else {
    memcpy(param_2,*(void **)(piVar1 + 2),(long)iVar7);
    plVar5 = (long *)((long)*(int *)(pcVar3 + 0x34) + (long)piVar1);
    if (*plVar5 != 0) {
      *(long *)(*plVar5 + 8) = plVar5[1];
    }
    if ((long *)plVar5[1] != (long *)0x0) {
      *(long *)plVar5[1] = *plVar5;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    iVar7 = *(int *)(pcVar3 + 0x30) + -1;
    *(int *)(pcVar3 + 0x30) = iVar7;
    plVar5 = (long *)*param_1;
    if (plVar5 != (long *)0x0) {
      if (*(long *)(piVar1 + 2) != 0) {
        (**(code **)(*plVar5 + 0x38))();
        plVar5 = (long *)*param_1;
      }
      (**(code **)(*plVar5 + 0x38))(plVar5,piVar1);
      iVar7 = *(int *)(pcVar3 + 0x30);
    }
    if (iVar7 == 0) {
      plVar5 = (long *)(pcVar3 + *(int *)((long)param_1 + 0x54));
      if (*plVar5 != 0) {
        *(long *)(*plVar5 + 8) = plVar5[1];
      }
      if ((long *)plVar5[1] != (long *)0x0) {
        *(long *)plVar5[1] = *plVar5;
      }
      *plVar5 = 0;
      plVar5[1] = 0;
      plVar5 = (long *)*param_1;
      *(int *)(param_1 + 10) = (int)param_1[10] + -1;
      if (plVar5 != (long *)0x0) {
        iVar7 = *(int *)(pcVar3 + 0x30);
        if (iVar7 != 0) {
          do {
            if (iVar7 < 1) {
              plVar5 = (long *)0x0;
            }
            else {
              plVar5 = *(long **)(pcVar3 + 0x28);
              if (*plVar5 != 0) {
                *(long *)(*plVar5 + 8) = plVar5[1];
              }
              if ((long *)plVar5[1] != (long *)0x0) {
                *(long *)plVar5[1] = *plVar5;
              }
              *plVar5 = 0;
              plVar5[1] = 0;
              iVar7 = *(int *)(pcVar3 + 0x30) + -1;
              *(int *)(pcVar3 + 0x30) = iVar7;
            }
            plVar6 = (long *)*param_1;
            lVar8 = 0;
            if (plVar5 != (long *)0x0) {
              lVar8 = (long)plVar5 - (long)*(int *)(pcVar3 + 0x34);
            }
            if (plVar6 != (long *)0x0) {
              if (*(long *)(lVar8 + 8) != 0) {
                (**(code **)(*plVar6 + 0x38))();
                plVar6 = (long *)*param_1;
              }
              (**(code **)(*plVar6 + 0x38))(plVar6,lVar8);
              iVar7 = *(int *)(pcVar3 + 0x30);
            }
          } while (iVar7 != 0);
          plVar5 = (long *)*param_1;
        }
        (**(code **)(*plVar5 + 0x38))(plVar5,pcVar3);
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}


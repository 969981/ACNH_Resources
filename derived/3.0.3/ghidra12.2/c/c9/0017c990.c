
int FUN_0017c990(long param_1,uint param_2,char *param_3,int param_4)

{
  int iVar1;
  long *plVar2;
  code *pcVar3;
  uint uVar4;
  long *plVar5;
  
  if (param_3 == (char *)0x0) {
    return -6;
  }
  if (param_4 != 0x70) {
    return -6;
  }
  if (*param_3 != '1') {
    return -6;
  }
  if (param_1 == 0) {
    return -2;
  }
  pcVar3 = *(code **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (pcVar3 == (code *)0x0) {
    pcVar3 = FUN_0017eae0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(code **)(param_1 + 0x40) = FUN_0017eae0;
    if (*(long *)(param_1 + 0x48) != 0) goto LAB_0017c9e0;
code_r0x0017ca90:
    *(undefined1 **)(param_1 + 0x48) = &LAB_0017eaf0;
    plVar2 = (long *)(*pcVar3)(*(undefined8 *)(param_1 + 0x50),1,0x1bf8);
  }
  else {
    if (*(long *)(param_1 + 0x48) == 0) goto code_r0x0017ca90;
LAB_0017c9e0:
    plVar2 = (long *)(*pcVar3)(*(undefined8 *)(param_1 + 0x50),1,0x1bf8);
  }
  if (plVar2 == (long *)0x0) {
    return -4;
  }
  *(long **)(param_1 + 0x38) = plVar2;
  *plVar2 = param_1;
  plVar2[9] = 0;
  *(undefined4 *)(plVar2 + 1) = 0x3f34;
  pcVar3 = *(code **)(param_1 + 0x48);
  if ((((*(long *)(param_1 + 0x40) != 0) &&
       (plVar5 = *(long **)(param_1 + 0x38), plVar5 != (long *)0x0)) && (*plVar5 == param_1)) &&
     ((int)plVar5[1] - 0x3f34U < 0x20)) {
    if ((int)param_2 < 0) {
      if (param_2 < 0xfffffff1) goto LAB_0017cb28;
      iVar1 = 0;
      uVar4 = -param_2;
    }
    else {
      iVar1 = (param_2 >> 4) + 5;
      uVar4 = param_2 & 0xf;
      if (0x2f < param_2) {
        uVar4 = param_2;
      }
    }
    if ((uVar4 - 8 < 8) || (uVar4 == 0)) {
      if ((plVar5[9] != 0) && (*(uint *)(plVar5 + 7) != uVar4)) {
        (*pcVar3)(*(undefined8 *)(param_1 + 0x50));
        plVar5[9] = 0;
      }
      *(int *)(plVar5 + 2) = iVar1;
      *(uint *)(plVar5 + 7) = uVar4;
      iVar1 = FUN_0017c8b0(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      pcVar3 = *(code **)(param_1 + 0x48);
      goto LAB_0017cb2c;
    }
  }
LAB_0017cb28:
  iVar1 = -2;
LAB_0017cb2c:
  (*pcVar3)(*(undefined8 *)(param_1 + 0x50),plVar2);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return iVar1;
}


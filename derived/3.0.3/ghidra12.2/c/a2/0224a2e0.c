
void FUN_0224a2e0(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  int *piVar6;
  long *plVar7;
  
  *(undefined8 *)(param_1 + 0x3d8) = *(undefined8 *)(param_1 + 0x160);
  *(undefined4 *)(param_1 + 0x3e0) = *(undefined4 *)(param_1 + 0x168);
  (**(code **)(**(long **)(param_1 + 0x68) + 0x100))(*(long **)(param_1 + 0x68),param_1 + 0x3d8);
  *(undefined4 *)(param_1 + 0x3e4) = *(undefined4 *)(param_1 + 0x170);
  (**(code **)(**(long **)(param_1 + 0x68) + 0x160))(*(long **)(param_1 + 0x68),param_1 + 0x3e4);
  lVar1 = param_1 + 0x328;
  (**(code **)(*(long *)(param_1 + 0x328) + 0x18))(lVar1);
  (**(code **)(*(long *)(param_1 + 0x328) + 0x18))(lVar1);
  pcVar5 = *(char **)(param_1 + 0x330);
  if (pcVar5 != "None") {
    if (*pcVar5 == 'N') {
      lVar4 = 0;
      do {
        if ((lVar4 == 0x80000) || (lVar3 = lVar4 + 1, pcVar5[lVar3] != (&DAT_040cd540)[lVar4]))
        goto LAB_0224a3a8;
        lVar4 = lVar4 + 1;
      } while (pcVar5[lVar3] != '\0');
    }
    else {
LAB_0224a3a8:
      plVar7 = *(long **)(param_1 + 0x60);
      if (plVar7[0x227] != 0) {
        FUN_038501b0(0x41200000,plVar7[0x227],0);
        lVar4 = plVar7[0x227];
        if (*(char *)(lVar4 + 0x2c0) != '\0') {
          *(undefined1 *)(lVar4 + 0x2c0) = 0;
          FUN_03855b20(lVar4 + 0xc0,0);
        }
        FUN_0384f8c0(lVar4,lVar1,0,0);
        (**(code **)(*plVar7 + 0x120))(plVar7,lVar1,10,0);
      }
    }
  }
  lVar1 = DAT_05465168;
  if (((DAT_05465168 != 0) && (iVar2 = *(int *)(param_1 + 0x230), iVar2 != 0)) &&
     (*(int *)(DAT_05465168 + 0x10) < *(int *)(DAT_05465168 + 0x14))) {
    piVar6 = *(int **)(DAT_05465168 + 0x20);
    if (piVar6 != (int *)0x0) {
      *(undefined8 *)(DAT_05465168 + 0x20) = *(undefined8 *)piVar6;
    }
    *piVar6 = iVar2;
    if (*(int *)(lVar1 + 0x10) < *(int *)(lVar1 + 0x14)) {
      *(int **)(*(long *)(lVar1 + 0x18) + (long)*(int *)(lVar1 + 0x10) * 8) = piVar6;
      *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + 1;
    }
  }
  return;
}


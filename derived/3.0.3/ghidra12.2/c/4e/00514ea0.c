
void FUN_00514ea0(undefined8 param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar5 = *(long *)(param_2 + 0x10);
  lVar8 = *(long *)(*(long *)(*(long *)(lVar5 + 0x18) + 0x60) + (long)*(int *)(lVar5 + 0x134) * 8);
  *(undefined4 *)(lVar5 + 0x60) = *(undefined4 *)(param_2 + 0x24);
  lVar5 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar5 != 0) {
    FUN_00443a00(lVar5,"TtDisplay Release");
  }
  if (0 < *(int *)(lVar8 + 0x38)) {
    lVar9 = 0;
    lVar5 = 0;
    do {
      piVar1 = (int *)(*(long *)(lVar8 + 0x30) + lVar9);
      iVar2 = *piVar1;
      iVar3 = piVar1[3];
      lVar10 = (long)iVar2;
      if (*(char *)(param_2 + 0x20) != '\0') {
        (**(code **)(**(long **)(*(long *)(*(long *)(param_2 + 0x10) + 0x20) + lVar10 * 8) + 0x38))
                  ();
      }
      *(int *)(*(long *)(*(long *)(*(long *)(param_2 + 0x10) + 0x20) + lVar10 * 8) + 0x110) = iVar2;
      if (iVar2 != iVar3) {
        lVar7 = *(long *)(*(long *)(param_2 + 0x10) + 0x20);
        lVar6 = *(long *)(lVar7 + (long)iVar3 * 8);
        lVar10 = *(long *)(lVar7 + lVar10 * 8);
        if (*(long *)(lVar6 + 0x30) == *(long *)(lVar10 + 0x30)) {
          *(undefined4 *)(lVar6 + 0x38) = 0;
          if (*(long *)(lVar6 + 0x18) == *(long *)(lVar10 + 0x18)) goto LAB_00514f24;
LAB_00514fe4:
          if (*(long *)(lVar6 + 0x40) != *(long *)(lVar10 + 0x40)) goto LAB_00514ff4;
LAB_00514f38:
          *(undefined4 *)(lVar6 + 0x48) = 0;
          if (*(long *)(lVar6 + 0x58) == *(long *)(lVar10 + 0x58)) goto LAB_00514f4c;
LAB_00515004:
          if (*(long *)(lVar6 + 0x70) != *(long *)(lVar10 + 0x70)) goto LAB_00515014;
        }
        else {
          if (*(long *)(lVar6 + 0x18) != *(long *)(lVar10 + 0x18)) goto LAB_00514fe4;
LAB_00514f24:
          *(undefined4 *)(lVar6 + 0x20) = 0;
          if (*(long *)(lVar6 + 0x40) == *(long *)(lVar10 + 0x40)) goto LAB_00514f38;
LAB_00514ff4:
          if (*(long *)(lVar6 + 0x58) != *(long *)(lVar10 + 0x58)) goto LAB_00515004;
LAB_00514f4c:
          *(undefined4 *)(lVar6 + 0x60) = 0;
          if (*(long *)(lVar6 + 0x70) != *(long *)(lVar10 + 0x70)) goto LAB_00515014;
        }
        *(undefined4 *)(lVar6 + 0x78) = 0;
      }
LAB_00515014:
      lVar5 = lVar5 + 1;
      lVar9 = lVar9 + 0x10;
    } while (lVar5 < *(int *)(lVar8 + 0x38));
  }
  lVar5 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar5 != 0) {
    FUN_00443a70(lVar5,&DAT_04085310);
  }
  if ((*(char *)(param_2 + 0x20) != '\0') && (0 < *(int *)(lVar8 + 0x48))) {
    lVar9 = 0;
    lVar5 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(*(long *)(param_2 + 0x10) + 0x30) +
                              (long)*(int *)(*(long *)(lVar8 + 0x40) + lVar9) * 8) + 0x28))();
      lVar5 = lVar5 + 1;
      lVar9 = lVar9 + 0x20;
    } while (lVar5 < *(int *)(lVar8 + 0x48));
  }
  cVar4 = FUN_005126d0(*(undefined8 *)(param_2 + 8));
  if (cVar4 != '\0') {
    lVar5 = FUN_0043c4e0(DAT_04c6f410);
    if (lVar5 != 0) {
      FUN_00443a00(lVar5,"TtRuntime Buffers Release");
    }
    FUN_00512660(*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x18));
    *(undefined8 *)(param_2 + 0x18) = 0;
    lVar5 = FUN_0043c4e0(DAT_04c6f410);
    if (lVar5 != 0) {
      FUN_00443a70(lVar5,&DAT_04085310);
      return;
    }
  }
  return;
}


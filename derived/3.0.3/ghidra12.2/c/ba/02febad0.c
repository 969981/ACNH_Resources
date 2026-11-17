
void FUN_02febad0(long *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined **local_50 [4];
  
  local_50[0] = &PTR_FUN_04aefb70;
  (**(code **)(*param_2 + 0x10))(param_2,local_50);
  uVar4 = (*(code *)local_50[0][1])(local_50);
  if (((uVar4 & 1) != 0) && (iVar2 = (**(code **)(*param_1 + 0x38))(param_1), 0 < iVar2)) {
    iVar9 = 0;
    do {
      plVar5 = (long *)(**(code **)(*param_1 + 0x40))(param_1,iVar9);
      if (plVar5 != (long *)0x0) {
        uVar3 = (**(code **)*plVar5)();
        uVar6 = (*(code *)*local_50[0])(local_50,uVar3);
        (**(code **)(*plVar5 + 0x10))(plVar5,uVar6);
      }
      iVar9 = iVar9 + 1;
    } while (iVar2 != iVar9);
  }
  if (param_1[0xd] != 0) {
    iVar2 = 0;
    lVar1 = param_1[0xd] + 8;
    do {
      lVar7 = lVar1 + (long)iVar2 * 0x1a8;
      if (*(int *)(lVar7 + 0x1a0) != 0) {
        lVar8 = lVar1 + (long)iVar2 * 0x1a8;
        **(undefined1 **)(lVar8 + 0x60) = 0;
        *(undefined1 *)(lVar8 + 0xf0) = 0;
        if (((*(int *)(lVar8 + 0x100) != 1) && ((*(byte *)(lVar8 + 0x18) >> 1 & 1) != 0)) &&
           (*(int *)(lVar8 + 0x140) == -1)) {
          *(undefined4 *)(lVar8 + 0x140) = 1;
        }
        *(undefined4 *)(lVar7 + 0x1a0) = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x10e);
  }
  lVar1 = param_1[1];
  if ((int)lVar1 != 0) {
    lVar7 = param_1[2];
    iVar2 = 0;
    do {
      lVar8 = lVar7 + (long)iVar2 * 0x150;
      **(undefined1 **)(lVar8 + 0x10) = 0;
      *(undefined4 *)(lVar8 + 0x60) = 0xffffffff;
      *(undefined8 *)(lVar8 + 0x110) = 0xffffffffffffffff;
      iVar2 = iVar2 + 1;
    } while ((int)lVar1 != iVar2);
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  return;
}


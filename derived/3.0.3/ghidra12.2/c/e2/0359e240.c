
void FUN_0359e240(long *param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  int *piVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  
  lVar7 = DAT_057740d8;
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar4 = FUN_006bd550(param_2[1],0);
  iVar2 = *(int *)(lVar7 + 0x10);
  if (iVar2 != 0) {
    uVar8 = 0;
    iVar9 = iVar2 + -1;
    if (iVar9 == 0 || iVar2 < 1) {
      lVar7 = *(long *)(lVar7 + 0x18);
    }
    else {
      lVar7 = *(long *)(lVar7 + 0x18);
      do {
        iVar2 = iVar9 + uVar8;
        if (iVar2 < 0 != SCARRY4(iVar9,uVar8)) {
          iVar2 = iVar2 + 1;
        }
        uVar1 = iVar2 >> 1;
        uVar3 = *(uint *)(*(long *)(lVar7 + (long)(int)uVar1 * 8) + 0x18);
        if (uVar3 == uVar4) goto joined_r0x0359e344;
        if (uVar3 < uVar4) {
          uVar8 = uVar1 + 1;
        }
        else {
          iVar9 = uVar1 - 1;
        }
      } while ((int)uVar8 < iVar9);
    }
    uVar1 = uVar8;
    if (*(uint *)(*(long *)(lVar7 + (long)(int)uVar8 * 8) + 0x18) == uVar4) {
joined_r0x0359e344:
      if (-1 < (int)uVar1) {
        lVar7 = **(long **)(lVar7 + (ulong)uVar1 * 8);
        *param_1 = lVar7;
        if (lVar7 == 0) {
          return;
        }
        plVar5 = (long *)(**(code **)(*(long *)(lVar7 + 0x30) + 0xf0))();
        *(undefined4 *)((long)param_1 + 0xc) = 0;
        piVar6 = (int *)(**(code **)(*(long *)(*param_1 + 0xf8) + 0xf0))();
        *(float *)(param_1 + 2) = (float)*piVar6;
        uVar10 = (**(code **)(*plVar5 + 0x10))(0,plVar5);
        *(undefined4 *)(param_1 + 1) = uVar10;
        return;
      }
    }
  }
  *param_1 = 0;
  return;
}


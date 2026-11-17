
void FUN_031d4ce4(long param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  undefined1 uVar7;
  long lVar8;
  code *pcVar9;
  long *plVar10;
  long lVar11;
  
  lVar8 = *(long *)(param_1 + 0x210);
  plVar10 = *(long **)(lVar8 + 0x6f0);
  lVar11 = *(long *)(*(long *)(lVar8 + 0x580) + 0xa0);
  bVar3 = plVar10 != (long *)0x0;
  bVar4 = lVar11 != 0;
  if (0x2c < *(int *)(param_1 + 0x230)) {
    piVar1 = (int *)(param_1 + 0x1c1d8);
    if ((param_2 & 1) == 0) {
      if (bVar3 && bVar4) {
        plVar6 = (long *)plVar10[0x36];
        if (*piVar1 == 0) {
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x28))(plVar6,0);
            (**(code **)(*plVar10 + 0xa8))(plVar10);
          }
          uVar7 = 1;
        }
        else {
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x30))(plVar6,0);
          }
          uVar7 = 0;
        }
        *(undefined1 *)(lVar11 + 0xbc) = uVar7;
        lVar8 = *(long *)(param_1 + 0x210);
      }
      plVar6 = *(long **)(lVar8 + 0x6f8);
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar11 = *(long *)(*(long *)(lVar8 + 0x588) + 0xa0);
      if (lVar11 == 0) {
        return;
      }
      plVar10 = (long *)plVar6[0x36];
      if (*piVar1 != 1) goto joined_r0x031d4ec0;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x28))(plVar10,0);
        (**(code **)(*plVar6 + 0xa8))(plVar6);
        uVar7 = 1;
        goto LAB_031d4f80;
      }
    }
    else {
      if (bVar3 && bVar4) {
        iVar2 = *piVar1;
        if ((long *)plVar10[0x36] != (long *)0x0) {
          uVar5 = (**(code **)(*(long *)plVar10[0x36] + 0x50))();
          (**(code **)(*(long *)plVar10[0x36] + 0x20))((long *)plVar10[0x36],iVar2 == 0);
          if ((iVar2 == 0) && ((uVar5 & 1) != 0)) {
            (**(code **)(*plVar10 + 0xa8))(plVar10);
          }
        }
        *(bool *)(lVar11 + 0xbc) = iVar2 == 0;
        lVar8 = *(long *)(param_1 + 0x210);
      }
      plVar10 = *(long **)(lVar8 + 0x6f8);
      if (plVar10 == (long *)0x0) {
        return;
      }
      lVar11 = *(long *)(*(long *)(lVar8 + 0x588) + 0xa0);
      if (lVar11 == 0) {
        return;
      }
      plVar6 = (long *)plVar10[0x36];
      if (*piVar1 != 1) goto joined_r0x031d4e50;
      if (plVar6 != (long *)0x0) {
        uVar5 = (**(code **)(*plVar6 + 0x50))();
        uVar7 = 1;
        (**(code **)(*(long *)plVar10[0x36] + 0x20))((long *)plVar10[0x36],1);
        if ((uVar5 & 1) != 0) {
          (**(code **)(*plVar10 + 0xa8))(plVar10);
        }
        goto LAB_031d4f80;
      }
    }
    uVar7 = 1;
    goto LAB_031d4f80;
  }
  if ((param_2 & 1) == 0) {
    if (bVar3 && bVar4) {
      plVar10 = (long *)plVar10[0x36];
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x30))(plVar10,0);
      }
      *(undefined1 *)(lVar11 + 0xbc) = 0;
      lVar8 = *(long *)(param_1 + 0x210);
    }
    if (*(long *)(lVar8 + 0x6f8) == 0) {
      return;
    }
    lVar11 = *(long *)(*(long *)(lVar8 + 0x588) + 0xa0);
    if (lVar11 == 0) {
      return;
    }
    plVar10 = *(long **)(*(long *)(lVar8 + 0x6f8) + 0x1b0);
joined_r0x031d4ec0:
    if (plVar10 != (long *)0x0) {
      pcVar9 = *(code **)(*plVar10 + 0x30);
      goto LAB_031d4f74;
    }
  }
  else {
    if (bVar3 && bVar4) {
      if ((long *)plVar10[0x36] != (long *)0x0) {
        (**(code **)(*(long *)plVar10[0x36] + 0x50))();
        (**(code **)(*(long *)plVar10[0x36] + 0x20))((long *)plVar10[0x36],0);
      }
      *(undefined1 *)(lVar11 + 0xbc) = 0;
      lVar8 = *(long *)(param_1 + 0x210);
    }
    plVar10 = *(long **)(lVar8 + 0x6f8);
    if (plVar10 == (long *)0x0) {
      return;
    }
    lVar11 = *(long *)(*(long *)(lVar8 + 0x588) + 0xa0);
    if (lVar11 == 0) {
      return;
    }
    plVar6 = (long *)plVar10[0x36];
joined_r0x031d4e50:
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x50))();
      plVar10 = (long *)plVar10[0x36];
      pcVar9 = *(code **)(*plVar10 + 0x20);
LAB_031d4f74:
      (*pcVar9)(plVar10,0);
    }
  }
  uVar7 = 0;
LAB_031d4f80:
  *(undefined1 *)(lVar11 + 0xbc) = uVar7;
  return;
}


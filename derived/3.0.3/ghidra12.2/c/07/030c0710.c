
void FUN_030c0710(long param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long *plVar9;
  long *plVar10;
  uint uVar11;
  
  plVar9 = *(long **)(param_1 + 0x388);
  if (plVar9 == (long *)0x0) {
    return;
  }
  iVar3 = (**(code **)(*plVar9 + 0x80))(plVar9,0);
  iVar4 = (**(code **)(*plVar9 + 0x80))(plVar9,1);
  lVar6 = *(long *)(plVar9[0xd] + (long)(iVar3 + (int)plVar9[0xc] * iVar4) * 0x18);
  if (lVar6 == 0) {
    return;
  }
  if (*(long *)(lVar6 + 8) == 0) {
    return;
  }
  uVar5 = (**(code **)(*(long *)(param_1 + 0x3a0) + 0x10))(param_1 + 0x3a0);
  if (((uVar5 & 1) == 0) ||
     (uVar5 = (*(code *)**(undefined8 **)(param_1 + 0x3a0))(param_1 + 0x3a0,param_1),
     (uVar5 & 1) != 0)) {
    plVar9 = *(long **)(param_1 + 0x388);
    if (plVar9 == (long *)0x0) {
LAB_030c0848:
      bVar2 = false;
      bVar1 = true;
      lVar6 = *(long *)(param_1 + 0x3c0);
      goto joined_r0x030c0854;
    }
    iVar3 = (**(code **)(*plVar9 + 0x80))(plVar9,0);
    iVar4 = (**(code **)(*plVar9 + 0x80))(plVar9,1);
    lVar6 = *(long *)(plVar9[0xd] + (long)(iVar3 + (int)plVar9[0xc] * iVar4) * 0x18);
    if (lVar6 == 0) {
      plVar9 = *(long **)(param_1 + 0x388);
LAB_030c0840:
      uVar11 = 0;
      if (plVar9 == (long *)0x0) goto LAB_030c0848;
    }
    else {
      plVar9 = *(long **)(param_1 + 0x388);
      if (*(long *)(lVar6 + 8) == 0) goto LAB_030c0840;
      if ((char)plVar9[4] == '\0') {
        iVar3 = (int)plVar9[5];
LAB_030c0860:
        uVar11 = (uint)((char)plVar9[4] == '\0' && iVar3 == 0);
      }
      else {
        iVar3 = (int)plVar9[5];
        iVar4 = *(int *)((long)plVar9 + 0x24);
        if (*(char *)((long)plVar9 + 0x21) != '\0') {
          iVar4 = iVar3;
        }
        if (iVar4 != 0) goto LAB_030c0860;
        uVar11 = 1;
      }
    }
    iVar3 = (**(code **)(*plVar9 + 0x80))(plVar9,0);
    bVar1 = true;
    iVar4 = (**(code **)(*plVar9 + 0x80))(plVar9,1);
    lVar6 = *(long *)(plVar9[0xd] + (long)(iVar3 + (int)plVar9[0xc] * iVar4) * 0x18);
    if ((lVar6 != 0) && (*(long *)(lVar6 + 8) != 0)) {
      plVar9 = *(long **)(param_1 + 0x388);
      *(uint *)((long)plVar9 + 0x2c) = uVar11;
      uVar5 = FUN_03c83810(plVar9);
      if ((uVar5 & 1) != 0) {
        uVar7 = *(undefined4 *)((long)plVar9 + 0x24);
        *(int *)((long)plVar9 + 0x24) = (int)plVar9[5];
        *(undefined4 *)(plVar9 + 5) = uVar7;
        *(byte *)((long)plVar9 + 0x21) = *(byte *)((long)plVar9 + 0x21) ^ 1;
        (**(code **)(*plVar9 + 0x48))(plVar9);
        if ((long *)plVar9[10] != plVar9 + 9) {
          lVar6 = (long)*(int *)((long)plVar9 + 0x5c);
          plVar10 = (long *)(plVar9[10] - lVar6);
          do {
            (**(code **)(*plVar10 + 0x18))
                      (plVar10,(int)plVar9[5],*(undefined4 *)((long)plVar9 + 0x24));
            plVar10 = (long *)(*(long *)((long)plVar10 + lVar6 + 8) - lVar6);
          } while (plVar10 != (long *)((long)(plVar9 + 9) - lVar6));
        }
      }
      FUN_03c835a0(plVar9);
      bVar1 = true;
    }
  }
  else {
    bVar1 = false;
  }
  plVar9 = *(long **)(param_1 + 0x388);
  if (plVar9 != (long *)0x0) {
    iVar3 = (**(code **)(*plVar9 + 0x80))(plVar9,0);
    iVar4 = (**(code **)(*plVar9 + 0x80))(plVar9,1);
    lVar6 = *(long *)(plVar9[0xd] + (long)(iVar3 + (int)plVar9[0xc] * iVar4) * 0x18);
    if ((lVar6 != 0) && (*(long *)(lVar6 + 8) != 0)) {
      lVar6 = *(long *)(param_1 + 0x388);
      if (*(char *)(lVar6 + 0x20) == '\0') {
        iVar3 = *(int *)(lVar6 + 0x28);
      }
      else {
        iVar3 = *(int *)(lVar6 + 0x28);
        iVar4 = *(int *)(lVar6 + 0x24);
        if (*(char *)(lVar6 + 0x21) != '\0') {
          iVar4 = iVar3;
        }
        if (iVar4 == 0) {
          bVar2 = true;
          lVar6 = *(long *)(param_1 + 0x3c0);
          goto joined_r0x030c0854;
        }
      }
      bVar2 = *(char *)(lVar6 + 0x20) == '\0' && iVar3 == 0;
      lVar6 = *(long *)(param_1 + 0x3c0);
      goto joined_r0x030c0854;
    }
  }
  bVar2 = false;
  lVar6 = *(long *)(param_1 + 0x3c0);
joined_r0x030c0854:
  if (lVar6 != 0) {
    uVar7 = 3;
    if (bVar1) {
      uVar7 = 1;
    }
    uVar8 = 0;
    if (!bVar1) {
      uVar8 = 2;
    }
    if (!bVar2) {
      uVar8 = uVar7;
    }
    *(undefined4 *)(lVar6 + 0x40) = uVar8;
  }
  return;
}


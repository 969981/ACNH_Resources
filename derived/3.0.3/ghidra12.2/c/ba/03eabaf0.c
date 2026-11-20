
void FUN_03eabaf0(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  
  (**(code **)(**(long **)(param_2 + 8) + 0x68))
            (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x18)
             ,0x4259);
  (**(code **)(**(long **)(param_2 + 8) + 0x68))
            (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x18)
             ,4);
  lVar7 = *(long *)(param_1 + 0x10);
  if (*(int *)(lVar7 + 0x18) == 0) {
    lVar7 = 0;
    iVar3 = 0x10;
  }
  else {
    lVar8 = *(long *)(lVar7 + 0x10);
    iVar10 = *(int *)(lVar7 + 0x18) * 4 + 8;
    if (lVar8 == lVar7 + 8) {
      uVar6 = 0;
    }
    else {
      iVar3 = 0;
      do {
        sVar4 = strlen(*(char **)(lVar8 + 0x10));
        lVar8 = *(long *)(lVar8 + 8);
        iVar5 = iVar3 + (int)sVar4;
        iVar3 = iVar5 + 1;
      } while (lVar8 != lVar7 + 8);
      uVar6 = iVar5 + 4U & 0xfffffffc;
    }
    iVar5 = iVar10 + uVar6;
    iVar3 = iVar5 + 0x10;
    lVar7 = (ulong)(iVar5 != 0 && iVar5 < 0 == SCARRY4(iVar10,uVar6)) << 4;
  }
  (**(code **)(**(long **)(param_2 + 8) + 0x70))
            (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x18)
             ,lVar7);
  lVar7 = *(long *)(param_1 + 0x18);
  if (*(int *)(lVar7 + 0x18) == 0) {
    iVar10 = 0;
    iVar5 = 0;
  }
  else {
    lVar8 = *(long *)(lVar7 + 0x10);
    iVar1 = *(int *)(lVar7 + 0x18) * 4 + 8;
    if (lVar8 == lVar7 + 8) {
      uVar6 = 0;
    }
    else {
      iVar10 = 0;
      do {
        sVar4 = strlen(*(char **)(lVar8 + 0x10));
        lVar8 = *(long *)(lVar8 + 8);
        iVar5 = iVar10 + (int)sVar4;
        iVar10 = iVar5 + 1;
      } while (lVar8 != lVar7 + 8);
      uVar6 = iVar5 + 4U & 0xfffffffc;
    }
    iVar10 = iVar1 + uVar6;
    iVar5 = iVar3;
    if (iVar10 == 0 || iVar10 < 0 != SCARRY4(iVar1,uVar6)) {
      iVar5 = 0;
    }
  }
  (**(code **)(**(long **)(param_2 + 8) + 0x70))
            (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x18)
             ,iVar5);
  lVar8 = *(long *)(param_1 + 0x38);
  iVar10 = iVar10 + iVar3;
  for (lVar7 = *(long *)(lVar8 + 0x10); lVar7 != lVar8 + 8; lVar7 = *(long *)(lVar7 + 8)) {
    *(int *)(*(long *)(lVar7 + 0x10) + 0x10) = iVar10;
    iVar3 = (**(code **)(**(long **)(lVar7 + 0x10) + 0x40))();
    iVar10 = iVar3 + iVar10;
  }
  uVar6 = iVar10 + 3U & 0xfffffffc;
  lVar7 = param_1 + 0x20;
  uVar11 = uVar6;
  if (*(int *)(param_1 + 0x30) < 1) {
    uVar11 = 0;
  }
  (**(code **)(**(long **)(param_2 + 8) + 0x70))
            (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x18)
             ,uVar11);
  FUN_03eaedc0(*(undefined8 *)(param_1 + 0x10),param_2);
  FUN_03eaedc0(*(undefined8 *)(param_1 + 0x18),param_2);
  lVar8 = *(long *)(param_1 + 0x38) + 8;
  lVar9 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
  if (lVar9 != lVar8) {
    uVar11 = 0;
    do {
      iVar3 = (**(code **)(**(long **)(lVar9 + 0x10) + 0x40))();
      uVar11 = iVar3 + uVar11;
      (**(code **)(**(long **)(lVar9 + 0x10) + 0x48))(*(long **)(lVar9 + 0x10),param_2);
      lVar9 = *(long *)(lVar9 + 8);
    } while (lVar9 != lVar8);
    uVar2 = uVar11 & 3;
    if (-1 < (int)-uVar11) {
      uVar2 = -(-uVar11 & 3);
    }
    if ((((uVar2 != 0) &&
         ((**(code **)(**(long **)(param_2 + 8) + 0x60))
                    (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
                     *(undefined4 *)(param_2 + 0x18),0), uVar2 != 3)) &&
        ((**(code **)(**(long **)(param_2 + 8) + 0x60))
                   (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
                    *(undefined4 *)(param_2 + 0x18),0), uVar2 != 2)) &&
       ((**(code **)(**(long **)(param_2 + 8) + 0x60))
                  (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
                   *(undefined4 *)(param_2 + 0x18),0), uVar2 != 1)) {
      (**(code **)(**(long **)(param_2 + 8) + 0x60))
                (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
                 *(undefined4 *)(param_2 + 0x18),0);
      (**(code **)(**(long **)(param_2 + 8) + 0x60))
                (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
                 *(undefined4 *)(param_2 + 0x18),0);
      if (((uVar2 != 0xffffffff) &&
          ((**(code **)(**(long **)(param_2 + 8) + 0x60))
                     (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
                      *(undefined4 *)(param_2 + 0x18),0), uVar2 != 0xfffffffe)) &&
         ((**(code **)(**(long **)(param_2 + 8) + 0x60))
                    (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
                     *(undefined4 *)(param_2 + 0x18),0), uVar2 != 0xfffffffd)) {
        (**(code **)(**(long **)(param_2 + 8) + 0x60))
                  (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
                   *(undefined4 *)(param_2 + 0x18),0);
      }
    }
  }
  lVar8 = *(long *)(param_1 + 0x28);
  if (lVar8 != lVar7) {
    do {
      *(uint *)(*(long *)(lVar8 + 0x10) + 8) = uVar6;
      iVar3 = (**(code **)(**(long **)(lVar8 + 0x10) + 0x18))();
      lVar8 = *(long *)(lVar8 + 8);
      uVar6 = iVar3 + uVar6;
    } while (lVar8 != lVar7);
    for (lVar8 = *(long *)(param_1 + 0x28); lVar8 != lVar7; lVar8 = *(long *)(lVar8 + 8)) {
      (**(code **)(**(long **)(lVar8 + 0x10) + 0x100))(*(long **)(lVar8 + 0x10),param_2);
    }
  }
  return;
}


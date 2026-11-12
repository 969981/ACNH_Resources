
void FUN_006fa4b0(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  
  puVar2 = PTR_DAT_04bb3350;
  lVar7 = *(long *)(param_1 + 0x240);
  if (lVar7 == 0) {
    lVar9 = 1;
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)(lVar5 + 0xa8);
    *(long *)(lVar5 + 0xa8) = lVar7;
  }
  if (*(int *)(param_1 + 0x150) == 1) goto LAB_006fa674;
  iVar3 = *(int *)(param_1 + 0xbc);
  lVar7 = (long)iVar3;
  lVar5 = -lVar7;
  plVar8 = (long *)(*(long *)(param_1 + 0xb0) - lVar7);
  plVar10 = (long *)((param_1 + 0xa8) - lVar7);
  if (*(long *)(param_1 + 0xb0) == param_1 + 0xa8) {
LAB_006fa5bc:
    uVar6 = 1;
    *(undefined4 *)(param_1 + 0x150) = 4;
    if (plVar8 != plVar10) {
      bVar1 = true;
      do {
        iVar4 = (**(code **)(*plVar8 + 0x48))(plVar8);
        uVar6 = 1;
        if (iVar4 != 0) {
          uVar6 = 2;
        }
        *(undefined4 *)(plVar8 + 10) = uVar6;
        bVar1 = (bool)(bVar1 & iVar4 == 0);
        plVar8 = (long *)(lVar5 + *(long *)((long)plVar8 + (long)iVar3 + 8));
      } while (plVar8 != plVar10);
      lVar7 = (long)*(int *)(param_1 + 0xbc);
      plVar8 = (long *)(*(long *)(param_1 + 0xb0) - lVar7);
      uVar6 = 1;
      if (!bVar1) {
        uVar6 = 2;
      }
      if (plVar8 != plVar10) {
        do {
          (**(code **)(*plVar8 + 0x50))(plVar8,uVar6);
          plVar8 = (long *)(*(long *)((long)plVar8 + lVar7 + 8) - lVar7);
        } while (plVar8 != plVar10);
      }
    }
  }
  else {
    uVar11 = 1;
    do {
      if ((int)plVar8[10] == 4) {
        iVar3 = 0;
      }
      else {
        iVar3 = (**(code **)(*plVar8 + 0x40))(plVar8);
        uVar6 = 3;
        if (iVar3 == 0) {
          uVar6 = 4;
        }
        *(undefined4 *)(plVar8 + 10) = uVar6;
      }
      uVar11 = uVar11 & iVar3 == 0;
      plVar8 = (long *)(*(long *)((long)plVar8 + lVar7 + 8) + lVar5);
    } while (plVar8 != plVar10);
    if ((uVar11 | (*(uint *)(param_1 + 0x248) & 2) >> 1) == 1) {
      iVar3 = *(int *)(param_1 + 0xbc);
      lVar5 = -(long)iVar3;
      plVar8 = (long *)(*(long *)(param_1 + 0xb0) - (long)iVar3);
      goto LAB_006fa5bc;
    }
    uVar6 = 3;
  }
  *(undefined4 *)(param_1 + 0x150) = uVar6;
LAB_006fa674:
  if (lVar9 != 1) {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    *(long *)(lVar7 + 0xa8) = lVar9;
  }
  return;
}


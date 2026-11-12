
void FUN_006fb0a0(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  
  puVar2 = PTR_DAT_04bb3350;
  lVar6 = *(long *)(param_1 + 0x240);
  if (lVar6 == 0) {
    lVar8 = 1;
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)(lVar4 + 0xa8);
    *(long *)(lVar4 + 0xa8) = lVar6;
  }
  if (*(int *)(param_1 + 0x154) == 1) goto joined_r0x006fb234;
  lVar6 = (long)*(int *)(param_1 + 0xbc);
  plVar9 = (long *)((param_1 + 0xa8) - lVar6);
  plVar7 = (long *)(*(long *)(param_1 + 0xa8) + -lVar6);
  if (plVar7 != plVar9) {
    bVar1 = true;
    do {
      if (*(int *)((long)plVar7 + 0x54) == 4) {
        iVar3 = 0;
      }
      else {
        iVar3 = (**(code **)(*plVar7 + 0x90))(plVar7);
        uVar5 = 3;
        if (iVar3 == 0) {
          uVar5 = 4;
        }
        *(undefined4 *)((long)plVar7 + 0x54) = uVar5;
      }
      bVar1 = (bool)(bVar1 & iVar3 == 0);
      plVar7 = (long *)(*(long *)((long)plVar7 + lVar6) + -lVar6);
    } while (plVar7 != plVar9);
    if (!bVar1) {
      *(undefined4 *)(param_1 + 0x154) = 3;
      goto joined_r0x006fb234;
    }
    lVar6 = (long)*(int *)(param_1 + 0xbc);
    plVar7 = (long *)(*(long *)(param_1 + 0xa8) - lVar6);
    *(undefined4 *)(param_1 + 0x154) = 4;
    if (plVar7 != plVar9) {
      bVar1 = true;
      do {
        iVar3 = (**(code **)(*plVar7 + 0x98))(plVar7);
        uVar5 = 1;
        if (iVar3 != 0) {
          uVar5 = 2;
        }
        *(undefined4 *)((long)plVar7 + 0x54) = uVar5;
        bVar1 = (bool)(bVar1 & iVar3 == 0);
        plVar7 = (long *)(*(long *)((long)plVar7 + lVar6) - lVar6);
      } while (plVar7 != plVar9);
      lVar6 = (long)*(int *)(param_1 + 0xbc);
      plVar7 = (long *)(*(long *)(param_1 + 0xa8) - lVar6);
      uVar5 = 1;
      if (!bVar1) {
        uVar5 = 2;
      }
      *(undefined4 *)(param_1 + 0x154) = uVar5;
      if (plVar7 != plVar9) {
        do {
          (**(code **)(*plVar7 + 0xa0))(plVar7,*(undefined4 *)(param_1 + 0x154));
          plVar7 = (long *)(*(long *)((long)plVar7 + lVar6) - lVar6);
        } while (plVar7 != plVar9);
      }
      goto joined_r0x006fb234;
    }
  }
  *(undefined4 *)(param_1 + 0x154) = 1;
joined_r0x006fb234:
  if (lVar8 != 1) {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    *(long *)(lVar6 + 0xa8) = lVar8;
  }
  return;
}


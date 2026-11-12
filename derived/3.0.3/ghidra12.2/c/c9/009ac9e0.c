
void FUN_009ac9e0(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  
  FUN_03eab7bc(param_2);
  FUN_03eab368(param_2,"Header");
  puVar2 = PTR_DAT_04bb3350;
  lVar9 = *(long *)(param_2 + 8);
  if (lVar9 == 0) {
    lVar8 = 1;
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)(lVar3 + 0xa8);
    *(long *)(lVar3 + 0xa8) = lVar9;
  }
  plVar4 = *(long **)(*(long *)(param_2 + 0x40) + (long)*(int *)(param_2 + 0x4c) * 8);
  (**(code **)(*plVar4 + 0xd8))(plVar4,param_1 + 8,8,*(undefined8 *)(param_2 + 0x38));
  if (lVar8 != 1) {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    *(long *)(lVar9 + 0xa8) = lVar8;
  }
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + -1;
  FUN_03eab368(param_2,"ReplayDatas");
  if (*(int *)(param_1 + 0x20) < 1) {
    iVar6 = *(int *)(param_2 + 0x4c);
  }
  else {
    iVar7 = 0;
    do {
      FUN_03eab0ac(param_2);
      iVar1 = *(int *)(param_1 + 0x1c);
      lVar9 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(param_2 + 8);
      iVar6 = 0;
      if (*(int *)(param_1 + 0x18) <= iVar7 + iVar1) {
        iVar6 = *(int *)(param_1 + 0x18);
      }
      if (lVar8 == 0) {
        lVar3 = 1;
      }
      else {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
        lVar3 = *(long *)(lVar5 + 0xa8);
        *(long *)(lVar5 + 0xa8) = lVar8;
      }
      plVar4 = *(long **)(*(long *)(param_2 + 0x40) + (long)*(int *)(param_2 + 0x4c) * 8);
      (**(code **)(*plVar4 + 0xd8))
                (plVar4,lVar9 + (long)(iVar7 + (iVar1 - iVar6)) * 0x1650,0x1650,
                 *(undefined8 *)(param_2 + 0x38));
      if (lVar3 != 1) {
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
        *(long *)(lVar9 + 0xa8) = lVar3;
      }
      iVar7 = iVar7 + 1;
      iVar6 = *(int *)(param_2 + 0x4c) + -1;
      *(int *)(param_2 + 0x4c) = iVar6;
    } while (iVar7 < *(int *)(param_1 + 0x20));
  }
  *(int *)(param_2 + 0x4c) = iVar6 + -2;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  return;
}


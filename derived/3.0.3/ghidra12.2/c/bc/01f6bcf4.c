
undefined8 FUN_01f6bcf4(long param_1)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  undefined *local_58;
  undefined1 *puStack_50;
  undefined1 uStack_45;
  int local_44;
  undefined *local_40;
  char *pcStack_38;
  
  piVar1 = (int *)(param_1 + 0x13650);
  *(undefined1 *)(param_1 + 0x13717) = 0;
  if (*(int *)(param_1 + 0x77b0) - 3U < 5) {
    return 0;
  }
  uVar2 = *(int *)(param_1 + 0x77b0) - 0x57;
  if ((((0x12 < uVar2) || ((0x40007U >> (ulong)(uVar2 & 0x1f) & 1) == 0)) &&
      (uVar8 = FUN_0212ef10(param_1 + 0xaa50), puVar3 = PTR_DAT_04bb2020, (uVar8 & 1) == 0)) &&
     ((*(int *)(*(long *)(param_1 + 8) + 0x750) == 0 &&
      ((*(byte *)(param_1 + 0xad5a) >> 2 & 1) == 0)))) {
    if (*(int *)(*(long *)(param_1 + 0x10) + 0x4b8) == 0) {
      bVar4 = true;
    }
    else {
      bVar4 = *(int *)(*(long *)(param_1 + 0x10) + 0x378) != 0x23;
    }
    if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
      local_40 = PTR_DAT_04bb2020 + 0x10;
      pcStack_38 = "FireworksApproachTalk";
      sVar5 = FUN_02196ed0(*(long *)(param_1 + 8) + 0x508,&local_40);
      if (sVar5 != 0) {
        if ((bVar4) && (2 < *(int *)(*(long *)(param_1 + 0x10) + 0x360) - 1U)) {
          return 0;
        }
        local_44 = FUN_00eb50cc(*(undefined8 *)(param_1 + 8));
        if ((4 < local_44) && (local_44 < 6)) {
          FUN_025196e4(&uStack_45);
          local_40 = puVar3 + 0x10;
          pcStack_38 = "FireworksApproachNpcIndex";
          iVar6 = FUN_0274bce0(&uStack_45,&local_40);
          if ((iVar6 == 0) && (uVar8 = FUN_01f5a540(param_1), (uVar8 & 1) != 0)) {
            *(undefined1 *)(param_1 + 0x136e0) = 1;
            FUN_01f572fc(param_1,0x57,param_1 + 0x7800,0);
            local_58 = puVar3 + 0x10;
            pcStack_38 = "NNPC_ApproachG_Fireworks";
            puStack_50 = &DAT_04066c7f;
            local_40 = local_58;
            FUN_01f57720(param_1,&local_40,&local_58);
            return 1;
          }
        }
      }
    }
    if (!bVar4) {
      iVar7 = FUN_00eb50cc(*(undefined8 *)(param_1 + 8));
      iVar6 = *piVar1;
      local_40 = (undefined *)CONCAT44(local_40._4_4_,iVar7);
      if ((-1 < iVar6) && (*piVar1 = iVar6 + -1, iVar6 == 0 || iVar6 + -1 == 0)) {
        if ((iVar7 < 2) || (4 < iVar7)) {
          iVar6 = 0x708;
        }
        else {
          iVar6 = 300;
        }
        *piVar1 = iVar6;
        if (iVar7 != *(int *)(param_1 + 0x13654)) {
          *(undefined1 *)(param_1 + 0x13717) = 1;
          *(int *)(param_1 + 0x13654) = iVar7;
          FUN_01ea5c80(param_1,PTR_PTR_04bb2238,PTR_PTR_04bb2238,1,0,PTR_DAT_04bb32e0);
          *(undefined1 *)(param_1 + 0x13717) = 0;
          return 1;
        }
      }
    }
  }
  return 0;
}


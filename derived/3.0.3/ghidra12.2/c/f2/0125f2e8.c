
undefined8 FUN_0125f2e8(long param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  undefined *local_40;
  char *pcStack_38;
  
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "HotelConstruction";
  local_40 = puVar1;
  uVar4 = FUN_0273f0a0(&local_40);
  if ((uVar4 & 1) == 0) {
    pcStack_38 = "HotelBuilt";
    local_40 = puVar1;
    uVar4 = FUN_0273f0a0(&local_40);
    if ((((uVar4 & 1) != 0) && (DAT_0519d040 != 0)) && (*(char *)(DAT_0519d040 + 0x4b30) != '\0')) {
      uVar3 = *(uint *)(DAT_0519d040 + 0x4b34);
      lVar5 = FUN_01260194(0xe7);
      local_40 = (undefined *)CONCAT44(local_40._4_4_,uVar3);
      if ((uVar3 < *(uint *)(lVar5 + 0x420)) &&
         (lVar5 = *(long *)(*(long *)(lVar5 + 0x428) + (long)(int)uVar3 * 8), lVar5 != 0)) {
        plVar7 = (long *)(lVar5 + 0x30);
        piVar6 = (int *)(**(code **)(*plVar7 + 0xf0))(plVar7);
        iVar10 = *piVar6;
        lVar5 = (**(code **)(*plVar7 + 0xf0))(plVar7);
        fVar8 = (float)iVar10 * 10.0 + 2.5;
        fVar9 = (float)*(int *)(lVar5 + 4) * 10.0 + 2.5;
        iVar10 = ((int)DAT_05157178 - (uint)(fVar8 < 0.0)) + (int)((float)(int)fVar8 / 5.0);
        iVar2 = (DAT_05157178._4_4_ - (uint)(fVar9 < 0.0)) + (int)((float)(int)fVar9 / 5.0);
        *(int *)(param_1 + 0x10) = iVar10;
        *(int *)(param_1 + 0x14) = iVar2;
        *(int *)(param_1 + 0x20) = iVar10 + 3;
        *(int *)(param_1 + 0x24) = iVar2 + 1;
        return 1;
      }
    }
  }
  return 0;
}


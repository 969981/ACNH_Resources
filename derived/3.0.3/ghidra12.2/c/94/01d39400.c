
int FUN_01d39400(undefined8 *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  undefined *local_a8;
  undefined8 *local_a0;
  int local_98;
  undefined4 uStack_94;
  long local_90;
  int local_88;
  uint uStack_84;
  undefined8 uStack_80;
  undefined *local_78;
  undefined1 *local_70;
  int local_68;
  
  uVar4 = *(undefined4 *)param_1;
  if ((param_2 & 1) == 0) {
    uVar4 = 0;
  }
  iVar6 = FUN_01d3aee0(param_1[1] + (long)*(int *)((long)param_1 + 0x14),
                       *(int *)(param_1 + 2) - *(int *)((long)param_1 + 0x14),param_1 + 6,uVar4,1);
  puVar5 = PTR_DAT_04bb2020;
  iVar8 = 0;
  if (-1 < iVar6) {
    iVar8 = *(int *)((long)param_1 + 0x14);
  }
  uStack_84 = iVar8 + iVar6;
  if (-1 < (int)uStack_84) {
    local_90 = param_1[1];
    uStack_80 = param_1[3];
    local_98 = (int)*param_1 + 1;
    local_88 = (int)param_1[2];
    uStack_94 = (undefined4)((ulong)*param_1 >> 0x20);
    if (0 < *(int *)(param_1 + 4)) {
      bVar9 = false;
      iVar8 = 0;
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      puVar2 = PTR_DAT_04bb2030 + 0x10;
      do {
        uVar3 = uStack_84;
        if (bVar9) {
          local_a0 = (undefined8 *)&DAT_0408f28c;
          local_68 = local_88 - uStack_84;
          if (local_68 < 4) {
            return -1;
          }
          local_70 = (undefined1 *)(local_90 + (ulong)uStack_84);
          local_70[local_68 - 1] = 0;
          *local_70 = 0;
          local_a8 = puVar1;
          local_78 = puVar2;
          (**(code **)(puVar5 + 0x28))(&local_a8);
          FUN_038d13f0(&local_78,&DAT_040e1e8e,local_a0);
          if ((int)uStack_84 < -3) {
            return -1;
          }
          uStack_84 = uStack_84 + 3;
        }
        uVar7 = (*(code *)**(undefined8 **)param_1[5])((undefined8 *)param_1[5],iVar8,&local_98);
        if ((int)uVar7 < 0) {
          return -1;
        }
        iVar8 = iVar8 + 1;
        uStack_84 = uVar7;
        if (uVar7 == 0) {
          uStack_84 = uVar3;
        }
        bVar9 = (bool)(bVar9 | uVar7 != 0);
      } while (iVar8 < *(int *)(param_1 + 4));
    }
    local_a8 = puVar5 + 0x10;
    local_a0 = &DAT_0407ebb1;
    local_68 = local_88 - uStack_84;
    if (2 < local_68) {
      local_70 = (undefined1 *)(local_90 + (ulong)uStack_84);
      local_78 = PTR_DAT_04bb2030 + 0x10;
      local_70[local_68 - 1] = 0;
      *local_70 = 0;
      (**(code **)(puVar5 + 0x28))(&local_a8);
      FUN_038d13f0(&local_78,&DAT_040e1e8e,local_a0);
      if (-3 < (int)uStack_84) {
        uStack_84 = uStack_84 + 2;
        _local_98 = CONCAT44(uStack_94,*(undefined4 *)param_1);
        iVar8 = FUN_01d3aee0(local_90 + (ulong)uStack_84,local_88 - uStack_84,param_1 + 8,
                             *(undefined4 *)param_1,0);
        uVar3 = 0;
        if (-1 < iVar8) {
          uVar3 = uStack_84;
        }
        iVar6 = uVar3 + iVar8;
        if (iVar6 < 0 != SCARRY4(uVar3,iVar8)) {
          iVar6 = -1;
        }
        return iVar6;
      }
    }
  }
  return -1;
}


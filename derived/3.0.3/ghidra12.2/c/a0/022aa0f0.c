
undefined8 FUN_022aa0f0(long param_1,long param_2)

{
  undefined *puVar1;
  uint *puVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined *local_88;
  int local_80;
  int iStack_7c;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  byte local_68;
  short local_48 [4];
  
  local_70 = 0;
  lVar8 = *(long *)PTR_DAT_04bb2720;
  if (lVar8 == 0) {
    puVar10 = &DAT_055c04a0;
  }
  else {
    puVar10 = &DAT_055c04a0;
    if (*(long *)(lVar8 + 0x330) != 0) {
      puVar10 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar8 + 0x338));
      iVar4 = FUN_006bd550(*puVar10,0);
      puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        puVar10 = &DAT_055c04a0;
      }
    }
  }
  local_6c = *(undefined4 *)(puVar10 + 7);
  local_68 = FUN_017baf44();
  local_68 = local_68 & 1;
  local_78 = PTR_DAT_04bb6268 + 0x10;
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 == -1) {
    iVar9 = *(int *)(param_1 + 0x10);
    iVar11 = *(int *)(param_1 + 0x14);
    iVar4 = *(int *)(param_1 + 0x24) + 1;
  }
  else {
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    iVar9 = *(int *)(param_1 + 0x10);
    iVar11 = *(int *)(param_1 + 0x14);
    iVar4 = *(int *)(param_1 + 0x24) + 1;
    if ((*puVar2 >> 3 & 1) != 0) {
      if (iVar4 == iVar11) {
        return 0;
      }
      puVar1 = PTR_DAT_04bb2010 + 0x10;
      iVar6 = iVar9;
      iVar5 = iVar9;
      do {
        if (iVar6 != *(int *)(param_2 + 8) || iVar11 != *(int *)(param_2 + 0xc)) {
          local_88 = puVar1;
          local_80 = iVar6;
          iStack_7c = iVar11;
          uVar7 = FUN_01675460(&local_88,0);
          if (((uVar7 & 1) != 0) ||
             ((FUN_01a5033c(local_48,&local_78,0,&local_88,0), local_48[0] != -2 &&
              (iVar5 = FUN_0277ebd0(local_48), iVar5 != 0)))) {
            return 1;
          }
          iVar5 = *(int *)(param_1 + 0x10);
        }
        if (iVar6 < *(int *)(param_1 + 0x20)) {
          iVar6 = iVar6 + 1;
        }
        else {
          iVar11 = iVar11 + 1;
          iVar6 = iVar5;
        }
      } while (iVar9 != iVar6 || iVar4 != iVar11);
      return 0;
    }
  }
  if (iVar4 != iVar11) {
    puVar1 = PTR_DAT_04bb2010 + 0x10;
    iVar5 = iVar9;
    do {
      if (iVar5 != *(int *)(param_2 + 8) || iVar11 != *(int *)(param_2 + 0xc)) {
        local_88 = puVar1;
        local_80 = iVar5;
        iStack_7c = iVar11;
        FUN_01a5033c(local_48,&local_78,0,&local_88,0);
        if ((local_48[0] != -2) && (iVar6 = FUN_0277ebd0(local_48), iVar6 != 0)) {
          return 1;
        }
      }
      if (iVar5 < *(int *)(param_1 + 0x20)) {
        iVar5 = iVar5 + 1;
      }
      else {
        iVar5 = *(int *)(param_1 + 0x10);
        iVar11 = iVar11 + 1;
      }
    } while ((iVar9 != iVar5) || (iVar4 != iVar11));
  }
  return 0;
}


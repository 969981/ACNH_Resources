
/* WARNING: Removing unreachable block (ram,0x00d8e414) */

void FUN_00d8e3d0(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  uint uVar11;
  ulong uVar12;
  undefined **local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  int local_44;
  undefined8 local_40;
  char *local_38;
  
  lVar8 = *(long *)PTR_DAT_04bb46b0;
  if (lVar8 != 0) {
    local_68 = (undefined **)CONCAT44(local_68._4_4_,1);
    if ((((*(byte *)(lVar8 + 0x50d) ^ 0xff) & 6) == 0) &&
       (lVar8 = (**(code **)(**(long **)(*(long *)(lVar8 + 0x10) + 0x188) + 0x30))(), lVar8 != 0)) {
      lVar9 = *(long *)(lVar8 + 0x5d9500);
      if (lVar9 == 0) {
        uVar4 = 0;
      }
      else {
        if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
          lVar9 = *(long *)(lVar8 + 0x5d9500);
          uVar4 = uVar4 & 0xffffffff;
          if (lVar9 == 0) goto LAB_00d8e4a8;
        }
        plVar5 = *(long **)(lVar9 + 0x20);
        if (plVar5 != (long *)0x0) {
          local_68 = *(undefined ***)(lVar8 + 0x5d94e0);
          local_60 = *(undefined8 *)(lVar8 + 0x5d94e8);
          uStack_58 = 0x640;
          (**(code **)(*plVar5 + 0x20))(plVar5,&local_68);
        }
      }
LAB_00d8e4a8:
      plVar5 = (long *)(*(long *)(lVar8 + 0x5d94e8) + *(long *)(lVar8 + 0x5d94e0));
      if (*plVar5 == 0 || *plVar5 != *(long *)(param_1 + 0x158)) {
        uVar12 = 0;
        do {
          uVar12 = uVar12 + 1;
          uVar11 = (uint)uVar12;
          if (uVar11 == 100) goto LAB_00d8e510;
          lVar9 = *(long *)((long)plVar5 +
                           (-(uVar12 >> 0x1f & 1) & 0xfffffff000000000 | uVar12 * 0x10 & 0xffffffff0
                           ));
          uVar12 = uVar12 & 0xffffffff;
        } while (lVar9 == 0 || lVar9 != *(long *)(param_1 + 0x158));
        if (-1 < (int)uVar11) {
          if (uVar11 < 100) {
            plVar5 = plVar5 + uVar12 * 2;
          }
          goto LAB_00d8e504;
        }
      }
      else {
LAB_00d8e504:
        *(byte *)(plVar5 + 1) = *(byte *)(plVar5 + 1) & 0xfe;
      }
LAB_00d8e510:
      if ((((uVar4 & 1) != 0) && (*(long *)(lVar8 + 0x5d9500) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar8 + 0x5d9500) + 0x18), puVar6 != (undefined8 *)0x0
         )) {
        (**(code **)*puVar6)();
      }
    }
  }
  FUN_01df9e40();
  (**(code **)(*(long *)(param_1 + 0xd8) + 0x18))((long *)(param_1 + 0xd8));
  pcVar10 = *(char **)(param_1 + 0xe0);
  if (pcVar10 != &DAT_04953da8) {
    if (*pcVar10 != 'c') {
      bVar2 = pcVar10 == s_cInspect_04953dae;
LAB_00d8e608:
      uVar11 = (uint)bVar2;
      goto LAB_00d8e614;
    }
    if (((pcVar10[1] != 'U') || (pcVar10[2] != 'I')) || (pcVar10[3] != '\0')) {
      if (pcVar10 == s_cInspect_04953dae) {
        uVar11 = 1;
        goto LAB_00d8e614;
      }
      if (((pcVar10[1] == 'I') && (pcVar10[2] == 'n')) &&
         ((pcVar10[3] == 's' &&
          ((((pcVar10[4] == 'p' && (pcVar10[5] == 'e')) && (pcVar10[6] == 'c')) &&
           (pcVar10[7] == 't')))))) {
        bVar2 = pcVar10[8] == '\0';
        goto LAB_00d8e608;
      }
    }
  }
  uVar11 = 0;
LAB_00d8e614:
  puVar1 = PTR_DAT_04bb32e0;
  if (*(long *)(param_1 + 8) != 0) {
    puVar1 = (undefined *)(*(long *)(param_1 + 8) + 0x2a8);
  }
  local_40 = &PTR_LAB_048f9770;
  local_38 = "wherearen_follow_list";
  FUN_025ffac8(&local_68,&local_40,puVar1);
  local_40._0_4_ = (uint)local_40 & 0xffffff00;
  local_68 = &PTR_FUN_04a86ad8;
  lVar8 = *(long *)(*(long *)PTR_DAT_04bb7bc0 + 0x270);
  uVar7 = 0;
  if (lVar8 != 0) {
    uVar4 = (ulong)*(uint *)(lVar8 + 0x10);
    if (1 < *(uint *)(lVar8 + 0x10)) {
      uVar4 = 0;
    }
    uVar7 = *(undefined4 *)(*(long *)(lVar8 + uVar4 * 8) + 0x28);
  }
  local_38 = (char *)CONCAT44(local_38._4_4_,uVar7);
  local_40._4_4_ = uVar11;
  FUN_025f5ef4(&local_68,&local_40);
  local_68 = &PTR_FUN_04a86ad8;
  iVar3 = FUN_025f60ec(&local_68);
  if (((iVar3 == -1) ||
      (local_40._0_4_ = (*(code *)local_68[4])(&local_68), 0xc < (int)(uint)local_40)) &&
     (local_44 == 0)) {
    local_44 = 1;
  }
  FUN_02601530(&local_68);
  *(undefined4 *)(param_1 + 0xb0) = 1;
  return;
}


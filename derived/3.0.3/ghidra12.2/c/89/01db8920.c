
int FUN_01db8920(long param_1,byte *param_2)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  byte bVar16;
  long lVar17;
  uint uVar18;
  undefined8 local_a0;
  undefined *local_98;
  long local_90;
  undefined8 local_88;
  int local_74;
  undefined *local_70;
  char *pcStack_68;
  
  bVar16 = *param_2;
  if (7 < bVar16) {
    bVar16 = 0xff;
  }
  local_98 = (undefined *)CONCAT71(local_98._1_7_,bVar16);
  iVar6 = FUN_02582fe0(&local_98);
  puVar2 = PTR_DAT_04bb46b0;
  if ((((iVar6 != *(int *)(param_1 + 0x841c) || *(int *)(param_1 + 0x841c) == -1) ||
       (*(long *)PTR_DAT_04bb46b0 == 0)) ||
      (lVar11 = FUN_026f43ec(*(long *)PTR_DAT_04bb46b0,iVar6), lVar11 == 0)) ||
     (lVar12 = *(long *)puVar2, lVar12 == 0)) {
    return 0;
  }
  puVar1 = (undefined4 *)(param_1 + 0x841c);
  lVar12 = FUN_026eec4c(lVar12,*puVar1);
  if (lVar12 == 0) {
    return 0;
  }
  lVar15 = lVar12 + 0x194b0;
  if (*(long *)(lVar12 + 0x194b8) == 0) {
    lVar15 = *(long *)(*(long *)puVar2 + 0x20);
  }
  if ((*(long *)(lVar15 + 0x248a8) == 0) ||
     (puVar13 = *(undefined8 **)(*(long *)(lVar15 + 0x248a8) + 0x10), puVar13 == (undefined8 *)0x0))
  {
    uVar7 = 0;
    lVar12 = *(long *)(lVar11 + 0x28);
    if (lVar12 != 0) goto LAB_01db8a34;
LAB_01db8a5c:
    uVar8 = 0;
    uVar18 = 0;
    if (*(int *)(param_1 + 0x74b8) != 0) goto LAB_01db8a68;
LAB_01db8a54:
    iVar6 = 0;
  }
  else {
    uVar7 = (**(code **)*puVar13)();
    lVar12 = *(long *)(lVar11 + 0x28);
    if (lVar12 == 0) goto LAB_01db8a5c;
LAB_01db8a34:
    if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) goto LAB_01db8a5c;
    uVar8 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
    uVar18 = uVar8;
    if (*(int *)(param_1 + 0x74b8) == 0) goto LAB_01db8a54;
LAB_01db8a68:
    iVar6 = 0;
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    puVar3 = PTR_DAT_04bc32b0 + 0x10;
    do {
      iVar4 = *(int *)(param_1 + 0x74b0);
      iVar5 = *(int *)(param_1 + 0x74b4);
      lVar12 = *(long *)(param_1 + 0x74a8);
      iVar10 = 0;
      if (iVar4 <= iVar5) {
        iVar10 = iVar4;
      }
      if ((*(long *)(lVar11 + 0x28) != 0) &&
         (plVar14 = *(long **)(*(long *)(lVar11 + 0x28) + 0x20), plVar14 != (long *)0x0)) {
        local_98 = *(undefined **)(lVar11 + 8);
        local_90 = *(long *)(lVar11 + 0x10);
        local_88 = 0x47430;
        (**(code **)(*plVar14 + 0x20))(plVar14,&local_98);
      }
      puVar13 = (undefined8 *)(lVar12 + (long)(iVar5 - iVar10) * 0x3d0);
      lVar12 = FUN_02826ca0(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8),puVar13 + 1);
      if (lVar12 == 0) break;
      if ((*(long *)(lVar15 + 0x248a8) != 0) &&
         (plVar14 = *(long **)(*(long *)(lVar15 + 0x248a8) + 0x20), plVar14 != (long *)0x0)) {
        local_98 = *(undefined **)(lVar15 + 0x24888);
        local_90 = *(long *)(lVar15 + 0x24890);
        local_88 = 0x680;
        (**(code **)(*plVar14 + 0x20))(plVar14,&local_98);
      }
      lVar12 = *(long *)(lVar15 + 0x24890) + *(long *)(lVar15 + 0x24888);
      lVar17 = 0;
      if (*(long *)(lVar12 + 0x640) == 0) {
LAB_01db8b70:
        *(undefined8 *)(lVar12 + 0x640 + lVar17 * 8) = *puVar13;
      }
      else {
        if (*(long *)(lVar12 + 0x648) == 0) {
          lVar17 = 1;
          goto LAB_01db8b70;
        }
        if (*(long *)(lVar12 + 0x650) == 0) {
          lVar17 = 2;
          goto LAB_01db8b70;
        }
        if (*(long *)(lVar12 + 0x658) == 0) {
          lVar17 = 3;
          goto LAB_01db8b70;
        }
      }
      pcStack_68 = "web_login_bonus";
      local_70 = puVar2;
      FUN_026012f4(&local_98,&local_70,puVar1);
      local_a0 = 0xfffe;
      local_98 = puVar3;
      FUN_0277d4ac(&local_a0);
      local_a0 = puVar13[0x19];
      FUN_02602950(&local_98,0x62);
      pcStack_68 = "GetItem";
      local_70 = puVar2;
      uVar9 = FUN_0277d6c4(&local_a0);
      if (local_90 != 0) {
        FUN_02605660(local_90,&local_70,uVar9);
      }
      local_98 = PTR_DAT_04bc32b0 + 0x10;
      iVar10 = FUN_0259e6e8(&local_98);
      if (iVar10 == -1) {
LAB_01db8c40:
        if (local_74 == 0) {
          local_74 = 1;
        }
      }
      else {
        iVar10 = (**(code **)(local_98 + 0x20))(&local_98);
        local_70 = (undefined *)CONCAT44(local_70._4_4_,iVar10);
        if (0xc < iVar10) goto LAB_01db8c40;
      }
      FUN_02601530(&local_98);
      iVar10 = *(int *)(param_1 + 0x74b8);
      if (0 < iVar10) {
        iVar4 = 0;
        if (*(int *)(param_1 + 0x74b4) + 1 < *(int *)(param_1 + 0x74b0)) {
          iVar4 = *(int *)(param_1 + 0x74b4) + 1;
        }
        *(int *)(param_1 + 0x74b4) = iVar4;
        *(int *)(param_1 + 0x74b8) = iVar10 + -1;
        iVar10 = iVar10 + -1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar10 != 0);
    if (iVar6 != 0) {
      if ((*(long *)(lVar11 + 0x28) != 0) &&
         (plVar14 = *(long **)(*(long *)(lVar11 + 0x28) + 0x20), plVar14 != (long *)0x0)) {
        local_98 = *(undefined **)(lVar11 + 8);
        local_90 = *(long *)(lVar11 + 0x10);
        local_88 = 0x47430;
        (**(code **)(*plVar14 + 0x20))(plVar14,&local_98);
      }
      FUN_02827bb0(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8),*puVar1);
    }
    uVar18 = uVar8;
    if (*(int *)(param_1 + 0x74b8) != 0) goto LAB_01db8ce4;
  }
  *puVar1 = 0xffffffff;
LAB_01db8ce4:
  if ((((uVar18 & 1) != 0) && (*(long *)(lVar11 + 0x28) != 0)) &&
     (puVar13 = *(undefined8 **)(*(long *)(lVar11 + 0x28) + 0x18), puVar13 != (undefined8 *)0x0)) {
    (**(code **)*puVar13)();
  }
  if ((uVar7 & 1) == 0) {
    return iVar6;
  }
  if (*(long *)(lVar15 + 0x248a8) == 0) {
    return iVar6;
  }
  puVar13 = *(undefined8 **)(*(long *)(lVar15 + 0x248a8) + 0x18);
  if (puVar13 == (undefined8 *)0x0) {
    return iVar6;
  }
  (**(code **)*puVar13)();
  return iVar6;
}


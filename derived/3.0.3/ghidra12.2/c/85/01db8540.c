
int FUN_01db8540(long param_1,byte *param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  byte bVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  uint uVar19;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  bVar15 = *param_2;
  if (7 < bVar15) {
    bVar15 = 0xff;
  }
  local_78 = CONCAT71(local_78._1_7_,bVar15);
  iVar4 = FUN_02582fe0(&local_78);
  puVar3 = PTR_DAT_04bb46b0;
  piVar1 = (int *)(param_1 + 0x8418);
  if ((((iVar4 != *piVar1 || *piVar1 == -1) || (*(long *)PTR_DAT_04bb46b0 == 0)) ||
      (lVar7 = FUN_026f43ec(*(long *)PTR_DAT_04bb46b0,iVar4), lVar7 == 0)) ||
     ((lVar8 = *(long *)puVar3, lVar8 == 0 || (lVar8 = FUN_026eec4c(lVar8,*piVar1), lVar8 == 0)))) {
    return 0;
  }
  lVar13 = lVar8 + 0x194b0;
  if (*(long *)(lVar8 + 0x194b8) == 0) {
    lVar13 = *(long *)(*(long *)puVar3 + 0x20);
  }
  plVar11 = (long *)(lVar13 + 0x24888);
  if ((*(long *)(lVar13 + 0x248a8) == 0) ||
     (puVar9 = *(undefined8 **)(*(long *)(lVar13 + 0x248a8) + 0x10), puVar9 == (undefined8 *)0x0)) {
    uVar5 = 0;
    lVar8 = *(long *)(lVar7 + 0x28);
    if (lVar8 != 0) goto LAB_01db8650;
LAB_01db8678:
    uVar6 = 0;
    uVar19 = 0;
    if (*(int *)(param_1 + 0x58) != 0) goto LAB_01db8684;
LAB_01db8670:
    iVar4 = 0;
  }
  else {
    uVar5 = (**(code **)*puVar9)();
    lVar8 = *(long *)(lVar7 + 0x28);
    if (lVar8 == 0) goto LAB_01db8678;
LAB_01db8650:
    if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) goto LAB_01db8678;
    uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
    uVar19 = uVar6;
    if (*(int *)(param_1 + 0x58) == 0) goto LAB_01db8670;
LAB_01db8684:
    iVar4 = 0;
    do {
      if ((param_3 & 1) == 0) {
LAB_01db86fc:
        iVar12 = 0;
        if (*(int *)(param_1 + 0x50) <= *(int *)(param_1 + 0x54)) {
          iVar12 = *(int *)(param_1 + 0x50);
        }
        lVar8 = *(long *)(param_1 + 0x48) + (long)(*(int *)(param_1 + 0x54) - iVar12) * 0x3c8;
        lVar14 = *(long *)(lVar7 + 0x28);
      }
      else {
        if ((*(long *)(lVar13 + 0x248a8) != 0) &&
           (plVar10 = *(long **)(*(long *)(lVar13 + 0x248a8) + 0x20), plVar10 != (long *)0x0)) {
          local_78 = *plVar11;
          local_70 = *(undefined8 *)(lVar13 + 0x24890);
          local_68 = 0x680;
          (**(code **)(*plVar10 + 0x20))(plVar10,&local_78);
        }
        if (0x1d < *(byte *)(*(long *)(lVar13 + 0x24890) + *plVar11 + 0x67d)) break;
        if (*(int *)(param_1 + 0x58) != 0) goto LAB_01db86fc;
        lVar8 = 0;
        lVar14 = *(long *)(lVar7 + 0x28);
      }
      if ((lVar14 != 0) && (plVar10 = *(long **)(lVar14 + 0x20), plVar10 != (long *)0x0)) {
        local_78 = *(long *)(lVar7 + 8);
        local_70 = *(undefined8 *)(lVar7 + 0x10);
        local_68 = 0x47430;
        (**(code **)(*plVar10 + 0x20))(plVar10,&local_78);
      }
      lVar14 = FUN_02826ca0(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8),lVar8);
      if (lVar14 == 0) break;
      if ((*(long *)(lVar13 + 0x248a8) != 0) &&
         (plVar10 = *(long **)(*(long *)(lVar13 + 0x248a8) + 0x20), plVar10 != (long *)0x0)) {
        local_78 = *plVar11;
        local_70 = *(undefined8 *)(lVar13 + 0x24890);
        local_68 = 0x680;
        (**(code **)(*plVar10 + 0x20))(plVar10,&local_78);
      }
      uVar16 = 0;
      lVar14 = *(long *)(lVar13 + 0x24890) + *plVar11;
      do {
        if (*(long *)(lVar14 + (-(uVar16 >> 0x1f) & 0xfffffff000000000 | uVar16 << 4)) == 0) {
          lVar17 = (long)(int)uVar16;
LAB_01db87dc:
          puVar9 = (undefined8 *)(lVar14 + lVar17 * 0x10);
          uVar18 = *(undefined8 *)(lVar8 + 0x378);
          *(undefined4 *)(puVar9 + 1) = 0;
          *puVar9 = uVar18;
          break;
        }
        lVar17 = (uVar16 << 0x20) + 0x100000000;
        if (*(long *)(lVar14 + (lVar17 >> 0x1c)) == 0) {
          lVar17 = lVar17 >> 0x20;
          goto LAB_01db87dc;
        }
        uVar19 = (int)uVar16 + 2;
        uVar16 = (ulong)uVar19;
      } while (uVar19 != 100);
      iVar12 = *(int *)(param_1 + 0x58);
      if (0 < iVar12) {
        iVar2 = 0;
        if (*(int *)(param_1 + 0x54) + 1 < *(int *)(param_1 + 0x50)) {
          iVar2 = *(int *)(param_1 + 0x54) + 1;
        }
        *(int *)(param_1 + 0x54) = iVar2;
        *(int *)(param_1 + 0x58) = iVar12 + -1;
        iVar12 = iVar12 + -1;
      }
      if ((param_3 & 1) != 0) {
        if ((*(long *)(lVar13 + 0x248a8) != 0) &&
           (plVar10 = *(long **)(*(long *)(lVar13 + 0x248a8) + 0x20), plVar10 != (long *)0x0)) {
          local_78 = *plVar11;
          local_70 = *(undefined8 *)(lVar13 + 0x24890);
          local_68 = 0x680;
          (**(code **)(*plVar10 + 0x20))(plVar10,&local_78);
        }
        lVar8 = *(long *)(lVar13 + 0x24890) + *plVar11;
        bVar15 = *(byte *)(lVar8 + 0x67d);
        if (bVar15 < 0x1e) {
          *(byte *)(lVar8 + 0x67d) = bVar15 + 1;
        }
        iVar12 = *(int *)(param_1 + 0x58);
      }
      iVar4 = iVar4 + 1;
    } while (iVar12 != 0);
    if (iVar4 != 0) {
      if ((*(long *)(lVar7 + 0x28) != 0) &&
         (plVar11 = *(long **)(*(long *)(lVar7 + 0x28) + 0x20), plVar11 != (long *)0x0)) {
        local_78 = *(long *)(lVar7 + 8);
        local_70 = *(undefined8 *)(lVar7 + 0x10);
        local_68 = 0x47430;
        (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
      }
      FUN_02827bb0(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8),*piVar1);
    }
    uVar19 = uVar6;
    if (*(int *)(param_1 + 0x58) != 0) goto LAB_01db88d0;
  }
  *piVar1 = -1;
LAB_01db88d0:
  if ((((uVar19 & 1) != 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 0x18), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
  if ((((uVar5 & 1) != 0) && (*(long *)(lVar13 + 0x248a8) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar13 + 0x248a8) + 0x18), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
  return iVar4;
}


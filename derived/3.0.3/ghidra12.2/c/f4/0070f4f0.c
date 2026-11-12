
void FUN_0070f4f0(long param_1,long *param_2,long param_3,long param_4,undefined1 *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined **local_70;
  long local_68;
  undefined **local_60;
  undefined8 local_58;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar5 = FUN_006bd550(param_2[1],0);
  uVar3 = *(uint *)(param_1 + 0x2c8);
  if (uVar3 != 0) {
    lVar7 = *(long *)(param_1 + 0x2d0);
    if ((int)uVar3 < 2) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      iVar9 = uVar3 - 1;
      do {
        iVar1 = iVar9 + uVar8;
        if (iVar1 < 0 != SCARRY4(iVar9,uVar8)) {
          iVar1 = iVar1 + 1;
        }
        uVar2 = iVar1 >> 1;
        uVar4 = *(uint *)(*(long *)(lVar7 + (long)(int)uVar2 * 8) + 0x10);
        if (uVar4 == uVar5) goto joined_r0x0070f5cc;
        if (uVar4 < uVar5) {
          uVar8 = uVar2 + 1;
        }
        else {
          iVar9 = uVar2 - 1;
        }
      } while ((int)uVar8 < iVar9);
    }
    uVar2 = uVar8;
    if (*(uint *)(*(long *)(lVar7 + (long)(int)uVar8 * 8) + 0x10) == uVar5) {
joined_r0x0070f5cc:
      if (uVar2 != 0xffffffff) {
        if (uVar3 <= uVar2) {
          uVar2 = 0;
        }
        plVar10 = *(long **)(lVar7 + (long)(int)uVar2 * 8);
        goto LAB_0070f5d4;
      }
    }
  }
  plVar10 = (long *)0x0;
LAB_0070f5d4:
  local_58 = *(undefined8 *)(param_4 + 8);
  local_70 = &PTR_LAB_048f9770;
  local_60 = &PTR_LAB_048f9770;
  local_68 = **(long **)(param_3 + 0x38) + 2;
  iVar9 = *(int *)(*(long *)(*(long *)(param_1 + 0x288) + 8) + 0xb8);
  if ((plVar10 == (long *)0x0) ||
     (uVar6 = (**(code **)(*plVar10 + 0x30))(plVar10), (uVar6 & 1) == 0)) {
    plVar11 = *(long **)(param_1 + 0x280);
    if (plVar11 != (long *)0x0) {
      if (iVar9 == 0) {
        FUN_0070f7e0(*(undefined8 *)PTR_DAT_04bb3240,param_4,&local_70);
        plVar11 = *(long **)(param_1 + 0x280);
      }
      (**(code **)(*plVar11 + 0x50))();
    }
    *(long **)(param_1 + 0x280) = plVar10;
    *(undefined1 *)(param_1 + 0x2e8) = 0;
    if (plVar10 == (long *)0x0) {
      *(undefined1 *)(param_1 + 0x2e8) = 1;
      return;
    }
    plVar11 = plVar10;
    if (iVar9 == 0) {
      FUN_0070f7e0(*(undefined8 *)PTR_DAT_04bb3240,param_4,&local_70);
      plVar11 = *(long **)(param_1 + 0x280);
    }
    if ((int)plVar11[4] != 0) {
      lVar7 = (long)(int)plVar11[4] << 3;
      puVar13 = (undefined8 *)plVar11[5];
      do {
        plVar12 = (long *)*puVar13;
        (**(code **)(*plVar12 + 0x18))(plVar12);
        (**(code **)(*plVar12 + 0x10))(plVar12,param_3);
        lVar7 = lVar7 + -8;
        puVar13 = puVar13 + 1;
      } while (lVar7 != 0);
    }
    (**(code **)(*plVar11 + 0x28))(plVar11,param_3);
    *(undefined8 *)(*(long *)(param_1 + 0x280) + 0x18) = *(undefined8 *)(param_3 + 0x30);
    plVar11 = *(long **)(param_1 + 0x280);
    *(undefined4 *)(plVar11 + 0x16) = 0;
    (**(code **)(*plVar11 + 0x40))(plVar11,&local_70);
  }
  else {
    if (iVar9 == 0) {
      FUN_0070f7e0(*(undefined8 *)PTR_DAT_04bb3240,param_4,&local_70);
    }
    if ((int)plVar10[4] != 0) {
      lVar7 = (long)(int)plVar10[4] << 3;
      puVar13 = (undefined8 *)plVar10[5];
      do {
        plVar11 = (long *)*puVar13;
        (**(code **)(*plVar11 + 0x18))(plVar11);
        (**(code **)(*plVar11 + 0x10))(plVar11,param_3);
        lVar7 = lVar7 + -8;
        puVar13 = puVar13 + 1;
      } while (lVar7 != 0);
    }
    (**(code **)(*plVar10 + 0x28))(plVar10,param_3);
    plVar10[3] = *(long *)(param_3 + 0x30);
    (**(code **)(*plVar10 + 0x58))(plVar10,&local_70);
    *param_5 = 1;
  }
  uVar6 = (**(code **)(*plVar10 + 0x38))(plVar10);
  if ((uVar6 & 1) == 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x288) + 0x25) = 1;
  }
  return;
}


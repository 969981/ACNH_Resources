
undefined8 FUN_0070fb10(long param_1,long *param_2,long param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined **local_60;
  long local_58;
  undefined **local_50;
  undefined8 local_48;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar5 = FUN_006bd550(param_2[1],0);
  uVar3 = *(uint *)(param_1 + 0x2d8);
  if (uVar3 != 0) {
    lVar7 = *(long *)(param_1 + 0x2e0);
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
        if (uVar4 == uVar5) goto joined_r0x0070fbd0;
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
joined_r0x0070fbd0:
      if (uVar2 != 0xffffffff) {
        if (uVar3 <= uVar2) {
          uVar2 = 0;
        }
        plVar11 = *(long **)(lVar7 + (long)(int)uVar2 * 8);
        if (plVar11 != (long *)0x0) {
          local_48 = *(undefined8 *)(param_4 + 8);
          local_60 = &PTR_LAB_048f9770;
          local_50 = &PTR_LAB_048f9770;
          local_58 = **(long **)(param_3 + 0x10) + 2;
          if (*(int *)(*(long *)(*(long *)(param_1 + 0x288) + 8) + 0xb8) == 0) {
            FUN_0070f7e0(*(undefined8 *)PTR_DAT_04bb3240,param_4,&local_60);
          }
          if ((int)plVar11[4] != 0) {
            lVar7 = (long)(int)plVar11[4] << 3;
            puVar12 = (undefined8 *)plVar11[5];
            do {
              plVar10 = (long *)*puVar12;
              (**(code **)(*plVar10 + 0x18))(plVar10);
              (**(code **)(*plVar10 + 0x10))(plVar10,param_3 + 0x28);
              lVar7 = lVar7 + -8;
              puVar12 = puVar12 + 1;
            } while (lVar7 != 0);
          }
          (**(code **)(*plVar11 + 0x28))(plVar11,param_3 + 0x28);
          plVar11[3] = *(long *)(param_3 + 0x20);
          uVar6 = (**(code **)(*plVar11 + 0x30))(plVar11,&local_60);
          return uVar6;
        }
      }
    }
  }
  return 0;
}


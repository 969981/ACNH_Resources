
void FUN_027a3ce0(int param_1,long *param_2,byte *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  byte local_34 [4];
  byte local_18 [4];
  int local_14;
  
  local_14 = param_1;
  if (param_1 == 1) {
    lVar12 = *(long *)PTR_DAT_04bb2208;
    (**(code **)(*param_2 + 0x18))(param_2);
    uVar4 = FUN_006bd550(param_2[1],0);
    FUN_006bd550("invalid_name",0);
    uVar7 = *(uint *)(lVar12 + 0x1d68);
    uVar10 = (ulong)uVar7;
    if (*(char *)(lVar12 + 0x1d79) == '\0') {
      if ((int)uVar7 < 1) {
        return;
      }
      puVar9 = *(undefined8 **)(lVar12 + 0x1d70);
      while (piVar11 = (int *)*puVar9, uVar4 != piVar11[8]) {
        uVar10 = uVar10 - 1;
        puVar9 = puVar9 + 1;
        if (uVar10 == 0) {
          return;
        }
      }
    }
    else {
      if (uVar7 == 0) {
        return;
      }
      if ((int)uVar7 < 2) {
        lVar12 = *(long *)(lVar12 + 0x1d70);
        uVar7 = 0;
      }
      else {
        iVar3 = uVar7 - 1;
        lVar12 = *(long *)(lVar12 + 0x1d70);
        uVar7 = 0;
        do {
          iVar1 = iVar3 + uVar7;
          if (iVar1 < 0 != SCARRY4(iVar3,uVar7)) {
            iVar1 = iVar1 + 1;
          }
          uVar8 = iVar1 >> 1;
          uVar2 = *(uint *)(*(long *)(lVar12 + (long)(int)uVar8 * 8) + 0x20);
          if (uVar4 == uVar2) {
            if ((int)uVar8 < 0) {
              return;
            }
            goto LAB_027a3e4c;
          }
          if (uVar2 < uVar4) {
            uVar7 = uVar8 + 1;
          }
          else {
            iVar3 = uVar8 - 1;
          }
        } while ((int)uVar7 < iVar3);
      }
      if (uVar4 != *(uint *)(*(long *)(lVar12 + (long)(int)uVar7 * 8) + 0x20)) {
        return;
      }
      uVar8 = uVar7;
      if ((int)uVar7 < 0) {
        return;
      }
LAB_027a3e4c:
      piVar11 = *(int **)(lVar12 + (ulong)uVar8 * 8);
    }
    iVar3 = *piVar11;
    if (iVar3 < 0) {
      return;
    }
    local_34[0] = *param_3;
    pbVar6 = local_34;
    uVar5 = 1;
    if (7 < local_34[0]) {
      local_34[0] = 0xff;
    }
  }
  else {
    if (param_1 != 0) {
      return;
    }
    iVar3 = FUN_02796a00(*(long *)PTR_DAT_04bb2208 + 0x1960,param_2);
    if (iVar3 < 0) {
      return;
    }
    local_18[0] = *param_3;
    pbVar6 = local_18;
    uVar5 = 0;
    if (7 < local_18[0]) {
      local_18[0] = 0xff;
    }
  }
  FUN_02f08eb4(uVar5,iVar3,pbVar6);
  return;
}


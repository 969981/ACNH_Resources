
void FUN_032ea1b0(int *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  long lVar10;
  undefined2 local_38 [2];
  int local_34;
  
  if (param_2 != 4) {
    param_1[0x18d] = param_2;
  }
  iVar8 = param_1[0x183];
  iVar7 = param_1[0x184];
  iVar6 = iVar7 - iVar8;
  local_34 = param_2;
  if (iVar6 == 0) {
    iVar6 = *param_1;
  }
  else {
    local_38[0] = 0;
    FUN_03363c80(*(undefined8 *)(param_1 + 8),iVar8,iVar6,local_38,0xffffffff);
    iVar6 = param_1[0x183];
    *param_1 = iVar6;
  }
  param_1[0x183] = -1;
  param_1[0x184] = -1;
  param_1[0x187] = -1;
  param_1[0x188] = -1;
  iVar5 = FUN_03363a30(*(undefined8 *)(param_1 + 8),iVar6,*(undefined8 *)(param_1 + 0x11a),
                       0xffffffff);
  iVar2 = *param_1;
  iVar6 = iVar2 + iVar5;
  *param_1 = iVar6;
  if (iVar7 != iVar8) {
    param_1[0x212] = iVar5;
  }
  if ((param_1[0x18d] | 2U) == 2) {
    param_1[0x11d] = 0;
    **(undefined2 **)(param_1 + 0x11a) = 0;
  }
  else {
    param_1[0x183] = iVar2;
    param_1[0x184] = iVar6;
    if (iVar5 == 0) {
      param_1[0x183] = -1;
      param_1[0x184] = -1;
    }
    if (iVar5 != param_1[0x11d]) goto LAB_032ea3e0;
  }
  iVar8 = 0;
  puVar9 = (ushort *)(param_1 + 0x18e);
  do {
    uVar3 = *puVar9;
    if (uVar3 == 0xe) {
      uVar4 = puVar9[3] >> 1;
      puVar9 = puVar9 + 3 + uVar4;
      iVar8 = iVar8 + (uint)uVar4 + 3;
    }
    else if (uVar3 == 0) break;
    iVar7 = iVar8 + 2;
    if (uVar3 != 0xf) {
      iVar7 = iVar8;
    }
    iVar8 = iVar7 + 1;
    puVar9 = puVar9 + (ulong)(uVar3 == 0xf) * 2 + 1;
  } while( true );
  if (0 < iVar8) {
    iVar7 = *param_1;
    if (param_1[0x183] == -1) {
      param_1[0x183] = iVar7;
    }
    param_1[0x187] = iVar7;
    iVar6 = FUN_03363a30(*(undefined8 *)(param_1 + 8),iVar7,param_1 + 0x18e,0xffffffff);
    iVar7 = *param_1 + iVar6;
    *param_1 = iVar7;
    param_1[0x188] = iVar7;
    param_1[0x184] = iVar7;
    if (iVar6 != iVar8) goto LAB_032ea3e0;
  }
  iVar8 = 0;
  puVar9 = (ushort *)(param_1 + 0x196);
  do {
    uVar3 = *puVar9;
    if (uVar3 == 0xe) {
      uVar4 = puVar9[3] >> 1;
      puVar9 = puVar9 + 3 + uVar4;
      iVar8 = iVar8 + (uint)uVar4 + 3;
    }
    else if (uVar3 == 0) break;
    iVar7 = iVar8 + 2;
    if (uVar3 != 0xf) {
      iVar7 = iVar8;
    }
    iVar8 = iVar7 + 1;
    puVar9 = puVar9 + (ulong)(uVar3 == 0xf) * 2 + 1;
  } while( true );
  if (iVar8 < 1) {
    iVar8 = param_1[0x184];
  }
  else {
    if (param_1[0x183] == -1) {
      param_1[0x183] = *param_1;
    }
    iVar7 = FUN_03363a30(*(undefined8 *)(param_1 + 8),*param_1,param_1 + 0x196,0xffffffff);
    iVar8 = *param_1 + iVar7;
    *param_1 = iVar8;
    param_1[0x184] = iVar8;
    param_1[0x189] = iVar8 + -1;
    if (iVar7 < 1) goto LAB_032ea3e0;
  }
  if (iVar8 - param_1[0x183] < 0x19) {
    if (param_1[6] != 4) {
      return;
    }
    (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
    lVar10 = 0;
    while (*(short *)(*(long *)(param_1 + 0x1a8) + lVar10 * 2) != 0) {
      lVar1 = *(long *)(param_1 + 0x1a8) + lVar10 * 2;
      if (*(short *)(lVar1 + 2) == 0) {
        lVar10 = lVar10 + 1;
        break;
      }
      if (*(short *)(lVar1 + 4) == 0) {
        iVar8 = (int)lVar10 + 2;
        goto joined_r0x032ea464;
      }
      lVar10 = lVar10 + 3;
      if (lVar10 == 0x80001) {
        return;
      }
    }
    iVar8 = (int)lVar10;
joined_r0x032ea464:
    if (iVar8 < 0x36) {
      return;
    }
  }
LAB_032ea3e0:
  FUN_032e81e0(param_1);
  return;
}


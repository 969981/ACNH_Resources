
void FUN_036d9ba4(short *param_1)

{
  uint *puVar1;
  int iVar2;
  short sVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ushort *puVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  short sVar12;
  undefined *local_60;
  short local_58;
  
  lVar8 = *(long *)PTR_DAT_04bb2720;
  if (lVar8 == 0) {
    puVar11 = &DAT_055c04a0;
  }
  else {
    puVar11 = &DAT_055c04a0;
    if (*(long *)(lVar8 + 0x330) != 0) {
      puVar11 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar8 + 0x338));
      iVar5 = FUN_006bd550(*puVar11,0);
      puVar11 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar5 != 0x758f7eaf) {
        puVar11 = &DAT_055c04a0;
      }
    }
  }
  puVar4 = PTR_DAT_04bc3a48;
  iVar5 = *(int *)(puVar11 + 7);
  puVar9 = *(ushort **)PTR_DAT_04bc3a48;
  if ((puVar9 != (ushort *)0x0) && ((*puVar9 & 1) != 0)) {
LAB_036d9cac:
    if ((*puVar9 & 1) == 0) {
      return;
    }
    *param_1 = -1;
    param_1[0xd46] = 3;
    param_1[0xd47] = 0;
    return;
  }
  if (DAT_04c487d4 != -1) {
    local_60 = (undefined *)CONCAT44(local_60._4_4_,0x1c);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar1 >> 0x1c & 1) != 0) && (uVar6 = FUN_0290d828(), (uVar6 & 1) != 0)) {
      puVar9 = *(ushort **)puVar4;
      if (puVar9 == (ushort *)0x0) {
        return;
      }
      goto LAB_036d9cac;
    }
  }
  sVar3 = *param_1;
  if (((iVar5 == -0x7975b8e8) || (iVar5 == -0x17df00c3)) || (iVar5 == -0x3e092032)) {
    if (((*(ushort **)puVar4 == (ushort *)0x0) || ((**(ushort **)puVar4 & 1) == 0)) ||
       ((DAT_05ab7608 == 0 || (lVar8 = *(long *)(DAT_05ab7608 + 8), lVar8 == 0)))) {
      sVar12 = param_1[0x15];
    }
    else if ((*(long **)(lVar8 + 0x60) == (long *)0x0) ||
            (puVar11 = (undefined8 *)**(long **)(lVar8 + 0x60), puVar11 == (undefined8 *)0x0)) {
      sVar12 = *(short *)(*(long *)(lVar8 + 0x48) + *(long *)(lVar8 + 0x40) + 2);
    }
    else {
      uVar6 = (**(code **)*puVar11)();
      sVar12 = *(short *)(*(long *)(lVar8 + 0x48) + *(long *)(lVar8 + 0x40) + 2);
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar8 + 0x60) != 0)) &&
         (puVar11 = *(undefined8 **)(*(long *)(lVar8 + 0x60) + 8), puVar11 != (undefined8 *)0x0)) {
        (**(code **)*puVar11)();
      }
    }
  }
  else {
    sVar12 = -1;
  }
  *param_1 = sVar12;
  if ((*(byte *)(param_1 + 0xd38) >> 3 & 1) != 0) {
    local_60 = PTR_DAT_04bb7648 + 0x10;
    local_58 = sVar12;
    FUN_03766bb0(&local_60);
    *(uint *)(param_1 + 0xd38) = *(uint *)(param_1 + 0xd38) & 0xfffffff7;
  }
  if ((*(int *)(param_1 + 10) == 0) ||
     ((*(ushort **)puVar4 != (ushort *)0x0 && ((**(ushort **)puVar4 & 1) != 0)))) {
    param_1[6] = 5;
    param_1[7] = 0;
    if (DAT_05ac0a90 == iVar5) {
      lVar8 = 0;
    }
    else if (DAT_05ac0aa0 == iVar5) {
      lVar8 = 1;
    }
    else if (DAT_05ac0ab0 == iVar5) {
      lVar8 = 2;
    }
    else if (DAT_05ac0ac0 == iVar5) {
      lVar8 = 3;
    }
    else if (DAT_05ac0ad0 == iVar5) {
      lVar8 = 4;
    }
    else if (DAT_05ac0ae0 == iVar5) {
      lVar8 = 5;
    }
    else if (DAT_05ac0af0 == iVar5) {
      lVar8 = 6;
    }
    else if (DAT_05ac0b00 == iVar5) {
      lVar8 = 7;
    }
    else if (DAT_05ac0b10 == iVar5) {
      lVar8 = 8;
    }
    else {
      if (DAT_05ac0b20 != iVar5) goto LAB_036d9ee4;
      lVar8 = 9;
    }
    *(undefined4 *)(param_1 + 6) = (&DAT_05ac0a94)[lVar8 * 4];
  }
LAB_036d9ee4:
  iVar2 = *(int *)(param_1 + 0xd46);
  uVar10 = 0;
  if (((((DAT_05ac0a90 != iVar5) && (DAT_05ac0aa0 != iVar5)) &&
       ((DAT_05ac0ab0 != iVar5 &&
        ((((DAT_05ac0ac0 != iVar5 && (DAT_05ac0ad0 != iVar5)) && (DAT_05ac0ae0 != iVar5)) &&
         ((DAT_05ac0af0 != iVar5 && (DAT_05ac0b00 != iVar5)))))))) && (DAT_05ac0b10 != iVar5)) &&
     (DAT_05ac0b20 != iVar5)) {
    uVar10 = 0;
    if (iVar5 < -0x3e092032) {
      if (iVar5 != -0x7975b8e8) {
        if ((iVar5 != -0x6efba09b) && (iVar5 != -0x68a9a319)) {
LAB_036d9fe0:
          if (DAT_04c487d4 != -1) {
            local_60 = (undefined *)CONCAT44(local_60._4_4_,0x19);
            puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
            if (0xff < (uint)(int)DAT_04c487d4) {
              puVar1 = (uint *)PTR_DAT_04bc39f8;
            }
            if ((*puVar1 >> 0x19 & 1) != 0) goto LAB_036da030;
          }
          uVar10 = 3;
        }
        goto LAB_036da02c;
      }
    }
    else if (iVar5 != -0x3e092032) {
      if (iVar5 == -0x21ba1d3a) goto LAB_036da02c;
      if (iVar5 != -0x17df00c3) goto LAB_036d9fe0;
    }
    uVar10 = 1;
  }
LAB_036da02c:
  *(undefined4 *)(param_1 + 0xd46) = uVar10;
LAB_036da030:
  if ((iVar2 == 0) || (*(int *)(param_1 + 0xd46) != 0)) {
    if (sVar3 == *param_1) {
      return;
    }
    if (*(int *)(param_1 + 0xd46) != 1) {
      return;
    }
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  FUN_0369a430(uVar7);
  return;
}


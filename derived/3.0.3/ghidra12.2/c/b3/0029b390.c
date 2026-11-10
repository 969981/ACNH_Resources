
void FUN_0029b390(long param_1)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  ushort uVar10;
  long lVar11;
  short sVar12;
  int local_54 [4];
  byte local_44 [4];
  
  if (*(int *)(param_1 + 0xd8) - 2U < 6) {
    return;
  }
  if ((*(int *)(param_1 + 0xd4) != 4) && (*(int *)(param_1 + 0xd4) != 2)) {
    return;
  }
  uVar6 = FUN_002212e4(*(undefined8 *)(param_1 + 0x38));
  puVar4 = PTR_DAT_04bcd350;
  puVar3 = PTR_DAT_04bc1510;
  if ((uVar6 & 1) != 0) {
    return;
  }
  lVar11 = *(long *)(param_1 + 0x1a0);
  lVar1 = param_1 + 0x198;
  if (lVar11 == lVar1) {
    sVar12 = 0;
    *(undefined2 *)(param_1 + 0x206) = 0;
  }
  else {
    sVar12 = 0;
    do {
      plVar7 = (long *)FUN_002ba790(*(undefined8 *)puVar3);
      lVar8 = (**(code **)(*plVar7 + 0x38))(plVar7,*(undefined8 *)(lVar11 + 0x10));
      if (lVar8 != 0) {
        uVar9 = FUN_0026c8a4(*(undefined8 *)puVar4);
        FUN_00262c00(local_54,uVar9,lVar8,local_44);
        uVar10 = (ushort)local_44[0];
        if (local_54[0] != 0) {
          uVar10 = 0;
        }
        sVar12 = uVar10 + sVar12;
      }
      lVar11 = *(long *)(lVar11 + 8);
    } while (lVar11 != lVar1);
    lVar11 = *(long *)(param_1 + 0x1a0);
    *(short *)(param_1 + 0x206) = sVar12;
    if (lVar11 == lVar1) {
      iVar2 = *(int *)(param_1 + 0xd8);
      *(undefined2 *)(param_1 + 0x208) = 0;
      goto joined_r0x0029b4e8;
    }
    sVar12 = 0;
    do {
      plVar7 = (long *)FUN_002ba790(*(undefined8 *)puVar3);
      lVar8 = (**(code **)(*plVar7 + 0x38))(plVar7,*(undefined8 *)(lVar11 + 0x10));
      if (lVar8 != 0) {
        uVar9 = FUN_0026c8a4(*(undefined8 *)puVar4);
        FUN_00262cd0(local_54,uVar9,lVar8,local_44);
        uVar10 = (ushort)local_44[0];
        if (local_54[0] != 0) {
          uVar10 = 0;
        }
        sVar12 = uVar10 + sVar12;
      }
      lVar11 = *(long *)(lVar11 + 8);
    } while (lVar11 != lVar1);
  }
  iVar2 = *(int *)(param_1 + 0xd8);
  *(short *)(param_1 + 0x208) = sVar12;
joined_r0x0029b4e8:
  if (5 < iVar2 - 2U) {
    if (*(int *)(param_1 + 0xd4) == 2) {
      bVar5 = *(byte *)(param_1 + 0x162);
    }
    else {
      if (*(int *)(param_1 + 0xd4) != 4) {
        return;
      }
      bVar5 = *(char *)(param_1 + 0x162) == '\0';
    }
    (**(code **)(**(long **)(param_1 + (ulong)bVar5 * 8 + 0x168) + 0x110))();
  }
  return;
}


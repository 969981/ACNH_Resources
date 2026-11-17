
void FUN_0308c3f0(undefined8 *param_1,ulong param_2)

{
  uint *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ushort uVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined2 *puVar8;
  undefined2 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  undefined *local_60;
  char *pcStack_58;
  short local_34 [2];
  
  puVar5 = PTR_DAT_04bb6298;
  uVar4 = *(ushort *)PTR_DAT_04bb6298;
  if ((long)(short)uVar4 != 0xffffffffffffffff) {
    local_60 = (undefined *)CONCAT44(local_60._4_4_,0x15);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar4 * 8);
    if (0xff < uVar4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x15 & 1) != 0) goto LAB_0308c63c;
    local_60 = (undefined *)CONCAT44(local_60._4_4_,0x19);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar4 & 0xffffffffU) * 8);
    if (0xff < uVar4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x19 & 1) != 0) goto LAB_0308c63c;
  }
  if (*(long *)PTR_DAT_04bb2800 != 0) {
    local_60 = PTR_DAT_04bb2020 + 0x10;
    pcStack_58 = "NpcInteriorCoordinate";
    iVar6 = FUN_02743000(&local_60);
    if (iVar6 != 0) goto LAB_0308c63c;
    uVar4 = *(ushort *)puVar5;
  }
  puVar5 = PTR_DAT_04bb3170;
  if (uVar4 != 0xffff) {
    local_60 = (undefined *)CONCAT44(local_60._4_4_,0x20);
    puVar2 = PTR_DAT_04bc39f8 + ((long)(short)uVar4 & 0xffffffffU) * 8;
    if (0xff < uVar4) {
      puVar2 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar2 + 4) & 1) != 0) goto LAB_0308c63c;
    local_60 = (undefined *)CONCAT44(local_60._4_4_,0x22);
    puVar2 = PTR_DAT_04bc39f8 + ((long)(short)uVar4 & 0xffffffffU) * 8;
    if (0xff < uVar4) {
      puVar2 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar2 + 4) >> 2 & 1) != 0) goto LAB_0308c63c;
  }
  FUN_007ef010(&local_60,PTR_DAT_04bb3170);
  puVar2 = PTR_DAT_04bb5ce0;
  lVar7 = *(long *)PTR_DAT_04bb5ce0;
  if ((param_2 & 1) == 0) {
    puVar8 = (undefined2 *)PTR_DAT_04bb37e0;
    if (lVar7 != 0) {
      puVar8 = (undefined2 *)(lVar7 + 0xe70);
    }
    uVar9 = *puVar8;
    uVar10 = *(undefined1 *)(puVar8 + 1);
    uVar11 = *(undefined1 *)((long)puVar8 + 3);
    puVar3 = puVar5;
    if (lVar7 != 0) {
      puVar3 = (undefined *)(lVar7 + 0xe78);
    }
    uVar12 = *(undefined4 *)(puVar8 + 2);
    FUN_007ef010(local_34,puVar3);
    lVar7 = *(long *)puVar2;
    if (lVar7 == 0) goto LAB_0308c624;
    iVar6 = *(int *)(lVar7 + 0xf90);
  }
  else {
    puVar8 = (undefined2 *)PTR_DAT_04bb37e0;
    if ((lVar7 != 0) && (*(char *)(lVar7 + 0xe9e) != '\0')) {
      puVar8 = (undefined2 *)(lVar7 + 0xe94);
    }
    uVar9 = *puVar8;
    uVar10 = *(undefined1 *)(puVar8 + 1);
    puVar3 = puVar5;
    if (lVar7 != 0) {
      puVar3 = (undefined *)(lVar7 + 0xe9c);
    }
    uVar11 = *(undefined1 *)((long)puVar8 + 3);
    uVar12 = *(undefined4 *)(puVar8 + 2);
    FUN_007ef010(local_34,puVar3);
    lVar7 = *(long *)puVar2;
    if (lVar7 == 0) {
LAB_0308c624:
      iVar6 = -1;
    }
    else {
      iVar6 = *(int *)(lVar7 + 0xf9c);
    }
  }
  if ((local_34[0] == *(short *)puVar5) && (iVar6 == -1)) {
    *(undefined2 *)param_1 = uVar9;
    *(undefined1 *)((long)param_1 + 2) = uVar10;
    *(undefined1 *)((long)param_1 + 3) = uVar11;
    *(undefined4 *)((long)param_1 + 4) = uVar12;
    return;
  }
LAB_0308c63c:
  *param_1 = 0xfffe;
  FUN_0277d4ac(param_1);
  return;
}


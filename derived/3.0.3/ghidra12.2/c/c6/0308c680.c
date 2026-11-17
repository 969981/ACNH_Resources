
void FUN_0308c680(short *param_1)

{
  uint *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  short sVar5;
  ushort uVar6;
  short *psVar7;
  short sVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  undefined *local_60;
  char *pcStack_58;
  short local_34 [2];
  
  puVar9 = PTR_DAT_04bb6298;
  uVar6 = *(ushort *)PTR_DAT_04bb6298;
  if ((long)(short)uVar6 != 0xffffffffffffffff) {
    local_60 = (undefined *)CONCAT44(local_60._4_4_,0x15);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar6 * 8);
    if (0xff < uVar6) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x15 & 1) != 0) goto LAB_0308c87c;
    local_60 = (undefined *)CONCAT44(local_60._4_4_,0x19);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar6 & 0xffffffffU) * 8);
    if (0xff < uVar6) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x19 & 1) != 0) goto LAB_0308c87c;
  }
  if (*(long *)PTR_DAT_04bb2800 != 0) {
    local_60 = PTR_DAT_04bb2020 + 0x10;
    pcStack_58 = "NpcInteriorCoordinate";
    iVar11 = FUN_02743000(&local_60);
    if (iVar11 != 0) goto LAB_0308c87c;
    uVar6 = *(ushort *)puVar9;
  }
  puVar9 = PTR_DAT_04bb3170;
  if (uVar6 != 0xffff) {
    local_60 = (undefined *)CONCAT44(local_60._4_4_,0x20);
    puVar2 = PTR_DAT_04bc39f8 + ((long)(short)uVar6 & 0xffffffffU) * 8;
    if (0xff < uVar6) {
      puVar2 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar2 + 4) & 1) != 0) goto LAB_0308c87c;
    local_60 = (undefined *)CONCAT44(local_60._4_4_,0x22);
    puVar2 = PTR_DAT_04bc39f8 + ((long)(short)uVar6 & 0xffffffffU) * 8;
    if (0xff < uVar6) {
      puVar2 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar2 + 4) >> 2 & 1) != 0) goto LAB_0308c87c;
  }
  FUN_007ef010(&local_60,PTR_DAT_04bb3170);
  puVar10 = PTR_DAT_04bb5ce0;
  lVar12 = *(long *)PTR_DAT_04bb5ce0;
  puVar2 = puVar9;
  psVar7 = (short *)PTR_DAT_04bb37e0;
  if (lVar12 != 0) {
    puVar2 = (undefined *)(lVar12 + 0xe5c);
    psVar7 = (short *)(lVar12 + 0xe54);
  }
  sVar5 = *psVar7;
  sVar8 = psVar7[1];
  uVar4 = *(undefined1 *)((long)psVar7 + 3);
  uVar3 = *(undefined4 *)(psVar7 + 2);
  FUN_007ef010(local_34,puVar2);
  if ((local_34[0] == *(short *)puVar9) &&
     (((*(long *)puVar10 == 0 || (*(int *)(*(long *)puVar10 + 0xfa8) == -1)) && (sVar5 != -2)))) {
    *param_1 = sVar5;
    *(char *)(param_1 + 1) = (char)sVar8;
    *(undefined1 *)((long)param_1 + 3) = uVar4;
    *(undefined4 *)(param_1 + 2) = uVar3;
    return;
  }
LAB_0308c87c:
  param_1[0] = -2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_0277d4ac(param_1);
  return;
}


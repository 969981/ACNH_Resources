
void FUN_0234bdd4(long param_1,undefined1 param_2)

{
  uint *puVar1;
  short sVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  byte bVar10;
  long lVar11;
  undefined *local_88;
  char *pcStack_80;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  *(undefined1 *)(param_1 + 0xc1aa) = param_2;
  FUN_0090ee00(auStack_78,*(undefined8 *)PTR_DAT_04bb4868);
  uVar8 = FUN_02335d54(param_1);
  local_88 = PTR_DAT_04bb2020 + 0x10;
  pcStack_80 = "PlayerStungByBee";
  iVar5 = FUN_0274bce0(uVar8,&local_88);
  bVar4 = iVar5 == 1;
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 == -1) goto LAB_0234bf64;
  local_88 = (undefined *)CONCAT44(local_88._4_4_,0x15);
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
  if (0xff < (uint)(int)sVar2) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  if (((*puVar1 >> 0x15 & 1) == 0) ||
     (local_88 = (undefined *)CONCAT44(local_88._4_4_,1),
     (*(uint *)(param_1 + 0x15f4) >> 1 & 1) != 0)) goto LAB_0234bf64;
  local_88 = (undefined *)CONCAT44(local_88._4_4_,2);
  if ((*(uint *)(param_1 + 0x15f4) >> 2 & 1) == 0) {
    iVar6 = FUN_0252d29c();
    bVar4 = iVar5 == 1 && iVar6 == *(int *)(param_1 + 0x604c);
    goto LAB_0234bf64;
  }
  iVar6 = FUN_0252d29c();
  if (*(int *)(param_1 + 0x5f40) - 2U < 2) {
    iVar7 = *(int *)(param_1 + 0x5f48);
  }
  else {
    if (*(int *)(param_1 + 0x5f40) == 1) {
      bVar10 = *(byte *)(param_1 + 0x5f44);
      if (7 < bVar10) {
        bVar10 = 0xff;
      }
      local_88 = (undefined *)CONCAT71(local_88._1_7_,bVar10);
      iVar7 = FUN_02582fe0(&local_88);
      if (iVar7 != -1) goto LAB_0234bf58;
    }
    iVar7 = -1;
  }
LAB_0234bf58:
  bVar4 = false;
  if (iVar5 == 1) {
    bVar4 = iVar6 == iVar7;
  }
LAB_0234bf64:
  bVar3 = bVar4;
  if (((((*(uint *)(param_1 + 0x15f4) >> 2 & 1) != 0) &&
       (lVar11 = *(long *)PTR_DAT_04bb27d0, lVar11 != 0)) && (*(long *)(lVar11 + 0x28) != 0)) &&
     (bVar3 = false, *(int *)(lVar11 + 0x80) != 1)) {
    bVar3 = bVar4;
  }
  if ((*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0) && ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0))
  {
    bVar4 = false;
    if ((*(uint *)(param_1 + 0x15f4) & 4) == 0) {
      bVar4 = bVar3;
    }
    bVar3 = bVar4;
  }
  if (bVar3) {
    *(undefined1 *)(param_1 + 0xbf80) = 1;
    puVar9 = auStack_50;
  }
  else {
    *(undefined1 *)(param_1 + 0xbf80) = 1;
    puVar9 = auStack_60;
  }
  local_88 = (undefined *)CONCAT44(local_88._4_4_,2);
  FUN_00764d50(param_1 + 0xbe18,puVar9);
  return;
}


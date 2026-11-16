
void FUN_027696a0(long param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  undefined2 *puVar11;
  short *psVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  short local_f4 [2];
  undefined2 local_f0 [2];
  undefined2 local_ec [2];
  undefined *local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  long local_b8;
  undefined4 local_b0 [2];
  undefined8 *local_a8;
  undefined8 local_9c;
  undefined4 local_94;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  local_94 = 0;
  local_9c = 0x6622bd46;
  local_a8 = &local_9c;
  local_b0[0] = 1;
  local_d8 = 0;
  local_d0 = 0;
  local_e8 = PTR_DAT_04bc3858 + 0x10;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_70 = 0;
  local_e0 = 0;
  local_80 = 0;
  local_78 = 0;
  local_90 = 0;
  local_88 = 0;
  FUN_0272d760(param_1 + 8,&local_90,local_b0);
  if (((local_90 != 0) && (*(int *)(local_90 + 0x2c) == 1)) && (*(long *)(param_1 + 0x30) != 0)) {
    local_e0 = local_90;
    local_d8 = local_88;
    local_d0 = local_80;
    local_c8 = local_78;
    local_c0 = local_70;
    local_b8 = *(long *)(param_1 + 0x30);
  }
  lVar10 = FUN_027ebd78(&local_e8);
  local_90 = *(long *)(lVar10 + 8);
  local_88 = *(undefined8 *)(lVar10 + 0x10);
  uVar9 = FUN_0272e334(&local_90,0xffa8e69b);
  puVar5 = PTR_DAT_04bb3170;
  iVar3 = *(int *)(PTR_DAT_04bb5d40 + 8);
  iVar4 = *(int *)(PTR_DAT_04bb5d40 + 0xc);
  iVar2 = iVar3 + 0x6f;
  iVar15 = iVar4 + 0x5f;
  iVar13 = iVar4;
  iVar14 = iVar3;
  do {
    if (((iVar14 < iVar3) || (iVar2 < iVar14)) || ((iVar13 < iVar4 || (iVar15 < iVar13)))) {
      lVar10 = (**(code **)(local_e8 + 0x18))(&local_e8);
      if ((lVar10 == 0) || (lVar10 = FUN_0272dfd4(lVar10,uVar9), lVar10 != 2)) {
        puVar11 = (undefined2 *)0x0;
      }
      else {
        puVar11 = (undefined2 *)FUN_0272e550(&local_e0,local_b8,uVar9,iVar14,iVar13);
      }
      FUN_007ef010(local_ec,puVar5);
      *puVar11 = local_ec[0];
    }
    if (iVar14 < iVar3 + 0x8f) {
      iVar14 = iVar14 + 1;
    }
    else {
      iVar13 = iVar13 + 1;
      iVar14 = iVar3;
    }
  } while ((iVar3 != iVar14) || (iVar4 + 0x60 != iVar13));
  iVar13 = iVar2;
  do {
    lVar10 = (**(code **)(local_e8 + 0x18))(&local_e8);
    if ((lVar10 == 0) || (lVar10 = FUN_0272dfd4(lVar10,uVar9), lVar10 != 2)) {
      psVar12 = (short *)0x0;
    }
    else {
      psVar12 = (short *)FUN_0272e550(&local_e0,local_b8,uVar9,iVar13 - iVar3,iVar15 - iVar4);
    }
    iVar8 = DAT_05581654;
    iVar7 = DAT_05581650;
    iVar6 = DAT_0558161c;
    iVar14 = DAT_05581618;
    local_90 = CONCAT62(local_90._2_6_,*psVar12);
    if (*psVar12 != *(short *)puVar5) {
      lVar10 = (**(code **)(local_e8 + 0x18))(&local_e8);
      if ((lVar10 == 0) || (lVar10 = FUN_0272dfd4(lVar10,uVar9), lVar10 != 2)) {
        puVar11 = (undefined2 *)0x0;
      }
      else {
        puVar11 = (undefined2 *)
                  FUN_0272e550(&local_e0,local_b8,uVar9,(iVar7 + (iVar13 - iVar3)) - iVar14,
                               (iVar8 + (iVar15 - iVar4)) - iVar6);
      }
      FUN_007ef010(local_f0,&local_90);
      *puVar11 = local_f0[0];
      FUN_007ef010(local_f4,puVar5);
      *psVar12 = local_f4[0];
    }
    iVar14 = iVar13 + -1;
    iVar15 = iVar15 - (uint)(iVar13 <= iVar3);
    bVar1 = iVar3 < iVar13;
    iVar13 = iVar2;
    if (bVar1) {
      iVar13 = iVar14;
    }
  } while ((iVar2 != iVar13) || (iVar4 + -1 != iVar15));
  return;
}


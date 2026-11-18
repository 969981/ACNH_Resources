
bool FUN_0345fbd8(int *param_1,int *param_2,byte *param_3,undefined8 *param_4,int param_5,
                 int param_6)

{
  int *piVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  void *__src;
  byte bVar14;
  float fVar15;
  float fVar16;
  undefined8 local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 local_d0;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  int local_bc;
  undefined1 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  long local_78;
  
  puVar2 = PTR_DAT_04bb2010;
  if ((((param_2 == (int *)0x0) || (*param_1 != 0)) || (*(long *)PTR_DAT_04bb3968 == 0)) ||
     (lVar12 = *(long *)(*(long *)PTR_DAT_04bb3968 + 0x175a0), lVar12 == 0)) {
    return false;
  }
  iStack_e0 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  bVar14 = *PTR_DAT_04bb32e0;
  local_f0 = PTR_DAT_04bb2010 + 0x10;
  local_e8._0_4_ = 0;
  local_e8._4_4_ = 0;
  local_f8 = *(undefined **)PTR_DAT_04bb37e0;
  if (7 < bVar14) {
    bVar14 = 0xff;
  }
  local_d0 = (ulong)CONCAT31((int3)((uint)(undefined4)local_d0 >> 8),bVar14);
  local_b0 = (undefined *)0x2b56;
  FUN_0277d4ac(&local_b0);
  iVar5 = FUN_014e5418(&local_f8,&local_b0,0,0);
  puVar4 = PTR_DAT_04bc67e0;
  if (iVar5 != 9) {
    local_f0 = (undefined *)((ulong)local_f0 & 0xffffffffffffff00);
    bVar14 = *param_3;
    local_f8 = (undefined *)CONCAT44(param_5,(undefined4)local_f8);
    local_e8 = PTR_DAT_04bc5058 + 0x10;
    if (7 < bVar14) {
      bVar14 = 0xff;
    }
    local_f8 = (undefined *)CONCAT71(local_f8._1_7_,bVar14);
    if (param_5 == 0) goto LAB_0345ffd8;
    FUN_02dfed48(*(undefined8 *)PTR_DAT_04bc67e0,&local_f8);
    plVar11 = *(long **)puVar4;
    if (4 < (int)plVar11[0x15] - 3U) {
      if (((int)plVar11[0x15] == 5) || ((int)plVar11[0x15] == 2)) {
        FUN_0386b170(plVar11[0x13],plVar11);
        *(undefined1 *)((long)plVar11 + 0x165) = 1;
        goto LAB_0345ffd8;
      }
      if ((6 < *(uint *)(plVar11 + 0x15)) ||
         ((1 << (ulong)(*(uint *)(plVar11 + 0x15) & 0x1f) & 0x58U) == 0)) goto LAB_0345ffd8;
    }
    (**(code **)(*plVar11 + 0xa8))(plVar11);
LAB_0345ffd8:
    *param_1 = 6;
    return false;
  }
  local_b0 = (undefined *)0x2b56;
  FUN_0277d4ac(&local_b0);
  puVar4 = PTR_DAT_04bb43c0;
  local_78 = 0;
  local_88 = PTR_DAT_04bc0510 + 0x10;
  local_80 = (undefined4)local_b0;
  uStack_7c = local_b0._4_4_;
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(&local_80);
  if (*(long *)puVar4 != 0) {
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar13 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      lVar13 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(&local_b0);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar13 + 0x1d8)) &&
         (lVar13 = *(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8), lVar13 != 0)) {
        local_78 = lVar13;
      }
    }
  }
  pcStack_a8 = puVar2 + 0x10;
  local_a0 = 0;
  local_90 = 0;
  local_b0 = PTR_DAT_04bbc1a0 + 0x10;
  local_98 = pcStack_a8;
  FUN_01afb480(&local_88,&local_b0);
  uVar6 = local_e8._4_4_;
  uStack_d8._0_4_ = (uint)(uint3)uStack_d8;
  local_e8._4_4_ = local_e8._4_4_ & 0xffffff00;
  local_b4 = 0;
  local_b8 = 0;
  iVar5 = (int)local_90 + (int)local_e8;
  iVar8 = (int)local_a0 + (int)local_e8;
  local_e8._0_4_ = 0x10;
  local_d0 = 0x3ffffffff;
  local_f0 = (undefined *)((long)&local_e8 + 4);
  local_c4 = 0;
  local_f8 = PTR_DAT_04bb2ab0 + 0x10;
  fVar16 = ((float)iVar8 * 5.0 + (float)iVar5 * 5.0 + 5.0) * 0.5;
  fVar15 = ((float)(int)(local_a0._4_4_ + uVar6) * 5.0 +
           (float)(int)(local_90._4_4_ + uVar6) * 5.0 + 5.0) * 0.5;
  iVar5 = (int)(long)((float)iStack_e0 * 90.0 * 11930465.0);
  local_c8 = fVar16;
  local_c0 = fVar15;
  local_bc = iVar5;
  if (*param_2 == 0) {
    puVar10 = (undefined1 *)((long)&uStack_dc + 1);
    local_d0 = CONCAT44(2,param_2[1]);
    uStack_dc = CONCAT31(uStack_dc._1_3_,0x72);
    local_e8._4_4_ = s_NpcPlayer_040bf633._0_4_;
    iStack_e0 = s_NpcPlayer_040bf633._4_4_;
  }
  else {
    piVar1 = param_2 + 2;
    uVar7 = FUN_021d5f30(piVar1);
    puVar2 = local_f0;
    local_d0 = (CONCAT44(uVar7,param_2[1]) ^ 0xffffffff00000000) & 0x1ffffffff;
    (**(code **)(*(long *)(param_2 + 2) + 0x18))(piVar1);
    __src = *(void **)(param_2 + 4);
    if (puVar2 == __src) goto LAB_03460044;
    (**(code **)(*(long *)(param_2 + 2) + 0x18))(piVar1);
    lVar13 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 4) + lVar13) == '\0') goto LAB_03460018;
      lVar3 = *(long *)(param_2 + 4) + lVar13;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar13 = lVar13 + 1;
        goto LAB_03460018;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar13 = lVar13 + 2;
        goto LAB_03460018;
      }
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0x80001);
    lVar13 = 0;
LAB_03460018:
    iVar8 = (int)lVar13;
    if ((int)local_e8 <= (int)lVar13) {
      iVar8 = (int)local_e8 + -1;
    }
    memcpy(puVar2,__src,(long)iVar8);
    puVar10 = (undefined1 *)((long)puVar2 + (long)iVar8);
  }
  *puVar10 = 0;
LAB_03460044:
  *(undefined1 *)(param_1 + 6) = 1;
  iVar8 = (**(code **)*param_4)(param_4,lVar12,&local_f8);
  param_1[1] = iVar8;
  if (iVar8 != 0) {
    bVar14 = *param_3;
    param_1[5] = iVar5;
    param_1[2] = (int)fVar16;
    param_1[3] = 0;
    param_1[4] = (int)fVar15;
    if (7 < bVar14) {
      bVar14 = 0xff;
    }
    *(byte *)(param_1 + 7) = bVar14;
    if (*param_2 == 1) {
      puVar2 = PTR_DAT_04bb2020 + 0x10;
      pcStack_a8 = "TanuportAmiiboBromideUnlock";
      local_b0 = puVar2;
      iVar5 = FUN_0274bce0(param_3,&local_b0);
      if (iVar5 == 0) {
        pcStack_a8 = "StandByPhoneCallPrintService";
        local_b0 = puVar2;
        FUN_0274bfe8(param_3,&local_b0,1);
        pcStack_a8 = "StandByGameStartPhoneCall";
        local_b0 = puVar2;
        FUN_0274bfe8(param_3,&local_b0,1);
      }
      param_2 = param_2 + 2;
      uVar9 = FUN_021d5f30(param_2);
      if ((uVar9 & 1) != 0) {
        FUN_026887dc(param_2,param_3);
        iVar5 = FUN_02209b90(param_2);
        if (iVar5 == 1) {
          FUN_02209700(param_2,param_3);
        }
      }
    }
    *param_1 = param_6;
  }
  return iVar8 != 0;
}


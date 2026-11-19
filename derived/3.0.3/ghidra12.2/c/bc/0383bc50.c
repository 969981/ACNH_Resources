
void FUN_0383bc50(long param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  byte bVar5;
  ushort uVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  long lVar10;
  ushort *puVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  byte *pbVar15;
  byte *pbVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  undefined1 *__src;
  void *__src_00;
  long *plVar19;
  ushort local_200 [4];
  long local_1f8;
  undefined8 local_1f0;
  long *local_1e8;
  undefined *local_1e0;
  undefined8 local_1d8;
  undefined1 local_155;
  undefined *local_150;
  undefined1 *local_148;
  int local_140;
  undefined1 local_13c [127];
  undefined1 local_bd;
  undefined *local_b8;
  undefined1 *puStack_b0;
  int local_a8;
  undefined1 local_a4 [31];
  undefined1 local_85;
  undefined8 local_80;
  ushort *local_78;
  long local_70;
  
  lVar13 = *(long *)PTR_DAT_04bb26a8;
  if (((*(byte *)(lVar13 + 0xb3890) >> 5 & 1) == 0) ||
     (lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68)),
     *(long *)(lVar13 + 0xb80e0) == lVar10)) {
    puVar7 = PTR_DAT_04bb2120;
    lVar13 = *param_2;
    if (lVar13 == 0) {
      bVar8 = false;
      uVar17 = 0;
      bVar9 = true;
    }
    else {
      bVar8 = *(char *)(lVar13 + 8) != '\0';
      uVar17 = *(undefined8 *)(lVar13 + 0x10);
      bVar9 = *(char *)(lVar13 + 0x18) != '\0';
    }
    local_200[0] = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_1f8 = 0;
    local_1f0 = 0;
    local_1e8 = (long *)0x0;
    local_1d8 = PTR_DAT_04bb2120;
    if (param_3 == 0) {
      puVar11 = (ushort *)0x0;
    }
    else {
      puVar11 = local_200;
      local_1f0 = *(undefined8 *)(param_1 + 0x10);
      local_1f8 = *(undefined8 *)(param_1 + 0x18);
      local_200[0] = (ushort)*(byte *)(param_3 + 1) << 8;
      if ((*(byte *)(param_1 + 8) & 10) != 2) {
        local_1f8 = 0;
      }
      local_1d8 = *(undefined **)(param_3 + 0x18);
      local_1e8 = (long *)param_1;
    }
    local_1e0 = puVar1;
    local_78 = (ushort *)uVar17;
    local_80._0_1_ = bVar8;
    FUN_0383ced4(param_1 + 0x1488,&local_80,puVar11);
    local_80._0_2_ = CONCAT11(bVar9,bVar8);
    local_200[0] = 0;
    local_1d8 = puVar7;
    local_1f8 = 0;
    local_1f0 = 0;
    local_1e8 = (long *)0x0;
    if (param_3 == 0) {
      puVar11 = (ushort *)0x0;
    }
    else {
      puVar11 = local_200;
      local_1f0 = *(undefined8 *)(param_1 + 0x10);
      local_1f8 = *(undefined8 *)(param_1 + 0x18);
      local_200[0] = (ushort)*(byte *)(param_3 + 1) << 8;
      if ((*(byte *)(param_1 + 8) & 10) != 2) {
        local_1f8 = 0;
      }
      local_1d8 = *(undefined **)(param_3 + 0xb0);
      local_1e8 = (long *)param_1;
    }
    pbVar3 = (byte *)(param_1 + 0x1490);
    local_1e0 = puVar1;
    local_78 = (ushort *)uVar17;
    FUN_03833350(param_1 + 0x1530,&local_80,puVar11);
    uVar6 = local_200[0] >> 8;
    local_200[0] = local_200[0] & 0xff00;
    local_78 = (ushort *)*param_2;
    local_155 = 0;
    local_1f8 = 0;
    local_1f0 = 0;
    local_1e0 = (undefined *)((long)&local_1d8 + 4);
    local_1d8 = (undefined *)CONCAT35(local_1d8._5_3_,0x80);
    local_80 = (byte *)CONCAT71(CONCAT61(local_80._2_6_,bVar8),
                                *(int *)(param_1 + 0x1498) != 0 || *(int *)(param_1 + 0x1540) != 0);
    local_1e8 = (long *)(PTR_DAT_04bb2d88 + 0x10);
    local_140 = 0x80;
    local_bd = 0;
    local_a4[0] = 0;
    local_13c[0] = 0;
    local_85 = 0;
    local_148 = local_13c;
    local_a8 = 0x20;
    local_b8 = PTR_DAT_04bb2028 + 0x10;
    local_150 = (undefined *)local_1e8;
    puStack_b0 = local_a4;
    if (param_3 == 0) {
      puVar11 = (ushort *)0x0;
    }
    else {
      local_1f0 = *(undefined8 *)(param_3 + 8);
      local_200[0] = CONCAT11((char)uVar6,*(undefined1 *)(param_3 + 1));
      local_1f8 = param_1;
      (**(code **)(*(long *)(param_3 + 0x140) + 0x18))(param_3 + 0x140);
      puVar18 = *(undefined1 **)(param_3 + 0x148);
      if (local_a4 != puVar18) {
        (**(code **)(*(long *)(param_3 + 0x140) + 0x18))(param_3 + 0x140);
        lVar13 = 0;
        do {
          if (*(char *)(*(long *)(param_3 + 0x148) + lVar13) == '\0') goto LAB_0383bf04;
          lVar10 = *(long *)(param_3 + 0x148) + lVar13;
          if (*(char *)(lVar10 + 1) == '\0') {
            lVar13 = lVar13 + 1;
            goto LAB_0383bf04;
          }
          if (*(char *)(lVar10 + 2) == '\0') {
            lVar13 = lVar13 + 2;
            goto LAB_0383bf04;
          }
          lVar13 = lVar13 + 3;
        } while (lVar13 != 0x80001);
        lVar13 = 0;
LAB_0383bf04:
        iVar4 = (int)lVar13;
        if (local_a8 <= (int)lVar13) {
          iVar4 = local_a8 + -1;
        }
        memcpy(local_a4,puVar18,(long)iVar4);
        local_a4[iVar4] = 0;
      }
      puVar18 = local_148;
      plVar19 = (long *)(param_3 + 0xa8);
      (**(code **)(*plVar19 + 0x18))(plVar19);
      __src = *(undefined1 **)(param_3 + 0xb0);
      if (puVar18 != __src) {
        (**(code **)(*(long *)(param_3 + 0xa8) + 0x18))(plVar19);
        lVar13 = 0;
        do {
          if (*(char *)(*(long *)(param_3 + 0xb0) + lVar13) == '\0') goto LAB_0383bfac;
          lVar10 = *(long *)(param_3 + 0xb0) + lVar13;
          if (*(char *)(lVar10 + 1) == '\0') {
            lVar13 = lVar13 + 1;
            goto LAB_0383bfac;
          }
          if (*(char *)(lVar10 + 2) == '\0') {
            lVar13 = lVar13 + 2;
            goto LAB_0383bfac;
          }
          lVar13 = lVar13 + 3;
        } while (lVar13 != 0x80001);
        lVar13 = 0;
LAB_0383bfac:
        iVar4 = (int)lVar13;
        if (local_140 <= (int)lVar13) {
          iVar4 = local_140 + -1;
        }
        memcpy(puVar18,__src,(long)iVar4);
        puVar18[iVar4] = 0;
      }
      puVar7 = local_1e0;
      plVar19 = (long *)(param_3 + 0x10);
      (**(code **)(*plVar19 + 0x18))(plVar19);
      __src_00 = *(void **)(param_3 + 0x18);
      if (puVar7 != __src_00) {
        (**(code **)(*(long *)(param_3 + 0x10) + 0x18))(plVar19);
        lVar13 = 0;
        do {
          if (*(char *)(*(long *)(param_3 + 0x18) + lVar13) == '\0') goto LAB_0383c04c;
          lVar10 = *(long *)(param_3 + 0x18) + lVar13;
          if (*(char *)(lVar10 + 1) == '\0') {
            lVar13 = lVar13 + 1;
            goto LAB_0383c04c;
          }
          if (*(char *)(lVar10 + 2) == '\0') {
            lVar13 = lVar13 + 2;
            goto LAB_0383c04c;
          }
          lVar13 = lVar13 + 3;
        } while (lVar13 != 0x80001);
        lVar13 = 0;
LAB_0383c04c:
        iVar4 = (int)lVar13;
        if ((int)local_1d8 <= (int)lVar13) {
          iVar4 = (int)local_1d8 + -1;
        }
        memcpy(puVar7,__src_00,(long)iVar4);
        *(undefined1 *)((long)puVar7 + (long)iVar4) = 0;
      }
      puVar11 = local_200;
    }
    pbVar2 = (byte *)(param_1 + 8);
    FUN_038377b4(pbVar2,&local_80,puVar11);
    if ((((*(char *)(param_1 + 9) == '\0') && ((*pbVar2 >> 1 & 1) != 0)) &&
        ((*pbVar3 >> 1 & 1) != 0)) &&
       (((*(byte *)(param_1 + 0x1538) >> 1 & 1) != 0 && (*(long **)(param_1 + 0x10) != (long *)0x0))
       )) {
      (**(code **)(**(long **)(param_1 + 0x10) + 0x28))();
      *(undefined1 *)(param_1 + 9) = 1;
    }
    local_200[0] = 0x101;
    uVar12 = (uint)*pbVar3;
    local_1f0 = 0;
    if ((*pbVar3 & 2) != 0) {
      local_1f0 = *(undefined8 *)(param_1 + 0x14a8);
    }
    uVar14 = (uint)*(byte *)(param_1 + 0x1538);
    local_1e8 = (long *)0x0;
    pbVar15 = *(byte **)(param_1 + 0x14c8);
    local_1f8 = 0;
    if ((*(byte *)(param_1 + 0x1538) & 2) != 0) {
      local_1f8 = *(undefined8 *)(param_1 + 0x1550);
    }
    if (pbVar15 != (byte *)0x0) {
      pbVar16 = pbVar15 + 0x10;
      bVar5 = *pbVar15;
      pbVar15 = (byte *)0x0;
      if ((bVar5 & 2) != 0) {
        pbVar15 = pbVar16;
      }
    }
    if (((*(int *)(param_1 + 0xc) == 5) &&
        (plVar19 = *(long **)(param_1 + 0x18), plVar19 != (long *)0x0)) && ((*pbVar2 >> 3 & 1) == 0)
       ) {
      local_70 = *param_2;
      local_78 = local_200;
      local_1e8 = plVar19;
      local_80 = pbVar15;
      (**(code **)(*plVar19 + 0x1a0))(plVar19,&local_80);
      uVar12 = (uint)*pbVar3;
      uVar14 = (uint)*(byte *)(param_1 + 0x1538);
    }
    FUN_0383e7b0(local_200,uVar12 >> 6 & 1,uVar14 >> 6 & 1);
    FUN_0383db90(param_1 + 0x1488);
    FUN_03833c90(param_1 + 0x1530);
  }
  return;
}


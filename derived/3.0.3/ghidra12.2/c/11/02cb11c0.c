
/* WARNING: Removing unreachable block (ram,0x02cb1578) */

void FUN_02cb11c0(long param_1,long *param_2,byte *param_3,uint param_4)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  long *plVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  int iVar14;
  byte bVar15;
  undefined8 local_a8;
  undefined **local_a0;
  undefined1 *puStack_98;
  undefined *local_90;
  long local_88;
  long *local_80;
  undefined8 local_78;
  undefined8 local_70;
  uint5 local_68;
  undefined3 uStack_63;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined **local_50;
  undefined *local_48;
  byte local_24 [4];
  
  local_24[0] = *param_3;
  if ((param_4 & 1) == 0) {
    plVar4 = (long *)(param_1 + (ulong)local_24[0] * 800 + 0x220);
    if (7 < local_24[0]) {
      plVar4 = (long *)(param_1 + 0x1b20);
    }
    if ((*(uint *)(plVar4[0x5b] + 0x50) & 0xfffffffd) == 0) {
      if ((*(byte *)((long)plVar4 + 0x30c) & 1) != 0) {
        *(undefined4 *)(plVar4 + 0x5f) = 0;
      }
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar5 = param_2[1];
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar11 = 0;
      do {
        if (*(short *)(param_2[1] + lVar11 * 2) == 0) {
LAB_02cb1404:
          iVar14 = (int)lVar11 + 1;
          goto LAB_02cb1408;
        }
        lVar2 = param_2[1] + lVar11 * 2;
        if (*(short *)(lVar2 + 2) == 0) {
          lVar11 = lVar11 + 1;
          goto LAB_02cb1404;
        }
        if (*(short *)(lVar2 + 4) == 0) {
          lVar11 = lVar11 + 2;
          goto LAB_02cb1404;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      iVar14 = 1;
LAB_02cb1408:
      plVar1 = plVar4 + 0x2d;
      local_80 = (long *)CONCAT44(local_80._4_4_,iVar14);
      local_90 = PTR_DAT_04bb2de8 + 0x10;
      local_88 = lVar5;
      (**(code **)(plVar4[0x2d] + 0x28))(plVar1,&local_90);
      (**(code **)(plVar4[0x2d] + 0x30))(plVar1,&local_90);
      (**(code **)(*plVar4 + 0x28))(plVar4,&local_90);
      (**(code **)(*plVar4 + 0x30))(plVar4,&local_90);
      uVar13 = FUN_01df8220(param_3);
      if (((uVar13 & 1) != 0) &&
         (local_70 = (undefined1 *)plVar4[0x5b], *(long *)(local_70 + 0x58) == 0)) {
        *local_70 = 0;
        *(undefined8 *)(local_70 + 8) = 0;
        local_70[0x10] = 0;
        *(undefined4 *)(local_70 + 0x20) = 0;
        puVar6 = PTR_FUN_04bc0b98;
        *(long **)(local_70 + 0x18) = plVar1;
        *(undefined8 *)(local_70 + 0x40) = 0;
        *(undefined1 **)(local_70 + 0x30) = local_70;
        *(undefined **)(local_70 + 0x38) = puVar6;
        if (*(long *)(DAT_0533ec08 + 0x8820) != 0) {
          local_90 = PTR_DAT_04bb5070 + 0x10;
          local_50 = &PTR_LAB_048f9770;
          local_80 = (long *)0x0;
          local_88 = CONCAT53(local_88._3_5_,0x10001);
          puStack_98 = local_70 + 0x48;
          local_70 = local_70 + 0x28;
          local_78 = *(undefined8 *)(DAT_0533ec08 + 0x8808);
          _local_68 = 0;
          uStack_60 = 0;
          local_58 = 0;
          local_48 = PTR_DAT_04bb2120;
          local_a8 = 0;
          local_a0 = &local_90;
          FUN_03f45184(*(long *)(DAT_0533ec08 + 0x8820),&local_a8);
        }
      }
      bVar15 = *param_3;
      if (7 < bVar15) {
        bVar15 = 0xff;
      }
      *(byte *)((long)plVar4 + 0x2f4) = bVar15;
      *(undefined4 *)(plVar4 + 0x60) = 7;
      *(undefined4 *)(plVar4 + 0x5f) = DAT_0418023c;
      *(undefined4 *)((long)plVar4 + 0x2fc) = 0;
      *(uint *)((long)plVar4 + 0x30c) = *(uint *)((long)plVar4 + 0x30c) & 0xffffffdf | 9;
    }
  }
  else {
    if (7 < local_24[0]) {
      local_24[0] = 0xff;
    }
    lVar11 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_24,1);
    if (lVar11 != 0) {
      local_68 = (uint5)(uint)local_68;
      if ((*(long **)(lVar11 + 0x17bb0) == (long *)0x0) ||
         (puVar12 = (undefined8 *)**(long **)(lVar11 + 0x17bb0), puVar12 == (undefined8 *)0x0)) {
        uVar9 = 1;
      }
      else {
        uVar9 = (**(code **)*puVar12)();
        uVar9 = uVar9 ^ 1;
      }
      bVar15 = *param_3;
      local_90 = (undefined *)(*(long *)(lVar11 + 0x17b98) + *(long *)(lVar11 + 0x17b90));
      local_78 = local_78 & 0xffffffffffffff00;
      if (7 < bVar15) {
        bVar15 = 0xff;
      }
      local_88 = CONCAT71(local_88._1_7_,bVar15);
      local_80 = param_2;
      if ((*(long **)(lVar11 + 0x3278) == (long *)0x0) ||
         (puVar12 = (undefined8 *)**(long **)(lVar11 + 0x3278), puVar12 == (undefined8 *)0x0)) {
        uVar10 = 1;
      }
      else {
        uVar10 = (**(code **)*puVar12)();
        uVar10 = uVar10 ^ 1;
      }
      uVar7 = local_70;
      puVar3 = (undefined1 *)(*(long *)(lVar11 + 0x3260) + *(long *)(lVar11 + 0x3258));
      local_78 = CONCAT17(puVar3[5],
                          CONCAT16(puVar3[4],
                                   CONCAT15(puVar3[3],
                                            CONCAT14(puVar3[2],
                                                     CONCAT13(puVar3[1],
                                                              CONCAT12(*puVar3,(undefined2)local_78)
                                                             )))));
      local_70 = (undefined1 *)CONCAT53(local_70._3_5_,*(undefined3 *)(puVar3 + 6));
      uVar8 = local_70;
      local_70._6_2_ = SUB82(uVar7,6);
      local_70._0_6_ = CONCAT24(*(undefined2 *)(puVar3 + 10),(int)uVar8);
      if ((((uVar10 & 1) == 0) && (*(long *)(lVar11 + 0x3278) != 0)) &&
         (puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0x3278) + 8), puVar12 != (undefined8 *)0x0))
      {
        (**(code **)*puVar12)();
      }
      _local_68 = CONCAT35(uStack_63,0x100000007);
      FUN_01d8382c(DAT_05373f28,&local_90);
      if ((((uVar9 & 1) == 0) && (*(long *)(lVar11 + 0x17bb0) != 0)) &&
         (puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0x17bb0) + 8), puVar12 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar12)();
      }
    }
  }
  return;
}


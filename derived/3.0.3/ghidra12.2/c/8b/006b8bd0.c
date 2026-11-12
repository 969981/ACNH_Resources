
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006b8bd0(char *param_1)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  ulong uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  uint *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  byte *pbVar13;
  int iVar14;
  long *plVar15;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined2 local_c8;
  undefined2 local_c6;
  undefined4 local_c4;
  undefined4 *local_c0;
  undefined4 *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  undefined4 *local_38;
  
  if (*param_1 != '\0') {
    plVar15 = *(long **)(param_1 + 8);
    local_50 = 0;
    local_48 = 0;
    uVar7 = *(undefined4 *)(param_1 + 0x10);
    local_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    local_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c4 = (**(code **)*plVar15)(plVar15);
    local_c6 = (undefined2)plVar15[1];
    local_c8 = 6;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_f8 = DAT_0414c348;
    uStack_f0 = 0x10;
    local_120 = 1;
    local_108 = 0x800000000;
    local_100 = 0;
    local_118 = 0x20;
    uStack_110 = 0x100000000;
    local_60 = plVar15;
    local_38 = (undefined4 *)nn::sf::hipc::GetMessageBufferOnTls();
    local_40 = (long)&uStack_110 + 4;
    local_c0 = local_38;
    local_b8 = local_38 + 2;
    *local_38 = 6;
    local_38[1] = 8;
    if (uStack_110._5_1_ != '\0') {
      local_38[2] = (undefined4)local_100;
    }
    if ((char)local_e8 != '\0') {
      lVar9 = 0;
      uVar12 = 0;
      iVar8 = 0;
      iVar14 = 0;
      iVar6 = 0x20b;
      do {
        while (bVar3 = *(byte *)((long)&uStack_e0 + uVar12 + 2), (bVar3 & 1) == 0) {
          if ((bVar3 >> 1 & 1) == 0) goto LAB_006b8e7c;
          if (*(char *)(local_48 + lVar9 + 4) == '\0') goto LAB_006b8e88;
          iVar2 = iVar14 + (uint)local_100._6_1_;
          iVar14 = iVar14 + 1;
          local_38[iVar2] = *(undefined4 *)(local_48 + lVar9);
          *(undefined1 *)(local_48 + lVar9 + 4) = 0;
          *(undefined4 *)(local_48 + lVar9) = 0;
          uVar12 = uVar12 + 1;
          lVar9 = lVar9 + 8;
          if ((local_e8 & 0xff) <= uVar12) goto LAB_006b8d50;
        }
        iVar2 = iVar8 + (uint)local_100._5_1_;
        iVar8 = iVar8 + 1;
        local_38[iVar2] = *(undefined4 *)(local_48 + lVar9);
        uVar12 = uVar12 + 1;
        lVar9 = lVar9 + 8;
      } while (uVar12 < (local_e8 & 0xff));
    }
LAB_006b8d50:
    if ((uStack_f0._5_1_ != '\0') &&
       (iVar6 = FUN_006b8e90(&local_c8,&local_40,&local_58,&local_120), iVar6 != 0)) {
LAB_006b8e7c:
      local_40 = CONCAT44(local_40._4_4_,iVar6);
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl((Result *)&local_40);
    }
    local_88 = (ulong)CONCAT14(local_e8._1_1_,(uint)uStack_f0._7_1_);
    if (local_e8._1_1_ != 0) {
      uVar12 = (ulong)local_e8._1_1_ & 3;
      pbVar13 = (byte *)((long)&local_d8 + 2);
      puVar10 = (uint *)&local_80;
      uVar4 = local_e8 & 0x300;
      while (uVar4 != 0) {
        *puVar10 = (uint)*pbVar13;
        uVar12 = uVar12 - 1;
        pbVar13 = pbVar13 + 1;
        puVar10 = puVar10 + 1;
        uVar4 = uVar12;
      }
      if (3 < local_e8._1_1_) {
        do {
          bVar3 = pbVar13[1];
          *puVar10 = (uint)*pbVar13;
          puVar10[1] = (uint)bVar3;
          pbVar1 = pbVar13 + 2;
          bVar3 = pbVar13[3];
          pbVar13 = pbVar13 + 4;
          puVar10[2] = (uint)*pbVar1;
          puVar10[3] = (uint)bVar3;
          puVar10 = puVar10 + 4;
        } while (pbVar13 != (byte *)((long)&local_d8 + 2) + local_e8._1_1_);
      }
    }
    puVar11 = (undefined1 *)((long)local_b8 + 0xfU & 0xfffffffffffffff0);
    *puVar11 = 2;
    *(undefined2 *)(puVar11 + 1) = 0;
    puVar11[3] = 0;
    *(undefined4 *)(puVar11 + 4) = uVar7;
    *(undefined8 *)(puVar11 + 8) = 0;
    uVar7 = nn::sf::cmif::GetInlineContext();
    puVar5 = local_c0;
    *(undefined4 *)(((long)local_b8 + 0xfU & 0xfffffffffffffff0) + 0xc) = uVar7;
    iVar8 = nn::sf::hipc::SendSyncRequest(local_c4,local_c0,0x100);
    if (iVar8 == 0) {
      FUN_006b9618(&local_b0,puVar5);
      if (0x40 < local_90._4_2_) {
LAB_006b8e88:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl();
      }
    }
    (**(code **)(*local_60 + 8))(local_60,local_c4);
  }
  return;
}


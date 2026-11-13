
void FUN_013014f0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  short sVar11;
  short sVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *local_c0;
  int local_b8;
  int local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  
  puVar13 = PTR_DAT_04bbc290;
  uVar8 = *(uint *)(param_1 + 8);
  local_b0 = (undefined *)CONCAT44(local_b0._4_4_,uVar8);
  local_c0 = PTR_DAT_04bb2018 + 0x10;
  iVar7 = *(int *)(param_1 + 0x20);
  local_b4 = *(int *)(param_1 + 0x24);
  lVar4 = param_1 + 200 + (ulong)uVar8 * 0x930;
  if (1 < uVar8) {
    lVar4 = param_1 + 200;
  }
  iVar1 = *(int *)(param_1 + 0x34) + 1;
  if (iVar1 != local_b4) {
    lVar3 = param_1 + 0x1328;
    puVar2 = PTR_DAT_04bbc328 + 0x10;
    local_b8 = iVar7;
    do {
      sVar11 = *(short *)(param_1 + 0x3c);
      if (*(short *)(param_1 + 0x40) <= *(short *)(param_1 + 0x3c)) {
        sVar11 = *(short *)(param_1 + 0x40);
      }
      sVar12 = *(short *)(param_1 + 0x3e);
      if (*(short *)(param_1 + 0x42) <= *(short *)(param_1 + 0x3e)) {
        sVar12 = *(short *)(param_1 + 0x42);
      }
      puVar5 = (undefined *)
               (param_1 + 0x44 + (ulong)(uint)((local_b4 - sVar12) * 3 + (local_b8 - sVar11)) * 0xe)
      ;
      if (2 < (uint)(local_b4 - sVar12) || 2 < (uint)(local_b8 - sVar11)) {
        puVar5 = PTR_DAT_04bbc2f8;
      }
      switch(puVar5[0xc]) {
      case 0:
        local_b0 = (undefined *)((ulong)local_b0._4_4_ << 0x20);
        lVar6 = lVar3 + (ulong)*(uint *)(param_1 + 8) * 0x28;
        if (1 < *(uint *)(param_1 + 8)) {
          lVar6 = lVar3;
        }
        iVar9 = *(int *)(lVar6 + 0x20);
        if (iVar9 <= local_b8 && local_b8 <= iVar9 + 3) {
          iVar10 = *(int *)(lVar6 + 0x24);
          if (((iVar10 <= local_b4) && (local_b4 <= iVar10 + 3)) &&
             (((uint)(local_b8 - iVar9) < 3 &&
              (((uint)(local_b4 - iVar10) < 3 &&
               ((*(uint *)(lVar6 + 0x10) >>
                 (ulong)((local_b4 - iVar10) * 3 + (local_b8 - iVar9) & 0x1f) & 1) != 0))))))
          goto switchD_0130162c_default;
        }
        uVar14 = 1;
        goto LAB_01301700;
      case 1:
        local_b0 = (undefined *)((ulong)local_b0._4_4_ << 0x20);
        lVar6 = lVar3 + (ulong)*(uint *)(param_1 + 8) * 0x28;
        if (1 < *(uint *)(param_1 + 8)) {
          lVar6 = lVar3;
        }
        iVar9 = *(int *)(lVar6 + 0x20);
        if (iVar9 <= local_b8 && local_b8 <= iVar9 + 3) {
          iVar10 = *(int *)(lVar6 + 0x24);
          if ((((iVar10 <= local_b4) && (local_b4 <= iVar10 + 3)) && ((uint)(local_b8 - iVar9) < 3))
             && (((uint)(local_b4 - iVar10) < 3 &&
                 ((*(uint *)(lVar6 + 0x10) >>
                   (ulong)((local_b4 - iVar10) * 3 + (local_b8 - iVar9) & 0x1f) & 1) != 0))))
          goto switchD_0130162c_default;
        }
        local_68 = 1;
        local_64 = 0;
        local_a0 = 0x500000005;
        uStack_98 = 0x500000005;
        local_90 = 0x500000005;
        uStack_88 = 0x500000005;
        local_70 = 0x500000005;
        local_80 = 0x500000005;
        uStack_78 = 0x500000005;
        uStack_a8 = 0x500000005;
        local_b0 = puVar2;
        FUN_01302600(lVar4,&local_b0,0,&local_c0);
        FUN_01302290(lVar4,&local_b0,local_68,&local_c0);
        uVar14 = 0;
LAB_01301700:
        FUN_01302290(lVar4,puVar13,uVar14,&local_c0);
        uVar14 = 2;
        uVar15 = 3;
        break;
      case 2:
        lVar6 = lVar3 + (ulong)*(uint *)(param_1 + 8) * 0x28;
        if (1 < *(uint *)(param_1 + 8)) {
          lVar6 = lVar3;
        }
        iVar9 = *(int *)(lVar6 + 0x20);
        if (iVar9 <= local_b8 && local_b8 <= iVar9 + 3) {
          iVar10 = *(int *)(lVar6 + 0x24);
          if (((iVar10 <= local_b4) && (local_b4 <= iVar10 + 3)) &&
             (((uint)(local_b8 - iVar9) < 3 &&
              (((uint)(local_b4 - iVar10) < 3 &&
               ((*(uint *)(lVar6 + 0x10) >>
                 (ulong)((local_b4 - iVar10) * 3 + (local_b8 - iVar9) & 0x1f) & 1) != 0)))))) {
            local_68 = 2;
            local_64 = 1;
            local_70 = 0x500000005;
            local_a0 = 0x500000005;
            uStack_98 = 0x500000005;
            local_b0 = PTR_DAT_04bbc328 + 0x10;
            local_90 = 0x500000005;
            uStack_88 = 0x500000005;
            local_80 = 0x500000005;
            uStack_78 = 0x500000005;
            uStack_a8 = 0x500000005;
            FUN_01302600(lVar4,&local_b0,1,&local_c0);
            FUN_01302290(lVar4,&local_b0,local_68,&local_c0);
            local_68 = 1;
            local_64 = 0;
            local_70 = 0x500000005;
            local_a0 = 0x500000005;
            uStack_98 = 0x500000005;
            local_b0 = PTR_DAT_04bbc328 + 0x10;
            local_90 = 0x500000005;
            uStack_88 = 0x500000005;
            local_80 = 0x500000005;
            uStack_78 = 0x500000005;
            uStack_a8 = 0x500000005;
            FUN_01302600(lVar4,&local_b0,0,&local_c0);
            FUN_01302290(lVar4,&local_b0,local_68,&local_c0);
            uVar14 = 0;
            uVar15 = 3;
            break;
          }
        }
        local_68 = 2;
        local_64 = 0;
        local_70 = 0x500000005;
        local_a0 = 0x500000005;
        uStack_98 = 0x500000005;
        local_b0 = PTR_DAT_04bbc328 + 0x10;
        local_90 = 0x500000005;
        uStack_88 = 0x500000005;
        local_80 = 0x500000005;
        uStack_78 = 0x500000005;
        uStack_a8 = 0x500000005;
        FUN_01302600(lVar4,&local_b0,0,&local_c0);
        FUN_01302290(lVar4,&local_b0,local_68,&local_c0);
        FUN_01302290(lVar4,puVar13,0,&local_c0);
        uVar14 = 1;
        uVar15 = 3;
        break;
      case 3:
        lVar6 = lVar3 + (ulong)*(uint *)(param_1 + 8) * 0x28;
        if (1 < *(uint *)(param_1 + 8)) {
          lVar6 = lVar3;
        }
        iVar9 = *(int *)(lVar6 + 0x20);
        if (iVar9 <= local_b8 && local_b8 <= iVar9 + 3) {
          iVar10 = *(int *)(lVar6 + 0x24);
          if ((((iVar10 <= local_b4) && (local_b4 <= iVar10 + 3)) && ((uint)(local_b8 - iVar9) < 3))
             && (((uint)(local_b4 - iVar10) < 3 &&
                 ((*(uint *)(lVar6 + 0x10) >>
                   (ulong)((local_b4 - iVar10) * 3 + (local_b8 - iVar9) & 0x1f) & 1) != 0)))) {
            local_68 = 3;
            local_64 = 1;
            local_70 = 0x500000005;
            local_a0 = 0x500000005;
            uStack_98 = 0x500000005;
            local_b0 = PTR_DAT_04bbc328 + 0x10;
            local_90 = 0x500000005;
            uStack_88 = 0x500000005;
            local_80 = 0x500000005;
            uStack_78 = 0x500000005;
            uStack_a8 = 0x500000005;
            FUN_01302600(lVar4,&local_b0,1,&local_c0);
            FUN_01302290(lVar4,&local_b0,local_68,&local_c0);
            local_68 = 2;
            local_64 = 0;
            local_70 = 0x500000005;
            local_a0 = 0x500000005;
            uStack_98 = 0x500000005;
            local_b0 = PTR_DAT_04bbc328 + 0x10;
            local_90 = 0x500000005;
            uStack_88 = 0x500000005;
            local_80 = 0x500000005;
            uStack_78 = 0x500000005;
            uStack_a8 = 0x500000005;
            FUN_01302600(lVar4,&local_b0,0,&local_c0);
            FUN_01302290(lVar4,&local_b0,local_68,&local_c0);
            uVar14 = 0;
            uVar15 = 1;
            break;
          }
        }
        local_68 = 3;
        local_64 = 0;
        local_70 = 0x500000005;
        local_a0 = 0x500000005;
        uStack_98 = 0x500000005;
        local_b0 = PTR_DAT_04bbc328 + 0x10;
        local_90 = 0x500000005;
        uStack_88 = 0x500000005;
        local_80 = 0x500000005;
        uStack_78 = 0x500000005;
        uStack_a8 = 0x500000005;
        FUN_01302600(lVar4,&local_b0,0,&local_c0);
        FUN_01302290(lVar4,&local_b0,local_68,&local_c0);
        FUN_01302290(lVar4,puVar13,0,&local_c0);
        uVar14 = 1;
        uVar15 = 2;
        break;
      default:
        goto switchD_0130162c_default;
      }
      FUN_01302290(lVar4,puVar13,uVar14,&local_c0);
      FUN_01302290(lVar4,puVar13,uVar15,&local_c0);
switchD_0130162c_default:
      if (local_b8 < *(int *)(param_1 + 0x30)) {
        local_b8 = local_b8 + 1;
      }
      else {
        local_b4 = local_b4 + 1;
        local_b8 = *(int *)(param_1 + 0x20);
      }
    } while ((iVar7 != local_b8) || (iVar1 != local_b4));
  }
  return;
}


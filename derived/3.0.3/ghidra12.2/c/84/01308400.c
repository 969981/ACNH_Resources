
void FUN_01308400(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  short sVar8;
  short sVar9;
  undefined *puVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  undefined *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined **local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  uint local_a4;
  long local_a0;
  long local_98;
  undefined *local_90;
  int local_88;
  int local_84;
  long local_80;
  uint local_74;
  int local_70;
  uint local_6c;
  
  puVar10 = PTR_DAT_04bbc2f8;
  sVar8 = *(short *)(param_1 + 0x84);
  if (*(short *)(param_1 + 0x88) <= *(short *)(param_1 + 0x84)) {
    sVar8 = *(short *)(param_1 + 0x88);
  }
  sVar9 = *(short *)(param_1 + 0x86);
  if (*(short *)(param_1 + 0x8a) <= *(short *)(param_1 + 0x86)) {
    sVar9 = *(short *)(param_1 + 0x8a);
  }
  iVar4 = *(int *)(param_1 + 0x18);
  iVar5 = *(int *)(param_1 + 0x1c);
  puVar2 = (undefined *)
           (param_1 + 0x8c + (ulong)(uint)((iVar5 - sVar9) * 3 + (iVar4 - sVar8)) * 0xe);
  if (2 < (uint)(iVar5 - sVar9) || 2 < (uint)(iVar4 - sVar8)) {
    puVar2 = PTR_DAT_04bbc2f8;
  }
  local_74 = (uint)(byte)puVar2[0xc];
  if (local_74 - 1 < 3) {
    local_88 = *(int *)(param_1 + 0x30);
    local_84 = *(int *)(param_1 + 0x34);
    local_a0 = param_1 + 0x28;
    local_98 = param_1 + 0x38;
    local_80 = param_1 + 0x10;
    iVar12 = *(int *)(param_1 + 0x44) + 1;
    iVar13 = local_88;
    if ((local_88 == iVar4) && (iVar12 == iVar5)) {
      if (iVar4 < *(int *)(param_1 + 0x40)) {
        iVar12 = iVar5;
        iVar13 = iVar4 + 1;
      }
      else {
        iVar12 = *(int *)(param_1 + 0x44) + 2;
        iVar13 = iVar4;
      }
    }
    local_90 = PTR_DAT_04bb2018 + 0x10;
    if ((iVar13 != local_88) || (iVar12 != local_84)) {
      iVar4 = (local_74 - 1 & 0xff) + 1;
      lVar1 = param_1 + 0x1370;
      do {
        sVar8 = *(short *)(param_1 + 0x84);
        if (*(short *)(param_1 + 0x88) <= *(short *)(param_1 + 0x84)) {
          sVar8 = *(short *)(param_1 + 0x88);
        }
        sVar9 = *(short *)(param_1 + 0x86);
        if (*(short *)(param_1 + 0x8a) <= *(short *)(param_1 + 0x86)) {
          sVar9 = *(short *)(param_1 + 0x8a);
        }
        puVar2 = (undefined *)
                 (param_1 + 0x8c + (ulong)(uint)((local_84 - sVar9) * 3 + (local_88 - sVar8)) * 0xe)
        ;
        if (2 < (uint)(local_84 - sVar9) || 2 < (uint)(local_88 - sVar8)) {
          puVar2 = puVar10;
        }
        local_a4 = (uint)(byte)puVar2[0xc];
        if (local_a4 == local_74) {
          local_e0 = 0x500000005;
          uStack_d8 = 0x500000005;
          local_d0 = 0x500000005;
          uStack_c8 = 0x500000005;
          local_b0 = 0x500000005;
          local_c0 = 0x500000005;
          uStack_b8 = 0x500000005;
          local_f0 = &PTR_LAB_0498dc60;
          uStack_e8 = 0x500000005;
          uVar6 = *(uint *)(param_1 + 0x13c8);
          local_138 = (undefined *)CONCAT44(local_138._4_4_,uVar6);
          lVar3 = param_1 + 0x1488 + (ulong)uVar6 * 0x930;
          if (1 < uVar6) {
            lVar3 = param_1 + 0x1488;
          }
          FUN_01302600(lVar3,&local_f0,iVar4,&local_90);
          uVar11 = FUN_01312c48(&local_f0,0);
          if ((uVar11 & 1) != 0) {
            local_128 = 0x500000005;
            uStack_120 = 0x500000005;
            local_118 = 0x500000005;
            uStack_110 = 0x500000005;
            local_138 = PTR_DAT_04bbc328 + 0x10;
            local_108 = 0x500000005;
            uStack_100 = 0x500000005;
            local_f8 = 0x500000005;
            uStack_130 = 0x500000005;
            local_6c = *(uint *)(param_1 + 0x50);
            lVar3 = param_1 + 0x110 + (ulong)local_6c * 0x930;
            if (1 < local_6c) {
              lVar3 = param_1 + 0x110;
            }
            FUN_01302600(lVar3,&local_138,iVar4,&local_90);
            local_70 = uStack_120._4_4_;
            local_6c = 3;
            if (uStack_120._4_4_ == 3) {
              lVar3 = lVar1 + (ulong)*(uint *)(param_1 + 0x50) * 0x28;
              if (1 < *(uint *)(param_1 + 0x50)) {
                lVar3 = lVar1;
              }
              iVar5 = *(int *)(lVar3 + 0x20);
              if ((iVar5 <= local_88) && (local_88 <= iVar5 + 3)) {
                iVar7 = *(int *)(lVar3 + 0x24);
                if ((iVar7 <= local_84) &&
                   ((((local_84 <= iVar7 + 3 && ((uint)(local_88 - iVar5) < 3)) &&
                     ((uint)(local_84 - iVar7) < 3)) &&
                    ((*(uint *)(lVar3 + 0x10) >>
                      (ulong)((local_84 - iVar7) * 3 + (local_88 - iVar5) & 0x1f) & 1) != 0))))
                goto LAB_013087bc;
              }
              lVar3 = lVar1 + (ulong)*(uint *)(param_1 + 0x50) * 0x28;
              if (1 < *(uint *)(param_1 + 0x50)) {
                lVar3 = lVar1;
              }
              iVar5 = *(int *)(lVar3 + 0x20);
              if ((iVar5 <= local_88) && (local_88 <= iVar5 + 3)) {
                iVar7 = *(int *)(lVar3 + 0x24);
                if (((iVar7 <= local_84) &&
                    ((local_84 <= iVar7 + 3 && ((uint)(local_88 - iVar5) < 3)))) &&
                   ((uint)(local_84 - iVar7) < 3)) {
                  *(uint *)(lVar3 + 0x10) =
                       *(uint *)(lVar3 + 0x10) |
                       1 << (ulong)((local_84 - iVar7) * 3 + (local_88 - iVar5) & 0x1f);
                }
              }
            }
          }
        }
LAB_013087bc:
        if (local_88 < *(int *)(local_98 + 8)) {
          local_88 = local_88 + 1;
        }
        else {
          local_84 = local_84 + 1;
          local_88 = *(int *)(local_a0 + 8);
        }
        if ((local_88 == *(int *)(local_80 + 8)) && (local_84 == *(int *)(local_80 + 0xc))) {
          if (local_88 < *(int *)(local_98 + 8)) {
            local_88 = local_88 + 1;
          }
          else {
            local_84 = local_84 + 1;
            local_88 = *(int *)(local_a0 + 8);
          }
        }
      } while ((iVar13 != local_88) || (iVar12 != local_84));
    }
  }
  return;
}


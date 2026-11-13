
void FUN_01300f40(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ushort *puVar4;
  ushort *puVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  short sVar11;
  short sVar12;
  uint uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  undefined4 uVar18;
  long lVar19;
  ushort *puVar20;
  undefined *local_c0;
  int local_b8;
  int local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  int local_64;
  
  puVar16 = PTR_DAT_04bbc328;
  puVar15 = PTR_DAT_04bbc288;
  uVar8 = *(uint *)(param_1 + 8);
  local_b0 = (undefined *)CONCAT44(local_b0._4_4_,uVar8);
  local_c0 = PTR_DAT_04bb2018 + 0x10;
  iVar7 = *(int *)(param_1 + 0x20);
  local_b4 = *(int *)(param_1 + 0x24);
  lVar3 = param_1 + 200 + (ulong)uVar8 * 0x930;
  if (1 < uVar8) {
    lVar3 = param_1 + 200;
  }
  iVar1 = *(int *)(param_1 + 0x34) + 1;
  if (iVar1 != local_b4) {
    lVar2 = param_1 + 0x1328;
    lVar19 = *(long *)PTR_DAT_04bb27a8;
    puVar20 = (ushort *)PTR_DAT_04bbc2f8;
    local_b8 = iVar7;
    do {
      local_b0 = (undefined *)CONCAT44(local_b0._4_4_,uVar8);
      sVar11 = *(short *)(param_1 + 0x3c);
      if (*(short *)(param_1 + 0x40) <= *(short *)(param_1 + 0x3c)) {
        sVar11 = *(short *)(param_1 + 0x40);
      }
      sVar12 = *(short *)(param_1 + 0x3e);
      if (*(short *)(param_1 + 0x42) <= *(short *)(param_1 + 0x3e)) {
        sVar12 = *(short *)(param_1 + 0x42);
      }
      puVar4 = (ushort *)
               (param_1 + 0x44 + (ulong)(uint)((local_b4 - sVar12) * 3 + (local_b8 - sVar11)) * 0xe)
      ;
      if (2 < (uint)(local_b4 - sVar12) || 2 < (uint)(local_b8 - sVar11)) {
        puVar4 = puVar20;
      }
      puVar5 = puVar4 + (ulong)uVar8 * 3;
      if (1 < uVar8) {
        puVar5 = puVar4;
      }
      uVar13 = (uint)*puVar5 - (uint)*(ushort *)(lVar19 + 0x408);
      if ((uVar13 < *(uint *)(lVar19 + 1000)) &&
         (*(long *)(*(long *)(lVar19 + 0x3f0) + (long)(int)uVar13 * 8) != 0)) {
        switch((char)puVar4[6]) {
        case '\0':
          local_b0 = (undefined *)((ulong)local_b0._4_4_ << 0x20);
          lVar6 = lVar2 + (ulong)*(uint *)(param_1 + 8) * 0x28;
          if (1 < *(uint *)(param_1 + 8)) {
            lVar6 = lVar2;
          }
          iVar9 = *(int *)(lVar6 + 0x20);
          if ((iVar9 <= local_b8) && (local_b8 <= iVar9 + 3)) {
            iVar10 = *(int *)(lVar6 + 0x24);
            if (((iVar10 <= local_b4) &&
                ((local_b4 <= iVar10 + 3 && ((uint)(local_b8 - iVar9) < 3)))) &&
               (((uint)(local_b4 - iVar10) < 3 &&
                ((*(uint *)(lVar6 + 0x10) >>
                  (ulong)((local_b4 - iVar10) * 3 + (local_b8 - iVar9) & 0x1f) & 1) != 0))))
            goto switchD_0130109c_default;
          }
          break;
        case '\x01':
          local_b0 = (undefined *)((ulong)local_b0._4_4_ << 0x20);
          lVar19 = lVar2 + (ulong)*(uint *)(param_1 + 8) * 0x28;
          if (1 < *(uint *)(param_1 + 8)) {
            lVar19 = lVar2;
          }
          iVar9 = *(int *)(lVar19 + 0x20);
          if ((local_b8 < iVar9) || (iVar9 + 3 < local_b8)) {
LAB_01301184:
            local_64 = 1;
            puVar14 = puVar16;
LAB_013013e8:
            local_b0 = puVar14 + 0x10;
            local_68 = 0;
            local_a8 = 0x500000005;
            local_a0 = 0x500000005;
            local_98 = 0x500000005;
            local_90 = 0x500000005;
            local_88 = 0x500000005;
            local_80 = 0x500000005;
            local_78 = 0x500000005;
            local_70 = 0x500000005;
            FUN_01302600(lVar3,&local_b0,local_64,&local_c0);
            FUN_01302290(lVar3,&local_b0,local_68,&local_c0);
            break;
          }
          iVar10 = *(int *)(lVar19 + 0x24);
          if (((local_b4 < iVar10) ||
              (((iVar10 + 3 < local_b4 || (2 < (uint)(local_b8 - iVar9))) ||
               (2 < (uint)(local_b4 - iVar10))))) ||
             ((*(uint *)(lVar19 + 0x10) >>
               (ulong)((local_b4 - iVar10) * 3 + (local_b8 - iVar9) & 0x1f) & 1) == 0))
          goto LAB_01301184;
          goto LAB_01301440;
        case '\x02':
          lVar19 = lVar2 + (ulong)*(uint *)(param_1 + 8) * 0x28;
          if (1 < *(uint *)(param_1 + 8)) {
            lVar19 = lVar2;
          }
          iVar9 = *(int *)(lVar19 + 0x20);
          if ((local_b8 < iVar9) || (iVar9 + 3 < local_b8)) {
LAB_013013bc:
            local_64 = 2;
            goto LAB_013013c8;
          }
          iVar10 = *(int *)(lVar19 + 0x24);
          if ((((local_b4 < iVar10) || ((iVar10 + 3 < local_b4 || (2 < (uint)(local_b8 - iVar9)))))
              || (2 < (uint)(local_b4 - iVar10))) ||
             ((*(uint *)(lVar19 + 0x10) >>
               (ulong)((local_b4 - iVar10) * 3 + (local_b8 - iVar9) & 0x1f) & 1) == 0))
          goto LAB_013013bc;
          local_68 = 0;
          local_64 = 1;
          local_b0 = PTR_DAT_04bbc328 + 0x10;
          local_70 = 0x500000005;
          local_a8 = 0x500000005;
          local_a0 = 0x500000005;
          local_98 = 0x500000005;
          local_90 = 0x500000005;
          local_88 = 0x500000005;
          local_80 = 0x500000005;
          local_78 = 0x500000005;
          FUN_01302600(lVar3,&local_b0,1,&local_c0);
          FUN_01302290(lVar3,&local_b0,local_68,&local_c0);
          local_64 = 2;
LAB_01301358:
          local_68 = 1;
          if (local_64 == 1) goto LAB_01301440;
          local_b0 = PTR_DAT_04bbc328 + 0x10;
          local_70 = 0x500000005;
          local_a8 = 0x500000005;
          local_a0 = 0x500000005;
          local_98 = 0x500000005;
          local_90 = 0x500000005;
          local_88 = 0x500000005;
          local_80 = 0x500000005;
          local_78 = 0x500000005;
          FUN_01302600(lVar3,&local_b0,local_64,&local_c0);
          puVar17 = &local_b0;
          uVar18 = local_68;
          goto LAB_01301438;
        case '\x03':
          lVar19 = lVar2 + (ulong)*(uint *)(param_1 + 8) * 0x28;
          if (1 < *(uint *)(param_1 + 8)) {
            lVar19 = lVar2;
          }
          iVar9 = *(int *)(lVar19 + 0x20);
          if ((iVar9 <= local_b8) && (local_b8 <= iVar9 + 3)) {
            iVar10 = *(int *)(lVar19 + 0x24);
            if ((iVar10 <= local_b4) &&
               ((((local_b4 <= iVar10 + 3 && ((uint)(local_b8 - iVar9) < 3)) &&
                 ((uint)(local_b4 - iVar10) < 3)) &&
                ((*(uint *)(lVar19 + 0x10) >>
                  (ulong)((local_b4 - iVar10) * 3 + (local_b8 - iVar9) & 0x1f) & 1) != 0)))) {
              local_68 = 0;
              local_64 = 2;
              local_b0 = PTR_DAT_04bbc328 + 0x10;
              local_70 = 0x500000005;
              local_a8 = 0x500000005;
              local_a0 = 0x500000005;
              local_98 = 0x500000005;
              local_90 = 0x500000005;
              local_88 = 0x500000005;
              local_80 = 0x500000005;
              local_78 = 0x500000005;
              FUN_01302600(lVar3,&local_b0,2,&local_c0);
              FUN_01302290(lVar3,&local_b0,local_68,&local_c0);
              local_64 = 3;
              goto LAB_01301358;
            }
          }
          local_64 = 3;
LAB_013013c8:
          local_b0 = (undefined *)((ulong)local_b0._4_4_ << 0x20);
          local_68 = 0;
          puVar14 = PTR_DAT_04bbc328;
          if (local_64 != 0) goto LAB_013013e8;
          break;
        default:
          goto switchD_0130109c_default;
        }
        uVar18 = 1;
        puVar17 = (undefined8 *)PTR_DAT_04bbc288;
LAB_01301438:
        FUN_01302290(lVar3,puVar17,uVar18,&local_c0);
LAB_01301440:
        FUN_01302290(lVar3,puVar15,2,&local_c0);
        FUN_01302290(lVar3,puVar15,3,&local_c0);
        lVar19 = *(long *)PTR_DAT_04bb27a8;
        puVar20 = (ushort *)PTR_DAT_04bbc2f8;
      }
switchD_0130109c_default:
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


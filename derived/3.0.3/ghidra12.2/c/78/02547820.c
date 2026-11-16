
undefined8 FUN_02547820(byte *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  byte *pbVar2;
  undefined *puVar3;
  long *plVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  undefined4 *puVar10;
  long lVar11;
  byte bVar12;
  byte bVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined *local_88;
  undefined2 local_80;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined4 local_7c;
  long local_78;
  long *local_70;
  char local_68;
  char local_66;
  undefined4 local_5c;
  undefined4 local_58;
  byte local_54 [4];
  undefined4 local_50;
  undefined8 local_48;
  
  puVar10 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar10 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_5c = *puVar10;
  local_58 = param_2;
  FUN_0071cb58(&local_70,&local_5c,&local_58,0);
  plVar4 = local_70;
  puVar3 = PTR_DAT_04bb3778;
  if (local_70 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar8 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar9 = (**(code **)(*plVar4 + 0x20))(plVar4,PTR_DAT_04bb3770);
    if ((uVar9 & 1) == 0) {
      local_66 = '\0';
    }
  }
  plVar4 = local_70;
  if (((local_70 != (long *)0x0) && (local_68 != '\0')) && (local_66 != '\0')) {
    if (((*puVar3 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar8 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar9 = (**(code **)(*plVar4 + 0x20))(plVar4,PTR_DAT_04bb3770);
    if ((uVar9 & 1) != 0) {
      puVar14 = (undefined8 *)local_70[0xc];
      if (puVar14 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar8 = __cxa_guard_acquire(&DAT_052461c0);
          puVar14 = &DAT_05240280;
          if (iVar8 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar14 = &DAT_05240280;
        }
      }
      puVar3 = PTR_DAT_04bb43c0;
      local_88 = (undefined *)CONCAT44(local_88._4_4_,4);
      if ((*(uint *)((long)puVar14 + 0x15f4) >> 4 & 1) == 0) {
        lVar16 = *(long *)PTR_DAT_04bb43c0;
        lVar11 = *(long *)(local_70[0x53] + 0x1480) +
                 ((ulong)*(uint *)(*(long *)(local_70[0x53] + 0x1480) + 0x10) & 1) * 0x20;
        puVar1 = (undefined2 *)(lVar11 + 0x14);
        uVar7 = FUN_0277d6c4(puVar1);
        lVar15 = *(long *)puVar3;
        if (lVar15 != 0) {
          lVar16 = *(long *)(lVar16 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar16 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            local_88 = PTR_DAT_04bc0510 + 0x10;
            local_80 = *puVar1;
            local_7e = *(undefined1 *)(lVar11 + 0x16);
            local_7d = *(undefined1 *)(lVar11 + 0x17);
            local_7c = *(undefined4 *)(lVar11 + 0x18);
            local_78 = 0;
            uVar7 = FUN_0277d6c4(&local_80);
            if (*(long *)puVar3 != 0) {
              lVar11 = *(long *)(lVar15 + 0x57e58);
              uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
              if ((uVar7 < *(uint *)(lVar11 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
                lVar11 = *(long *)PTR_DAT_04bc0428;
                uVar7 = FUN_0277d6c4(puVar1);
                uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
                if (uVar7 < *(uint *)(lVar11 + 0x1d8)) {
                  lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8);
                  if (lVar11 != 0) {
                    local_78 = lVar11;
                  }
                }
              }
            }
            local_54[0] = 0;
            local_54[1] = 0;
            FUN_01adab50(&local_88,local_54);
            local_50 = 0;
            do {
              if ((local_50 != 0) && (local_50 < 0xe)) {
                uVar7 = local_50 + 7;
                if (-1 < (int)local_50) {
                  uVar7 = local_50;
                }
                if (((uint)((int)uVar7 >> 3) < 2) &&
                   ((local_54[(uint)((int)uVar7 >> 3)] >> (ulong)(local_50 & 7) & 1) != 0)) {
                  if (local_50 != 9) {
                    return 0;
                  }
                  lVar11 = *(long *)PTR_DAT_04bb39b0;
                  if ((lVar11 == 0) || (*(int *)(lVar11 + 0x15c) == 0)) {
                    bVar5 = true;
                  }
                  else {
                    pbVar2 = PTR_DAT_04bb32e0;
                    if (*(int *)(lVar11 + 0x15c) != 0) {
                      pbVar2 = (byte *)(lVar11 + 0x158);
                    }
                    bVar13 = *param_1;
                    bVar12 = *pbVar2;
                    if (7 < bVar12) {
                      bVar12 = 0xff;
                    }
                    if (7 < bVar13) {
                      bVar13 = 0xff;
                    }
                    bVar5 = bVar12 == bVar13;
                  }
                  uVar6 = FUN_0235a630(param_1);
                  local_50 = CONCAT13(local_50._3_1_,0x10000);
                  local_48 = 0;
                  local_50 = CONCAT22(local_50._2_2_,CONCAT11(uVar6,bVar5)) & 0xffff01ff;
                  uVar9 = FUN_01adc980(&local_88,&local_50);
                  if ((uVar9 & 1) == 0) {
                    return 1;
                  }
                  lVar11 = FUN_029156e0();
                  if (*(int *)(lVar11 + 0x38) == -0x17df00c3) {
                    return 1;
                  }
                  return 0;
                }
              }
              local_50 = local_50 + 1;
            } while (local_50 != 0xe);
          }
        }
      }
    }
  }
  return 0;
}


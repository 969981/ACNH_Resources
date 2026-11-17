
void FUN_02cfa520(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ushort uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  undefined4 *puVar12;
  uint *puVar13;
  ushort uVar14;
  long lVar15;
  uint uVar16;
  undefined2 local_98;
  undefined1 local_96;
  undefined1 local_95;
  undefined4 local_94;
  undefined2 local_90;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined4 local_8c;
  undefined2 local_88;
  undefined1 local_86;
  undefined1 local_85;
  undefined4 local_84;
  undefined2 local_80;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined4 local_7c;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  undefined2 local_60;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_55;
  undefined4 local_54;
  ushort local_34 [2];
  
  lVar15 = *(long *)(*(long *)PTR_DAT_04bb3968 + 0x175a0);
  if (lVar15 != 0) {
    lVar1 = param_1 + 0x927f8;
    uVar4 = *(ushort *)(lVar15 + 0x1528);
    uVar14 = uVar4 | 8;
    if ((uVar4 & 0x10) != 0) {
      uVar14 = uVar4 & 0xffef;
    }
    *(ushort *)(lVar15 + 0x1528) = uVar14;
    uVar5 = FUN_02119c7c(lVar15,lVar1);
    FUN_02119efc(lVar15,uVar5,param_2,1);
    uVar8 = FUN_02665700(param_2);
    lVar2 = param_2 + 0x18;
    uVar9 = FUN_02665700(lVar2);
    if (((uVar8 & 1) != 0) || ((uVar9 & 1) != 0)) {
      local_98 = *(undefined2 *)PTR_DAT_04bb37e0;
      local_96 = PTR_DAT_04bb37e0[2];
      local_95 = PTR_DAT_04bb37e0[3];
      local_94 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      local_90 = local_98;
      local_8e = local_96;
      local_8d = local_95;
      local_8c = local_94;
      local_88 = local_98;
      local_86 = local_96;
      local_85 = local_95;
      local_84 = local_94;
      local_80 = local_98;
      local_7e = local_96;
      local_7d = local_95;
      local_7c = local_94;
      local_78 = local_98;
      local_76 = local_96;
      local_75 = local_95;
      local_74 = local_94;
      local_70 = local_98;
      local_6e = local_96;
      local_6d = local_95;
      local_6c = local_94;
      local_68 = local_98;
      local_66 = local_96;
      local_65 = local_95;
      local_64 = local_94;
      local_60 = local_98;
      local_5e = local_96;
      local_5d = local_95;
      local_5c = local_94;
      local_58 = local_98;
      local_56 = local_96;
      local_55 = local_95;
      local_54 = local_94;
      uVar10 = FUN_0211a3dc(lVar15,&local_98,lVar1);
      if ((uVar10 & 1) != 0) {
        if (((uVar8 & 1) != 0) && (uVar8 = FUN_02ce1534(param_1 + 0x926e8,0), (uVar8 & 1) != 0)) {
          iVar6 = FUN_02119c7c(lVar15,lVar1);
          if (iVar6 != -1) {
            if (iVar6 == -2) {
              piVar11 = (int *)(lVar15 + 0x1cc);
            }
            else {
              piVar11 = (int *)(*(long *)(*(long *)(lVar15 + 0x1f0) + (long)iVar6 * 8) + 0x1c4);
            }
            iVar6 = *piVar11;
          }
          if ((DAT_04c8c100 & 1) == 0) {
            iVar7 = __cxa_guard_acquire(&DAT_04c8c100);
            if (iVar7 != 0) {
              FUN_00706e58(&DAT_04c8c0f0);
              __cxa_guard_release(&DAT_04c8c100);
            }
          }
          if (0 < (int)DAT_04c8c0f0) {
            uVar8 = 0;
            do {
              if (*(int *)(DAT_04c8c0f8 + uVar8 * 4) == 0xe) goto LAB_02cfa71c;
              uVar8 = uVar8 + 1;
            } while (DAT_04c8c0f0 != uVar8);
          }
          uVar8 = 0;
LAB_02cfa71c:
          uVar16 = (uint)uVar8;
          local_34[0] = 0;
          puVar13 = &DAT_04c8c0f0;
          if ((DAT_04c8c100 & 1) == 0) {
            iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128);
            puVar13 = (uint *)PTR_DAT_04bb3120;
            if (iVar7 != 0) {
              FUN_00706e58(&DAT_04c8c0f0);
              __cxa_guard_release(&DAT_04c8c100);
              puVar13 = (uint *)PTR_DAT_04bb3120;
            }
          }
          if (*puVar13 <= uVar16) {
            uVar16 = 0;
          }
          local_34[0] = (ushort)iVar6 & 0x7f |
                        (ushort)(*(int *)(*(long *)(puVar13 + 2) + (long)(int)uVar16 * 4) << 0xb);
          FUN_02cdc870(local_34,param_2);
        }
        if ((uVar9 & 1) != 0) {
          uVar8 = FUN_02cd92f0(lVar2);
          uVar3 = 3;
          if ((uVar8 & 1) == 0) {
            uVar3 = 4;
          }
          uVar8 = FUN_02ce1534(param_1 + 0x926e8,uVar3);
          if ((uVar8 & 1) != 0) {
            iVar6 = FUN_02119c7c(lVar15,lVar1);
            if (iVar6 == -1) {
              uVar14 = 0x7f;
            }
            else {
              if (iVar6 == -2) {
                puVar12 = (undefined4 *)(lVar15 + 0x1cc);
              }
              else {
                puVar12 = (undefined4 *)
                          (*(long *)(*(long *)(lVar15 + 0x1f0) + (long)iVar6 * 8) + 0x1c4);
              }
              uVar14 = (ushort)*puVar12 & 0x7f;
            }
            if (((DAT_04c8c100 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04c8c100), iVar6 != 0)) {
              FUN_00706e58(&DAT_04c8c0f0);
              __cxa_guard_release(&DAT_04c8c100);
            }
            if (0 < (int)DAT_04c8c0f0) {
              uVar8 = 0;
              do {
                if (*(int *)(DAT_04c8c0f8 + uVar8 * 4) == 0xf) goto LAB_02cfa80c;
                uVar8 = uVar8 + 1;
              } while (DAT_04c8c0f0 != uVar8);
            }
            uVar8 = 0;
LAB_02cfa80c:
            local_34[0] = 0;
            if (((DAT_04c8c100 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04c8c100), iVar6 != 0)) {
              FUN_00706e58(&DAT_04c8c0f0);
              __cxa_guard_release(&DAT_04c8c100);
            }
            uVar16 = (uint)uVar8;
            if (DAT_04c8c0f0 <= uVar16) {
              uVar16 = 0;
            }
            local_34[0] = uVar14 | (ushort)(*(int *)(DAT_04c8c0f8 + (long)(int)uVar16 * 4) << 0xb);
            FUN_02cdc870(local_34,lVar2);
          }
        }
      }
    }
  }
  return;
}


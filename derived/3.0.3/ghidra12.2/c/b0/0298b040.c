
void FUN_0298b040(long *param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined4 uVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  undefined2 *puVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  long *plVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 local_10d0;
  undefined1 *local_10c8;
  long *local_10c0;
  long *local_10b8;
  long local_10b0 [2];
  long local_10a0 [3];
  undefined1 auStack_1088 [2000];
  undefined8 local_8b8;
  undefined1 auStack_8b0 [2052];
  long local_ac;
  byte local_a4 [4];
  undefined4 local_a0;
  undefined2 local_9c;
  undefined4 local_98;
  byte local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  char *local_70;
  
  local_ac = 0xfffe;
  FUN_0277d4ac(&local_ac);
  plVar1 = param_1 + 1;
  if (*(char *)(param_2 + 0x18) == '\0') {
    plVar16 = (long *)param_1[2];
    if (plVar16 == plVar1) {
      return;
    }
    plVar19 = plVar16 + -1;
    while (uVar8 = FUN_0277d7b4(plVar19,param_2), (uVar8 & 1) == 0) {
      plVar16 = (long *)plVar16[1];
      plVar19 = plVar16 + -1;
      if (plVar19 == param_1) {
        return;
      }
    }
    local_ac = *plVar19;
    if (*plVar16 != 0) {
      *(long *)(*plVar16 + 8) = plVar16[1];
    }
    if ((long *)plVar16[1] != (long *)0x0) {
      *(long *)plVar16[1] = *plVar16;
    }
    *plVar16 = 0;
    plVar16[1] = 0;
    *(int *)(param_1 + 3) = (int)param_1[3] + -1;
    *plVar19 = param_1[4];
    param_1[4] = (long)plVar19;
  }
  else {
    if ((int)param_1[3] != 0) {
      plVar16 = (long *)param_1[2];
      while (plVar16 != plVar1) {
        plVar19 = (long *)plVar16[1];
        plVar17 = plVar19;
        if (*plVar16 != 0) {
          *(long **)(*plVar16 + 8) = plVar19;
          plVar17 = (long *)plVar16[1];
        }
        if (plVar17 != (long *)0x0) {
          *plVar17 = *plVar16;
        }
        *plVar16 = 0;
        plVar16[1] = 0;
        *(int *)(param_1 + 3) = (int)param_1[3] + -1;
        plVar16[-1] = param_1[4];
        param_1[4] = (long)(plVar16 + -1);
        plVar16 = plVar19;
      }
      *(undefined4 *)param_1 = 0xffffffff;
    }
    *(undefined4 *)param_1 = *(undefined4 *)(param_2 + 0x10);
  }
  pbVar13 = PTR_DAT_04bb32e0;
  local_10c0 = local_10b0;
  local_10d0._4_4_ = 0;
  local_10c8 = (undefined1 *)0x0;
  lVar15 = 0;
  do {
    lVar21 = lVar15 + 0x28;
    plVar16 = (long *)((long)local_10b0 + lVar15 + 8);
    *plVar16 = (long)local_10a0 + lVar15;
    *(long **)((long)local_10b0 + lVar15) = plVar16;
    plVar16 = (long *)((long)local_10a0 + lVar15 + 0x10);
    *plVar16 = (long)(auStack_1088 + lVar15);
    puVar18 = (undefined8 *)((long)local_10a0 + lVar15 + 8);
    *puVar18 = plVar16;
    *(undefined8 **)((long)local_10a0 + lVar15) = puVar18;
    lVar15 = lVar21;
  } while (lVar21 != 0x7f8);
  local_8b8 = 0;
  if (auStack_8b0 != (undefined1 *)0x0) {
    local_10d0._4_4_ = 0x100;
    local_10c8 = auStack_8b0;
  }
  local_10d0 = (ulong)local_10d0._4_4_ << 0x20;
  local_80 = 0;
  local_90 = 0xffffffffffffffff;
  local_88 = 0;
  uVar10 = (uint)(byte)*PTR_DAT_04bb32e0;
  if (7 < uVar10) {
    uVar10 = 0xff;
  }
  local_94 = (byte)uVar10;
  local_10b8 = local_10c0;
  if (*(char *)(param_2 + 0x1b) == '\0') {
    puVar7 = (uint *)(param_2 + 0x14);
    if (*puVar7 == 0xffffffff) {
      if (*(char *)(param_2 + 0x1a) == '\0') {
        if (*(char *)(param_2 + 0x1c) == '\0') {
          if (*(char *)(param_2 + 0x1d) == '\0') {
            local_98 = 0;
            local_90 = CONCAT44(0xffffffff,*(undefined4 *)(param_2 + 0x10));
          }
          else {
            uVar11 = *(uint *)(param_2 + 0x10);
            uVar8 = 7;
            FUN_02507c6c(&local_78,7,1,0,0);
            puVar2 = PTR_DAT_04bb5038;
            local_a0 = local_78._4_4_;
            uVar12 = (uint)(byte)local_78;
            local_a4[0] = 0xff;
            if ((byte)local_78 < 8) {
              local_a4[0] = (byte)local_78;
            }
            local_9c = local_70._0_2_;
            bVar5 = local_a4[0];
            if ((byte)local_78 < 8) {
              do {
                local_a4[0] = bVar5;
                local_98 = 7;
                if (uVar11 == uVar12) goto LAB_0298b77c;
                uVar8 = (ulong)uVar12;
                do {
                  if (uVar8 == 7) goto LAB_0298b75c;
                  uVar8 = uVar8 + 1;
                  uVar9 = FUN_02507924(local_a4,puVar2 + uVar8);
                } while ((uVar9 & 1) == 0);
                bVar5 = puVar2[uVar8];
                uVar12 = (uint)bVar5;
              } while (uVar12 < 8);
              local_98 = 7;
              uVar12 = uVar10;
            }
            else {
LAB_0298b75c:
              local_98 = (undefined4)uVar8;
              uVar12 = uVar10;
            }
LAB_0298b77c:
            local_94 = (byte)uVar12;
            if (7 < uVar12) {
              local_94 = 0xff;
            }
            local_88 = *(undefined8 *)(param_2 + 0x20);
            local_80 = *(undefined8 *)(param_2 + 0x28);
          }
          goto LAB_0298b424;
        }
        local_98 = 6;
      }
      else {
        local_98 = 1;
      }
      local_90 = CONCAT44(0xffffffff,*(undefined4 *)(param_2 + 0x10));
      goto LAB_0298b424;
    }
    if (*(long *)PTR_DAT_04bb2800 == 0) {
LAB_0298b658:
      uVar8 = FUN_02663fa0(puVar7);
      if ((uVar8 & 1) == 0) goto LAB_0298b430;
      local_98 = 5;
      local_90 = CONCAT44(*puVar7,(undefined4)local_90);
      goto LAB_0298b424;
    }
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    local_70 = "NpcInteriorCoordinate";
    local_78 = puVar2;
    iVar6 = FUN_02743000(&local_78);
    if (iVar6 == 0) {
LAB_0298b2ac:
      uVar10 = 0xffffffff;
    }
    else {
      local_70 = "UISelectedNpcVillagerIndex";
      local_78 = puVar2;
      iVar6 = FUN_02743000(&local_78);
      uVar10 = iVar6 - 1;
      if (9 < uVar10) goto LAB_0298b2ac;
    }
    if (uVar10 != *puVar7) goto LAB_0298b658;
    local_98 = 4;
    lVar15 = *(long *)PTR_DAT_04bb39b0;
    if (lVar15 == 0) {
LAB_0298b310:
      if (7 < *pbVar13) {
LAB_0298b31c:
        if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
          lVar15 = **(long **)PTR_DAT_04bb27d0;
          bVar5 = *(byte *)(lVar15 + 0x473);
          pbVar13 = PTR_DAT_04bb5038;
          if ((long)(char)bVar5 != 0xffffffffffffffff) {
            puVar7 = (uint *)(lVar15 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
            if (7 < bVar5) {
              puVar7 = (uint *)(lVar15 + 0x48);
            }
            if ((*puVar7 & 8) != 0) {
              pbVar13 = (byte *)(lVar15 + 0x471);
            }
          }
          local_94 = *pbVar13;
          if (local_94 < 8) goto LAB_0298b414;
        }
        pbVar13 = PTR_DAT_04bb5038;
      }
    }
    else {
      if (*(int *)(lVar15 + 0x15c) != 0) {
        pbVar13 = (byte *)(lVar15 + 0x158);
      }
      if (7 < *pbVar13) {
        if ((*(int *)(lVar15 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar13 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_0298b310;
        }
        goto LAB_0298b31c;
      }
    }
    local_94 = *pbVar13;
LAB_0298b408:
    if (7 < local_94) {
      local_94 = 0xff;
    }
LAB_0298b414:
    if (7 < local_94) {
      local_94 = 0xff;
    }
  }
  else {
    if ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) {
      local_98 = 2;
      lVar15 = *(long *)PTR_DAT_04bb39b0;
      if (lVar15 == 0) {
        if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_0298b3a4;
LAB_0298b404:
        local_94 = *pbVar13;
        goto LAB_0298b408;
      }
      if (*(int *)(lVar15 + 0x15c) != 0) {
        pbVar13 = (byte *)(lVar15 + 0x158);
      }
      if ((*pbVar13 < 8) ||
         (((*(int *)(lVar15 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
          (pbVar13 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar13 < 8))))
      goto LAB_0298b404;
LAB_0298b3a4:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0298b3fc:
        pbVar13 = PTR_DAT_04bb5038;
        goto LAB_0298b404;
      }
      lVar15 = **(long **)PTR_DAT_04bb27d0;
      bVar5 = *(byte *)(lVar15 + 0x473);
      pbVar13 = PTR_DAT_04bb5038;
      if ((long)(char)bVar5 != 0xffffffffffffffff) {
        puVar7 = (uint *)(lVar15 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
        if (7 < bVar5) {
          puVar7 = (uint *)(lVar15 + 0x48);
        }
        if ((*puVar7 & 8) != 0) {
          pbVar13 = (byte *)(lVar15 + 0x471);
        }
      }
      local_94 = *pbVar13;
      if (7 < local_94) goto LAB_0298b3fc;
      goto LAB_0298b414;
    }
    local_98 = 3;
  }
LAB_0298b424:
  FUN_03401f10(&local_10d0,&local_98);
LAB_0298b430:
  puVar2 = PTR_DAT_04bb39d8;
  if (2 < (int)(uint)local_10d0) {
    iVar6 = (uint)local_10d0;
    if (7 < (int)(uint)local_10d0) {
      iVar6 = 8;
    }
    if (*(uint *)(param_1 + 3) < iVar6 - 1U) {
      do {
        puVar7 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar2);
        uVar10 = *puVar7 ^ *puVar7 << 0xb;
        uVar11 = puVar7[3];
        *puVar7 = puVar7[1];
        puVar7[1] = puVar7[2];
        uVar10 = uVar10 >> 8 ^ uVar11 >> 0x13 ^ uVar10 ^ uVar11;
        puVar7[2] = uVar11;
        puVar7[3] = uVar10;
        lVar21 = (local_10d0 & 0xffffffff) * (ulong)uVar10;
        cVar4 = *(char *)(param_2 + 0x18);
        lVar15 = lVar21 >> 0x20;
        uVar10 = (uint)((ulong)lVar21 >> 0x20);
        if ((cVar4 == '\0') || ((int)param_1[3] != 0)) {
          if (uVar10 < (uint)local_10d0) {
            uVar20 = *(undefined8 *)(local_10c8 + lVar15 * 8);
          }
          else {
            uVar20 = 0;
          }
          lVar21 = param_1[2];
          plVar16 = (long *)(lVar21 + -8);
          if (plVar16 != param_1) {
            do {
              uVar8 = FUN_0277d7b4(plVar16,uVar20);
              if ((uVar8 & 1) != 0) goto LAB_0298b47c;
              lVar21 = *(long *)(lVar21 + 8);
              plVar16 = (long *)(lVar21 + -8);
            } while (plVar16 != param_1);
            cVar4 = *(char *)(param_2 + 0x18);
          }
          uVar11 = (uint)local_10d0;
          if ((cVar4 == '\0') && ((short)local_ac != -2)) {
            uVar8 = FUN_0277d7b4(&local_ac,*(undefined8 *)(local_10c8 + lVar15 * 8));
            if ((uVar8 & 1) != 0) goto LAB_0298b47c;
            uVar11 = (uint)local_10d0;
          }
          if (*(char *)(param_2 + 0x19) != '\0') {
            uVar8 = FUN_0277d7b4(param_2 + 8,*(undefined8 *)(local_10c8 + lVar15 * 8));
            if ((uVar8 & 1) != 0) goto LAB_0298b47c;
            uVar11 = (uint)local_10d0;
          }
          if (uVar10 < uVar11) {
            puVar14 = *(undefined2 **)(local_10c8 + lVar15 * 8);
          }
          else {
            puVar14 = (undefined2 *)0x0;
          }
          if ((int)param_1[3] < (int)param_1[6]) goto LAB_0298b5e4;
        }
        else {
          if (uVar10 < (uint)local_10d0) {
            puVar14 = *(undefined2 **)(local_10c8 + lVar15 * 8);
          }
          else {
            puVar14 = (undefined2 *)0x0;
          }
          if (0 < (int)param_1[6]) {
LAB_0298b5e4:
            plVar16 = (long *)param_1[4];
            if (plVar16 != (long *)0x0) {
              param_1[4] = *plVar16;
            }
            *(undefined2 *)plVar16 = *puVar14;
            *(undefined1 *)((long)plVar16 + 2) = *(undefined1 *)(puVar14 + 1);
            *(undefined1 *)((long)plVar16 + 3) = *(undefined1 *)((long)puVar14 + 3);
            uVar3 = *(undefined4 *)(puVar14 + 2);
            plVar19 = plVar16 + 1;
            *plVar19 = 0;
            plVar16[2] = 0;
            *(undefined4 *)((long)plVar16 + 4) = uVar3;
            lVar15 = *plVar1;
            *plVar1 = (long)plVar19;
            *plVar19 = lVar15;
            plVar16[2] = (long)plVar1;
            if (lVar15 != 0) {
              *(long **)(lVar15 + 8) = plVar19;
            }
            *(int *)(param_1 + 3) = (int)param_1[3] + 1;
          }
        }
LAB_0298b47c:
      } while (*(uint *)(param_1 + 3) < iVar6 - 1U);
    }
  }
  return;
}



void FUN_0212f0f0(long param_1)

{
  uint *puVar1;
  int *piVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  byte bVar11;
  long *plVar12;
  undefined1 uVar13;
  long lVar14;
  float fVar15;
  undefined8 local_78;
  undefined2 local_70;
  undefined8 local_6c;
  undefined8 local_64;
  byte local_5c [4];
  undefined4 local_58;
  undefined2 local_54;
  
  if (*(long *)(param_1 + 0x210) == 0) {
    return;
  }
  plVar12 = *(long **)(*(long *)(*(long *)(param_1 + 0x2d0) + 8) + 0x90);
  if (((*PTR_DAT_04bb5b58 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb5b58), iVar7 != 0))
  {
    *(undefined **)PTR_DAT_04bb5b50 = PTR_DAT_04bb5b60 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb5b58);
  }
  if (plVar12 == (long *)0x0) {
    return;
  }
  uVar8 = (**(code **)(*plVar12 + 0x10))(plVar12,PTR_DAT_04bb5b50);
  puVar3 = PTR_DAT_04bb3238;
  if ((uVar8 & 1) == 0) {
    return;
  }
  lVar14 = plVar12[0x4f];
  if ((*(byte *)(lVar14 + 0x6d) >> 3 & 1) == 0) {
    return;
  }
  uVar8 = 0xff;
  if (*(int *)(lVar14 + 0x5c) != 0) {
    FUN_02507c6c(&local_78,7,1,1,0);
    puVar5 = PTR_DAT_04bb5038;
    puVar4 = PTR_DAT_04bb4718;
    local_58 = local_78._4_4_;
    local_5c[0] = 0xff;
    if ((byte)local_78 < 8) {
      local_5c[0] = (byte)local_78;
    }
    local_54 = local_70;
    if ((byte)local_78 < 8) {
      uVar8 = local_78 & 0xff;
      piVar2 = (int *)puVar3;
      if (*(long *)PTR_DAT_04bb4718 != 0) {
        piVar2 = (int *)(*(long *)PTR_DAT_04bb4718 + (local_78 & 0xff) * 4 + 0xde8);
      }
      if (*(int *)(lVar14 + 0x5c) != *piVar2) {
        uVar8 = local_78 & 0xff;
        do {
          do {
            uVar8 = uVar8 + 1;
            if (uVar8 == 8) goto LAB_0212f1b0;
            uVar9 = FUN_02507924(local_5c,puVar5 + uVar8);
          } while ((uVar9 & 1) == 0);
          bVar11 = puVar5[uVar8];
          uVar8 = (ulong)bVar11;
          if (7 < bVar11) goto LAB_0212f1b0;
          piVar2 = (int *)puVar3;
          if (*(long *)puVar4 != 0) {
            piVar2 = (int *)(*(long *)puVar4 + uVar8 * 4 + 0xde8);
          }
          local_5c[0] = bVar11;
        } while (*(int *)(lVar14 + 0x5c) != *piVar2);
      }
    }
    else {
LAB_0212f1b0:
      uVar8 = 0xff;
    }
  }
  lVar14 = *(long *)PTR_DAT_04bb39b0;
  pbVar10 = PTR_DAT_04bb32e0;
  if (lVar14 == 0) {
LAB_0212f248:
    if (7 < *pbVar10) {
LAB_0212f254:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar14 = **(long **)PTR_DAT_04bb27d0;
        bVar11 = *(byte *)(lVar14 + 0x473);
        pbVar10 = PTR_DAT_04bb5038;
        if ((long)(char)bVar11 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar11 & 0xffffffffU) * 0x20;
          if (7 < bVar11) {
            puVar1 = (uint *)(lVar14 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar10 = (byte *)(lVar14 + 0x471);
          }
        }
        bVar11 = *pbVar10;
        bVar6 = 7 < bVar11;
        if (bVar6) {
          bVar11 = 0xff;
        }
        local_78 = CONCAT71(local_78._1_7_,bVar11);
        if (!bVar6) goto LAB_0212f2d4;
      }
      pbVar10 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar14 + 0x15c) != 0) {
      pbVar10 = (byte *)(lVar14 + 0x158);
    }
    if (7 < *pbVar10) {
      if ((*(int *)(lVar14 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar10 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_0212f248;
      }
      goto LAB_0212f254;
    }
  }
  bVar11 = *pbVar10;
  if (7 < bVar11) {
    bVar11 = 0xff;
  }
  local_78 = CONCAT71(local_78._1_7_,bVar11);
LAB_0212f2d4:
  fVar15 = (float)FUN_0251c158(&local_78,*(undefined4 *)puVar3,0);
  if (0.1 < fVar15) {
    local_78 = 0;
    local_70._0_1_ = 0xff;
    local_6c = 0;
    local_64 = 0xfffe;
    FUN_0277d4ac(&local_64);
    uVar13 = (undefined1)uVar8;
    local_78 = CONCAT44(local_78._4_4_,1);
    if (7 < (uint)uVar8) {
      uVar13 = 0xff;
    }
    local_70 = CONCAT11(local_70._1_1_,uVar13);
    FUN_0212ea40(param_1,&local_78);
  }
  return;
}


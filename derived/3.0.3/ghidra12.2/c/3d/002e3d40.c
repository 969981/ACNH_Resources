
/* WARNING: Removing unreachable block (ram,0x002e4160) */

void FUN_002e3d40(undefined8 param_1,long param_2,long *param_3)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  int iVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 auStack_28c [16];
  uint local_27c;
  undefined8 local_278;
  undefined2 local_270;
  undefined4 local_26e;
  undefined2 local_26a;
  undefined1 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  (**(code **)(*param_3 + 0x80))(param_3);
  FUN_002eb7ec(param_3,*(undefined4 *)(param_2 + 0xc));
  iVar8 = FUN_003144c4(param_2);
  FUN_002eb7fc(param_3,iVar8 == 2);
  iVar8 = FUN_003144c4(param_2);
  FUN_002eb80c(param_3,iVar8 == 1);
  lVar13 = param_2 + 0xc0;
  uVar10 = FUN_00186b78(lVar13);
  if ((uVar10 & 1) == 0) {
    uVar7 = FUN_00186b20(lVar13);
    uVar2 = FUN_00186b2c(lVar13);
    uVar3 = FUN_00186b38(lVar13);
    uVar4 = FUN_00186b44(lVar13);
    uVar5 = FUN_00186b50(lVar13);
    uVar6 = FUN_00186b5c(lVar13);
    local_26e._0_2_ = CONCAT11(uVar3,uVar2);
    local_26e._0_3_ = CONCAT12(uVar4,(undefined2)local_26e);
    local_26e = CONCAT13(uVar5,(undefined3)local_26e);
    local_26a = CONCAT11(1,uVar6);
    local_270 = uVar7;
  }
  else {
    local_270 = 0;
    local_26e = 0;
    local_26a = 0;
  }
  local_278 = &PTR_LAB_048497a0;
  FUN_002eb81c(param_3,&local_278);
  lVar13 = param_2 + 200;
  uVar10 = FUN_00186b78(lVar13);
  if ((uVar10 & 1) == 0) {
    uVar7 = FUN_00186b20(lVar13);
    uVar2 = FUN_00186b2c(lVar13);
    uVar3 = FUN_00186b38(lVar13);
    uVar4 = FUN_00186b44(lVar13);
    uVar5 = FUN_00186b50(lVar13);
    uVar6 = FUN_00186b5c(lVar13);
    local_26e._0_2_ = CONCAT11(uVar3,uVar2);
    local_26e._0_3_ = CONCAT12(uVar4,(undefined2)local_26e);
    local_26e = CONCAT13(uVar5,(undefined3)local_26e);
    local_26a = CONCAT11(1,uVar6);
    local_270 = uVar7;
  }
  else {
    local_270 = 0;
    local_26e = 0;
    local_26a = 0;
  }
  local_278 = &PTR_LAB_048497a0;
  FUN_002eb838(param_3,&local_278);
  FUN_002eb854(param_3,*(undefined4 *)(param_2 + 0xd0));
  uVar9 = FUN_003144e8(param_2,0);
  FUN_002eb8c0(param_3,0,uVar9);
  (**(code **)(*param_3 + 0x40))(&local_278,param_3,0,&local_78);
  uVar9 = FUN_003144e8(param_2,1);
  FUN_002eb8c0(param_3,1,uVar9);
  (**(code **)(*param_3 + 0x40))(&local_278,param_3,1,&local_78);
  uVar9 = FUN_003144e8(param_2,2);
  FUN_002eb8c0(param_3,2,uVar9);
  (**(code **)(*param_3 + 0x40))(&local_278,param_3,2,&local_78);
  uVar9 = FUN_003144e8(param_2,3);
  FUN_002eb8c0(param_3,3,uVar9);
  (**(code **)(*param_3 + 0x40))(&local_278,param_3,3,&local_78);
  uVar9 = FUN_003144e8(param_2,4);
  FUN_002eb8c0(param_3,4,uVar9);
  (**(code **)(*param_3 + 0x40))(&local_278,param_3,4,&local_78);
  uVar9 = FUN_003144e8(param_2,5);
  FUN_002eb8c0(param_3,5,uVar9);
  (**(code **)(*param_3 + 0x40))(&local_278,param_3,5,&local_78);
  FUN_002eb8d4(param_3,*(undefined8 *)(param_2 + 0x10));
  FUN_002eb8e4(param_3,*(undefined4 *)(param_2 + 0xd4));
  FUN_002eb8f4(param_3,*(undefined2 *)(param_2 + 0x22));
  FUN_002eb904(param_3,*(undefined2 *)(param_2 + 0x20));
  FUN_00227930(&local_278,*(undefined8 *)(param_2 + 0x50));
  FUN_002eb914(param_3,&local_278);
  puVar15 = *(undefined1 **)(param_2 + 0xa8);
  puVar16 = *(undefined1 **)(param_2 + 0xb0);
  local_68 = 0;
  local_78 = (undefined1 *)0x0;
  uStack_70 = 0;
  uVar10 = (long)puVar16 - (long)puVar15;
  if (uVar10 == 0) {
    local_27c = 0;
    puVar11 = (undefined1 *)0x0;
  }
  else {
    if ((long)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c6e7e8(&local_78);
    }
    puVar11 = (undefined1 *)FUN_00187df4(uVar10);
    puVar17 = puVar15;
    puVar12 = puVar11;
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar12 = *puVar17;
      puVar17 = puVar17 + 1;
      puVar12 = puVar12 + 1;
    }
    if ((undefined1 *)0x2 < puVar16 + ~(ulong)puVar15) {
      do {
        *puVar12 = *puVar17;
        puVar12[1] = puVar17[1];
        puVar12[2] = puVar17[2];
        puVar15 = puVar17 + 3;
        puVar17 = puVar17 + 4;
        puVar12[3] = *puVar15;
        puVar12 = puVar12 + 4;
      } while (puVar17 != puVar16);
    }
    local_27c = (int)puVar12 - (int)puVar11;
    if (0x1ff < local_27c) {
      local_27c = 0x200;
    }
    local_78 = puVar11;
    if (local_27c != 0) {
      if (local_27c < 4) {
        uVar14 = 0;
      }
      else {
        uVar10 = 0;
        do {
          puVar15 = puVar11 + uVar10 + 1;
          auStack_28c[uVar10 + 0x14] = puVar15[-1];
          uVar14 = uVar10 + 4;
          auStack_28c[uVar10 + 0x15] = *puVar15;
          auStack_28c[uVar10 + 0x16] = puVar15[1];
          auStack_28c[uVar10 + 0x17] = puVar15[2];
          uVar10 = uVar14;
        } while (((ulong)local_27c & 0x3fc) != uVar14);
      }
      if ((local_27c & 3) != 0) {
        lVar13 = -((ulong)local_27c & 3);
        puVar15 = puVar11 + uVar14;
        puVar16 = auStack_28c + uVar14 + 0x14;
        do {
          bVar1 = lVar13 != -1;
          lVar13 = lVar13 + 1;
          *puVar16 = *puVar15;
          puVar15 = puVar15 + 1;
          puVar16 = puVar16 + 1;
        } while (bVar1);
      }
      FUN_002eb9fc(param_3,&local_278);
    }
  }
  (**(code **)(*param_3 + 0x78))(auStack_28c,param_3,&local_27c);
  if (puVar11 != (undefined1 *)0x0) {
    FUN_00187e4c(puVar11);
  }
  return;
}


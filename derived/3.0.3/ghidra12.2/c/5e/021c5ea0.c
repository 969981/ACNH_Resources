
void FUN_021c5ea0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  undefined2 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  undefined *local_2620;
  undefined2 local_2618;
  undefined1 local_2616;
  undefined1 local_2615;
  undefined4 local_2614;
  long local_2610;
  undefined8 local_2608;
  undefined8 *local_2600;
  long **local_25f8;
  long **local_25f0;
  long *local_25e8 [5];
  long alStack_25c0 [990];
  undefined8 local_6d0;
  undefined8 local_6a8 [201];
  
  lVar7 = 0xc6;
  local_25f8 = local_25e8;
  local_25e8[0] = alStack_25c0;
  local_2608._4_4_ = 0;
  local_2600 = (undefined8 *)0x0;
  plVar6 = local_25e8[0];
  do {
    lVar7 = lVar7 + -2;
    *plVar6 = (long)(plVar6 + 5);
    plVar6[5] = (long)(plVar6 + 10);
    plVar6 = plVar6 + 10;
  } while (lVar7 != 0);
  local_6d0 = 0;
  if (local_6a8 != (undefined8 *)0x0) {
    local_2608._4_4_ = 200;
    local_2600 = local_6a8;
  }
  local_2608 = (ulong)local_2608._4_4_ << 0x20;
  local_25f0 = local_25f8;
  FUN_01521078(&local_2608);
  uVar3 = nn::os::GetSystemTick();
  *param_1 = 0xfffe;
  FUN_0277d4ac();
  puVar2 = PTR_DAT_04bb43c0;
  if ((int)local_2608 != 0) {
    lVar7 = (long)(int)local_2608 << 3;
    uVar9 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
    uVar3 = 0;
    uVar8 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 2;
    uVar11 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 3;
    uVar13 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 4;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    puVar12 = local_2600;
    do {
      puVar10 = (undefined2 *)*puVar12;
      lVar14 = *(long *)puVar2;
      local_2618 = *puVar10;
      local_2616 = *(undefined1 *)(puVar10 + 1);
      local_2615 = *(undefined1 *)((long)puVar10 + 3);
      local_2614 = *(undefined4 *)(puVar10 + 2);
      local_2610 = 0;
      local_2620 = puVar1;
      uVar4 = FUN_0277d6c4(&local_2618);
      if (*(long *)puVar2 != 0) {
        lVar14 = *(long *)(lVar14 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar14 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          lVar14 = *(long *)PTR_DAT_04bc0428;
          uVar4 = FUN_0277d6c4(puVar10);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar14 + 0x1d8)) &&
             (lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8), lVar14 != 0)) {
            local_2610 = lVar14;
          }
        }
      }
      iVar5 = FUN_01aed730(&local_2620);
      if (iVar5 < 10000) {
        uVar4 = uVar13;
      }
      else {
        uVar9 = uVar9 ^ uVar9 << 0xb;
        uVar3 = uVar3 + 1;
        uVar4 = uVar13 >> 0x13 ^ uVar9 >> 8 ^ uVar13 ^ uVar9;
        uVar9 = uVar8;
        uVar8 = uVar11;
        uVar11 = uVar13;
        if (((ulong)uVar4 * (ulong)uVar3 & 0xffffffff00000000) == 0) {
          *(undefined2 *)param_1 = *puVar10;
          *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)(puVar10 + 1);
          *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar10 + 3);
          *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)(puVar10 + 2);
        }
      }
      uVar13 = uVar4;
      puVar12 = puVar12 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  return;
}


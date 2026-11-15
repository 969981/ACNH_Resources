
void FUN_02123320(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined *local_2628;
  undefined2 local_2620;
  undefined1 local_261e;
  undefined1 local_261d;
  undefined4 local_261c;
  long local_2618;
  undefined8 local_2610;
  undefined8 *local_2608;
  long **local_2600;
  long **local_25f8;
  long *local_25f0 [5];
  long alStack_25c8 [990];
  undefined8 local_6d8;
  undefined8 local_6b0 [200];
  int local_70;
  int local_6c;
  
  if (*(int *)(param_1 + 0x1604) == 2) {
    lVar6 = 0xc6;
    local_2600 = local_25f0;
    local_2610._4_4_ = 0;
    local_2608 = (undefined8 *)0x0;
    local_25f0[0] = alStack_25c8;
    plVar5 = local_25f0[0];
    do {
      lVar6 = lVar6 + -2;
      *plVar5 = (long)(plVar5 + 5);
      plVar5[5] = (long)(plVar5 + 10);
      plVar5 = plVar5 + 10;
    } while (lVar6 != 0);
    local_6d8 = 0;
    if (local_6b0 != (undefined8 *)0x0) {
      local_2610._4_4_ = 200;
      local_2608 = local_6b0;
    }
    local_2610 = (ulong)local_2610._4_4_ << 0x20;
    local_25f8 = local_2600;
    FUN_01521078(&local_2610);
    puVar2 = PTR_DAT_04bb43c0;
    iVar9 = (int)local_2610;
    if ((int)local_2610 != 0) {
      lVar6 = (long)(int)local_2610 << 3;
      puVar1 = PTR_DAT_04bc0510 + 0x10;
      puVar10 = local_2608;
      lVar4 = *(long *)PTR_DAT_04bb43c0;
      do {
        puVar8 = (undefined2 *)*puVar10;
        uVar3 = FUN_0277d6c4(puVar8);
        lVar7 = *(long *)puVar2;
        if (lVar7 != 0) {
          lVar4 = *(long *)(lVar4 + 0x57e58);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
            local_2620 = *puVar8;
            local_261e = *(undefined1 *)(puVar8 + 1);
            local_261d = *(undefined1 *)((long)puVar8 + 3);
            local_261c = *(undefined4 *)(puVar8 + 2);
            local_2618 = 0;
            local_2628 = puVar1;
            uVar3 = FUN_0277d6c4(&local_2620);
            if (*(long *)puVar2 != 0) {
              lVar4 = *(long *)(lVar7 + 0x57e58);
              uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
              if ((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
                lVar4 = *(long *)PTR_DAT_04bc0428;
                uVar3 = FUN_0277d6c4(puVar8);
                uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
                if ((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
                   (lVar4 = *(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8), lVar4 != 0))
                {
                  local_2618 = lVar4;
                }
              }
            }
            local_6c = 0xd;
            local_70 = FUN_01ae7550(&local_2628);
            lVar7 = *(long *)puVar2;
            iVar9 = iVar9 - (uint)(local_70 == local_6c);
          }
        }
        puVar10 = puVar10 + 1;
        lVar6 = lVar6 + -8;
        lVar4 = lVar7;
      } while (lVar6 != 0);
    }
    if (*(int *)(param_1 + 0x1614) != iVar9) {
      *(int *)(param_1 + 0x1614) = iVar9;
    }
  }
  return;
}


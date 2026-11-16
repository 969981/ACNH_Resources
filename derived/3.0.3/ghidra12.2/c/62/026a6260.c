
ulong FUN_026a6260(long param_1,long param_2,long param_3,long param_4,undefined2 *param_5,
                  uint param_6)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined *puVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined1 *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined4 local_88;
  undefined4 local_84;
  undefined *local_80;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  long local_70;
  undefined2 local_68;
  undefined2 local_66;
  undefined4 local_64;
  
  uVar9 = FUN_026a6580(param_1,param_5,0);
  if (((int)uVar9 < 0) || (uVar10 = *(uint *)(param_4 + 0x138), (int)uVar10 < 1)) {
    uVar14 = 0xffffffff;
  }
  else {
    uVar14 = 0;
    do {
      puVar11 = (undefined8 *)
                (**(code **)(*(long *)(*(long *)(*(long *)(param_4 + 0x120) + uVar14 * 8) + 0x60) +
                            0xf0))();
      uVar17 = *puVar11;
      local_66 = 0;
      local_64 = 0;
      local_68 = (undefined2)uVar17;
      FUN_0277d4ac(&local_68);
      local_66 = (undefined2)((ulong)uVar17 >> 0x10);
      local_64 = (undefined4)((ulong)uVar17 >> 0x20);
      uVar12 = FUN_0277d7b4(&local_68,param_5);
      if ((uVar12 & 1) != 0) {
        if ((uint)uVar14 < *(uint *)(param_4 + 0x118)) {
          lVar15 = *(long *)(*(long *)(param_4 + 0x120) + uVar14 * 8);
        }
        else {
          lVar15 = 0;
        }
        puVar13 = (undefined1 *)(**(code **)(*(long *)(lVar15 + 0x98) + 0xf0))();
        uVar5 = *puVar13;
        puVar13 = (undefined1 *)(**(code **)(*(long *)(lVar15 + 200) + 0xf0))();
        uVar6 = *puVar13;
        puVar11 = (undefined8 *)(**(code **)(*(long *)(lVar15 + 0x60) + 0xf0))();
        uVar17 = *puVar11;
        local_84 = 0;
        local_88 = (uint)(ushort)uVar17;
        FUN_0277d4ac(&local_88);
        puVar8 = PTR_DAT_04bb43c0;
        local_76 = (undefined1)((ulong)uVar17 >> 0x10);
        local_75 = (undefined1)((ulong)uVar17 >> 0x18);
        local_88 = CONCAT13(local_75,CONCAT12(local_76,(undefined2)local_88));
        local_84 = (undefined4)((ulong)uVar17 >> 0x20);
        local_80 = PTR_DAT_04bc0510 + 0x10;
        local_78 = (undefined2)local_88;
        local_70 = 0;
        lVar16 = *(long *)PTR_DAT_04bb43c0;
        local_74 = local_84;
        uVar10 = FUN_0277d6c4(&local_78);
        if (*(long *)puVar8 != 0) {
          lVar16 = *(long *)(lVar16 + 0x57e58);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
          if ((uVar10 < *(uint *)(lVar16 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
            lVar16 = *(long *)PTR_DAT_04bc0428;
            uVar10 = FUN_0277d6c4(&local_88);
            uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
            if ((uVar10 < *(uint *)(lVar16 + 0x1d8)) &&
               (lVar16 = *(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar10 * 8), lVar16 != 0))
            {
              local_70 = lVar16;
            }
          }
        }
        puVar1 = (undefined2 *)(param_3 + 0x14);
        puVar3 = puVar1 + (ulong)param_6 * 6;
        if (0x23 < param_6) {
          puVar3 = puVar1;
        }
        if (param_6 < 0x25) {
          puVar1 = puVar3;
        }
        local_88 = FUN_01ae98d0(&local_80);
        puVar13 = (undefined1 *)
                  (**(code **)(*(long *)(lVar15 + 0xf8) + 0xf0))((long *)(lVar15 + 0xf8));
        uVar7 = *puVar13;
        uVar10 = 0x20;
        if (uVar9 < 0x18) {
          uVar10 = 0x18;
        }
        *puVar1 = *param_5;
        *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_5 + 1);
        *(undefined1 *)((long)puVar1 + 3) = *(undefined1 *)((long)param_5 + 3);
        uVar4 = *(undefined4 *)(param_5 + 2);
        *(undefined1 *)(puVar1 + 4) = uVar5;
        *(undefined1 *)((long)puVar1 + 9) = uVar6;
        *(undefined4 *)(puVar1 + 2) = uVar4;
        *(char *)(puVar1 + 5) = (char)local_88;
        *(undefined1 *)((long)puVar1 + 0xb) = uVar7;
        uVar2 = uVar9 - 0x18;
        if (uVar9 < 0x18) {
          uVar2 = uVar9;
        }
        if (uVar2 < uVar10) {
          lVar15 = param_1 + 0x10d6c;
          if (uVar9 < 0x18) {
            lVar15 = param_1 + 0x1094c;
          }
          *(undefined1 *)(lVar15 + (ulong)uVar2 * 0x2c + 0x2a) = 1;
        }
        if (uVar9 < 0x38) {
          lVar15 = (ulong)(uVar9 >> 5) * 4;
          *(uint *)(param_2 + lVar15) = *(uint *)(param_2 + lVar15) | 1 << (ulong)(uVar9 & 0x1f);
        }
        goto LAB_026a6330;
      }
      uVar14 = uVar14 + 1;
    } while (uVar10 != uVar14);
    uVar14 = 0xffffffff;
  }
LAB_026a6330:
  return uVar14 & 0xffffffff;
}


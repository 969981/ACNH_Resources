
undefined4 FUN_02555fe0(byte *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined2 *puVar10;
  byte bVar11;
  long lVar12;
  long lVar13;
  undefined *local_80;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  long local_70;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  byte local_60 [4];
  uint local_5c;
  uint local_58;
  uint local_54;
  
  bVar11 = *param_1;
  if (7 < bVar11) {
    bVar11 = 0xff;
  }
  local_80 = (undefined *)CONCAT71(local_80._1_7_,bVar11);
  lVar7 = FUN_025830c0(DAT_055021a0,&local_80,1);
  if (lVar7 != 0) {
    if ((*(long **)(lVar7 + 0x1aa0) == (long *)0x0) ||
       (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x1aa0), puVar8 == (undefined8 *)0x0)) {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)*puVar8)();
      uVar9 = uVar9 & 0xffffffff;
    }
    puVar10 = (undefined2 *)FUN_02816430(*(long *)(lVar7 + 0x1a88) + *(long *)(lVar7 + 0x1a80));
    uVar3 = *puVar10;
    uVar1 = *(undefined1 *)(puVar10 + 1);
    uVar2 = *(undefined1 *)((long)puVar10 + 3);
    uVar6 = *(undefined4 *)(puVar10 + 2);
    local_68 = uVar3;
    local_66 = uVar1;
    local_65 = uVar2;
    local_64 = uVar6;
    if ((((uVar9 & 1) != 0) && (*(long *)(lVar7 + 0x1aa0) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x1aa0) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
    puVar4 = PTR_DAT_04bb43c0;
    lVar13 = *(long *)PTR_DAT_04bb43c0;
    uVar5 = FUN_0277d6c4(&local_68);
    lVar12 = *(long *)puVar4;
    if (lVar12 != 0) {
      lVar13 = *(long *)(lVar13 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar13 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        local_80 = PTR_DAT_04bc0510 + 0x10;
        local_70 = 0;
        local_78 = uVar3;
        local_76 = uVar1;
        local_75 = uVar2;
        local_74 = uVar6;
        uVar5 = FUN_0277d6c4(&local_78);
        if (*(long *)puVar4 != 0) {
          lVar12 = *(long *)(lVar12 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
            lVar12 = *(long *)PTR_DAT_04bc0428;
            uVar5 = FUN_0277d6c4(&local_68);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
            if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
               (lVar12 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8), lVar12 != 0))
            {
              local_70 = lVar12;
            }
          }
        }
        local_60[0] = 0;
        local_60[1] = 0;
        FUN_01adab50(&local_80,local_60);
        local_5c = 0;
        do {
          if ((local_5c != 0) && (local_5c < 0xe)) {
            uVar5 = local_5c + 7;
            if (-1 < (int)local_5c) {
              uVar5 = local_5c;
            }
            if (((uint)((int)uVar5 >> 3) < 2) &&
               ((local_60[(uint)((int)uVar5 >> 3)] >> (ulong)(local_5c & 7) & 1) != 0)) {
              if (local_5c != 9) {
                return DAT_0559bc2c;
              }
              local_58 = local_5c;
              local_54 = local_5c;
              if ((*(long **)(lVar7 + 0x1aa0) == (long *)0x0) ||
                 (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x1aa0), puVar8 == (undefined8 *)0x0))
              {
                uVar5 = 1;
              }
              else {
                uVar5 = (**(code **)*puVar8)();
                uVar5 = uVar5 ^ 1;
              }
              uVar6 = FUN_028169a0(*(long *)(lVar7 + 0x1a88) + *(long *)(lVar7 + 0x1a80));
              if ((uVar5 & 1) != 0) {
                return uVar6;
              }
              if (*(long *)(lVar7 + 0x1aa0) == 0) {
                return uVar6;
              }
              puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x1aa0) + 8);
              if (puVar8 == (undefined8 *)0x0) {
                return uVar6;
              }
              (**(code **)*puVar8)();
              return uVar6;
            }
          }
          local_5c = local_5c + 1;
        } while (local_5c != 0xe);
      }
    }
  }
  return DAT_0559bc2c;
}


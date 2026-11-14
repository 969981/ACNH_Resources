
byte FUN_01b5e0b0(undefined8 param_1,undefined8 param_2,uint *param_3,byte *param_4,uint param_5)

{
  uint uVar1;
  undefined *puVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  byte *pbVar9;
  ushort uVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  long lVar14;
  byte local_90 [8];
  undefined2 uStack_88;
  undefined6 uStack_86;
  undefined1 local_80;
  byte local_7f;
  byte local_78 [8];
  undefined2 local_70;
  undefined6 uStack_6e;
  undefined1 local_68;
  byte local_67;
  undefined8 local_66;
  undefined4 local_5e;
  undefined8 local_58;
  uint local_50;
  uint uStack_4c;
  uint local_48;
  uint local_44;
  byte local_24 [4];
  
  pbVar9 = local_90;
  if ((param_3 != (uint *)0x0) &&
     (uVar5 = FUN_01b68870(param_3,param_4,param_5 & 1), puVar2 = PTR_DAT_04bb43c0, (uVar5 & 1) != 0
     )) {
    puVar12 = (uint *)(ulong)*param_3;
    local_50 = 0;
    uStack_4c = 0;
    puVar11 = (uint *)((long)param_3 - (long)puVar12);
    if (puVar12 == (uint *)0x0 || param_3 == puVar12) {
      local_48 = 0;
LAB_01b5e118:
      uVar4 = 0;
    }
    else {
      if (((*puVar11 == 0) || (uVar4 = puVar11[1], uVar4 == 0)) || ((ulong)(ushort)puVar11[2] == 0))
      {
LAB_01b5e474:
        uVar13 = *puVar11;
        uStack_4c = 0;
        if (uVar13 != 0) {
LAB_01b5e47c:
          uVar4 = puVar11[1];
          if ((uVar4 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
            lVar6 = 0xc;
            if (*(char *)((long)puVar11 + 10) != '\0') {
              lVar6 = 0x1c;
            }
            lVar6 = (long)puVar11 + lVar6 + (ulong)(ushort)puVar11[2] * 8;
            if (lVar6 != 0) {
              uVar1 = 0;
              if ((ulong)uVar4 != 0) {
                uVar1 = (uint)((ulong)((long)param_3 - lVar6) / (ulong)uVar4);
              }
              if (uVar13 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_053350d8) &&
                 (uStack_4c = (uint)*(ushort *)(DAT_053350e0 + (long)(int)uVar1 * 2),
                 uStack_4c < 0x12)) goto LAB_01b5e4e8;
            }
          }
          uStack_4c = 0;
        }
      }
      else {
        lVar6 = 0xc;
        if (*(char *)((long)puVar11 + 10) != '\0') {
          lVar6 = 0x1c;
        }
        lVar6 = (long)puVar11 + lVar6 + (ulong)(ushort)puVar11[2] * 8;
        if (lVar6 == 0) goto LAB_01b5e474;
        uVar13 = 0;
        if ((ulong)uVar4 != 0) {
          uVar13 = (uint)((ulong)((long)param_3 - lVar6) / (ulong)uVar4);
        }
        if (*puVar11 <= uVar13) {
          uVar13 = 0xffffffff;
        }
        if (uVar13 < DAT_053350c8) {
          uVar4 = (uint)*(ushort *)(DAT_053350d0 + (long)(int)uVar13 * 2);
          if (0x11 < uVar4) goto LAB_01b5e474;
        }
        else {
          uVar4 = 0;
        }
        uVar13 = *puVar11;
        local_50 = uVar4;
        if (uVar13 != 0) goto LAB_01b5e47c;
        uStack_4c = 0;
      }
LAB_01b5e4e8:
      local_48 = 0;
      if (*puVar11 != 0) {
        uVar4 = puVar11[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar6 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar6 = 0x1c;
          }
          lVar6 = (long)puVar11 + lVar6 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar6 != 0) {
            uVar13 = 0;
            if ((ulong)uVar4 != 0) {
              uVar13 = (uint)((ulong)((long)param_3 - lVar6) / (ulong)uVar4);
            }
            if (*puVar11 <= uVar13) {
              uVar13 = 0xffffffff;
            }
            if ((uVar13 < DAT_053350e8) &&
               (local_48 = (uint)*(ushort *)(DAT_053350f0 + (long)(int)uVar13 * 2), local_48 < 0x12)
               ) goto LAB_01b5e560;
          }
        }
        local_48 = 0;
      }
LAB_01b5e560:
      uVar4 = 0;
      if (*puVar11 != 0) {
        uVar4 = puVar11[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar6 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar6 = 0x1c;
          }
          lVar6 = (long)puVar11 + lVar6 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar6 != 0) {
            uVar13 = 0;
            if ((ulong)uVar4 != 0) {
              uVar13 = (uint)((ulong)((long)param_3 - lVar6) / (ulong)uVar4);
            }
            if (*puVar11 <= uVar13) {
              uVar13 = 0xffffffff;
            }
            if ((uVar13 < DAT_053350f8) &&
               (uVar4 = (uint)*(ushort *)(DAT_05335100 + (long)(int)uVar13 * 2), uVar4 < 0x12))
            goto LAB_01b5e11c;
          }
        }
        goto LAB_01b5e118;
      }
    }
LAB_01b5e11c:
    _local_48 = CONCAT44(uVar4,local_48);
    if ((((((local_50 < 0x11) && ((1 << (ulong)(local_50 & 0x1f) & 0x1001dU) != 0)) &&
          (uStack_4c < 0x11)) &&
         (((1 << (ulong)(uStack_4c & 0x1f) & 0x1001dU) != 0 && (local_48 < 0x11)))) &&
        (((1 << (ulong)(local_48 & 0x1f) & 0x1001dU) != 0 &&
         ((uVar4 < 0x11 && ((1 << (ulong)(uVar4 & 0x1f) & 0x1001dU) != 0)))))) &&
       ((local_50 == 2 || (((uStack_4c == 2 || (local_48 == 2)) || (uVar4 == 2)))))) {
LAB_01b5e284:
      local_78[2] = 0;
      local_78[3] = 0;
      local_78[1] = 0;
      local_78[0] = 2;
      if (((puVar12 == (uint *)0x0 || param_3 == puVar12) || (*puVar11 == 0)) ||
         ((uVar4 = puVar11[1], uVar4 == 0 || ((ulong)(ushort)puVar11[2] == 0)))) {
LAB_01b5e2f8:
        uVar10 = 0;
      }
      else {
        lVar6 = 0xc;
        if (*(char *)((long)puVar11 + 10) != '\0') {
          lVar6 = 0x1c;
        }
        lVar6 = (long)puVar11 + lVar6 + (ulong)(ushort)puVar11[2] * 8;
        uVar10 = 0;
        if (lVar6 != 0) {
          uVar13 = 0;
          if ((ulong)uVar4 != 0) {
            uVar13 = (uint)((ulong)((long)param_3 - lVar6) / (ulong)uVar4);
          }
          if (*puVar11 <= uVar13) {
            uVar13 = 0xffffffff;
          }
          if ((DAT_05335108 <= uVar13) ||
             (uVar10 = *(ushort *)(DAT_05335110 + (long)(int)uVar13 * 2), 4 < uVar10))
          goto LAB_01b5e2f8;
        }
      }
      bVar3 = uVar10 != 3;
      if ((uVar10 == 3) || ((param_5 & 1) != 0)) goto LAB_01b5e6f0;
      lVar14 = *(long *)PTR_DAT_04bb43c0;
      uVar4 = FUN_0277d6c4(param_2);
      lVar6 = DAT_05150358;
      if (*(long *)puVar2 == 0) {
LAB_01b5e5d8:
        if (((DAT_05150358 != 0) &&
            ((((*(long *)(DAT_05150358 + 0xb0) != 0 &&
               (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
              (*(long *)(DAT_05150358 + 0x488) != 0)) &&
             ((*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0 &&
              (*(long *)(DAT_05150358 + 0x2b0) != 0)))))) &&
           (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)) {
          uVar4 = FUN_0277d6c4(param_2);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) goto LAB_01b5e358;
        }
      }
      else {
        lVar14 = *(long *)(lVar14 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if ((*(uint *)(lVar14 + 0x1d8) <= uVar4) ||
           (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_01b5e5d8;
LAB_01b5e358:
        if (param_4 == (byte *)0x0) {
          if ((DAT_05574040 != 0) &&
             (lVar6 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))(),
             lVar6 != 0)) {
            local_78[2] = 0;
            local_78[3] = 0;
            local_78[4] = 0;
            local_78[5] = 0;
            local_78[6] = 0;
            local_78[7] = 0;
            local_70 = 0;
            local_78[0] = 0xff;
            local_78[1] = 0xff;
            uStack_6e = 0;
            local_68 = 0;
            local_67 = 0;
            local_66 = 0;
            local_5e = 0;
            uVar5 = FUN_01b6ff10(local_78,&local_50,param_3,param_2);
            bVar3 = 0;
            if ((uVar5 & 1) == 0) goto LAB_01b5e6f0;
            local_80 = 0;
            uStack_88 = SUB82(&LAB_00284e00 + lVar6,0);
            uStack_86 = (undefined6)((ulong)(&LAB_00284e00 + lVar6) >> 0x10);
            if (*(long *)(&LAB_00284e28 + lVar6) == 0) {
              local_7f = 0;
            }
            else {
              puVar7 = *(undefined8 **)(*(long *)(&LAB_00284e28 + lVar6) + 0x10);
              local_7f = 0;
              if (puVar7 != (undefined8 *)0x0) {
                local_7f = (**(code **)*puVar7)();
              }
            }
            local_7f = local_7f & 1;
            local_90[0] = 0xe0;
            local_90[1] = 0x8a;
            local_90[2] = 0xa3;
            local_90[3] = 4;
            local_90[4] = 0;
            local_90[5] = 0;
            local_90[6] = 0;
            local_90[7] = 0;
            FUN_01b69394(local_90);
            local_58 = FUN_01b692d8();
            bVar3 = FUN_01b69400(&local_58,local_78,param_3,&local_50);
LAB_01b5e7b4:
            FUN_02640184(pbVar9);
            goto LAB_01b5e6f0;
          }
        }
        else {
          local_78[0] = *param_4;
          if (7 < local_78[0]) {
            local_78[0] = 0xff;
          }
          lVar6 = FUN_02583354(DAT_055021a0,local_78,1);
          if (lVar6 != 0) {
            lVar14 = lVar6 + 0x194b0;
            if (*(long *)(lVar6 + 0x194b8) == 0) {
              lVar14 = *(long *)(DAT_05574040 + 0x20);
            }
            local_90[2] = 0;
            local_90[3] = 0;
            local_90[4] = 0;
            local_90[5] = 0;
            local_90[6] = 0;
            local_90[7] = 0;
            uStack_88 = 0;
            local_90[0] = 0xff;
            local_90[1] = 0xff;
            uVar5 = FUN_01b6f610(local_90,&local_50,param_3,param_2);
            if ((uVar5 & 1) != 0) {
              local_68 = 0;
              local_70 = (undefined2)(lVar14 + 0x2c610);
              uStack_6e = (undefined6)((ulong)(lVar14 + 0x2c610) >> 0x10);
              if (*(long *)(lVar14 + 0x2c638) == 0) {
                local_67 = 0;
              }
              else {
                puVar7 = *(undefined8 **)(*(long *)(lVar14 + 0x2c638) + 0x10);
                local_67 = 0;
                if (puVar7 != (undefined8 *)0x0) {
                  local_67 = (**(code **)*puVar7)();
                }
              }
              local_67 = local_67 & 1;
              local_78[0] = 0xa0;
              local_78[1] = 0x8a;
              local_78[2] = 0xa3;
              local_78[3] = 4;
              local_78[4] = 0;
              local_78[5] = 0;
              local_78[6] = 0;
              local_78[7] = 0;
              uVar8 = FUN_01b68bf4(local_78);
              local_24[0] = *param_4;
              if (7 < local_24[0]) {
                local_24[0] = 0xff;
              }
              local_58 = FUN_01b68b14(uVar8,local_24);
              bVar3 = FUN_01b68c50(&local_58,local_90,param_3,&local_50,param_4);
              pbVar9 = local_78;
              goto LAB_01b5e7b4;
            }
          }
        }
      }
    }
    else {
      bVar3 = 0;
      if (((2 < local_50) || (2 < uStack_4c)) || ((2 < local_48 || (2 < uVar4)))) goto LAB_01b5e6f0;
      if ((((local_50 == 2) || (uStack_4c == 2)) || (local_48 == 2)) || (uVar4 == 2)) {
        local_90[0] = 1;
        local_90[1] = 0;
        local_90[2] = 0;
        local_90[3] = 0;
        if ((((local_50 == 1) || (uStack_4c == 1)) || (local_48 == 1)) || (uVar4 == 1))
        goto LAB_01b5e284;
      }
    }
  }
  bVar3 = 0;
LAB_01b5e6f0:
  return bVar3 & 1;
}


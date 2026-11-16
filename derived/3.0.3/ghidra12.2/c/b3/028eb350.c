
undefined8 FUN_028eb350(undefined2 *param_1,short param_2,undefined4 param_3,byte param_4)

{
  long lVar1;
  undefined *puVar2;
  uint *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  undefined2 *puVar10;
  float fVar11;
  float local_25c [35];
  uint local_1d0 [35];
  uint local_144 [35];
  uint local_b8;
  uint uStack_b4;
  uint local_b0;
  undefined8 local_ac;
  byte local_a4;
  short local_a2;
  uint local_a0;
  uint local_9c;
  undefined *local_98;
  undefined1 *puStack_90;
  undefined4 local_88;
  undefined1 local_84 [7];
  undefined1 local_7d;
  
  if ((param_2 != -1) && (DAT_05ab3138 != 0)) {
    uVar7 = 0;
    local_25c[0] = 0.0;
    iVar9 = 0;
    puVar10 = param_1;
    do {
      fVar11 = (float)(uint)(ushort)(param_1 + (long)iVar9 * 0x8bc)[3];
      if (0x14 < (uint)fVar11) {
        fVar11 = 0.0;
      }
      local_98 = (undefined *)CONCAT44(local_98._4_4_,fVar11);
      if (local_25c[0] != fVar11) {
        local_25c[0] = fVar11;
      }
      if (param_1[(long)iVar9 * 0x8bc] == param_2) {
        if (0x25 < uVar7) {
          puVar10 = param_1;
        }
        if ((*(byte *)((long)puVar10 + 3) & 1) == 0) {
          return 0xffff;
        }
        local_a2 = 0xffff;
        local_a4 = 1;
        local_b8 = (uint)*(byte *)(puVar10 + 1);
        uStack_b4 = (uint)*(byte *)(puVar10 + 2);
        local_b0 = (uint)(ushort)puVar10[3];
        local_ac = 0xffffffff;
        if (0x14 < local_b0) {
          return 0xffff;
        }
        lVar1 = DAT_05ab3138 + 0x800;
        local_25c[0] = (float)FUN_006bd550(*(undefined8 *)
                                            (PTR_DAT_04bc2558 +
                                            (ulong)(ushort)puVar10[3] * 8 + 0x150),0);
        puVar3 = (uint *)FUN_036c67d0(lVar1,local_25c);
        if (puVar3 == (uint *)0x0) {
          return 0xffff;
        }
        uVar7 = *puVar3;
        uVar6 = 0;
        if ((uVar7 != 0) && (puVar3 != (uint *)(ulong)uVar7)) {
          puVar8 = (uint *)((long)puVar3 - (long)(ulong)uVar7);
          uVar6 = 0;
          if (*puVar8 != 0) {
            uVar7 = puVar8[1];
            if ((uVar7 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
              lVar1 = 0xc;
              if (*(char *)((long)puVar8 + 10) != '\0') {
                lVar1 = 0x1c;
              }
              lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
              if (lVar1 != 0) {
                uVar6 = 0;
                if ((ulong)uVar7 != 0) {
                  uVar6 = (uint)((ulong)((long)puVar3 - lVar1) / (ulong)uVar7);
                }
                if (*puVar8 <= uVar6) {
                  uVar6 = 0xffffffff;
                }
                if ((uVar6 < DAT_055b7880) &&
                   (uVar6 = (uint)*(ushort *)(DAT_055b7888 + (long)(int)uVar6 * 2), uVar6 < 5))
                goto LAB_028eb518;
              }
            }
            uVar6 = 0;
          }
        }
LAB_028eb518:
        local_ac = CONCAT44(uVar6,(undefined4)local_ac);
        local_a4 = param_4 & 1;
        local_a2 = param_2;
        memset(local_25c,0,0x1a4);
        FUN_0376c3f0(local_1d0,local_144,0,1);
        local_7d = 0;
        local_88 = 8;
        local_84[0] = 0;
        puVar2 = PTR_DAT_04bb3768 + 0x10;
        local_98 = puVar2;
        puStack_90 = local_84;
        uVar4 = FUN_0376b510(&local_98,param_3);
        if ((uVar4 & 1) != 0) {
          local_9c = 0;
          uVar4 = FUN_020fc100(&local_9c,&local_a0,&local_98);
          if (((uVar4 & 1) != 0) && (local_a0 < 0x20)) {
            puVar3 = local_1d0 + local_9c;
            if (0x22 < local_9c) {
              puVar3 = local_1d0;
            }
            uVar7 = 1 << (ulong)(local_a0 & 0x1f);
            *puVar3 = *puVar3 & (uVar7 ^ 0xffffffff);
            puVar3 = local_144 + local_9c;
            if (0x22 < local_9c) {
              puVar3 = local_144;
            }
            *puVar3 = *puVar3 & (uVar7 ^ 0xffffffff);
          }
        }
        iVar9 = 0;
        *puVar10 = 0xffff;
        *(undefined1 *)(puVar10 + 1) = 5;
        *(undefined1 *)(puVar10 + 2) = 0;
        puVar10[3] = 0;
        *(byte *)((long)puVar10 + 3) = *(byte *)((long)puVar10 + 3) & 0xfc;
        do {
          local_98 = (undefined *)
                     CONCAT44(local_98._4_4_,(uint)*(byte *)(param_1 + (long)iVar9 * 0x8bc + 1));
          if (*(byte *)(param_1 + (long)iVar9 * 0x8bc + 1) == local_b8) {
            local_88 = 8;
            local_7d = 0;
            local_84[0] = 0;
            local_98 = puVar2;
            puStack_90 = local_84;
            FUN_0376b510(&local_98,param_1[(long)iVar9 * 0x8bc]);
            local_9c = 0;
            uVar4 = FUN_020fc100(&local_9c,&local_a0,&local_98);
            if ((uVar4 & 1) != 0) {
              uVar4 = (ulong)local_9c;
              if (0x22 < local_9c) {
                uVar4 = 0;
              }
              local_25c[uVar4] = local_25c[uVar4] + -1.0;
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 != 0x26);
        uVar5 = FUN_028eb790(param_1,&local_b8,local_25c);
        return uVar5;
      }
      uVar7 = uVar7 + 1;
      iVar9 = iVar9 + 1;
      puVar10 = puVar10 + 0x8bc;
    } while (uVar7 != 0x26);
  }
  return 0xffff;
}



void FUN_027ab9c0(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined2 *puVar5;
  short *psVar6;
  long lVar7;
  long lVar8;
  short local_a8;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined **local_98;
  short local_90;
  undefined2 local_8e;
  undefined4 local_8c;
  long local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined **local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_2);
  lVar8 = *(long *)puVar1;
  if (lVar8 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      local_68 = 0;
      local_70 = *param_2;
      uStack_6c = param_2[1];
      local_78 = &PTR_FUN_04a36b50;
      uVar2 = FUN_0277d6c4(&local_70);
      if (*(long *)puVar1 != 0) {
        lVar7 = *(long *)(lVar8 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar7 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
          lVar7 = *(long *)PTR_DAT_04bc0428;
          uVar2 = FUN_0277d6c4(param_2);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar7 + 0x1d8)) &&
             (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8), lVar7 != 0)) {
            local_68 = lVar7;
          }
        }
      }
      uVar4 = FUN_01af0020(&local_78);
      if ((uVar4 & 1) != 0) {
        FUN_01af02d0(&local_78);
        local_80 = *param_2;
        local_7c = param_2[1];
        uVar2 = 0;
        do {
          lVar8 = *(long *)puVar1;
          psVar6 = (short *)(param_1 + ((long)((ulong)uVar2 << 0x20) >> 0x1d));
          uVar3 = FUN_0277d6c4(psVar6);
          lVar7 = *(long *)puVar1;
          if (lVar7 != 0) {
            lVar8 = *(long *)(lVar8 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
            if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
              local_90 = *psVar6;
              lVar8 = param_1 + (long)(int)uVar2 * 8;
              local_98 = &PTR_FUN_04a36b50;
              local_88 = 0;
              local_8e = *(undefined2 *)(lVar8 + 2);
              local_8c = *(undefined4 *)(lVar8 + 4);
              uVar3 = FUN_0277d6c4(&local_90);
              if (*(long *)puVar1 != 0) {
                lVar7 = *(long *)(lVar7 + 0x57e58);
                uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
                if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
                  lVar7 = *(long *)PTR_DAT_04bc0428;
                  uVar3 = FUN_0277d6c4(psVar6);
                  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
                  if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
                     (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8), lVar7 != 0
                     )) {
                    local_88 = lVar7;
                  }
                }
              }
              uVar4 = FUN_01af28ac(&local_98,&local_80);
              if ((uVar4 & 1) != 0) {
                local_a0 = 0xfffe;
                FUN_0277d4ac(&local_a0);
                FUN_01af4104(&local_a8,&local_a0,psVar6,&local_80);
                if (local_a8 != -2) {
                  *psVar6 = local_a8;
                  *(undefined1 *)(lVar8 + 2) = local_a6;
                  *(undefined1 *)(lVar8 + 3) = local_a5;
                  *(undefined4 *)(lVar8 + 4) = local_a4;
                  local_80 = (undefined4)local_a0;
                  local_7c = local_a0._4_4_;
                  if ((short)local_a0 == -2) {
                    return;
                  }
                }
              }
            }
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 != 0x50);
        if ((short)local_80 == -2) {
          return;
        }
        uVar4 = 0;
        do {
          if (*(short *)(param_1 + (-(uVar4 >> 0x1f) & 0xfffffff800000000 | uVar4 << 3)) == -2) {
            uVar4 = 0;
            while (*(short *)(param_1 + (-(uVar4 >> 0x1f) & 0xfffffff800000000 | uVar4 << 3)) != -2)
            {
              uVar2 = (int)uVar4 + 1;
              uVar4 = (ulong)uVar2;
              if (uVar2 == 0x50) {
                return;
              }
            }
            psVar6 = (short *)(param_1 + (long)(int)uVar4 * 8);
            goto LAB_027abe48;
          }
          uVar2 = (int)uVar4 + 1;
          uVar4 = (ulong)uVar2;
        } while (uVar2 != 0x50);
        lVar7 = -0x278;
        do {
          lVar8 = param_1 + lVar7;
          lVar7 = lVar7 + 8;
          *(undefined4 *)(lVar8 + 0x278) = *(undefined4 *)(lVar8 + 0x280);
          *(undefined4 *)(lVar8 + 0x27c) = *(undefined4 *)(lVar8 + 0x284);
        } while (lVar7 != 0);
        psVar6 = (short *)(param_1 + 0x278);
LAB_027abe48:
        *psVar6 = (short)local_80;
        psVar6[1] = local_80._2_2_;
        *(undefined4 *)(psVar6 + 2) = local_7c;
        return;
      }
      uVar4 = 0;
      do {
        if (*(short *)(param_1 + (-(uVar4 >> 0x1f) & 0xfffffff800000000 | uVar4 << 3)) == -2) {
          uVar4 = 0;
          while (*(short *)(param_1 + (-(uVar4 >> 0x1f) & 0xfffffff800000000 | uVar4 << 3)) != -2) {
            uVar2 = (int)uVar4 + 1;
            uVar4 = (ulong)uVar2;
            if (uVar2 == 0x50) {
              return;
            }
          }
LAB_027abdd0:
          puVar5 = (undefined2 *)(param_1 + (long)(int)uVar4 * 8);
          goto LAB_027abdd8;
        }
        uVar2 = (int)uVar4 + 1;
        uVar4 = (ulong)uVar2;
      } while (uVar2 != 0x50);
      lVar7 = -0x278;
      do {
        lVar8 = param_1 + lVar7;
        lVar7 = lVar7 + 8;
        *(undefined4 *)(lVar8 + 0x278) = *(undefined4 *)(lVar8 + 0x280);
        *(undefined4 *)(lVar8 + 0x27c) = *(undefined4 *)(lVar8 + 0x284);
      } while (lVar7 != 0);
      goto LAB_027abccc;
    }
  }
  uVar4 = 0;
LAB_027abc90:
  if (*(short *)(param_1 + (-(uVar4 >> 0x1f) & 0xfffffff800000000 | uVar4 << 3)) != -2)
  goto code_r0x027abca0;
  uVar4 = 0;
  while (*(short *)(param_1 + (-(uVar4 >> 0x1f) & 0xfffffff800000000 | uVar4 << 3)) != -2) {
    uVar2 = (int)uVar4 + 1;
    uVar4 = (ulong)uVar2;
    if (uVar2 == 0x50) {
      return;
    }
  }
  goto LAB_027abdd0;
code_r0x027abca0:
  uVar2 = (int)uVar4 + 1;
  uVar4 = (ulong)uVar2;
  if (uVar2 == 0x50) goto code_r0x027abcac;
  goto LAB_027abc90;
code_r0x027abcac:
  lVar7 = -0x278;
  do {
    lVar8 = param_1 + lVar7;
    lVar7 = lVar7 + 8;
    *(undefined4 *)(lVar8 + 0x278) = *(undefined4 *)(lVar8 + 0x280);
    *(undefined4 *)(lVar8 + 0x27c) = *(undefined4 *)(lVar8 + 0x284);
  } while (lVar7 != 0);
LAB_027abccc:
  puVar5 = (undefined2 *)(param_1 + 0x278);
LAB_027abdd8:
  *puVar5 = *(undefined2 *)param_2;
  *(undefined1 *)(puVar5 + 1) = *(undefined1 *)((long)param_2 + 2);
  *(undefined1 *)((long)puVar5 + 3) = *(undefined1 *)((long)param_2 + 3);
  *(undefined4 *)(puVar5 + 2) = param_2[1];
  return;
}



bool FUN_0368e5e0(long param_1,uint param_2,long *param_3)

{
  short *psVar1;
  short *psVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  char *pcVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  uint local_24c;
  undefined *local_248;
  uint *puStack_240;
  float local_228 [36];
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  uint local_108 [38];
  
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x280) + (long)(int)param_2 * 8) + 0x48) & 1) == 0) {
    uVar8 = (ulong)DAT_0545a400;
    if (((((((((0x22 < uVar8) || ((byte)PTR_DAT_04bc27f0[uVar8] < DAT_0545a401)) ||
             ((*(uint *)(PTR_DAT_04bc2a20 + uVar8 * 4) >> (ulong)(DAT_0545a401 & 0x1f) & 1) == 0))
            && (((uVar8 = (ulong)DAT_0545a403, 0x22 < uVar8 ||
                 ((byte)PTR_DAT_04bc27f0[uVar8] < DAT_0545a404)) ||
                ((*(uint *)(PTR_DAT_04bc2a20 + uVar8 * 4) >> (ulong)(DAT_0545a404 & 0x1f) & 1) == 0)
                ))) &&
           (((uVar8 = (ulong)DAT_0545a406, 0x22 < uVar8 ||
             ((byte)PTR_DAT_04bc27f0[uVar8] < DAT_0545a407)) ||
            ((*(uint *)(PTR_DAT_04bc2a20 + uVar8 * 4) >> (ulong)(DAT_0545a407 & 0x1f) & 1) == 0))))
          && (((uVar8 = (ulong)DAT_0545a409, 0x22 < uVar8 ||
               ((byte)PTR_DAT_04bc27f0[uVar8] < DAT_0545a40a)) ||
              ((*(uint *)(PTR_DAT_04bc2a20 + uVar8 * 4) >> (ulong)(DAT_0545a40a & 0x1f) & 1) == 0)))
          ) && (((uVar8 = (ulong)DAT_0545a40c, 0x22 < uVar8 ||
                 ((byte)PTR_DAT_04bc27f0[uVar8] < DAT_0545a40d)) ||
                ((*(uint *)(PTR_DAT_04bc2a20 + uVar8 * 4) >> (ulong)(DAT_0545a40d & 0x1f) & 1) == 0)
                ))) &&
        (((((uVar8 = (ulong)DAT_0545a40f, 0x22 < uVar8 ||
            ((byte)PTR_DAT_04bc27f0[uVar8] < DAT_0545a410)) ||
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar8 * 4) >> (ulong)(DAT_0545a410 & 0x1f) & 1) == 0)) &&
          (((uVar8 = (ulong)DAT_0545a412, 0x22 < uVar8 ||
            ((byte)PTR_DAT_04bc27f0[uVar8] < DAT_0545a413)) ||
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar8 * 4) >> (ulong)(DAT_0545a413 & 0x1f) & 1) == 0))))
         && (((uVar8 = (ulong)DAT_0545a415, 0x22 < uVar8 ||
              ((byte)PTR_DAT_04bc27f0[uVar8] < DAT_0545a416)) ||
             ((*(uint *)(PTR_DAT_04bc2a20 + uVar8 * 4) >> (ulong)(DAT_0545a416 & 0x1f) & 1) == 0))))
        )) && (((uVar8 = (ulong)DAT_0545a418, 0x22 < uVar8 ||
                ((byte)PTR_DAT_04bc27f0[uVar8] < DAT_0545a419)) ||
               ((*(uint *)(PTR_DAT_04bc2a20 + uVar8 * 4) >> (ulong)(DAT_0545a419 & 0x1f) & 1) == 0))
              )) {
      if ((int)param_2 < 0) {
        return false;
      }
      if (*(int *)(param_1 + 0x278) <= (int)param_2) {
        return false;
      }
      uVar3 = *(uint *)(*(long *)(*(long *)(param_1 + 0x280) + (ulong)param_2 * 8) + 0x4c);
      if (uVar3 != 0xffffffff) {
        psVar1 = (short *)(param_1 + 0x698);
        iVar9 = 0;
        psVar2 = psVar1 + (ulong)uVar3 * 0x6c;
        if (0x25 < uVar3) {
          psVar2 = psVar1;
        }
        do {
          if ((*psVar2 != psVar1[(long)iVar9 * 0x6c]) &&
             ((*(int *)(psVar2 + 0x1c) != *(int *)(psVar1 + (long)iVar9 * 0x6c + 0x1c) ||
              (*(int *)(psVar2 + 0x1e) != *(int *)(psVar1 + (long)iVar9 * 0x6c + 0x1e))))) {
            (**(code **)(*param_3 + 0x18))(param_3);
            (**(code **)(*param_3 + 0x18))(param_3);
            lVar10 = param_3[1];
            (**(code **)(*(long *)(psVar1 + (long)iVar9 * 0x6c + 4) + 0x18))
                      (psVar1 + (long)iVar9 * 0x6c + 4);
            lVar7 = *(long *)(psVar1 + (long)iVar9 * 0x6c + 8);
            if (lVar10 == lVar7) {
LAB_0368e9bc:
              local_108[0] = *(undefined4 *)(psVar1 + (long)iVar9 * 0x6c + 0x18);
              if ((((*(long *)PTR_DAT_04bb4960 != 0) &&
                   (lVar7 = FUN_036afd70(*(long *)PTR_DAT_04bb4960,
                                         *(undefined4 *)(psVar1 + (long)iVar9 * 0x6c + 0x18)),
                   lVar7 != 0)) &&
                  (pcVar6 = (char *)FUN_01d38ff0(lVar7,0xe,0x8f30aa9f,
                                                 *(undefined8 *)PTR_DAT_04bc3988),
                  pcVar6 != (char *)0x0)) && (*pcVar6 != '\0')) {
                return false;
              }
              local_108[0x22] = 0;
              local_108[0] = 0;
              local_108[1] = 0;
              local_108[0x1e] = 0;
              local_108[0x1f] = 0;
              local_108[0x20] = 0;
              local_108[0x21] = 0;
              local_110 = 0;
              local_198 = 0;
              local_108[0x1a] = 0;
              local_108[0x1b] = 0;
              local_108[0x1c] = 0;
              local_108[0x1d] = 0;
              local_108[0x16] = 0;
              local_108[0x17] = 0;
              local_108[0x18] = 0;
              local_108[0x19] = 0;
              local_108[0x12] = 0;
              local_108[0x13] = 0;
              local_108[0x14] = 0;
              local_108[0x15] = 0;
              local_108[0xe] = 0;
              local_108[0xf] = 0;
              local_108[0x10] = 0;
              local_108[0x11] = 0;
              local_108[10] = 0;
              local_108[0xb] = 0;
              local_108[0xc] = 0;
              local_108[0xd] = 0;
              local_108[6] = 0;
              local_108[7] = 0;
              local_108[8] = 0;
              local_108[9] = 0;
              local_108[2] = 0;
              local_108[3] = 0;
              local_108[4] = 0;
              local_108[5] = 0;
              local_120 = 0;
              uStack_118 = 0;
              local_130 = 0;
              uStack_128 = 0;
              local_140 = 0;
              uStack_138 = 0;
              local_150 = 0;
              uStack_148 = 0;
              local_160 = 0;
              uStack_158 = 0;
              local_170 = 0;
              uStack_168 = 0;
              local_180 = 0;
              uStack_178 = 0;
              local_190 = 0;
              uStack_188 = 0;
              FUN_0376c3f0(local_108,&local_198,0,1);
              local_228[0x22] = 0.0;
              local_228[0x1e] = 0.0;
              local_228[0x1f] = 0.0;
              local_228[0x20] = 0.0;
              local_228[0x21] = 0.0;
              local_228[0x18] = 0.0;
              local_228[0x19] = 0.0;
              local_228[0x1a] = 0.0;
              local_228[0x1b] = 0.0;
              local_228[0x1c] = 0.0;
              local_228[0x1d] = 0.0;
              local_228[0x14] = 0.0;
              local_228[0x15] = 0.0;
              local_228[0x16] = 0.0;
              local_228[0x17] = 0.0;
              local_228[0x10] = 0.0;
              local_228[0x11] = 0.0;
              local_228[0x12] = 0.0;
              local_228[0x13] = 0.0;
              local_228[0xc] = 0.0;
              local_228[0xd] = 0.0;
              local_228[0xe] = 0.0;
              local_228[0xf] = 0.0;
              local_228[8] = 0.0;
              local_228[9] = 0.0;
              local_228[10] = 0.0;
              local_228[0xb] = 0.0;
              local_228[4] = 0.0;
              local_228[5] = 0.0;
              local_228[6] = 0.0;
              local_228[7] = 0.0;
              local_228[0] = 0.0;
              local_228[1] = 0.0;
              local_228[2] = 0.0;
              local_228[3] = 0.0;
              local_248 = &DAT_04b435b0;
              puStack_240 = local_108;
              FUN_0376ec70(&local_248);
              param_1 = param_1 + 0x6a0;
              lVar7 = 0x26;
              do {
                local_248 = (undefined *)((ulong)local_248 & 0xffffffff00000000);
                uVar8 = FUN_020fc100(&local_248,&local_24c,param_1);
                if ((uVar8 & 1) != 0) {
                  uVar8 = (ulong)local_248 & 0xffffffff;
                  if (local_24c < 0x20) {
                    if (0x22 < (uint)local_248) {
                      uVar8 = 0;
                    }
                    local_108[uVar8] =
                         local_108[uVar8] & (1 << (ulong)(local_24c & 0x1f) ^ 0xffffffffU);
                  }
                  uVar8 = (ulong)local_248 & 0xffffffff;
                  if (0x22 < (uint)local_248) {
                    uVar8 = 0;
                  }
                  local_228[uVar8] = local_228[uVar8] + -1.0;
                }
                lVar7 = lVar7 + -1;
                param_1 = param_1 + 0xd8;
              } while (lVar7 != 0);
              uVar8 = 0;
              do {
                uVar3 = *(uint *)((long)local_108 +
                                 (-(uVar8 >> 0x1f) & 0xfffffffc00000000 | uVar8 << 2));
                uVar3 = uVar3 - (uVar3 >> 1 & 0x55555555);
                uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
                uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
                uVar3 = uVar3 + (uVar3 >> 8);
                uVar3 = uVar3 + (uVar3 >> 0x10) & 0x3f;
                if (uVar3 != 0) {
                  return uVar3 == 0;
                }
                uVar3 = (int)uVar8 + 1;
                uVar8 = (ulong)uVar3;
              } while (uVar3 != 0x23);
              return true;
            }
            uVar8 = 0;
            bVar5 = true;
            do {
              lVar10 = param_3[1] + 2 + uVar8;
              cVar4 = *(char *)(lVar10 + -2);
              if (cVar4 != *(char *)(lVar7 + uVar8)) break;
              if (cVar4 == '\0') {
                if (bVar5) goto LAB_0368e9bc;
                break;
              }
              cVar4 = *(char *)(lVar10 + -1);
              if (cVar4 != *(char *)(lVar7 + uVar8 + 1)) break;
              if (cVar4 == '\0') goto LAB_0368e9bc;
              cVar4 = *(char *)(param_3[1] + 2 + uVar8);
              if (cVar4 != *(char *)(lVar7 + uVar8 + 2)) break;
              if (cVar4 == '\0') goto LAB_0368e9bc;
              bVar5 = uVar8 < 0x7fffe;
              uVar8 = uVar8 + 3;
            } while (uVar8 != 0x80001);
          }
          iVar9 = iVar9 + 1;
          if (iVar9 == 0x26) {
            return false;
          }
        } while( true );
      }
    }
  }
  return false;
}


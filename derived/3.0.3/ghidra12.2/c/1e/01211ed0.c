
/* WARNING: Removing unreachable block (ram,0x01211fc0) */

void FUN_01211ed0(long param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 uint param_7,uint param_8)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 local_a8 [2];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [8];
  undefined **local_88;
  uint local_80;
  uint local_7c;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  byte local_68;
  
  if (param_3 < param_4) {
    uStack_6c = *(undefined4 *)(PTR_DAT_04bbbf90 + 0xc);
    local_70 = 1;
    local_68 = FUN_017baf44();
    local_68 = local_68 & 1;
    local_78 = PTR_DAT_04bb6268 + 0x10;
    lVar6 = FUN_01a4fa00(&local_78);
    local_a8[0] = 0x13;
    uVar11 = *(uint *)(lVar6 + 0x14);
    uVar1 = *(int *)(lVar6 + 0x24) + 1;
    if (uVar1 != uVar11) {
      uVar2 = *(uint *)(lVar6 + 0x10);
      uVar10 = uVar2;
      uVar4 = uVar2;
      do {
        local_88 = &PTR_FUN_04986b58;
        if (((((((uVar10 | uVar11) & 1) == 0) &&
              (DAT_05233970 <= (int)uVar10 && (int)uVar10 <= DAT_05233980)) &&
             (DAT_05233974 <= (int)uVar11)) &&
            (((int)uVar11 <= DAT_05233984 &&
             (uVar8 = (uVar11 & 0x1fffffe) * 0x80 + ((int)uVar10 >> 1), uVar8 >> 0xf == 0)))) &&
           ((*(uint *)(param_1 + 0x270c8 + (ulong)(uVar8 >> 5) * 4) >> (ulong)(uVar10 >> 1 & 0x1f) &
            1) != 0)) {
          local_80 = uVar10;
          local_7c = uVar11;
          FUN_01a50240(auStack_90,&local_78,0,&local_88);
          lVar3 = DAT_05150358;
          if ((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
              ((*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0 &&
               (((*(long *)(DAT_05150358 + 0x488) != 0 &&
                 (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)) &&
                (*(long *)(DAT_05150358 + 0x2b0) != 0)))))) &&
             (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)) {
            uVar4 = FUN_0277d6c4(auStack_90);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar3 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar3 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar3 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
              FUN_0124c030(local_a8,auStack_90);
              iVar5 = FUN_0124fd60(local_a8);
              if ((((param_2 & 1) == 0) ||
                  (((int)local_80 < DAT_05233970 || (DAT_05233980 < (int)local_80)))) ||
                 (((int)local_7c < DAT_05233974 || (DAT_05233984 < (int)local_7c)))) {
                uVar4 = 0;
joined_r0x01212174:
                if (iVar5 == 2) goto LAB_01212198;
LAB_01212178:
                if (iVar5 != 1) goto LAB_01211fe0;
                uVar9 = param_5;
                uVar8 = param_6;
              }
              else {
                uVar4 = local_80 + local_7c * 0x200;
                if (uVar4 >> 0x11 == 0) {
                  uVar4 = *(uint *)(param_1 + 0xc020 + (ulong)(uVar4 >> 5) * 4) >>
                          (ulong)(local_80 & 0x1f) & 1;
                  goto joined_r0x01212174;
                }
                uVar4 = 0;
                if (iVar5 != 2) goto LAB_01212178;
LAB_01212198:
                uVar9 = param_7;
                uVar8 = param_8;
              }
              if (uVar4 == 0) {
                uVar8 = uVar9;
              }
              uVar4 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
              DAT_05582b70 = DAT_05582b74;
              DAT_05582b74 = DAT_05582b78;
              uVar4 = uVar4 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar4 ^ DAT_05582b7c;
              DAT_05582b78 = DAT_05582b7c;
              DAT_05582b7c = uVar4;
              if (((uint)((ulong)uVar4 * 100 >> 0x20) <= uVar8) &&
                 (uVar7 = FUN_0124d940(local_a8,1,0,0), (uVar7 & 1) != 0)) {
                FUN_011f3390(&local_78,0,auStack_a0,&local_88);
              }
            }
          }
LAB_01211fe0:
          uVar4 = *(uint *)(lVar6 + 0x10);
        }
        if ((int)uVar10 < *(int *)(lVar6 + 0x20)) {
          uVar10 = uVar10 + 1;
        }
        else {
          uVar11 = uVar11 + 1;
          uVar10 = uVar4;
        }
      } while (uVar2 != uVar10 || uVar1 != uVar11);
    }
  }
  return;
}


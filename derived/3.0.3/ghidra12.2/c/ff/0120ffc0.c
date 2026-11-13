
/* WARNING: Removing unreachable block (ram,0x01210308) */
/* WARNING: Removing unreachable block (ram,0x012101dc) */
/* WARNING: Removing unreachable block (ram,0x01210260) */
/* WARNING: Removing unreachable block (ram,0x01210310) */
/* WARNING: Removing unreachable block (ram,0x01210318) */
/* WARNING: Removing unreachable block (ram,0x01210334) */

void FUN_0120ffc0(long param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined8 local_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  uint local_88;
  uint local_84;
  undefined *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  byte local_70;
  undefined4 local_68;
  undefined4 local_64;
  
  uStack_74 = *(undefined4 *)(PTR_DAT_04bbbf90 + 0xc);
  local_78 = 1;
  local_70 = FUN_017baf44();
  puVar1 = PTR_DAT_04bbbc68;
  local_70 = local_70 & 1;
  uVar6 = 0;
  local_80 = PTR_DAT_04bb6268 + 0x10;
  lVar5 = 2;
  do {
    uVar2 = *(uint *)(param_1 + lVar5 * 4);
    lVar5 = lVar5 + 1;
    uVar2 = uVar2 - (uVar2 >> 1 & 0x55555555);
    uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
    uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
    uVar2 = uVar2 + (uVar2 >> 8);
    uVar6 = (uVar2 + (uVar2 >> 0x10) & 0x3f) + uVar6;
  } while (lVar5 != 0x402);
  if (uVar6 != 0) {
    iVar7 = 5;
    do {
      FUN_01696be0(auStack_90,param_1);
      if ((DAT_05233970 <= (int)local_88 && (int)local_88 <= DAT_05233980) &&
         (uVar2 = (local_84 & 0x1fffffe) * 0x80 + ((int)local_88 >> 1),
         (DAT_05233974 <= (int)local_84 && (int)local_84 <= DAT_05233984) && uVar2 >> 0xf == 0)) {
        lVar5 = (ulong)(uVar2 >> 5) * 4;
        *(uint *)(param_1 + 8 + lVar5) =
             *(uint *)(param_1 + 8 + lVar5) & (1 << (ulong)(local_88 >> 1 & 0x1f) ^ 0xffffffffU);
      }
      FUN_01a5033c(auStack_98,&local_80,0,auStack_90,0);
      lVar5 = *(long *)puVar1;
      if (((((lVar5 != 0) && (*(long *)(lVar5 + 0xb0) != 0)) &&
           (*(long *)(*(long *)(lVar5 + 0xb0) + 8) != 0)) &&
          ((*(long *)(lVar5 + 0x488) != 0 && (*(long *)(*(long *)(lVar5 + 0x488) + 8) != 0)))) &&
         ((*(long *)(lVar5 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar5 + 0x2b0) + 8) != 0)))) {
        uVar2 = FUN_0277d6c4(auStack_98);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
          FUN_0124c030(auStack_b0,auStack_98);
          iVar3 = FUN_0123db50(auStack_a8,local_a0);
          if (iVar3 == 1) {
            if ((((DAT_05233970 <= (int)local_88) && ((int)local_88 <= DAT_05233980)) &&
                (DAT_05233974 <= (int)local_84)) &&
               (((int)local_84 <= DAT_05233984 &&
                (uVar2 = (local_84 & 0x1fffffe) * 0x80 + ((int)local_88 >> 1), uVar2 >> 0xf == 0))))
            {
              lVar5 = param_2 + 0x1b060 + (ulong)(uVar2 >> 5) * 4;
              *(uint *)(lVar5 + 8) =
                   *(uint *)(lVar5 + 8) & (1 << (ulong)(local_88 >> 1 & 0x1f) ^ 0xffffffffU);
            }
            local_64 = 6;
            if (((DAT_05233970 <= (int)local_88) && ((int)local_88 <= DAT_05233980)) &&
               ((DAT_05233974 <= (int)local_84 &&
                (((int)local_84 <= DAT_05233984 &&
                 (uVar2 = (local_84 & 0x1fffffe) * 0x80 + ((int)local_88 >> 1), uVar2 >> 0xf == 0)))
                ))) {
              lVar5 = param_2 + 0x1a058 + (ulong)(uVar2 >> 5) * 4;
              *(uint *)(lVar5 + 8) =
                   *(uint *)(lVar5 + 8) & (1 << (ulong)(local_88 >> 1 & 0x1f) ^ 0xffffffffU);
            }
            uVar4 = FUN_01a4f798(&local_80,0,auStack_90);
            if ((uVar4 & 1) != 0) {
              local_68 = 1;
              local_64 = 0;
              lVar5 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0xd0);
              if (lVar5 != 0) {
                FUN_012e5af4(lVar5,auStack_90);
              }
            }
            iVar7 = iVar7 + -1;
          }
        }
      }
    } while ((1 < uVar6) && (uVar6 = uVar6 - 1, 0 < iVar7));
  }
  return;
}


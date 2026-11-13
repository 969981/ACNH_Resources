
/* WARNING: Removing unreachable block (ram,0x0121bafc) */

void FUN_0121ba20(undefined4 param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined *local_88;
  uint local_80;
  uint uStack_7c;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  byte local_68;
  
  uStack_6c = *(undefined4 *)(PTR_DAT_04bbbf90 + 0xc);
  local_70 = 1;
  local_68 = FUN_017baf44();
  local_68 = local_68 & 1;
  local_78 = PTR_DAT_04bb6268 + 0x10;
  lVar7 = FUN_01a4fa00(&local_78);
  uVar8 = *(uint *)(lVar7 + 0x14);
  uVar1 = *(int *)(lVar7 + 0x24) + 1;
  if (uVar1 != uVar8) {
    uVar4 = *(uint *)(lVar7 + 0x10);
    puVar2 = PTR_DAT_04bbbad8 + 0x10;
    uVar6 = uVar4;
    uVar9 = uVar4;
    do {
      if ((((((uVar9 | uVar8) & 1) == 0) &&
           (DAT_05233970 <= (int)uVar9 && (int)uVar9 <= DAT_05233980)) &&
          (DAT_05233974 <= (int)uVar8)) &&
         ((((int)uVar8 <= DAT_05233984 &&
           (uVar3 = (uVar8 & 0x1fffffe) * 0x80 + ((int)uVar9 >> 1), uVar3 >> 0xf == 0)) &&
          ((*(uint *)(param_2 + 0x270c8 + (ulong)(uVar3 >> 5) * 4) >> (ulong)(uVar9 >> 1 & 0x1f) & 1
           ) != 0)))) {
        local_88 = puVar2;
        local_80 = uVar9;
        uStack_7c = uVar8;
        FUN_01a50240(&local_90,&local_78,0,&local_88);
        lVar5 = DAT_05150358;
        if (((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
           ((*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0 &&
            ((((*(long *)(DAT_05150358 + 0x488) != 0 &&
               (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)) &&
              (*(long *)(DAT_05150358 + 0x2b0) != 0)) &&
             (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)))))) {
          uVar6 = FUN_0277d6c4(&local_90);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar5 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
            local_a0 = local_90;
            uStack_9c = uStack_8c;
            FUN_01201bc0(&local_98,&local_a0,param_1);
            local_90 = local_98;
            uStack_8c = uStack_94;
            FUN_011f3390(&local_78,0,&local_90,&local_88);
          }
        }
        uVar6 = *(uint *)(lVar7 + 0x10);
      }
      if ((int)uVar9 < *(int *)(lVar7 + 0x20)) {
        uVar9 = uVar9 + 1;
      }
      else {
        uVar8 = uVar8 + 1;
        uVar9 = uVar6;
      }
    } while (uVar4 != uVar9 || uVar1 != uVar8);
  }
  return;
}


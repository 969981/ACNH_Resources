
/* WARNING: Removing unreachable block (ram,0x01377110) */
/* WARNING: Removing unreachable block (ram,0x013770fc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_01376f10(undefined4 param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined *local_b0;
  int local_a8;
  int local_a4;
  undefined *local_a0;
  undefined *local_98;
  int local_90;
  int iStack_8c;
  undefined *local_88;
  int local_80;
  int iStack_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar7 = PTR_DAT_04bb27c8;
  local_74 = param_1;
  lVar9 = *(long *)PTR_DAT_04bb5c90;
  if (((*(int *)(param_2 + 8) < *(int *)(lVar9 + 0x28) ||
        *(int *)(lVar9 + 0x38) < *(int *)(param_2 + 8)) ||
      (*(int *)(param_2 + 0xc) < *(int *)(lVar9 + 0x2c))) ||
     (*(int *)(lVar9 + 0x3c) < *(int *)(param_2 + 0xc))) {
    uVar13 = 1;
    switch(param_1) {
    case 0:
    case 2:
      break;
    case 1:
    case 3:
      local_98 = (undefined *)((ulong)local_98 & 0xffffffff00000000);
      local_a0 = (undefined *)0x0;
      local_a0 = (undefined *)0x20000010;
      uVar8 = FUN_0094b728(*(long *)PTR_DAT_04bb27c8 + 0x28,param_2,&local_a0);
      puVar6 = PTR_DAT_04bb27a8;
      if ((uVar8 & 1) == 0) {
        iVar2 = *(int *)(param_2 + 0xc);
        iVar3 = *(int *)(param_2 + 8) + -1;
        local_a4 = iVar2 + -1;
        local_90 = iVar3;
        iStack_8c = local_a4;
        local_80 = *(int *)(param_2 + 8) + 1;
        iStack_7c = iVar2 + 1;
        local_b0 = PTR_DAT_04bb2010 + 0x10;
        local_a0 = PTR_DAT_04bbc1a0 + 0x10;
        local_98 = local_b0;
        local_88 = local_b0;
        local_a8 = iVar3;
        do {
          if ((*(long *)(*(long *)puVar6 + 0x38) != 0) &&
             (lVar9 = *(long *)(*(long *)(*(long *)puVar6 + 0x38) + 0xb0), lVar9 != 0)) {
            fVar14 = (float)local_a8 * 0.5;
            uVar1 = *(uint *)(lVar9 + 0x18);
            uVar11 = 0;
            if (fVar14 != (float)(int)fVar14) {
              uVar11 = (uint)(fVar14 < 0.0);
            }
            fVar15 = (float)local_a4 * 0.5;
            uVar12 = 0;
            if (fVar15 != (float)(int)fVar15) {
              uVar12 = (uint)(fVar15 < 0.0);
            }
            uVar4 = ((int)fVar14 - uVar11) - *(int *)(lVar9 + 0x28);
            uVar5 = ((int)fVar15 - uVar12) - *(int *)(lVar9 + 0x2c);
            if ((uVar4 < uVar1 && uVar5 <= *(uint *)(lVar9 + 0x1c)) &&
                (uVar1 <= uVar4 || *(uint *)(lVar9 + 0x1c) != uVar5)) {
              uVar4 = uVar4 + uVar5 * uVar1;
              lVar10 = *(long *)(lVar9 + 0x38);
joined_r0x013771d4:
              if (lVar10 != 0) {
                if (*(uint *)(lVar9 + 0x30) <= uVar4) {
                  uVar4 = 0;
                }
                if ((*(byte *)(lVar10 + (long)(int)uVar4 * 0x68 + 0xd) & 1) != 0)
                goto switchD_01376fa0_default;
              }
            }
            else if (*(char *)(lVar9 + 0x88) != '\0') {
              uVar11 = ((int)fVar14 - uVar11) - *(int *)(lVar9 + 0x98);
              uVar1 = ((int)fVar15 - uVar12) - *(int *)(lVar9 + 0x9c);
              if (uVar11 < *(uint *)(lVar9 + 0xa0) && uVar1 < *(uint *)(lVar9 + 0xa4)) {
                uVar4 = uVar11 + *(uint *)(lVar9 + 0xa0) * uVar1 + *(int *)(lVar9 + 0x8c);
                lVar10 = *(long *)(lVar9 + 0x38);
                goto joined_r0x013771d4;
              }
            }
          }
          local_70 = 0;
          uStack_68 = 0;
          uStack_68 = 0x2d00000000;
          local_70 = 0x2000;
          uVar8 = FUN_0094b728(*(long *)puVar7 + 0x28,&local_b0,&local_70);
          if ((uVar8 & 1) != 0) goto switchD_01376fa0_default;
          if (local_a8 < local_80) {
            local_a8 = local_a8 + 1;
          }
          else {
            local_a4 = local_a4 + 1;
            local_a8 = local_90;
          }
        } while ((iVar3 != local_a8) || (iVar2 + 2 != local_a4));
        uVar13 = 1;
      }
      break;
    default:
      goto switchD_01376fa0_default;
    }
  }
  else {
switchD_01376fa0_default:
    uVar13 = 0;
  }
  return uVar13;
}


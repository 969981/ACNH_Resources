
/* WARNING: Removing unreachable block (ram,0x0137a834) */
/* WARNING: Removing unreachable block (ram,0x0137a5a0) */
/* WARNING: Removing unreachable block (ram,0x0137a5b0) */
/* WARNING: Removing unreachable block (ram,0x0137a844) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_0137a560(ushort *param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  undefined8 local_c8;
  long lStack_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  int local_a0;
  int local_9c;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined *local_70;
  byte local_68;
  
  puVar3 = PTR_DAT_04bb27a8;
  lVar5 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0xa8);
  if (lVar5 != 0) {
    local_98 = PTR_DAT_04bb2018 + 0x10;
    fVar12 = (float)*(int *)(param_2 + 0xc) * 0.5;
    fVar11 = (float)*(int *)(param_2 + 8) * 0.5;
    uVar7 = 0;
    if (fVar11 != (float)(int)fVar11) {
      uVar7 = (uint)(fVar11 < 0.0);
    }
    iVar10 = (int)fVar11 - uVar7;
    uVar7 = 0;
    if (fVar12 != (float)(int)fVar12) {
      uVar7 = (uint)(fVar12 < 0.0);
    }
    iVar2 = (int)fVar12 - uVar7;
    local_90 = (undefined *)CONCAT44(iVar2,iVar10);
    if (((*(int *)(lVar5 + 0x18) <= iVar10 && iVar10 <= *(int *)(lVar5 + 0x28)) &&
        (*(int *)(lVar5 + 0x1c) <= iVar2)) && (iVar2 <= *(int *)(lVar5 + 0x2c))) {
      FUN_01309ec4(&local_b8,lVar5,&local_98);
      if (local_b0._4_1_ == '\x03') {
        return 0;
      }
    }
  }
  puVar4 = PTR_DAT_04bb27c8;
  local_90 = (undefined *)((ulong)local_90 & 0xffffffff00000000);
  local_98 = (undefined *)0x0;
  local_b8 = (undefined8 *)CONCAT44(local_b8._4_4_,5);
  local_98 = (undefined *)0x20;
  uVar6 = FUN_0094b728(*(long *)PTR_DAT_04bb27c8 + 0x28,param_2,&local_98);
  if ((uVar6 & 1) != 0) {
    local_70 = (undefined *)((ulong)local_70 & 0xffffffff00000000);
    uVar6 = FUN_0125efa4(&local_b8,&local_70);
    if ((((uVar6 & 1) != 0) &&
        (iVar10 = (int)((float)(int)(local_b8._0_4_ + -17.5) / 5.0) -
                  (uint)(local_b8._0_4_ + -17.5 < 0.0),
        iVar10 <= *(int *)(param_2 + 8) && *(int *)(param_2 + 8) <= iVar10 + 7)) &&
       (iVar10 = (int)((float)(int)((float)local_b0 + -7.5) / 5.0) -
                 (uint)((float)local_b0 + -7.5 < 0.0),
       iVar10 <= *(int *)(param_2 + 0xc) && *(int *)(param_2 + 0xc) <= iVar10 + 3)) {
      return 0;
    }
  }
  local_88 = 0;
  local_78 = 0;
  uVar6 = FUN_01379b20(&local_98);
  if ((uVar6 & 1) == 0) {
    iVar10 = *(int *)(param_2 + 8);
  }
  else {
    iVar10 = *(int *)(param_2 + 8);
    if (((int)local_88 <= iVar10) && (iVar10 <= (int)local_78)) {
      if ((local_88._4_4_ <= *(int *)(param_2 + 0xc)) && (*(int *)(param_2 + 0xc) <= local_78._4_4_)
         ) {
        return 0;
      }
    }
  }
  iVar2 = iVar10 - (uint)*param_1;
  if (iVar2 + 1 < 0) {
    return 0;
  }
  if (*(int *)(param_1 + 6) <= iVar2 + 1) {
    return 0;
  }
  iVar8 = *(int *)(param_2 + 0xc);
  iVar9 = iVar8 - (uint)param_1[1];
  if (iVar9 + 1 < 0) {
    return 0;
  }
  if (*(int *)(param_1 + 8) <= iVar9 + 1) {
    return 0;
  }
  if (iVar2 < 0) {
    return 0;
  }
  if (*(int *)(param_1 + 6) <= iVar2) {
    return 0;
  }
  if (iVar9 < 0) {
    return 0;
  }
  if (*(int *)(param_1 + 8) <= iVar9) {
    return 0;
  }
  local_98 = (undefined *)((ulong)local_98 & 0xffffffff00000000);
  iVar2 = iVar8 + 2;
  local_c8 = *(undefined8 *)(*(long *)puVar3 + 0x1f8);
  lStack_c0 = *(long *)puVar4 + 0x28;
  iVar9 = iVar10;
  while( true ) {
    bVar1 = *(byte *)(*(long *)(param_1 + 0x10) +
                      (long)(int)((iVar9 - (uint)*param_1) +
                                 *(int *)(param_1 + 6) * (iVar8 - (uint)param_1[1])) * 0x28 + 6);
    if (4 < bVar1 || (1 << (ulong)(bVar1 & 0x1f) & 0x13U) == 0) {
      return 0;
    }
    uVar6 = FUN_035aa210(iVar9,iVar8,&local_c8);
    if ((uVar6 & 1) == 0) break;
    if (iVar10 < iVar9) {
      iVar8 = iVar8 + 1;
      iVar9 = iVar10;
    }
    else {
      iVar9 = iVar9 + 1;
    }
    if ((iVar10 == iVar9) && (iVar2 == iVar8)) {
      iVar2 = *(int *)(param_2 + 8);
      iVar10 = *(int *)(param_2 + 0xc);
      local_88 = *(undefined8 *)(param_2 + 8);
      local_70 = PTR_DAT_04bb5ba0 + 0x10;
      local_78 = CONCAT44(iVar10 + 1,iVar2 + 1);
      local_68 = 0;
      local_98 = PTR_DAT_04bbc1a0 + 0x10;
      local_a8 = PTR_DAT_04bb2010 + 0x10;
      local_b8 = &local_90;
      local_b0 = &local_80;
      lVar5 = *(long *)puVar4;
      if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0xa8), lVar5 != 0)) {
        local_a0 = iVar2;
        local_9c = iVar10;
        local_90 = local_a8;
        local_80 = local_a8;
        FUN_00974bc8(lVar5,&local_a8,&local_70);
        if (((local_68 >> 4 & 1) != 0) && ((byte)(local_68 & 2 | (local_68 & 1) << 3) == 10)) {
          if (local_a0 < *(int *)(local_b0 + 1)) {
            local_a0 = local_a0 + 1;
          }
          else {
            local_9c = local_9c + 1;
            local_a0 = *(int *)(local_b8 + 1);
          }
          iVar10 = iVar10 + 2;
          if ((iVar2 == local_a0) && (iVar10 == local_9c)) {
            return 1;
          }
          FUN_00977020(&local_a8,&local_70);
          if (((local_68 >> 4 & 1) != 0) &&
             (uVar7 = (local_68 & 0xaaaaaaaa) >> 1 | (local_68 & 0x55555555) << 1,
             ((((uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2) & 0xf ^ 0xffffffff) & 9) == 0
             )) {
            if (local_a0 < *(int *)(local_b0 + 1)) {
              local_a0 = local_a0 + 1;
            }
            else {
              local_9c = local_9c + 1;
              local_a0 = *(int *)(local_b8 + 1);
            }
            if ((iVar2 == local_a0) && (iVar10 == local_9c)) {
              return 1;
            }
            FUN_00977020(&local_a8,&local_70);
            if (((local_68 ^ 0xff) & 0x16) == 0) {
              if (local_a0 < *(int *)(local_b0 + 1)) {
                local_a0 = local_a0 + 1;
              }
              else {
                local_9c = local_9c + 1;
                local_a0 = *(int *)(local_b8 + 1);
              }
              if ((iVar2 == local_a0) && (iVar10 == local_9c)) {
                return 1;
              }
              FUN_00977020(&local_a8,&local_70);
              if (((local_68 >> 4 & 1) != 0) && ((local_68 & 4 | local_68 >> 3 & 1) == 5)) {
                do {
                  if (local_a0 < *(int *)(local_b0 + 1)) {
                    local_a0 = local_a0 + 1;
                  }
                  else {
                    local_9c = local_9c + 1;
                    local_a0 = *(int *)(local_b8 + 1);
                  }
                  if (iVar2 == local_a0 && iVar10 == local_9c) {
                    return 1;
                  }
                  FUN_00977020(&local_a8,&local_70);
                } while (((local_68 >> 4 & 1) != 0) &&
                        ((byte)(local_68 & 2 | (local_68 & 1) << 3) == 10));
              }
            }
          }
        }
      }
      return 0;
    }
  }
  return 0;
}


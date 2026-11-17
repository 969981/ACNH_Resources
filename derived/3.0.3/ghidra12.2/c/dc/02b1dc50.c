
/* WARNING: Removing unreachable block (ram,0x02b1dd48) */
/* WARNING: Removing unreachable block (ram,0x02b1dca0) */
/* WARNING: Removing unreachable block (ram,0x02b1dc90) */
/* WARNING: Removing unreachable block (ram,0x02b1dcf4) */
/* WARNING: Removing unreachable block (ram,0x02b1dd78) */

byte FUN_02b1dc50(undefined8 param_1,uint *param_2,long param_3,uint param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  undefined4 local_b0 [3];
  int local_a4;
  long local_88;
  long local_80;
  undefined *local_78;
  uint local_70;
  uint local_6c;
  int local_64;
  
  puVar4 = PTR_DAT_04bb27c8;
  local_b0[0] = 0;
  puVar1 = &DAT_05636dd8;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
    puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0x148);
  }
  if (puVar1[1] == 0) {
    return 1;
  }
  if ((*(byte *)(param_3 + 8) >> 1 & 1) == 0) {
    lVar8 = *(long *)(param_3 + 0xc0);
    if (lVar8 != 0) {
      if ((*(long *)(lVar8 + 0xd8) != 0) && (*(char *)(*(long *)(lVar8 + 0xd8) + 0x48) != '\0')) {
        local_b0[0] = 2;
        lVar8 = param_3 + 0x6a8;
        goto LAB_02b1dd78;
      }
      local_b0[0] = 4;
      if ((*(long *)(lVar8 + 0x90) != 0) && (*(char *)(*(long *)(lVar8 + 0x90) + 0x48) != '\0'))
      goto LAB_02b1dd5c;
    }
    lVar8 = param_3 + 0x90;
  }
  else {
LAB_02b1dd5c:
    local_b0[0] = 4;
    lVar8 = param_3 + 0x2b8;
LAB_02b1dd78:
    lVar8 = lVar8 + 0x28;
  }
  local_88 = lVar8 + 8;
  local_80 = lVar8 + 0x18;
  local_70 = *(uint *)(lVar8 + 0x10);
  local_6c = *(uint *)(lVar8 + 0x14);
  local_78 = PTR_DAT_04bb2010 + 0x10;
  uVar2 = *(uint *)(lVar8 + 0x10);
  uVar9 = *(int *)(lVar8 + 0x24) + 1;
  if ((param_4 & 1) == 0) {
    if (uVar2 == local_70 && uVar9 == local_6c) goto LAB_02b1e040;
    uVar10 = 0;
    do {
      uVar7 = FUN_02a7c2e0(param_3,&local_78);
      if (((((uVar7 & 1) != 0) && (FUN_02a58f80(local_b0,puVar1,&local_78), local_a4 != 0)) &&
          ((uVar6 = FUN_02a8ed80(local_b0), uVar6 != 4 ||
           ((((((lVar8 = *(long *)puVar4, lVar8 != 0 &&
                (lVar8 = *(long *)(lVar8 + 0xa8), lVar8 != 0)) && (-1 < (int)local_70)) &&
              ((-1 < (int)local_6c && (local_70 < *(uint *)(lVar8 + 0x38))))) &&
             (local_6c < *(uint *)(lVar8 + 0x3c))) &&
            (((uVar3 = local_70 + *(uint *)(lVar8 + 0x38) * local_6c,
              uVar3 < *(uint *)(lVar8 + 0x68) && (*(long *)(lVar8 + 0x70) != 0)) &&
             (local_64 = 3,
             (*(uint *)(*(long *)(lVar8 + 0x70) + (long)(int)uVar3 * 4) >> 3 & 1) != 0)))))))) &&
         (uVar6 < 7)) {
        uVar10 = 1 << (ulong)(uVar6 & 0x1f) | uVar10;
      }
      if ((int)local_70 < *(int *)(local_80 + 8)) {
        local_70 = local_70 + 1;
      }
      else {
        local_6c = local_6c + 1;
        local_70 = *(uint *)(local_88 + 8);
      }
    } while (uVar2 != local_70 || uVar9 != local_6c);
  }
  else {
    if (uVar2 == local_70 && uVar9 == local_6c) {
LAB_02b1e040:
      bVar5 = true;
      goto LAB_02b1e15c;
    }
    uVar10 = 0;
    do {
      uVar7 = FUN_02a7c2e0(param_3,&local_78);
      if ((((((uVar7 & 1) != 0) && (FUN_02a58f80(local_b0,puVar1,&local_78), local_a4 != 0)) &&
           (local_64 = local_a4, local_a4 != *(int *)(param_3 + 0xc))) &&
          ((uVar6 = FUN_02a8ed80(local_b0), uVar6 != 4 ||
           (((lVar8 = *(long *)puVar4, lVar8 != 0 && (lVar8 = *(long *)(lVar8 + 0xa8), lVar8 != 0))
            && (((-1 < (int)local_70 &&
                 ((-1 < (int)local_6c && (local_70 < *(uint *)(lVar8 + 0x38))))) &&
                ((local_6c < *(uint *)(lVar8 + 0x3c) &&
                 (((uVar3 = local_70 + *(uint *)(lVar8 + 0x38) * local_6c,
                   uVar3 < *(uint *)(lVar8 + 0x68) && (*(long *)(lVar8 + 0x70) != 0)) &&
                  (local_64 = 3,
                  (*(uint *)(*(long *)(lVar8 + 0x70) + (long)(int)uVar3 * 4) >> 3 & 1) != 0)))))))))
           ))) && (uVar6 < 7)) {
        uVar10 = 1 << (ulong)(uVar6 & 0x1f) | uVar10;
      }
      if ((int)local_70 < *(int *)(local_80 + 8)) {
        local_70 = local_70 + 1;
      }
      else {
        local_6c = local_6c + 1;
        local_70 = *(uint *)(local_88 + 8);
      }
    } while (uVar2 != local_70 || uVar9 != local_6c);
  }
  bVar5 = uVar10 == 0;
  if ((param_2 != (uint *)0x0) && (uVar10 != 0)) {
    *param_2 = 0;
    uVar9 = (uint)DAT_05628428;
    if ((6 < uVar9) || ((uVar10 >> (ulong)(uVar9 & 0x1f) & 1) == 0)) {
      uVar9 = 2;
      if (DAT_0562842c == '\0') {
        uVar9 = 0;
      }
      if ((6 < uVar9) || ((uVar10 >> (ulong)uVar9 & 1) == 0)) {
        uVar9 = 3;
        if (DAT_05628430 == '\0') {
          uVar9 = 0;
        }
        if ((6 < uVar9) || ((uVar10 >> (ulong)uVar9 & 1) == 0)) {
          uVar9 = 4;
          if (DAT_05628434 == '\0') {
            uVar9 = 0;
          }
          if ((6 < uVar9) || ((uVar10 >> (ulong)uVar9 & 1) == 0)) {
            uVar9 = 5;
            if (DAT_05628438 == '\0') {
              uVar9 = 0;
            }
            if ((6 < uVar9) || ((uVar10 >> (ulong)uVar9 & 1) == 0)) {
              uVar9 = 6;
              if (DAT_0562843c == '\0') {
                uVar9 = 0;
              }
              if ((6 < uVar9) || ((uVar10 >> (ulong)uVar9 & 1) == 0)) goto LAB_02b1e15c;
            }
          }
        }
      }
    }
    *param_2 = uVar9;
  }
LAB_02b1e15c:
  return bVar5 ^ 1;
}


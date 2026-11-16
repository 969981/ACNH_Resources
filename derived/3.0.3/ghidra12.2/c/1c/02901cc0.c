
int FUN_02901cc0(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined4 local_78 [2];
  undefined **local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  uint *local_60;
  uint local_54;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_2);
  lVar9 = *(long *)puVar1;
  if (lVar9 == 0) {
    return -1;
  }
  lVar10 = *(long *)(lVar10 + 0x57e58);
  uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if (*(uint *)(lVar10 + 0x1d8) <= uVar2) {
    return -1;
  }
  if (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar2 * 8) == 0) {
    return -1;
  }
  local_60 = (uint *)0x0;
  local_68 = *param_2;
  uStack_64 = param_2[1];
  local_70 = &PTR_FUN_04a36b50;
  uVar2 = FUN_0277d6c4(&local_68);
  if (*(long *)puVar1 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar2 = FUN_0277d6c4(param_2);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar9 + 0x1d8)) &&
         (puVar6 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar2 * 8),
         puVar6 != (uint *)0x0)) {
        local_54 = 0;
        uVar2 = *puVar6;
        local_60 = puVar6;
        if ((uVar2 != 0) && (puVar6 != (uint *)(ulong)uVar2)) {
          puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar2);
          local_54 = 0;
          if (*puVar7 != 0) {
            uVar2 = puVar7[1];
            if ((uVar2 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
              lVar9 = 0xc;
              if (*(char *)((long)puVar7 + 10) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)puVar7 + lVar9 + (ulong)(ushort)puVar7[2] * 8;
              if (lVar9 != 0) {
                uVar3 = 0;
                if ((ulong)uVar2 != 0) {
                  uVar3 = (uint)((ulong)((long)puVar6 - lVar9) / (ulong)uVar2);
                }
                if (*puVar7 <= uVar3) {
                  uVar3 = 0xffffffff;
                }
                if ((uVar3 < DAT_05326ec0) &&
                   (local_54 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2),
                   local_54 < 0xbd)) goto LAB_02901e70;
              }
            }
            local_54 = 0;
          }
        }
        goto LAB_02901e70;
      }
    }
  }
  local_54 = 0xbc;
LAB_02901e70:
  local_78[0] = 0xb8;
  if (local_54 == 0xb8) {
    FUN_01b0b124(local_78,&local_70);
    lVar9 = *(long *)puVar1;
    uVar2 = FUN_0277d6c4(local_78);
    if (*(long *)puVar1 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
        iVar8 = 0;
        uVar2 = 0;
        lVar9 = *(long *)puVar1;
        do {
          lVar10 = param_1 + ((long)((ulong)uVar2 << 0x20) >> 0x1d);
          uVar3 = FUN_0277d6c4(lVar10);
          lVar5 = *(long *)puVar1;
          if (lVar5 != 0) {
            lVar9 = *(long *)(lVar9 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
            if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
              uVar4 = FUN_0277d7b4(lVar10,local_78);
              if ((uVar4 & 1) != 0) {
                return iVar8;
              }
              lVar5 = *(long *)puVar1;
            }
          }
          iVar8 = iVar8 + 1;
          uVar2 = uVar2 + 1;
          lVar9 = lVar5;
        } while (iVar8 != 0x40);
        return -1;
      }
    }
  }
  return -1;
}


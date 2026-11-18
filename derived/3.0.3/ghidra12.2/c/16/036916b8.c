
uint FUN_036916b8(long param_1,undefined2 *param_2,undefined4 *param_3,long param_4,int param_5)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ushort uVar7;
  undefined4 uVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_1722 [2];
  undefined4 local_1720 [1448];
  undefined **local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  uint *local_70;
  int local_68;
  uint local_64;
  
  local_68 = param_5;
  uVar4 = FUN_0277d7b4(param_2,param_3);
  puVar3 = PTR_DAT_04bb43c0;
  uVar4 = uVar4 ^ 1;
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(param_3);
  lVar11 = *(long *)puVar3;
  if (lVar11 == 0) {
LAB_03691888:
    if ((*(int *)(param_4 + 0x44) == 0) &&
       ((local_68 == 2 && (uVar5 = *(uint *)(param_4 + 0x4c), uVar5 != 0xffffffff)))) {
      lVar11 = param_1 + 0x698 + (ulong)uVar5 * 0xd8;
      if (0x25 < uVar5) {
        lVar11 = param_1 + 0x698;
      }
      *param_2 = *(undefined2 *)(lVar11 + 0x5c);
      *(undefined1 *)(param_2 + 1) = *(undefined1 *)(lVar11 + 0x5e);
      *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)(lVar11 + 0x5f);
      *(undefined4 *)(param_2 + 2) = *(undefined4 *)(lVar11 + 0x60);
      uVar4 = FUN_0277d7b4((undefined2 *)(lVar11 + 0x5c),lVar11 + 0xa4);
      uVar4 = uVar4 ^ 1;
      goto LAB_03691b80;
    }
    if ((*(int *)(param_4 + 0x44) == 1) && (uVar5 = *(uint *)(param_4 + 0x4c), uVar5 != 0xffffffff))
    {
      if (local_68 == 0) {
        lVar11 = param_1 + 0x698 + (ulong)uVar5 * 0xd8;
        if (0x25 < uVar5) {
          lVar11 = param_1 + 0x698;
        }
        *param_2 = *(undefined2 *)(lVar11 + 0x4c);
        *(undefined1 *)(param_2 + 1) = *(undefined1 *)(lVar11 + 0x4e);
        *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)(lVar11 + 0x4f);
        uVar8 = *(undefined4 *)(lVar11 + 0x50);
      }
      else {
        if (local_68 != 1) goto LAB_03691b60;
        lVar11 = param_1 + 0x698 + (ulong)uVar5 * 0xd8;
        if (0x25 < uVar5) {
          lVar11 = param_1 + 0x698;
        }
        *param_2 = *(undefined2 *)(lVar11 + 0x44);
        *(undefined1 *)(param_2 + 1) = *(undefined1 *)(lVar11 + 0x46);
        *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)(lVar11 + 0x47);
        uVar8 = *(undefined4 *)(lVar11 + 0x48);
      }
      *(undefined4 *)(param_2 + 2) = uVar8;
      uVar4 = 1;
      goto LAB_03691b80;
    }
  }
  else {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((*(uint *)(lVar12 + 0x1d8) <= uVar5) ||
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_03691888;
    local_70 = (uint *)0x0;
    local_78 = *param_3;
    uStack_74 = param_3[1];
    local_80 = &PTR_FUN_04a36b50;
    uVar5 = FUN_0277d6c4(&local_78);
    if (*(long *)puVar3 == 0) {
LAB_0369194c:
      puVar10 = (uint *)0x0;
      uVar7 = 0xbc;
      bVar2 = true;
    }
    else {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((*(uint *)(lVar11 + 0x1d8) <= uVar5) ||
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_0369194c;
      lVar11 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(param_3);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((*(uint *)(lVar11 + 0x1d8) <= uVar5) ||
         (puVar10 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8),
         puVar10 == (uint *)0x0)) goto LAB_0369194c;
      uVar7 = 0;
      uVar5 = *puVar10;
      local_70 = puVar10;
      if ((uVar5 == 0) || (puVar10 == (uint *)(ulong)uVar5)) {
LAB_03691bac:
        bVar2 = false;
      }
      else {
        puVar9 = (uint *)((long)puVar10 - (long)(ulong)uVar5);
        uVar7 = 0;
        if (*puVar9 == 0) goto LAB_03691bac;
        uVar5 = puVar9[1];
        if ((uVar5 == 0) || ((ulong)(ushort)puVar9[2] == 0)) {
LAB_03691ba8:
          uVar7 = 0;
          goto LAB_03691bac;
        }
        lVar11 = 0xc;
        if (*(char *)((long)puVar9 + 10) != '\0') {
          lVar11 = 0x1c;
        }
        lVar11 = (long)puVar9 + lVar11 + (ulong)(ushort)puVar9[2] * 8;
        if (lVar11 == 0) goto LAB_03691ba8;
        uVar1 = 0;
        if ((ulong)uVar5 != 0) {
          uVar1 = (uint)((ulong)((long)puVar10 - lVar11) / (ulong)uVar5);
        }
        if (*puVar9 <= uVar1) {
          uVar1 = 0xffffffff;
        }
        if (DAT_05326ec0 <= uVar1) goto LAB_03691ba8;
        uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2);
        if (uVar7 < 0xbd) goto LAB_03691bac;
        bVar2 = false;
        uVar7 = 0;
      }
    }
    if (uVar7 == 0xa2) {
LAB_03691974:
      uVar4 = 0;
      goto LAB_03691b80;
    }
    if (*(uint *)(param_4 + 0x44) < 2) {
      local_1720[0] = 0xac;
      if (bVar2) {
        local_64 = 0xbc;
      }
      else {
        uVar5 = *puVar10;
        local_64 = 0;
        if ((uVar5 != 0) && (puVar10 != (uint *)(ulong)uVar5)) {
          puVar9 = (uint *)((long)puVar10 - (long)(ulong)uVar5);
          local_64 = 0;
          if (*puVar9 != 0) {
            uVar5 = puVar9[1];
            if ((uVar5 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
              lVar11 = 0xc;
              if (*(char *)((long)puVar9 + 10) != '\0') {
                lVar11 = 0x1c;
              }
              lVar11 = (long)puVar9 + lVar11 + (ulong)(ushort)puVar9[2] * 8;
              if (lVar11 != 0) {
                uVar1 = 0;
                if ((ulong)uVar5 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar10 - lVar11) / (ulong)uVar5);
                }
                if (*puVar9 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326ec0) &&
                   (local_64 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2),
                   local_64 < 0xbd)) goto LAB_03691a64;
              }
            }
            local_64 = 0;
          }
        }
      }
LAB_03691a64:
      if (local_64 == 0xac) {
        FUN_01b086f4(auStack_1722,&local_80);
        FUN_007e4920(local_1720,auStack_1722);
        uVar6 = FUN_007e4bb0(local_1720);
        if (((uVar6 & 1) != 0) && (uVar6 = FUN_007e85b0(local_1720), (uVar6 & 1) != 0))
        goto LAB_03691974;
      }
      uVar7 = 0;
      if (!bVar2) {
        uVar5 = *puVar10;
        uVar7 = 0;
        if ((uVar5 != 0) && (puVar10 != (uint *)(ulong)uVar5)) {
          puVar9 = (uint *)((long)puVar10 - (long)(ulong)uVar5);
          uVar7 = 0;
          if (*puVar9 != 0) {
            uVar5 = puVar9[1];
            if ((uVar5 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
              lVar11 = 0xc;
              if (*(char *)((long)puVar9 + 10) != '\0') {
                lVar11 = 0x1c;
              }
              lVar11 = (long)puVar9 + lVar11 + (ulong)(ushort)puVar9[2] * 8;
              if (lVar11 != 0) {
                uVar1 = 0;
                if ((ulong)uVar5 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar10 - lVar11) / (ulong)uVar5);
                }
                if (*puVar9 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326c20) &&
                   (uVar7 = *(ushort *)(DAT_05326c28 + (long)(int)uVar1 * 2), uVar7 < 0x15))
                goto LAB_03691b40;
              }
            }
            uVar7 = 0;
          }
        }
      }
LAB_03691b40:
      if ((uVar7 == 0) && (local_68 != 2)) goto LAB_03691974;
    }
  }
LAB_03691b60:
  *param_2 = *(undefined2 *)param_3;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)((long)param_3 + 2);
  *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)((long)param_3 + 3);
  *(undefined4 *)(param_2 + 2) = param_3[1];
LAB_03691b80:
  return uVar4 & 1;
}



uint FUN_022b2214(long param_1,undefined4 *param_2,int *param_3,undefined8 param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  long lVar12;
  long lVar13;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined1 local_5c [4];
  uint local_58;
  undefined4 local_54;
  
  puVar1 = PTR_DAT_04bc0660;
  uVar4 = *(undefined1 *)((long)param_2 + 2);
  *(undefined2 *)PTR_DAT_04bc0660 = *(undefined2 *)param_2;
  uVar5 = *(undefined1 *)((long)param_2 + 3);
  uVar3 = param_2[1];
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  *(undefined4 *)(puVar1 + 4) = uVar3;
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  local_5c[0] = 0;
  uVar6 = FUN_022b27d0(param_1,param_2,local_5c,param_3);
  puVar1 = PTR_DAT_04bb43c0;
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(param_2);
  lVar12 = *(long *)puVar1;
  if (lVar12 != 0) {
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      local_68 = 0;
      local_70 = *param_2;
      uStack_6c = param_2[1];
      uVar7 = FUN_0277d6c4(&local_70);
      if (*(long *)puVar1 == 0) {
LAB_022b2408:
        local_58 = 0xbc;
      }
      else {
        lVar12 = *(long *)(lVar12 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((*(uint *)(lVar12 + 0x1d8) <= uVar7) ||
           (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_022b2408;
        lVar12 = *(long *)PTR_DAT_04bc0428;
        uVar7 = FUN_0277d6c4(param_2);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((*(uint *)(lVar12 + 0x1d8) <= uVar7) ||
           (puVar10 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8),
           puVar10 == (uint *)0x0)) goto LAB_022b2408;
        local_58 = 0;
        uVar7 = *puVar10;
        if ((uVar7 != 0) && (puVar10 != (uint *)(ulong)uVar7)) {
          puVar11 = (uint *)((long)puVar10 - (long)(ulong)uVar7);
          local_58 = 0;
          if (*puVar11 != 0) {
            uVar7 = puVar11[1];
            if ((uVar7 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
              lVar12 = 0xc;
              if (*(char *)((long)puVar11 + 10) != '\0') {
                lVar12 = 0x1c;
              }
              lVar12 = (long)puVar11 + lVar12 + (ulong)(ushort)puVar11[2] * 8;
              if (lVar12 != 0) {
                uVar2 = 0;
                if ((ulong)uVar7 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar10 - lVar12) / (ulong)uVar7);
                }
                if (*puVar11 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < DAT_05326ec0) &&
                   (local_58 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2),
                   local_58 < 0xbd)) goto LAB_022b2414;
              }
            }
            local_58 = 0;
          }
        }
      }
LAB_022b2414:
      local_54 = 0x9c;
      lVar12 = *(long *)puVar1;
      uVar6 = uVar6 & local_58 != 0x9c;
    }
  }
  uVar7 = FUN_0277d6c4(param_2);
  lVar13 = *(long *)puVar1;
  if (lVar13 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      local_68 = 0;
      local_70 = *param_2;
      uStack_6c = param_2[1];
      uVar7 = FUN_0277d6c4(&local_70);
      if (*(long *)puVar1 == 0) {
LAB_022b25a0:
        local_58 = 0xbc;
      }
      else {
        lVar12 = *(long *)(lVar13 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((*(uint *)(lVar12 + 0x1d8) <= uVar7) ||
           (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_022b25a0;
        lVar12 = *(long *)PTR_DAT_04bc0428;
        uVar7 = FUN_0277d6c4(param_2);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((*(uint *)(lVar12 + 0x1d8) <= uVar7) ||
           (puVar10 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8),
           puVar10 == (uint *)0x0)) goto LAB_022b25a0;
        local_58 = 0;
        uVar7 = *puVar10;
        if ((uVar7 != 0) && (puVar10 != (uint *)(ulong)uVar7)) {
          puVar11 = (uint *)((long)puVar10 - (long)(ulong)uVar7);
          local_58 = 0;
          if (*puVar11 != 0) {
            uVar7 = puVar11[1];
            if ((uVar7 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
              lVar12 = 0xc;
              if (*(char *)((long)puVar11 + 10) != '\0') {
                lVar12 = 0x1c;
              }
              lVar12 = (long)puVar11 + lVar12 + (ulong)(ushort)puVar11[2] * 8;
              if (lVar12 != 0) {
                uVar2 = 0;
                if ((ulong)uVar7 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar10 - lVar12) / (ulong)uVar7);
                }
                if (*puVar11 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < DAT_05326ec0) &&
                   (local_58 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2),
                   local_58 < 0xbd)) goto LAB_022b25ac;
              }
            }
            local_58 = 0;
          }
        }
      }
LAB_022b25ac:
      local_54 = 0x9d;
      uVar6 = uVar6 & local_58 != 0x9d;
    }
  }
  if (DAT_04c487d4 == -1) {
    uVar7 = 0;
  }
  else {
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    uVar7 = *(uint *)(puVar1 + 4) & 1;
  }
  uVar6 = uVar6 & (uVar7 ^ 1);
  if (param_3 == (int *)0x0) {
    if ((uVar6 == 0) || (uVar8 = FUN_022b3080(param_1,param_2,0), (uVar8 & 1) == 0)) {
      lVar12 = FUN_0251b3b0(param_1 + 0x10,0);
      lVar13 = FUN_0251bdc4(param_1 + 0x10,0);
      uVar6 = 0;
      if ((lVar12 != 0) && (lVar13 != 0)) {
        uVar6 = FUN_022ad160(param_1,param_2,lVar12,lVar13 + 4,0,param_4,0);
      }
    }
    else {
      uVar6 = 1;
    }
    goto LAB_022b27b0;
  }
  iVar9 = *param_3;
  if (iVar9 == 1) {
    uVar8 = FUN_022b3080(param_1,param_2,1);
    if ((uVar8 & 1) != 0) {
      iVar9 = *param_3;
      goto LAB_022b264c;
    }
    *param_3 = 3;
  }
  else {
LAB_022b264c:
    if (iVar9 == 2) {
      uVar6 = 0;
      goto LAB_022b27b0;
    }
  }
  if (uVar6 == 0) {
    lVar12 = FUN_0251b3b0(param_1 + 0x10,0);
    lVar13 = FUN_0251bdc4(param_1 + 0x10,0);
    uVar6 = 0;
    if ((lVar12 == 0) || (lVar13 == 0)) goto LAB_022b27b0;
    uVar8 = FUN_022ad160(param_1,param_2,lVar12,lVar13 + 4,param_3,param_4,0);
    uVar6 = 0;
    if ((uVar8 & 1) == 0) goto LAB_022b27b0;
  }
  else {
    uVar8 = FUN_022b3080(param_1,param_2,0);
    if ((uVar8 & 1) == 0) {
      lVar12 = FUN_0251b3b0(param_1 + 0x10,0);
      lVar13 = FUN_0251bdc4(param_1 + 0x10,0);
      if (((lVar12 == 0) || (lVar13 == 0)) ||
         (uVar8 = FUN_022ad160(param_1,param_2,lVar12,lVar13 + 4,param_3,param_4,0),
         (uVar8 & 1) == 0)) {
        uVar6 = 0;
        *param_3 = 3;
        goto LAB_022b27b0;
      }
    }
  }
  *param_3 = 0;
  uVar6 = 1;
LAB_022b27b0:
  return uVar6 & 1;
}


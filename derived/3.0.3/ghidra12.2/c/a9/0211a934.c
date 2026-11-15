
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0211a934(uint *param_1,long param_2,uint param_3)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  ushort uVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  uint local_170;
  uint local_16c;
  undefined *local_168;
  undefined2 local_160;
  undefined1 local_15e;
  undefined1 local_15d;
  uint local_15c;
  uint *local_158;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [56];
  int local_108;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined1 local_a1;
  uint local_a0;
  
  uVar3 = DAT_0558600c;
  *param_1 = _DAT_05586008;
  param_1[1] = uVar3;
  if (0xfffffffd < param_3) {
    return;
  }
  if (param_3 < *(uint *)(param_2 + 0x1e8)) {
    lVar7 = *(long *)(*(long *)(param_2 + 0x1f0) + (long)(int)param_3 * 8);
  }
  else {
    lVar7 = 0;
  }
  FUN_02125f20(auStack_150,lVar7 + 0xe8);
  local_168 = (undefined *)CONCAT44(local_168._4_4_,local_108);
  if (local_108 != 0) {
    return;
  }
  *(undefined2 *)param_1 = local_a4;
  *(undefined1 *)((long)param_1 + 2) = local_a2;
  *(undefined1 *)((long)param_1 + 3) = local_a1;
  param_1[1] = local_a0;
  puVar2 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(param_1);
  lVar7 = *(long *)puVar2;
  if (lVar7 == 0) {
    return;
  }
  lVar10 = *(long *)(lVar10 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if (*(uint *)(lVar10 + 0x1d8) <= uVar3) {
    return;
  }
  if (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) == 0) {
    return;
  }
  local_160 = local_a4;
  local_15e = local_a2;
  local_15d = local_a1;
  local_168 = PTR_DAT_04bc0510 + 0x10;
  local_15c = local_a0;
  local_158 = (uint *)0x0;
  uVar3 = FUN_0277d6c4(&local_160);
  if (*(long *)puVar2 == 0) {
LAB_0211aae0:
    puVar9 = (uint *)0x0;
  }
  else {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((*(uint *)(lVar7 + 0x1d8) <= uVar3) ||
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_0211aae0;
    lVar7 = *(long *)PTR_DAT_04bc0428;
    uVar3 = FUN_0277d6c4(param_1);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if (*(uint *)(lVar7 + 0x1d8) <= uVar3) goto LAB_0211aae0;
    puVar9 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8);
    if (puVar9 != (uint *)0x0) {
      local_158 = puVar9;
    }
  }
  iVar4 = FUN_0277d6c4(&local_160);
  if (iVar4 == 0x3920) {
    return;
  }
  local_170 = 0xac;
  if (puVar9 == (uint *)0x0) {
    uVar6 = 0xbc;
  }
  else {
    uVar3 = *puVar9;
    uVar6 = 0;
    if ((uVar3 != 0) && (puVar9 != (uint *)(ulong)uVar3)) {
      puVar8 = (uint *)((long)puVar9 - (long)(ulong)uVar3);
      uVar6 = 0;
      if (*puVar8 != 0) {
        uVar3 = puVar8[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
          lVar7 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar8 + lVar7 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar7 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar9 - lVar7) / (ulong)uVar3);
            }
            if (*puVar8 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
            goto LAB_0211ab98;
          }
        }
        uVar6 = 0;
      }
    }
  }
LAB_0211ab98:
  if (((uVar6 == 0xac) && (DAT_053e67f0 != 0)) &&
     (lVar7 = FUN_00ede184(DAT_053e67f0,auStack_140), lVar7 != 0)) {
    puVar5 = (ushort *)FUN_0079e910(lVar7,0x14,0x870f1e29,*(undefined8 *)PTR_DAT_04bb6960);
    if (puVar5 == (ushort *)0x0) {
      uVar6 = 0xfffe;
    }
    else {
      uVar6 = *puVar5;
    }
    local_170 = (uint)uVar6;
    local_16c = 0;
    FUN_0277d4ac(&local_170);
    *param_1 = local_170;
    param_1[1] = local_16c;
  }
  return;
}


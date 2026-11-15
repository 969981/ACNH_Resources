
uint FUN_022fd774(undefined8 param_1,byte *param_2)

{
  byte *pbVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  undefined **local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined *puStack_a0;
  undefined8 local_98;
  undefined2 local_90;
  undefined4 local_8e;
  undefined1 local_8a;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_7c;
  undefined2 local_74;
  undefined4 local_6c;
  byte local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined4 uStack_58;
  uint local_54;
  
  if (7 < *param_2) {
    return 0;
  }
  uVar5 = FUN_02582d8c(param_2,1);
  puVar3 = PTR_DAT_04bb4fb8;
  if (((((7 < uVar5) ||
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d4) == '\0')) ||
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d6) == '\0')) ||
      ((uVar5 = FUN_02582d8c(param_2,1), 7 < uVar5 ||
       (*(char *)(*(long *)puVar3 + (ulong)uVar5 * 0x13f0 + 0x13d4) == '\0')))) ||
     (lVar7 = *(long *)puVar3 + (ulong)uVar5 * 0x13f0, (*(byte *)(lVar7 + 0x698) & 1) == 0)) {
    uVar5 = 0;
    goto LAB_022fd830;
  }
  local_5c = 0xfffe;
  uStack_58 = 0;
  FUN_0277d4ac(&local_5c);
  puVar4 = PTR_DAT_04bb43c0;
  pbVar1 = param_2 + 4;
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(pbVar1);
  puVar3 = PTR_DAT_04bb2010;
  lVar10 = *(long *)puVar4;
  if (lVar10 == 0) {
LAB_022fda14:
    local_c0 = (undefined **)(puVar3 + 0x10);
    fVar12 = (float)*(int *)(lVar7 + 0x6a8) * 10.0 + 2.5;
    fVar13 = (float)*(int *)(lVar7 + 0x6ac) * 10.0 + 2.5;
    local_b8 = (undefined **)
               CONCAT44((int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0),
                        (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0));
    uVar6 = FUN_0124cac0(pbVar1,&local_c0,param_2,&local_5c);
    if ((uVar6 & 1) == 0) goto LAB_022fda9c;
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar5) ||
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_022fda14;
    local_b0 = (undefined *)0x0;
    local_b8 = *(undefined ***)(param_2 + 4);
    local_c0 = &PTR_FUN_04a36b50;
    uVar5 = FUN_0277d6c4(&local_b8);
    if (*(long *)puVar4 == 0) {
LAB_022fd9f4:
      local_54 = 0xbc;
    }
    else {
      lVar10 = *(long *)(lVar10 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((*(uint *)(lVar10 + 0x1d8) <= uVar5) ||
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_022fd9f4;
      lVar10 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(pbVar1);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((*(uint *)(lVar10 + 0x1d8) <= uVar5) ||
         (puVar8 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8),
         puVar8 == (uint *)0x0)) goto LAB_022fd9f4;
      local_54 = 0;
      uVar5 = *puVar8;
      if ((uVar5 != 0) && (puVar8 != (uint *)(ulong)uVar5)) {
        puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar5);
        local_54 = 0;
        if (*puVar9 != 0) {
          uVar5 = puVar9[1];
          if ((uVar5 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
            lVar10 = 0xc;
            if (*(char *)((long)puVar9 + 10) != '\0') {
              lVar10 = 0x1c;
            }
            lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
            if (lVar10 != 0) {
              uVar2 = 0;
              if ((ulong)uVar5 != 0) {
                uVar2 = (uint)((ulong)((long)puVar8 - lVar10) / (ulong)uVar5);
              }
              if (*puVar9 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326ec0) &&
                 (local_54 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), local_54 < 0xbd
                 )) goto LAB_022fda00;
            }
          }
          local_54 = 0;
        }
      }
    }
LAB_022fda00:
    local_6c = 0x9c;
    if (local_54 != 0x9c) goto LAB_022fda14;
LAB_022fda9c:
    local_5c = *(undefined4 *)(param_2 + 4);
    uStack_58 = *(undefined4 *)(param_2 + 8);
  }
  local_64 = 0xfffe;
  FUN_0277d4ac(&local_64);
  local_98 = 0;
  local_64 = CONCAT44(uStack_58,local_5c);
  local_68 = *param_2;
  if (7 < local_68) {
    local_68 = 0xff;
  }
  local_b0 = puVar3 + 0x10;
  local_6c = CONCAT22((short)*(undefined4 *)(lVar7 + 0x6ac),(short)*(undefined4 *)(lVar7 + 0x6a8));
  local_90 = 0xff00;
  local_8e = 0;
  local_8a = 0;
  local_80 = 0;
  local_74 = 0xff00;
  local_a8 = 0;
  local_b8 = &PTR_FUN_0498d548;
  local_88 = 0xffffffffffffffff;
  local_c0 = (undefined **)CONCAT62(local_c0._2_6_,DAT_04c487d4);
  local_7c = 0x1000041200000;
  puStack_a0 = local_b0;
  uVar5 = FUN_022fdb60(param_1,&local_c0,&local_6c);
LAB_022fd830:
  return uVar5 & 1;
}


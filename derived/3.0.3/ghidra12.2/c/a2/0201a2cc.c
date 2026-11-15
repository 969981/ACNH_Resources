
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0201a2cc(undefined4 *param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  ushort uVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  undefined2 *puVar12;
  long lVar13;
  long lVar14;
  undefined2 local_60;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  undefined8 local_58;
  
  puVar7 = PTR_DAT_04bb43c0;
  lVar13 = *(long *)(param_2 + 0x6098);
  if (*(char *)(lVar13 + 0x1d5) != '\0') {
    lVar14 = *(long *)PTR_DAT_04bb43c0;
    puVar12 = (undefined2 *)(lVar13 + 0xcc);
    uVar8 = FUN_0277d6c4(puVar12);
    if (*(long *)puVar7 != 0) {
      lVar14 = *(long *)(lVar14 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar14 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) goto LAB_0201a36c;
    }
    iVar9 = FUN_0277d6c4(puVar12);
    if (iVar9 == 0xfffd) {
      puVar12 = &DAT_05586008;
      goto LAB_0201a36c;
    }
  }
  puVar12 = (undefined2 *)(lVar13 + 0xd4);
LAB_0201a36c:
  uVar5 = *puVar12;
  *(undefined2 *)param_1 = uVar5;
  uVar3 = *(undefined1 *)(puVar12 + 1);
  uVar4 = *(undefined1 *)((long)puVar12 + 3);
  uVar2 = *(undefined4 *)(puVar12 + 2);
  lVar14 = *(long *)puVar7;
  *(undefined1 *)((long)param_1 + 2) = uVar3;
  *(undefined1 *)((long)param_1 + 3) = uVar4;
  param_1[1] = uVar2;
  uVar8 = FUN_0277d6c4(param_1);
  lVar13 = *(long *)puVar7;
  if (lVar13 != 0) {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar14 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      local_58 = 0;
      local_60 = uVar5;
      local_5e = uVar3;
      local_5d = uVar4;
      local_5c = uVar2;
      uVar8 = FUN_0277d6c4(&local_60);
      if (*(long *)puVar7 != 0) {
        lVar13 = *(long *)(lVar13 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar13 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
          lVar13 = *(long *)PTR_DAT_04bc0428;
          uVar8 = FUN_0277d6c4(param_1);
          uVar2 = DAT_0558600c;
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if ((uVar8 < *(uint *)(lVar13 + 0x1d8)) &&
             (((puVar10 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar8 * 8),
               puVar10 != (uint *)0x0 && (uVar8 = *puVar10, uVar8 != 0)) &&
              (puVar10 != (uint *)(ulong)uVar8)))) {
            puVar11 = (uint *)((long)puVar10 - (long)(ulong)uVar8);
            if (((*puVar11 != 0) && (uVar8 = puVar11[1], uVar8 != 0)) &&
               ((ulong)(ushort)puVar11[2] != 0)) {
              lVar13 = 0xc;
              if (*(char *)((long)puVar11 + 10) != '\0') {
                lVar13 = 0x1c;
              }
              lVar13 = (long)puVar11 + lVar13 + (ulong)(ushort)puVar11[2] * 8;
              if (lVar13 != 0) {
                uVar1 = 0;
                if ((ulong)uVar8 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar10 - lVar13) / (ulong)uVar8);
                }
                if (*puVar11 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326ec0) &&
                   (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2),
                   uVar6 < 0xbd && (uVar6 | 4) == 0xc)) {
                  *param_1 = _DAT_05586008;
                  param_1[1] = uVar2;
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}


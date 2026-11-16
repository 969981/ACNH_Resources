
void FUN_027f6200(long param_1,uint param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  uint uVar7;
  ushort uVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  long lVar12;
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  uint local_6c;
  undefined8 local_68;
  
  puVar6 = PTR_DAT_04bb43c0;
  puVar1 = (undefined2 *)(param_1 + 0x28a08);
  local_68 = 0;
  uVar5 = *puVar1;
  uVar3 = *(undefined1 *)(param_1 + 0x28a0a);
  uVar4 = *(undefined1 *)(param_1 + 0x28a0b);
  uVar11 = *(uint *)(param_1 + 0x28a0c);
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  local_70 = uVar5;
  local_6e = uVar3;
  local_6d = uVar4;
  local_6c = uVar11;
  uVar7 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar6 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      lVar12 = *(long *)PTR_DAT_04bc0428;
      uVar7 = FUN_0277d6c4(puVar1);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar12 + 0x1d8)) &&
         (puVar9 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8),
         puVar9 != (uint *)0x0)) {
        uVar7 = *puVar9;
        if (uVar7 != 0 && puVar9 != (uint *)(ulong)uVar7) {
          puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar7);
          if (((*puVar10 != 0) && (uVar7 = puVar10[1], uVar7 != 0)) &&
             ((ulong)(ushort)puVar10[2] != 0)) {
            lVar12 = 0xc;
            if (*(char *)((long)puVar10 + 10) != '\0') {
              lVar12 = 0x1c;
            }
            lVar12 = (long)puVar10 + lVar12 + (ulong)(ushort)puVar10[2] * 8;
            if (lVar12 != 0) {
              uVar2 = 0;
              if ((ulong)uVar7 != 0) {
                uVar2 = (uint)((ulong)((long)puVar9 - lVar12) / (ulong)uVar7);
              }
              if (*puVar10 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326ec0) &&
                 (uVar8 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar8 < 0xbd))
              goto LAB_027f638c;
            }
          }
        }
        uVar8 = 0;
        goto LAB_027f638c;
      }
    }
  }
  uVar8 = 0xbc;
LAB_027f638c:
  if (uVar8 == 0x76) {
    uVar11 = uVar11 & 0xfffffff0 | param_2 & 0xf;
  }
  *puVar1 = uVar5;
  *(undefined1 *)(param_1 + 0x28a0a) = uVar3;
  *(undefined1 *)(param_1 + 0x28a0b) = uVar4;
  *(uint *)(param_1 + 0x28a0c) = uVar11;
  return;
}



uint FUN_0289b450(long param_1,undefined4 *param_2)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  long lVar7;
  uint *puVar8;
  uint uVar9;
  long lVar10;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  uint *local_68;
  ushort local_44 [2];
  
  puVar2 = PTR_DAT_04bb43c0;
  local_68 = (uint *)0x0;
  local_78 = PTR_DAT_04bc0510 + 0x10;
  local_70 = *param_2;
  uStack_6c = param_2[1];
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar2 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar10 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(param_2);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar10 + 0x1d8)) &&
         ((puVar6 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8),
          puVar6 != (uint *)0x0 &&
          (uVar3 = *puVar6, local_68 = puVar6, uVar3 != 0 && puVar6 != (uint *)(ulong)uVar3)))) {
        puVar8 = (uint *)((long)puVar6 - (long)(ulong)uVar3);
        if ((*puVar8 != 0) && ((uVar3 = puVar8[1], uVar3 != 0 && ((ulong)(ushort)puVar8[2] != 0))))
        {
          lVar10 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar8 + lVar10 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar10 != 0) {
            uVar9 = 0;
            if ((ulong)uVar3 != 0) {
              uVar9 = (uint)((ulong)((long)puVar6 - lVar10) / (ulong)uVar3);
            }
            if (*puVar8 <= uVar9) {
              uVar9 = 0xffffffff;
            }
            if ((uVar9 < DAT_05326ec0) && (*(short *)(DAT_05326ec8 + (long)(int)uVar9 * 2) == 0xac))
            {
              FUN_01b086f4(local_44,&local_78);
              return local_44[0] & 0x7f | 0x80;
            }
          }
        }
      }
    }
  }
  uVar9 = 0;
  uVar3 = 0;
  lVar10 = *(long *)puVar2;
  do {
    lVar1 = param_1 + 4 + ((long)((ulong)uVar3 << 0x20) >> 0x1d);
    uVar4 = FUN_0277d6c4(lVar1);
    lVar7 = *(long *)puVar2;
    if (lVar7 != 0) {
      lVar10 = *(long *)(lVar10 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        uVar5 = FUN_0277d7b4(lVar1,param_2);
        if ((uVar5 & 1) != 0) {
          return uVar9;
        }
        lVar7 = *(long *)puVar2;
      }
    }
    uVar3 = uVar3 + 1;
    uVar9 = uVar9 + 1;
    lVar10 = lVar7;
  } while (uVar3 != 0x80);
  return 0xffffffff;
}


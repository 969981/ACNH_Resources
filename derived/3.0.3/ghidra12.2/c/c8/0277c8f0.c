
int FUN_0277c8f0(int param_1,undefined8 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  undefined2 *puVar7;
  uint *puVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  int local_84;
  undefined *local_78;
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  uint *local_68;
  
  puVar4 = PTR_DAT_04bc00c8;
  puVar3 = PTR_DAT_04bb43c0;
  if (param_1 == 0) {
    local_84 = 0;
  }
  else {
    local_84 = 0;
    iVar10 = 0;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    do {
      puVar7 = (undefined2 *)(**(code **)*param_2)(param_2,iVar10);
      lVar9 = *(long *)puVar3;
      uVar5 = FUN_0277d6c4();
      lVar11 = *(long *)puVar3;
      if (lVar11 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          local_70 = *puVar7;
          local_6e = *(undefined1 *)(puVar7 + 1);
          local_6d = *(undefined1 *)((long)puVar7 + 3);
          local_6c = *(undefined4 *)(puVar7 + 2);
          local_68 = (uint *)0x0;
          local_78 = puVar1;
          uVar5 = FUN_0277d6c4(&local_70);
          if (*(long *)puVar3 == 0) {
LAB_0277ca60:
            if (local_68 == (uint *)0x0) goto LAB_0277c960;
          }
          else {
            lVar9 = *(long *)(lVar11 + 0x57e58);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
            if ((*(uint *)(lVar9 + 0x1d8) <= uVar5) ||
               (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_0277ca60;
            lVar9 = *(long *)PTR_DAT_04bc0428;
            uVar5 = FUN_0277d6c4(puVar7);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
            if ((*(uint *)(lVar9 + 0x1d8) <= uVar5) ||
               (puVar8 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8),
               puVar8 == (uint *)0x0)) goto LAB_0277ca60;
            local_68 = puVar8;
          }
          puVar8 = (uint *)((long)local_68 - (ulong)*local_68);
          if ((((*local_68 != 0) && (puVar8 != (uint *)0x0)) && (*puVar8 != 0)) &&
             ((uVar5 = puVar8[1], uVar5 != 0 && ((ulong)(ushort)puVar8[2] != 0)))) {
            lVar9 = 0xc;
            if (*(char *)((long)puVar8 + 10) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
            if (lVar9 != 0) {
              uVar2 = 0;
              if ((ulong)uVar5 != 0) {
                uVar2 = (uint)((ulong)((long)local_68 - lVar9) / (ulong)uVar5);
              }
              if (*puVar8 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < *(uint *)puVar4) &&
                 (*(short *)(*(long *)(puVar4 + 8) + (long)(int)uVar2 * 2) == 0x86)) {
                iVar6 = FUN_01aed730(&local_78);
                local_84 = iVar6 + local_84;
              }
            }
          }
        }
      }
LAB_0277c960:
      iVar10 = iVar10 + 1;
    } while (param_1 != iVar10);
  }
  return local_84;
}


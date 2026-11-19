
undefined8 FUN_0384bf20(uint *param_1,uint *param_2,long *param_3,long param_4,uint param_5)

{
  long *plVar1;
  ulong *puVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  uint uVar8;
  long lVar9;
  
  plVar1 = param_3 + 3 + *(uint *)(param_3 + 2);
  if (1 < *(uint *)(param_3 + 2)) {
    plVar1 = param_3 + 3;
  }
  if (((long *)*plVar1 != (long *)0x0) && (lVar9 = *(long *)*plVar1, lVar9 != 0)) {
    (**(code **)(*param_3 + 0x10))(param_3);
    puVar7 = (ulong *)(*(ulong *)PTR_DAT_04bb38c8 | (ulong)*(uint *)(param_4 + 0x18));
    puVar2 = puVar7 + 0x20000000;
    if (*(ulong *)PTR_DAT_04bb38c0 <= (ulong)*(uint *)(param_4 + 0x18)) {
      puVar2 = puVar7;
    }
    if ((*puVar2 >> ((ulong)param_5 & 0x3f) & 1) != 0) {
      uVar6 = *puVar2 & 0xffffffffffffffffU >> (~(ulong)param_5 & 0x3f);
      uVar8 = (int)uVar6 - ((uint)(uVar6 >> 1) & 0x55555555);
      uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
      uVar4 = (uint)(uVar6 >> 0x20);
      uVar4 = uVar4 - (uVar4 >> 1 & 0x55555555);
      uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
      uVar8 = uVar8 + (uVar8 >> 8);
      uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
      uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
      uVar4 = uVar4 + (uVar4 >> 8);
      uVar8 = *(uint *)((long)puVar2 +
                       (long)(int)((uVar8 + (uVar8 >> 0x10) & 0x3f) +
                                   (uVar4 + (uVar4 >> 0x10) & 0x3f) + -1) * 4 + 8);
      if (((uVar8 >> 0x18 == 2) && (lVar5 = *(long *)(lVar9 + 0x58), lVar5 != 0)) &&
         (lVar9 = *(long *)(lVar9 + 0x60), lVar9 != 0)) {
        uVar6 = (ulong)uVar8 & 0xffffff;
        uVar8 = (uint)*(ushort *)(lVar5 + uVar6 * 0x14 + 2);
        if (uVar8 != 0) {
          uVar3 = *(ushort *)(lVar5 + uVar6 * 0x14);
          *param_1 = uVar8;
          *(ulong *)(param_1 + 2) = lVar9 + (ulong)uVar3 * 8;
        }
        *param_2 = (uint)*(ushort *)(lVar5 + uVar6 * 0x14 + 4);
        return 1;
      }
    }
  }
  return 0;
}


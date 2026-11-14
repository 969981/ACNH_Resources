
undefined8
FUN_01cab2e0(long *param_1,ulong param_2,void *param_3,uint param_4,byte *param_5,uint param_6)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  byte *pbVar5;
  long *plVar6;
  long *plVar7;
  ulong *puVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  
  puVar4 = PTR_DAT_04bb5038;
  lVar11 = *(long *)(*(long *)PTR_DAT_04bb21d0 + 0xf88);
  bVar3 = *(byte *)(lVar11 + 0x225);
  if ((ulong)(long)(char)bVar3 < 8) {
    if (param_3 == (void *)0x0) {
      return 1;
    }
    if (param_4 == 0) {
      return 1;
    }
    plVar7 = (long *)(lVar11 + 0x18 + (ulong)*param_5 * 0x20);
    if (7 < *param_5) {
      plVar7 = &DAT_053565d0;
    }
    if (*plVar7 != *(long *)(*(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x68) + 0x10)) {
      return 1;
    }
    uVar13 = 0;
    iVar12 = 0;
    do {
      if ((param_2 >> ((long)(char)puVar4[iVar12] & 0x3fU) & 1) != 0) {
        pbVar5 = (byte *)FUN_01c94f70(lVar11,puVar4 + iVar12,1);
        bVar2 = *pbVar5;
        if ((bVar2 < 8) && (bVar2 != bVar3)) {
          uVar13 = 1L << ((ulong)bVar2 & 0x3f) | uVar13;
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 != 8);
    if (uVar13 == 0) {
      return 1;
    }
    plVar7 = param_1 + 2;
    if ((long *)param_1[3] != plVar7) {
      lVar9 = (long)*(int *)((long)param_1 + 0x24);
      puVar10 = (undefined1 *)(param_1[3] - lVar9);
      do {
        if (param_6 == (byte)puVar10[10]) goto LAB_01cab4e4;
        puVar10 = (undefined1 *)(*(long *)(puVar10 + lVar9 + 8) - lVar9);
      } while (puVar10 != (undefined1 *)((long)plVar7 - lVar9));
    }
    plVar6 = (long *)*param_1;
    if (plVar6 != (long *)0x0) {
      *(undefined1 *)((long)param_1 + 0x14c) = 1;
      puVar10 = (undefined1 *)(**(code **)(*plVar6 + 0x30))(plVar6,0x38,0xfffffff8);
      if ((puVar10 != (undefined1 *)0x0) ||
         (puVar10 = (undefined1 *)
                    (**(code **)(*(long *)*param_1 + 0x30))((long *)*param_1,0x38,0xfffffff8),
         puVar10 != (undefined1 *)0x0)) {
        *(undefined1 *)((long)param_1 + 0x14d) = 1;
        *(undefined1 **)(puVar10 + 0x10) = puVar10 + 0x10;
        *(undefined1 **)(puVar10 + 0x18) = puVar10 + 0x10;
        *(undefined8 *)(puVar10 + 0x30) = 0;
        *puVar10 = 0xff;
        *(undefined4 *)(puVar10 + 4) = 0;
        *(undefined8 *)(puVar10 + 0x20) = 0x1800000000;
        *(undefined8 *)(puVar10 + 0x28) = 0;
        puVar10[10] = (char)param_6;
        *(undefined2 *)(puVar10 + 8) =
             *(undefined2 *)((long)param_1 + ((long)(char)bVar3 & 0xffffffffU) * 2 + 0x13c);
        lVar9 = param_1[2];
        plVar6 = (long *)(puVar10 + *(int *)((long)param_1 + 0x24));
        param_1[2] = (long)plVar6;
        *plVar6 = lVar9;
        plVar6[1] = (long)plVar7;
        if (lVar9 != 0) {
          *(long **)(lVar9 + 8) = plVar6;
        }
        *(int *)(param_1 + 4) = (int)param_1[4] + 1;
LAB_01cab4e4:
        plVar7 = (long *)*param_1;
        if (plVar7 == (long *)0x0) {
          return 0;
        }
        *(undefined1 *)((long)param_1 + 0x14c) = 1;
        puVar8 = (ulong *)(**(code **)(*plVar7 + 0x30))(plVar7,param_4 + 0x28,0xfffffff8);
        if ((puVar8 == (ulong *)0x0) &&
           (puVar8 = (ulong *)(**(code **)(*(long *)*param_1 + 0x30))
                                        ((long *)*param_1,param_4 + 0x28,0xfffffff8),
           puVar8 == (ulong *)0x0)) {
          return 0;
        }
        *(undefined1 *)((long)param_1 + 0x14d) = 1;
        *(undefined2 *)((long)puVar8 + 0xd) = 0xdaf3;
        *puVar8 = 0;
        *(uint *)(puVar8 + 1) = param_4;
        puVar8[2] = (ulong)(puVar8 + 5);
        puVar8[3] = 0;
        puVar8[4] = 0;
        plVar6 = (long *)(puVar10 + 0x10);
        lVar9 = *plVar6;
        plVar7 = (long *)((long)*(int *)(puVar10 + 0x24) + (long)puVar8);
        *plVar6 = (long)plVar7;
        *plVar7 = lVar9;
        plVar7[1] = (long)plVar6;
        if (lVar9 != 0) {
          *(long **)(lVar9 + 8) = plVar7;
        }
        *(int *)(puVar10 + 0x20) = *(int *)(puVar10 + 0x20) + 1;
        *puVar8 = uVar13;
        puVar1 = (undefined8 *)(lVar11 + 0x18 + (ulong)*param_5 * 0x20);
        if (7 < *param_5) {
          puVar1 = &DAT_053565d0;
        }
        *(undefined1 *)((long)puVar8 + 0xc) = *(undefined1 *)(puVar1 + 1);
        memcpy((void *)puVar8[2],param_3,(ulong)param_4);
        return 1;
      }
    }
  }
  return 0;
}


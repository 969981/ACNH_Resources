
undefined8 FUN_039f9c10(long param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  int local_54;
  
  lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x118) +
                             (ulong)*(ushort *)(param_1 + 0x14) * 0x70) + 0x48);
  *(long *)(param_1 + 0x20) = lVar4;
  bVar1 = *(byte *)(param_1 + 0x262);
  lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x120) +
                             (ulong)*(ushort *)(param_1 + 0x16) * 0x80) + 0x80);
  *(long *)(param_1 + 0x28) = lVar5;
  if ((bVar1 >> 1 & 1) == 0) {
    if ((bVar1 & 1) == 0) {
      *(byte *)(param_1 + 0x262) = bVar1 | 1;
      FUN_039bb020(lVar4,param_1 + 0x30,param_2);
    }
    else {
      uVar12 = 0;
      do {
        plVar7 = *(long **)(param_1 + 0x30 + (-(uVar12 >> 0x1f) & 0xfffffff800000000 | uVar12 << 3))
        ;
        if (*plVar7 != 0) {
          plVar7[0x51] = 0;
          plVar7[7] = 0;
          plVar7[8] = 0;
          plVar7[0x52] = 0;
          plVar7[5] = 0;
          plVar7[6] = 0;
          plVar7[0x53] = 0;
          *(byte *)(plVar7 + 0x4f) =
               *(byte *)(plVar7 + 0x4f) & 0xfc | *(int *)((long)plVar7 + 0x26c) != 0;
          plVar7[0x54] = 0;
          plVar7[0x9d] = 0;
          plVar7[0x9e] = 0;
          plVar7[0x9f] = 0;
          plVar7[0xa0] = 0;
          *(byte *)(plVar7 + 0x9b) =
               *(byte *)(plVar7 + 0x9b) & 0xfc | *(int *)((long)plVar7 + 0x4cc) != 0;
          *(byte *)(plVar7 + 0xe7) =
               *(byte *)(plVar7 + 0xe7) & 0xfc | *(int *)((long)plVar7 + 0x72c) != 0;
          lVar4 = *(long *)(param_1 + 0x30 + (long)(int)uVar12 * 8);
          *(undefined1 *)(lVar4 + 0x18) = 0;
          *(undefined8 *)(lVar4 + 0x10) = 0;
        }
        uVar3 = (int)uVar12 + 1;
        uVar12 = (ulong)uVar3;
      } while (uVar3 != 0x40);
      *(byte *)(param_1 + 0x25a) = *(byte *)(param_1 + 0x25a) & 0xf3;
    }
    lVar5 = 0;
    uVar12 = 0;
    iVar13 = 0;
    lVar4 = param_1 + 0x30;
    do {
      lVar6 = *(long *)(param_1 + 0x20) + lVar5;
      if (uVar12 == *(byte *)(lVar6 + 0x41)) {
        lVar11 = (long)iVar13 * 8;
        puVar8 = *(undefined8 **)(lVar4 + lVar11);
        *puVar8 = *(undefined8 *)(lVar6 + 0x18);
        puVar8[1] = *(undefined8 *)(lVar6 + 0x20);
        lVar9 = *(long *)(*(long *)(param_1 + 0x20) + lVar5 + 0x38);
        lVar6 = *(long *)(lVar4 + lVar11);
        if ((*(byte *)(lVar9 + 600) & 1) == 0) {
          uVar10 = 0;
          *(undefined1 *)(lVar6 + 0x18) = 0;
        }
        else {
          bVar2 = *(byte *)(lVar6 + 0x18);
          *(byte *)(lVar6 + 0x18) = bVar2 | 2;
          bVar1 = bVar2 & 0xfe | 2;
          if ((*(byte *)(lVar9 + 600) & 2) != 0) {
            bVar1 = bVar2 | 3;
          }
          *(byte *)(lVar6 + 0x18) = bVar1;
          uVar10 = *(undefined8 *)(lVar9 + 0x250);
        }
        *(undefined8 *)(lVar6 + 0x10) = uVar10;
        lVar6 = *(long *)(param_1 + 0x250);
        if (lVar6 != 0) {
          local_54 = -1;
          lVar11 = **(long **)(lVar4 + (long)iVar13 * 8);
          lVar9 = (ulong)(*(int *)(lVar6 + 0x28) == 2) << 1;
          if (*(int *)(lVar6 + 0x28) == 1) {
            lVar9 = 1;
          }
          FUN_03973c90(&local_54,*(undefined8 *)(lVar11 + 0x28),lVar11,&PTR_PTR_04c4bc58 + lVar9 * 2
                      );
          if (local_54 != -1) {
            *(int *)(lVar6 + 0x2c) = local_54;
            *(byte *)(param_1 + 0x25a) = *(byte *)(param_1 + 0x25a) | 0xc;
          }
        }
      }
      lVar5 = lVar5 + 0x38;
      uVar12 = uVar12 + 1;
      iVar13 = iVar13 + 1;
    } while (lVar5 != 0xe00);
    lVar4 = *(long *)(param_1 + 0x20);
    lVar5 = *(long *)(param_1 + 0x28);
  }
  *(byte *)(param_1 + 600) = *(byte *)(param_1 + 600) & 8 | *(byte *)(lVar5 + 0x72);
  *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(lVar4 + 0x1068);
  uVar3 = *(char *)(lVar5 + 0x74) * 0x10000 + 0x200000U | *(uint *)(param_1 + 0x10) & 0xffc0ffff;
  *(uint *)(param_1 + 0x10) = uVar3;
  bVar1 = *(byte *)(lVar5 + 0x70);
  *(byte *)(param_1 + 0x18) = bVar1;
  iVar13 = -*(int *)(&DAT_040581c0 + (ulong)*(byte *)(lVar5 + 0x73) * 4);
  if ((bVar1 & 7) != 2) {
    iVar13 = *(int *)(&DAT_040581c0 + (ulong)*(byte *)(lVar5 + 0x73) * 4);
  }
  *(uint *)(param_1 + 0x10) = iVar13 * 0x400000 + 0x2000000U | uVar3 & 0xfc3fffff;
  return 1;
}


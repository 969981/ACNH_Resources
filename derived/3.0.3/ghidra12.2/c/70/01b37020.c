
void FUN_01b37020(long param_1)

{
  long *plVar1;
  ushort *puVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  
  if (*(short *)(param_1 + 0x1a) != 0) {
    iVar13 = *(char *)(param_1 + 0x1f) + 0x1057;
    uVar12 = iVar13 + *(char *)(param_1 + 0x20);
    uVar14 = *(short *)(param_1 + 0x1a) * 0x20 + *(char *)(param_1 + 0x1c) * 4 +
             *(char *)(param_1 + 0x1d) * 8 + *(char *)(param_1 + 0x1e) * 0x10 + iVar13 +
             *(char *)(param_1 + 0x20) * 0x40;
    goto LAB_01b37110;
  }
  if (DAT_05574040 == 0) {
LAB_01b37108:
    uVar14 = 0x1057;
    uVar12 = 0x1057;
    goto LAB_01b37110;
  }
  puVar9 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar6 = (**(code **)(*(long *)*puVar9 + 0x38))();
    if (lVar6 == 0) goto LAB_01b37108;
    lVar6 = lVar6 + 0x70;
  }
  else if (((puVar9 == (undefined8 *)0x0) || ((long *)puVar9[0x26] == (long *)0x0)) ||
          (lVar6 = (**(code **)(*(long *)puVar9[0x26] + 0x38))(), lVar6 == 0)) goto LAB_01b37108;
  plVar1 = (long *)(lVar6 + 0xe7238);
  if ((*(long **)(lVar6 + 0xe72c8) == (long *)0x0) ||
     (puVar9 = (undefined8 *)**(long **)(lVar6 + 0xe72c8), puVar9 == (undefined8 *)0x0)) {
    uVar4 = 1;
    plVar10 = *(long **)(lVar6 + 0xe7258);
    if (plVar10 != (long *)0x0) goto LAB_01b371c0;
LAB_01b371dc:
    uVar5 = 1;
  }
  else {
    uVar4 = (**(code **)*puVar9)();
    uVar4 = uVar4 ^ 1;
    plVar10 = *(long **)(lVar6 + 0xe7258);
    if (plVar10 == (long *)0x0) goto LAB_01b371dc;
LAB_01b371c0:
    if ((undefined8 *)*plVar10 == (undefined8 *)0x0) goto LAB_01b371dc;
    uVar5 = (*(code *)**(undefined8 **)*plVar10)();
    uVar5 = uVar5 ^ 1;
  }
  puVar2 = (ushort *)(*(long *)(lVar6 + 0xe7240) + *plVar1);
  uVar7 = nn::time::IsValidDate
                    ((uint)*puVar2,(uint)(byte)puVar2[1],(uint)*(byte *)((long)puVar2 + 3));
  uVar12 = 0x1057;
  uVar14 = 0x1057;
  if ((uVar7 & 1) != 0) {
    puVar2 = (ushort *)(*(long *)(lVar6 + 0xe7240) + *plVar1);
    uVar7 = nn::time::IsValidDate
                      ((uint)*puVar2,(uint)(byte)puVar2[1],(uint)*(byte *)((long)puVar2 + 3));
    iVar13 = (uint)*puVar2 * 4 + 0x1057;
    puVar2 = (ushort *)(*(long *)(lVar6 + 0xe7240) + *plVar1);
    uVar8 = nn::time::IsValidDate
                      ((uint)*puVar2,(uint)(byte)puVar2[1],(uint)*(byte *)((long)puVar2 + 3));
    iVar11 = (uint)(byte)puVar2[1] << 4;
    if ((uVar8 & 1) == 0) {
      iVar11 = 0x10;
    }
    puVar2 = (ushort *)(*(long *)(lVar6 + 0xe7240) + *plVar1);
    uVar8 = nn::time::IsValidDate
                      ((uint)*puVar2,(uint)(byte)puVar2[1],(uint)*(byte *)((long)puVar2 + 3));
    puVar3 = (ushort *)(*(long *)(lVar6 + 0xe7240) + *plVar1);
    uVar12 = (uint)*(byte *)((long)puVar2 + 3);
    if ((uVar8 & 1) == 0) {
      uVar12 = 1;
    }
    if ((uVar7 & 1) == 0) {
      iVar13 = 0x2f97;
    }
    uVar14 = iVar11 + iVar13 +
             uVar12 + *(int *)(*(long *)(lVar6 + 0xe72b0) + *(long *)(lVar6 + 0xe72a8));
    uVar7 = nn::time::IsValidDate
                      ((uint)*puVar3,(uint)(byte)puVar3[1],(uint)*(byte *)((long)puVar3 + 3));
    iVar13 = *(byte *)((long)puVar3 + 3) + 0x1057;
    if ((uVar7 & 1) == 0) {
      iVar13 = 0;
    }
    uVar12 = iVar13 + *(int *)(*(long *)(lVar6 + 0xe72b0) + *(long *)(lVar6 + 0xe72a8));
  }
  if ((((uVar5 & 1) == 0) && (*(long *)(lVar6 + 0xe7258) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar6 + 0xe7258) + 8), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
  if ((((uVar4 & 1) == 0) && (*(long *)(lVar6 + 0xe72c8) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar6 + 0xe72c8) + 8), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
LAB_01b37110:
  uVar14 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
  uVar4 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 2;
  uVar5 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 3;
  iVar13 = (uVar12 & 7) + 3;
  DAT_0532ddf4 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 4;
  do {
    DAT_0532ddf0 = DAT_0532ddf4;
    DAT_0532ddec = uVar5;
    DAT_0532dde8 = uVar4;
    uVar14 = uVar14 ^ uVar14 << 0xb;
    iVar13 = iVar13 + -1;
    DAT_0532ddf4 = uVar14 >> 8 ^ DAT_0532ddf0 >> 0x13 ^ uVar14 ^ DAT_0532ddf0;
    uVar14 = DAT_0532dde8;
    uVar4 = DAT_0532ddec;
    uVar5 = DAT_0532ddf0;
  } while (iVar13 != 0);
  return;
}


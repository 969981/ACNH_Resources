
void FUN_03f4dae0(long *param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  if (*(int *)(param_1[1] + 0x14) == 1) {
    *(int *)(*param_1 + 0x34e0bc) =
         *(int *)(*param_1 + 0x34e0bc) + *(int *)((long)param_1 + 0x24) * 0x800;
  }
  bVar3 = *(byte *)(param_1 + 4);
  uVar7 = bVar3 | 0x2100;
  bVar4 = *(byte *)((long)param_1 + 0x12);
  uVar14 = (ulong)bVar4;
  uVar5 = (ushort)*(uint3 *)(param_1 + 2);
  uVar15 = (ulong)uVar5;
  if (uVar7 == 0x2122) {
    if ((int)param_1[5] != 0) {
      lVar11 = *param_1;
      uVar12 = *(ulong *)(lVar11 + uVar14 * 0x80 + (ulong)(uVar5 >> 0xc) * 8 + 0x3761b8);
      if (uVar12 < 100) {
        if (*(char *)(lVar11 + 0x34710) == '\0') goto LAB_03f4dc1c;
        if (uVar12 == 10) {
          uVar12 = *(ulong *)(lVar11 + 0x346b0);
          uVar13 = uVar15 & 0x1fff;
        }
        else if (uVar12 == 8) {
          uVar12 = *(ulong *)(lVar11 + 0x36e190);
          uVar13 = (ulong)*(uint *)(lVar11 + 0x36e198) & (uVar15 | (uVar14 & 3) << 0x10);
        }
        else {
          if (uVar12 != 7) goto LAB_03f4dc1c;
          uVar12 = *(ulong *)(lVar11 + 0x36e1a0);
          uVar13 = uVar15 & 0x7ff;
        }
      }
      else {
        uVar13 = uVar15 & 0xfff;
      }
      if (uVar12 + uVar13 != 0) {
        FUN_03fc0df0(lVar11 + 0x34780,uVar12 + uVar13,*(undefined4 *)((long)param_1 + 0x24));
        sVar6 = *(short *)((long)param_1 + 0x24);
        *(undefined4 *)((long)param_1 + 0x24) = 0;
        *(short *)(param_1 + 2) = (short)param_1[2] + sVar6;
        return;
      }
    }
  }
  else if ((uVar7 == 0x2180) &&
          (((bVar4 & 0xfe) == 0x7e || ((*(uint3 *)(param_1 + 2) & 0x40e000) == 0)))) {
    *(ushort *)(param_1 + 2) =
         uVar5 + (short)*(undefined4 *)((long)param_1 + 0x24) * (short)param_1[5];
    goto LAB_03f4df40;
  }
LAB_03f4dc1c:
  if (*(byte *)((long)param_1 + 0x2f) < 8) {
    uVar10 = (uint)bVar3;
    switch(*(byte *)((long)param_1 + 0x2f)) {
    default:
      do {
        uVar9 = FUN_03f4bda8(*param_1,uVar14,uVar15);
        FUN_03f4d1a0(*param_1,0,uVar7,uVar9);
        iVar2 = *(int *)((long)param_1 + 0x24);
        iVar8 = iVar2 + -1;
        *(int *)((long)param_1 + 0x24) = iVar8;
        uVar15 = (ulong)((int)uVar15 + (uint)*(ushort *)(param_1 + 5));
      } while (iVar8 != 0 && 0 < iVar2);
      break;
    case 1:
    case 5:
      do {
        uVar9 = FUN_03f4bda8(*param_1,bVar4,uVar15);
        FUN_03f4d1a0(*param_1,0,uVar7,uVar9);
        iVar2 = *(int *)((long)param_1 + 0x24);
        *(int *)((long)param_1 + 0x24) = iVar2 + -1;
        uVar1 = (int)uVar15 + (uint)*(ushort *)(param_1 + 5);
        uVar15 = (ulong)uVar1;
        if (iVar2 < 2) break;
        uVar9 = FUN_03f4bda8(*param_1,uVar14,uVar15);
        FUN_03f4d1a0(*param_1,0,uVar10 + 0x2101,uVar9);
        iVar2 = *(int *)((long)param_1 + 0x24);
        iVar8 = iVar2 + -1;
        *(int *)((long)param_1 + 0x24) = iVar8;
        uVar15 = (ulong)(uVar1 + *(ushort *)(param_1 + 5));
      } while (iVar8 != 0 && 0 < iVar2);
      break;
    case 3:
    case 7:
      do {
        uVar9 = FUN_03f4bda8(*param_1,bVar4,uVar15);
        FUN_03f4d1a0(*param_1,0,uVar7,uVar9);
        iVar2 = *(int *)((long)param_1 + 0x24);
        *(int *)((long)param_1 + 0x24) = iVar2 + -1;
        uVar1 = (int)uVar15 + (uint)*(ushort *)(param_1 + 5);
        uVar15 = (ulong)uVar1;
        if (iVar2 < 2) break;
        uVar9 = FUN_03f4bda8(*param_1,uVar14,uVar15);
        FUN_03f4d1a0(*param_1,0,uVar7,uVar9);
        iVar2 = *(int *)((long)param_1 + 0x24);
        *(int *)((long)param_1 + 0x24) = iVar2 + -1;
        uVar1 = uVar1 + *(ushort *)(param_1 + 5);
        uVar15 = (ulong)uVar1;
        if (iVar2 < 2) break;
        uVar9 = FUN_03f4bda8(*param_1,uVar14,uVar15);
        FUN_03f4d1a0(*param_1,0,uVar10 + 0x2101,uVar9);
        iVar2 = *(int *)((long)param_1 + 0x24);
        *(int *)((long)param_1 + 0x24) = iVar2 + -1;
        uVar1 = uVar1 + *(ushort *)(param_1 + 5);
        uVar15 = (ulong)uVar1;
        if (iVar2 < 2) break;
        uVar9 = FUN_03f4bda8(*param_1,bVar4,uVar15);
        FUN_03f4d1a0(*param_1,0,uVar10 + 0x2101,uVar9);
        iVar2 = *(int *)((long)param_1 + 0x24);
        iVar8 = iVar2 + -1;
        *(int *)((long)param_1 + 0x24) = iVar8;
        uVar15 = (ulong)(uVar1 + *(ushort *)(param_1 + 5));
      } while (iVar8 != 0 && 0 < iVar2);
      break;
    case 4:
      do {
        uVar9 = FUN_03f4bda8(*param_1,uVar14,uVar15);
        FUN_03f4d1a0(*param_1,0,uVar7,uVar9);
        iVar2 = *(int *)((long)param_1 + 0x24);
        *(int *)((long)param_1 + 0x24) = iVar2 + -1;
        uVar1 = (int)uVar15 + (uint)*(ushort *)(param_1 + 5);
        uVar15 = (ulong)uVar1;
        if (iVar2 < 2) break;
        uVar9 = FUN_03f4bda8(*param_1,uVar14,uVar15);
        FUN_03f4d1a0(*param_1,0,bVar3 + 0x2101,uVar9);
        iVar2 = *(int *)((long)param_1 + 0x24);
        *(int *)((long)param_1 + 0x24) = iVar2 + -1;
        uVar1 = uVar1 + *(ushort *)(param_1 + 5);
        uVar15 = (ulong)uVar1;
        if (iVar2 < 2) break;
        uVar9 = FUN_03f4bda8(*param_1,uVar14,uVar15);
        FUN_03f4d1a0(*param_1,0,uVar10 + 0x2102,uVar9);
        iVar2 = *(int *)((long)param_1 + 0x24);
        *(int *)((long)param_1 + 0x24) = iVar2 + -1;
        uVar1 = uVar1 + *(ushort *)(param_1 + 5);
        uVar15 = (ulong)uVar1;
        if (iVar2 < 2) break;
        uVar9 = FUN_03f4bda8(*param_1,bVar4,uVar15);
        FUN_03f4d1a0(*param_1,0,uVar10 + 0x2103,uVar9);
        iVar2 = *(int *)((long)param_1 + 0x24);
        iVar8 = iVar2 + -1;
        *(int *)((long)param_1 + 0x24) = iVar8;
        uVar15 = (ulong)(uVar1 + *(ushort *)(param_1 + 5));
      } while (iVar8 != 0 && 0 < iVar2);
    }
  }
  *(short *)(param_1 + 2) = (short)uVar15;
LAB_03f4df40:
  *(byte *)((long)param_1 + 0x12) = bVar4;
  return;
}


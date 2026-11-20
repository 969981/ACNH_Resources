
void FUN_03f4d6b0(long *param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  uint3 uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  
  if (*(int *)(param_1[1] + 0x14) == 1) {
    *(int *)(*param_1 + 0x34e0bc) =
         *(int *)(*param_1 + 0x34e0bc) + *(int *)((long)param_1 + 0x24) * 0x800;
  }
  bVar2 = *(byte *)((long)param_1 + 0x12);
  uVar4 = (ushort)*(uint3 *)(param_1 + 2);
  uVar7 = *(uint3 *)(param_1 + 2);
  uVar14 = (uint)uVar4;
  bVar3 = *(byte *)(param_1 + 4);
  uVar5 = bVar3 | 0x2100;
  bVar8 = (uVar7 & 0x40ff00) != 0x2100;
  bVar9 = (uVar7 & 0x40fe00) != 0x4000;
  bVar10 = (uVar7 & 0x40ffe0) != 0x4200;
  bVar11 = (uVar7 & 0x40ff80) != 0x4300;
  if (uVar5 == 0x2180) {
    if (((bVar2 & 0xfe) != 0x7e) &&
       ((((bVar8 && bVar9) && bVar10) && bVar11) && (uVar7 & 0x40e000) != 0)) {
LAB_03f4d7b8:
      if (*(byte *)((long)param_1 + 0x2f) < 8) {
        uVar13 = (uint)bVar3;
        switch(*(byte *)((long)param_1 + 0x2f)) {
        default:
          do {
            uVar12 = FUN_03f4bda8(*param_1,0,uVar5);
            FUN_03f4d1a0(*param_1,bVar2,uVar14,uVar12);
            iVar1 = *(int *)((long)param_1 + 0x24);
            iVar6 = iVar1 + -1;
            *(int *)((long)param_1 + 0x24) = iVar6;
            uVar14 = uVar14 + *(ushort *)(param_1 + 5);
          } while (iVar6 != 0 && 0 < iVar1);
          break;
        case 1:
        case 5:
          do {
            uVar12 = FUN_03f4bda8(*param_1,0,uVar5);
            FUN_03f4d1a0(*param_1,bVar2,uVar14,uVar12);
            iVar1 = *(int *)((long)param_1 + 0x24);
            *(int *)((long)param_1 + 0x24) = iVar1 + -1;
            uVar14 = uVar14 + *(ushort *)(param_1 + 5);
            if (iVar1 < 2) break;
            uVar12 = FUN_03f4bda8(*param_1,0,uVar13 + 0x2101);
            FUN_03f4d1a0(*param_1,bVar2,uVar14,uVar12);
            iVar1 = *(int *)((long)param_1 + 0x24);
            iVar6 = iVar1 + -1;
            *(int *)((long)param_1 + 0x24) = iVar6;
            uVar14 = uVar14 + *(ushort *)(param_1 + 5);
          } while (iVar6 != 0 && 0 < iVar1);
          break;
        case 3:
        case 7:
          do {
            uVar12 = FUN_03f4bda8(*param_1,0,uVar5);
            FUN_03f4d1a0(*param_1,bVar2,uVar14,uVar12);
            iVar1 = *(int *)((long)param_1 + 0x24);
            *(int *)((long)param_1 + 0x24) = iVar1 + -1;
            uVar14 = uVar14 + *(ushort *)(param_1 + 5);
            if (iVar1 < 2) break;
            uVar12 = FUN_03f4bda8(*param_1,0,uVar5);
            FUN_03f4d1a0(*param_1,bVar2,uVar14,uVar12);
            iVar1 = *(int *)((long)param_1 + 0x24);
            *(int *)((long)param_1 + 0x24) = iVar1 + -1;
            uVar14 = uVar14 + *(ushort *)(param_1 + 5);
            if (iVar1 < 2) break;
            uVar12 = FUN_03f4bda8(*param_1,0,uVar13 + 0x2101);
            FUN_03f4d1a0(*param_1,bVar2,uVar14,uVar12);
            iVar1 = *(int *)((long)param_1 + 0x24);
            *(int *)((long)param_1 + 0x24) = iVar1 + -1;
            uVar14 = uVar14 + *(ushort *)(param_1 + 5);
            if (iVar1 < 2) break;
            uVar12 = FUN_03f4bda8(*param_1,0,uVar13 + 0x2101);
            FUN_03f4d1a0(*param_1,bVar2,uVar14,uVar12);
            iVar1 = *(int *)((long)param_1 + 0x24);
            iVar6 = iVar1 + -1;
            *(int *)((long)param_1 + 0x24) = iVar6;
            uVar14 = uVar14 + *(ushort *)(param_1 + 5);
          } while (iVar6 != 0 && 0 < iVar1);
          break;
        case 4:
          do {
            uVar12 = FUN_03f4bda8(*param_1,0,uVar5);
            FUN_03f4d1a0(*param_1,bVar2,uVar14,uVar12);
            iVar1 = *(int *)((long)param_1 + 0x24);
            *(int *)((long)param_1 + 0x24) = iVar1 + -1;
            uVar14 = uVar14 + *(ushort *)(param_1 + 5);
            if (iVar1 < 2) break;
            uVar12 = FUN_03f4bda8(*param_1,0,bVar3 + 0x2101);
            FUN_03f4d1a0(*param_1,bVar2,uVar14,uVar12);
            iVar1 = *(int *)((long)param_1 + 0x24);
            *(int *)((long)param_1 + 0x24) = iVar1 + -1;
            uVar14 = uVar14 + *(ushort *)(param_1 + 5);
            if (iVar1 < 2) break;
            uVar12 = FUN_03f4bda8(*param_1,0,uVar13 + 0x2102);
            FUN_03f4d1a0(*param_1,bVar2,uVar14,uVar12);
            iVar1 = *(int *)((long)param_1 + 0x24);
            *(int *)((long)param_1 + 0x24) = iVar1 + -1;
            uVar14 = uVar14 + *(ushort *)(param_1 + 5);
            if (iVar1 < 2) break;
            uVar12 = FUN_03f4bda8(*param_1,0,uVar13 + 0x2103);
            FUN_03f4d1a0(*param_1,bVar2,uVar14,uVar12);
            iVar1 = *(int *)((long)param_1 + 0x24);
            iVar6 = iVar1 + -1;
            *(int *)((long)param_1 + 0x24) = iVar6;
            uVar14 = uVar14 + *(ushort *)(param_1 + 5);
          } while (iVar6 != 0 && 0 < iVar1);
        }
      }
      goto LAB_03f4d78c;
    }
  }
  else if (((bVar8 && bVar9) && bVar10) && bVar11) goto LAB_03f4d7b8;
  uVar14 = (uint)uVar4 + *(int *)((long)param_1 + 0x24) * (int)param_1[5];
LAB_03f4d78c:
  *(short *)(param_1 + 2) = (short)uVar14;
  *(byte *)((long)param_1 + 0x12) = bVar2;
  return;
}



ulong FUN_0068aab0(long *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  long *plVar5;
  ushort *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  uint *puVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  int iVar15;
  int iVar16;
  byte *pbVar17;
  undefined1 local_50 [16];
  ushort *local_40;
  ulong uStack_38;
  long local_30;
  long local_28;
  long local_8;
  
  iVar16 = (int)param_1[2];
  plVar5 = param_1;
  if (iVar16 != -1) {
    puVar7 = (undefined8 *)(*(long *)(param_1[1] + 0x38) + (long)iVar16 * 0x20);
    plVar5 = (long *)(*(long *)(*(long *)*puVar7 + 0x30) +
                      (ulong)*(ushort *)((long)puVar7 + 0x14) * 0x28 + 0x10);
  }
  puVar6 = *(ushort **)(*(long *)(*plVar5 + 8) + (long)param_2 * 0x10 + 0x20);
  local_40 = puVar6 + 1;
  uStack_38 = (ulong)*puVar6;
  local_50 = FUN_0068adb0(param_1,&local_8,&local_28,&local_30,0,&local_40);
  pbVar13 = local_50._0_8_;
  uVar4 = local_50._8_4_;
  if (local_8 == 0) {
    if (local_30 == 0) {
      if (local_28 == 0) {
        return 0xd;
      }
      if (*(int *)(local_28 + 0x18) == 0) {
        return 0xd;
      }
      puVar7 = *(undefined8 **)(local_28 + 0x10);
      puVar9 = puVar7 + (long)*(int *)(local_28 + 0x18) * 3;
      if ((int)uVar4 < 1) {
        while( true ) {
          pbVar13 = (byte *)*puVar7;
          if (pbVar13 == (byte *)0x0) {
            uVar12 = 0;
          }
          else {
            uVar12 = (ulong)*pbVar13;
            if (*pbVar13 != 0) {
              uVar12 = 0;
              do {
                lVar8 = uVar12 + 1;
                uVar12 = uVar12 + 1;
              } while (pbVar13[lVar8] != 0);
            }
          }
          if ((uint)uVar12 == uVar4) break;
          puVar7 = puVar7 + 3;
          if (puVar7 == puVar9) {
            return 0xd;
          }
        }
LAB_0068ad88:
        if (*(uint *)(puVar7 + 2) < 6) {
          return (ulong)*(uint *)(&DAT_041484ac + (long)(int)*(uint *)(puVar7 + 2) * 4);
        }
        return 0xd;
      }
      do {
        pbVar14 = (byte *)*puVar7;
        if (pbVar14 == (byte *)0x0) {
          if (uVar4 == 0) goto LAB_0068ad54;
        }
        else {
          uVar12 = (ulong)*pbVar14;
          if (*pbVar14 != 0) {
            uVar12 = 0;
            do {
              lVar8 = uVar12 + 1;
              uVar12 = uVar12 + 1;
            } while (pbVar14[lVar8] != 0);
          }
          if ((uint)uVar12 == uVar4) {
LAB_0068ad54:
            pbVar17 = pbVar13;
            iVar16 = uVar4 + 1;
            while( true ) {
              bVar3 = *pbVar14;
              if (bVar3 == 0 || bVar3 != *pbVar17) break;
              iVar16 = iVar16 + -1;
              pbVar14 = pbVar14 + 1;
              pbVar17 = pbVar17 + 1;
              if (iVar16 < 2) goto LAB_0068ad88;
            }
            if (bVar3 == *pbVar17) goto LAB_0068ad88;
          }
        }
        puVar7 = puVar7 + 3;
        if (puVar7 == puVar9) {
          return 0xd;
        }
      } while( true );
    }
    uVar12 = FUN_0068b0e0(local_30,local_50);
  }
  else {
    lVar8 = *(long *)(local_8 + 8);
    uVar12 = (ulong)*(ushort *)(lVar8 + 0xc);
    puVar10 = (uint *)((int *)(lVar8 + 8) + uVar12 * 4);
    uVar2 = *puVar10;
    if (*(int *)(lVar8 + 8) < (int)*puVar10) {
      do {
        if ((uint)((int)uVar2 >> 3) < uVar4) {
          uVar11 = (ulong)(pbVar13[(int)(uVar4 + ~((int)uVar2 >> 3))] >> ((ulong)uVar2 & 7)) & 1;
        }
        else {
          uVar11 = 0;
        }
        uVar12 = (ulong)*(ushort *)(lVar8 + 8 + uVar12 * 0x10 + uVar11 * 2 + 4);
        puVar10 = (uint *)(lVar8 + 8 + uVar12 * 0x10);
        bVar1 = (int)uVar2 < (int)*puVar10;
        uVar2 = *puVar10;
      } while (bVar1);
    }
    if (uVar4 != **(ushort **)(puVar10 + 2)) {
      return 0xd;
    }
    if (0 < (int)uVar4) {
      puVar6 = *(ushort **)(puVar10 + 2) + 1;
      iVar15 = uVar4 + 1;
      do {
        bVar3 = *pbVar13;
        if (bVar3 == 0 || bVar3 != (byte)*puVar6) {
          if (bVar3 != (byte)*puVar6) {
            return 0xd;
          }
          break;
        }
        iVar15 = iVar15 + -1;
        pbVar13 = pbVar13 + 1;
        puVar6 = (ushort *)((long)puVar6 + 1);
      } while (1 < iVar15);
    }
    uVar12 = (long)puVar10 + (-0x18 - lVar8);
    if (((uVar12 ^ 0xffffffffffffffff) & 0xffffffff0) == 0) {
      return 0xd;
    }
    uVar12 = (ulong)**(byte **)(local_8 + (long)(int)(uVar12 >> 4) * 8 + 0x10);
  }
  if ((iVar16 == -1) || ((int)uVar12 != 0xd)) {
    return uVar12;
  }
  return 0xd;
}



undefined8 FUN_0068b9d0(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  char *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  ushort *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  int iVar14;
  byte *pbVar15;
  uint uVar16;
  undefined1 local_50 [16];
  long local_40;
  long local_38;
  long local_18;
  
  local_50 = FUN_0068adb0(param_1,&local_18,&local_38,&local_40,0,param_3);
  pbVar12 = local_50._0_8_;
  uVar16 = local_50._8_4_;
  if (local_18 != 0) {
    lVar6 = *(long *)(local_18 + 8);
    uVar10 = (ulong)*(ushort *)(lVar6 + 0xc);
    puVar8 = (uint *)((int *)(lVar6 + 8) + uVar10 * 4);
    uVar2 = *puVar8;
    if (*(int *)(lVar6 + 8) < (int)*puVar8) {
      do {
        if ((uint)((int)uVar2 >> 3) < uVar16) {
          uVar9 = (ulong)(pbVar12[(int)(uVar16 + ~((int)uVar2 >> 3))] >> ((ulong)uVar2 & 7)) & 1;
        }
        else {
          uVar9 = 0;
        }
        uVar10 = (ulong)*(ushort *)(lVar6 + 8 + uVar10 * 0x10 + uVar9 * 2 + 4);
        puVar8 = (uint *)(lVar6 + 8 + uVar10 * 0x10);
        bVar1 = (int)uVar2 < (int)*puVar8;
        uVar2 = *puVar8;
      } while (bVar1);
    }
    if (uVar16 == **(ushort **)(puVar8 + 2)) {
      if (0 < (int)uVar16) {
        puVar11 = *(ushort **)(puVar8 + 2) + 1;
        iVar14 = uVar16 + 1;
        pbVar13 = pbVar12;
        do {
          bVar3 = *pbVar13;
          if (bVar3 == 0 || bVar3 != (byte)*puVar11) {
            if (bVar3 != (byte)*puVar11) goto LAB_0068bb1c;
            break;
          }
          iVar14 = iVar14 + -1;
          pbVar13 = pbVar13 + 1;
          puVar11 = (ushort *)((long)puVar11 + 1);
        } while (1 < iVar14);
      }
      uVar10 = (long)puVar8 + (-0x18 - lVar6);
      if ((((uVar10 ^ 0xffffffffffffffff) & 0xffffffff0) != 0) &&
         (pcVar4 = *(char **)(local_18 + (long)(int)(uVar10 >> 4) * 8 + 0x10), *pcVar4 == '\x04')) {
        pcVar4 = pcVar4 + 0x10;
        goto LAB_0068bc5c;
      }
    }
  }
LAB_0068bb1c:
  if (local_40 != 0) {
    uVar10 = FUN_0068c150(local_40,param_2,local_50);
    if ((uVar10 & 1) != 0) {
      return 1;
    }
  }
  if (local_38 == 0) {
    return 0;
  }
  if (*(int *)(local_38 + 0x18) != 0) {
    puVar5 = *(undefined8 **)(local_38 + 0x10);
    puVar7 = puVar5 + (long)*(int *)(local_38 + 0x18) * 3;
    if (0 < (int)uVar16) {
      do {
        pbVar13 = (byte *)*puVar5;
        if (pbVar13 == (byte *)0x0) {
          if (uVar16 == 0) goto LAB_0068bc1c;
        }
        else {
          uVar10 = (ulong)*pbVar13;
          if (*pbVar13 != 0) {
            uVar10 = 0;
            do {
              lVar6 = uVar10 + 1;
              uVar10 = uVar10 + 1;
            } while (pbVar13[lVar6] != 0);
          }
          if ((uint)uVar10 == uVar16) {
LAB_0068bc1c:
            pbVar15 = pbVar12;
            iVar14 = uVar16 + 1;
            while( true ) {
              bVar3 = *pbVar13;
              if (bVar3 == 0 || bVar3 != *pbVar15) break;
              iVar14 = iVar14 + -1;
              pbVar13 = pbVar13 + 1;
              pbVar15 = pbVar15 + 1;
              if (iVar14 < 2) goto LAB_0068bc4c;
            }
            if (bVar3 == *pbVar15) goto LAB_0068bc4c;
          }
        }
        puVar5 = puVar5 + 3;
        if (puVar5 == puVar7) {
          return 0;
        }
      } while( true );
    }
    do {
      pbVar12 = (byte *)*puVar5;
      if (pbVar12 == (byte *)0x0) {
        if (uVar16 == 0) goto LAB_0068bc4c;
      }
      else {
        uVar10 = (ulong)*pbVar12;
        if (*pbVar12 != 0) {
          uVar10 = 0;
          do {
            lVar6 = uVar10 + 1;
            uVar10 = uVar10 + 1;
          } while (pbVar12[lVar6] != 0);
        }
        if ((uint)uVar10 == uVar16) goto LAB_0068bc4c;
      }
      puVar5 = puVar5 + 3;
    } while (puVar5 != puVar7);
  }
  return 0;
LAB_0068bc4c:
  if (*(int *)(puVar5 + 2) != 2) {
    return 0;
  }
  pcVar4 = (char *)(puVar5 + 1);
LAB_0068bc5c:
  *param_2 = *(undefined4 *)pcVar4;
  return 1;
}


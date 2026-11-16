
/* WARNING: Type propagation algorithm not settling */

byte FUN_0279c960(byte *param_1,long *param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  uint *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  uint uVar13;
  int *piVar14;
  long lVar15;
  byte *pbVar16;
  char cVar17;
  uint *puVar18;
  ulong uVar19;
  byte bVar20;
  byte local_38 [4];
  undefined4 local_34;
  
  local_38[0] = *param_1;
  if (7 < local_38[0]) {
    local_38[0] = 0xff;
  }
  lVar8 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_38,1);
  if (lVar8 == 0) {
    return 0;
  }
  lVar15 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_2 + 0x18))(param_2);
  local_34 = FUN_006bd550(param_2[1],0);
  puVar9 = (uint *)FUN_01b1ee90(lVar15 + 0x1b80,&local_34);
  if (puVar9 == (uint *)0x0) {
    return 0;
  }
  pcVar5 = PTR_DAT_04bb6440;
  puVar12 = (undefined8 *)PTR_DAT_04bb6448;
  if (*(long **)(lVar8 + 0x18358) == (long *)0x0) {
    uVar11 = 0;
  }
  else {
    puVar10 = (undefined8 *)**(long **)(lVar8 + 0x18358);
    uVar11 = 0;
    if (puVar10 != (undefined8 *)0x0) {
      uVar11 = (**(code **)*puVar10)();
      pcVar5 = PTR_DAT_04bb6440;
      puVar12 = (undefined8 *)PTR_DAT_04bb6448;
    }
  }
  PTR_DAT_04bb6440 = pcVar5;
  PTR_DAT_04bb6448 = (undefined *)puVar12;
  if (0 < (int)param_3) {
    lVar15 = *(long *)(lVar8 + 0x18338);
    lVar3 = *(long *)(lVar8 + 0x18340);
    if (*puVar9 == 0) {
LAB_0279cb38:
      uVar13 = 0;
    }
    else {
      cVar17 = *pcVar5;
      do {
        if (cVar17 == '\0') {
          cVar17 = '\x01';
          *puVar12 = 0xffffffffffffffff;
          puVar12[1] = 0xffffffffffffffff;
          *pcVar5 = '\x01';
          *(undefined4 *)(puVar12 + 10) = 0xffffffff;
          puVar12[2] = 0xffffffffffffffff;
          puVar12[3] = 0xffffffffffffffff;
          puVar12[4] = 0xffffffffffffffff;
          puVar12[5] = 0xffffffffffffffff;
          puVar12[6] = 0xffffffffffffffff;
          puVar12[7] = 0xffffffffffffffff;
          puVar12[8] = 0xffffffffffffffff;
          puVar12[9] = 0xffffffffffffffff;
        }
        else {
          uVar13 = *(uint *)((long)puVar12 + 0x4c);
          if (-1 < (int)uVar13) {
            if ((byte *)((ulong)uVar13 + (long)puVar9) == (byte *)0x0) goto LAB_0279cb38;
            uVar13 = (uint)*(byte *)((ulong)uVar13 + (long)puVar9);
            goto LAB_0279cb3c;
          }
          if (uVar13 != 0xffffffff) goto LAB_0279cb38;
        }
        puVar18 = (uint *)(ulong)*puVar9;
        uVar13 = 0;
        if ((*puVar9 == 0) || (puVar9 == puVar18)) goto LAB_0279cb3c;
        lVar2 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar18)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar9 + (lVar2 - (long)puVar18);
        if (lVar2 == 0) goto LAB_0279cb38;
        uVar19 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar18));
        *(undefined4 *)((long)puVar12 + 0x4c) = 0xfffffffe;
        uVar13 = 0;
        if (uVar19 == 0) goto LAB_0279cb3c;
        piVar14 = (int *)(lVar2 + 4);
        while (piVar14[-1] != 0x1be772f0) {
          piVar14 = piVar14 + 2;
          uVar19 = uVar19 - 1;
          if (uVar19 == 0) {
            uVar13 = 0;
            goto LAB_0279cb3c;
          }
        }
        iVar1 = 0;
        if (*piVar14 != -1) {
          iVar1 = *piVar14;
        }
        *(int *)((long)puVar12 + 0x4c) = iVar1;
      } while (*puVar9 != 0);
      uVar13 = 0;
    }
LAB_0279cb3c:
    puVar7 = PTR_DAT_04bb6448;
    puVar6 = PTR_DAT_04bb6440;
    if (param_3 <= uVar13) {
      pbVar16 = (byte *)(lVar3 + lVar15 + 0x5298);
      if (*puVar9 != 0) {
        cVar17 = *PTR_DAT_04bb6440;
        do {
          if (cVar17 == '\0') {
            cVar17 = '\x01';
            *(undefined8 *)puVar7 = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
            *puVar6 = 1;
            *(undefined4 *)(puVar7 + 0x50) = 0xffffffff;
            *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
            uVar13 = *puVar9;
          }
          else {
            uVar13 = *(uint *)(puVar7 + 0x3c);
            if (-1 < (int)uVar13) {
              if (((ushort *)((ulong)uVar13 + (long)puVar9) != (ushort *)0x0) &&
                 (uVar4 = *(ushort *)((ulong)uVar13 + (long)puVar9), uVar4 < 0x200)) {
                pbVar16 = pbVar16 + uVar4;
              }
              break;
            }
            if (uVar13 != 0xffffffff) break;
            uVar13 = *puVar9;
          }
          if ((uVar13 == 0) || (puVar18 = (uint *)(ulong)uVar13, puVar9 == puVar18)) break;
          lVar15 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar18)) != '\0') {
            lVar15 = 0x1c;
          }
          lVar15 = (long)puVar9 + (lVar15 - (long)puVar18);
          if (lVar15 == 0) break;
          uVar19 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar18));
          *(undefined4 *)(puVar7 + 0x3c) = 0xfffffffe;
          if (uVar19 == 0) break;
          piVar14 = (int *)(lVar15 + 4);
          while (piVar14[-1] != 0x54706054) {
            piVar14 = piVar14 + 2;
            uVar19 = uVar19 - 1;
            if (uVar19 == 0) goto LAB_0279cc64;
          }
          iVar1 = 0;
          if (*piVar14 != -1) {
            iVar1 = *piVar14;
          }
          *(int *)(puVar7 + 0x3c) = iVar1;
          if (*puVar9 == 0) break;
        } while( true );
      }
LAB_0279cc64:
      bVar20 = *pbVar16 >> (ulong)(param_3 - 1 & 0x1f) & 1;
      goto joined_r0x0279cb48;
    }
  }
  bVar20 = 0;
joined_r0x0279cb48:
  if ((((uVar11 & 1) != 0) && (*(long *)(lVar8 + 0x18358) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar8 + 0x18358) + 8), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  return bVar20;
}


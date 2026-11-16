
uint FUN_02744210(ushort *param_1,long *param_2,uint param_3)

{
  int iVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  uint uVar7;
  long lVar8;
  char cVar9;
  byte bVar10;
  uint *puVar11;
  ulong uVar12;
  int *piVar13;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar3 = PTR_DAT_04bb2208;
  lVar8 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_2 + 0x18))(param_2);
  local_28 = FUN_006bd550(param_2[1],0);
  puVar6 = (uint *)FUN_027457e0(lVar8 + 0xca0,&local_28);
  puVar5 = PTR_DAT_04bb63a8;
  puVar4 = PTR_DAT_04bb63a0;
  uVar7 = 0;
  if (puVar6 != (uint *)0x0) {
    if (*puVar6 == 0) {
LAB_02744364:
      bVar10 = 0;
    }
    else {
      cVar9 = *PTR_DAT_04bb63a0;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        }
        else {
          uVar7 = *(uint *)(puVar5 + 0x1c);
          if (-1 < (int)uVar7) {
            if (((byte *)((ulong)uVar7 + (long)puVar6) == (byte *)0x0) ||
               (bVar10 = *(byte *)((ulong)uVar7 + (long)puVar6), 6 < bVar10)) goto LAB_02744364;
            goto LAB_02744368;
          }
          if (uVar7 != 0xffffffff) goto LAB_02744364;
        }
        puVar11 = (uint *)(ulong)*puVar6;
        bVar10 = 0;
        if ((*puVar6 == 0) || (puVar6 == puVar11)) goto LAB_02744368;
        lVar8 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar11)) != '\0') {
          lVar8 = 0x1c;
        }
        lVar8 = (long)puVar6 + (lVar8 - (long)puVar11);
        if (lVar8 == 0) goto LAB_02744364;
        uVar12 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar11));
        *(undefined4 *)(puVar5 + 0x1c) = 0xfffffffe;
        bVar10 = 0;
        if (uVar12 == 0) goto LAB_02744368;
        piVar13 = (int *)(lVar8 + 4);
        while (piVar13[-1] != 0x4f7333fd) {
          piVar13 = piVar13 + 2;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) {
            bVar10 = 0;
            goto LAB_02744368;
          }
        }
        iVar1 = 0;
        if (*piVar13 != -1) {
          iVar1 = *piVar13;
        }
        *(int *)(puVar5 + 0x1c) = iVar1;
      } while (*puVar6 != 0);
      bVar10 = 0;
    }
LAB_02744368:
    if (bVar10 == 3) {
      lVar8 = *(long *)puVar3;
      (**(code **)(*param_2 + 0x18))(param_2);
      local_24 = FUN_006bd550(param_2[1],0);
      puVar6 = (uint *)FUN_027457e0(lVar8 + 0xca0,&local_24);
      puVar4 = PTR_DAT_04bb63a8;
      puVar3 = PTR_DAT_04bb63a0;
      if (puVar6 == (uint *)0x0) {
        uVar7 = 0;
      }
      else {
        if (*puVar6 != 0) {
          cVar9 = *PTR_DAT_04bb63a0;
          do {
            if (cVar9 == '\0') {
              cVar9 = '\x01';
              *(undefined8 *)puVar4 = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
              *puVar3 = 1;
              *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
              uVar7 = *puVar6;
            }
            else {
              uVar7 = *(uint *)(puVar4 + 8);
              if (-1 < (int)uVar7) {
                if (((ushort *)((ulong)uVar7 + (long)puVar6) != (ushort *)0x0) &&
                   (uVar2 = *(ushort *)((ulong)uVar7 + (long)puVar6), uVar2 < 0x80)) {
                  param_1 = param_1 + uVar2;
                }
                break;
              }
              if (uVar7 != 0xffffffff) break;
              uVar7 = *puVar6;
            }
            if ((uVar7 == 0) || (puVar11 = (uint *)(ulong)uVar7, puVar6 == puVar11)) break;
            lVar8 = 0xc;
            if (*(char *)((long)puVar6 + (10 - (long)puVar11)) != '\0') {
              lVar8 = 0x1c;
            }
            lVar8 = (long)puVar6 + (lVar8 - (long)puVar11);
            if (lVar8 == 0) break;
            uVar12 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar11));
            *(undefined4 *)(puVar4 + 8) = 0xfffffffe;
            if (uVar12 == 0) break;
            piVar13 = (int *)(lVar8 + 4);
            while (piVar13[-1] != 0x54706054) {
              piVar13 = piVar13 + 2;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) goto LAB_027444b4;
            }
            iVar1 = 0;
            if (*piVar13 != -1) {
              iVar1 = *piVar13;
            }
            *(int *)(puVar4 + 8) = iVar1;
            if (*puVar6 == 0) break;
          } while( true );
        }
LAB_027444b4:
        uVar7 = (uint)*param_1;
      }
      uVar7 = uVar7 >> (ulong)(param_3 & 0x1f) & 1;
    }
    else {
      uVar7 = 0;
    }
  }
  return uVar7;
}


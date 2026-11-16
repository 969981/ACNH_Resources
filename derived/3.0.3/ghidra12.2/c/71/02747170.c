
void FUN_02747170(byte *param_1,long *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  int *piVar7;
  long lVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  char cVar13;
  uint *puVar14;
  ulong uVar15;
  undefined4 local_34;
  
  lVar8 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_2 + 0x18))(param_2);
  local_34 = FUN_006bd550(param_2[1],0);
  puVar6 = (uint *)FUN_020f3140(lVar8 + 0x220,&local_34);
  puVar5 = PTR_DAT_04bb6360;
  puVar4 = PTR_DAT_04bb6358;
  if (puVar6 != (uint *)0x0) {
    uVar11 = *puVar6;
    if (uVar11 != 0) {
      cVar13 = *PTR_DAT_04bb6358;
      do {
        puVar14 = (uint *)(ulong)uVar11;
        pbVar12 = param_1;
        if (cVar13 != '\0') {
          uVar11 = *(uint *)puVar5;
          if ((int)uVar11 < 0) {
            if ((uVar11 == 0xffffffff) && (puVar14 != (uint *)0x0)) goto LAB_0274723c;
            goto LAB_027472b4;
          }
          if ((ushort *)((ulong)uVar11 + (long)puVar6) == (ushort *)0x0) goto LAB_027472b4;
          uVar3 = *(ushort *)((ulong)uVar11 + (long)puVar6);
          if (uVar3 < 0x100) {
            pbVar12 = param_1 + uVar3;
            goto LAB_027472b4;
          }
          uVar11 = (uint)*param_1;
LAB_027472c0:
          cVar13 = *puVar4;
          goto LAB_027472d8;
        }
        cVar13 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        puVar14 = (uint *)(ulong)*puVar6;
        if (puVar14 == (uint *)0x0) {
LAB_027472b4:
          uVar11 = (uint)*pbVar12;
          if (*puVar6 != 0) goto LAB_027472c0;
          goto LAB_02747378;
        }
LAB_0274723c:
        if (puVar6 == puVar14) goto LAB_027472b4;
        lVar8 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar14)) != '\0') {
          lVar8 = 0x1c;
        }
        lVar8 = (long)puVar6 + (lVar8 - (long)puVar14);
        if (lVar8 == 0) goto LAB_027472b4;
        uVar15 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar14));
        *(undefined4 *)puVar5 = 0xfffffffe;
        if (uVar15 == 0) goto LAB_027472b4;
        piVar7 = (int *)(lVar8 + 4);
        while (piVar7[-1] != 0x54706054) {
          piVar7 = piVar7 + 2;
          uVar15 = uVar15 - 1;
          if (uVar15 == 0) goto LAB_027472b4;
        }
        iVar1 = 0;
        if (*piVar7 != -1) {
          iVar1 = *piVar7;
        }
        *(int *)puVar5 = iVar1;
        uVar11 = *puVar6;
      } while (uVar11 != 0);
    }
    uVar11 = (uint)*param_1;
LAB_02747378:
    uVar10 = 0;
LAB_0274737c:
    puVar5 = PTR_DAT_04bb6360;
    puVar4 = PTR_DAT_04bb6358;
    uVar2 = param_3;
    if ((int)uVar10 <= (int)param_3) {
      uVar2 = uVar10;
    }
    uVar10 = 0;
    if (-1 < (int)param_3) {
      uVar10 = uVar2;
    }
    if (uVar10 != uVar11) {
      uVar11 = *puVar6;
      if (uVar11 != 0) {
        cVar13 = *PTR_DAT_04bb6358;
        do {
          if (cVar13 == '\0') {
            cVar13 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *puVar4 = 1;
            *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
            uVar11 = *puVar6;
          }
          else {
            uVar2 = *(uint *)puVar5;
            if (-1 < (int)uVar2) {
              if ((ushort *)((ulong)uVar2 + (long)puVar6) != (ushort *)0x0) {
                uVar3 = *(ushort *)((ulong)uVar2 + (long)puVar6);
                if (0xfe < uVar10) {
                  uVar10 = 0xff;
                }
                bVar9 = (byte)uVar10;
                if (uVar3 < 0x100) {
                  param_1 = param_1 + uVar3;
                }
                goto LAB_027474d4;
              }
              break;
            }
            if (uVar2 != 0xffffffff) break;
          }
          puVar14 = (uint *)(ulong)uVar11;
          if ((puVar14 == (uint *)0x0) || (puVar6 == puVar14)) break;
          lVar8 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar14)) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar6 + (lVar8 - (long)puVar14);
          if (lVar8 == 0) break;
          uVar15 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar14));
          *(undefined4 *)puVar5 = 0xfffffffe;
          if (uVar15 == 0) break;
          piVar7 = (int *)(lVar8 + 4);
          while (piVar7[-1] != 0x54706054) {
            piVar7 = piVar7 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) goto LAB_027474c8;
          }
          iVar1 = 0;
          if (*piVar7 != -1) {
            iVar1 = *piVar7;
          }
          *(int *)puVar5 = iVar1;
          uVar11 = *puVar6;
          if (uVar11 == 0) break;
        } while( true );
      }
LAB_027474c8:
      if (0xfe < uVar10) {
        uVar10 = 0xff;
      }
      bVar9 = (byte)uVar10;
LAB_027474d4:
      *param_1 = bVar9;
      puVar5 = PTR_DAT_04bb6360;
      puVar4 = PTR_DAT_04bb6358;
      uVar11 = *puVar6;
      if (uVar11 != 0) {
        cVar13 = *PTR_DAT_04bb6358;
        while( true ) {
          if (cVar13 == '\0') {
            cVar13 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *puVar4 = 1;
            *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
            uVar11 = *puVar6;
          }
          else if (*(int *)puVar5 != -1) {
            return;
          }
          puVar14 = (uint *)(ulong)uVar11;
          if (puVar14 == (uint *)0x0) {
            return;
          }
          if (puVar6 == puVar14) {
            return;
          }
          lVar8 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar14)) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar6 + (lVar8 - (long)puVar14);
          if (lVar8 == 0) break;
          uVar15 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar14));
          *(undefined4 *)puVar5 = 0xfffffffe;
          if (uVar15 == 0) {
            return;
          }
          piVar7 = (int *)(lVar8 + 4);
          while (piVar7[-1] != 0x54706054) {
            piVar7 = piVar7 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) {
              return;
            }
          }
          iVar1 = 0;
          if (*piVar7 != -1) {
            iVar1 = *piVar7;
          }
          *(int *)puVar5 = iVar1;
          uVar11 = *puVar6;
          if (uVar11 == 0) {
            return;
          }
        }
        return;
      }
    }
  }
  return;
LAB_027472d8:
  if (cVar13 == '\0') {
    cVar13 = '\x01';
    *(undefined8 *)puVar5 = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
    *puVar4 = 1;
    *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
    uVar2 = *puVar6;
  }
  else {
    uVar2 = *(uint *)(puVar5 + 0x20);
    if (-1 < (int)uVar2) {
      uVar10 = 0;
      if ((byte *)((ulong)uVar2 + (long)puVar6) != (byte *)0x0) {
        uVar10 = (uint)*(byte *)((ulong)uVar2 + (long)puVar6);
      }
      goto LAB_0274737c;
    }
    if (uVar2 != 0xffffffff) goto LAB_02747378;
    uVar2 = *puVar6;
  }
  if ((uVar2 == 0) || (puVar14 = (uint *)(ulong)uVar2, puVar6 == puVar14)) goto LAB_02747378;
  lVar8 = 0xc;
  if (*(char *)((long)puVar6 + (10 - (long)puVar14)) != '\0') {
    lVar8 = 0x1c;
  }
  lVar8 = (long)puVar6 + (lVar8 - (long)puVar14);
  if (lVar8 == 0) goto LAB_02747378;
  uVar15 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar14));
  *(undefined4 *)(puVar5 + 0x20) = 0xfffffffe;
  if (uVar15 == 0) goto LAB_02747378;
  piVar7 = (int *)(lVar8 + 4);
  while (piVar7[-1] != -0x42897d0b) {
    piVar7 = piVar7 + 2;
    uVar15 = uVar15 - 1;
    if (uVar15 == 0) goto LAB_02747378;
  }
  iVar1 = 0;
  if (*piVar7 != -1) {
    iVar1 = *piVar7;
  }
  *(int *)(puVar5 + 0x20) = iVar1;
  if (*puVar6 == 0) goto LAB_02747378;
  goto LAB_027472d8;
}



float FUN_01943a80(long param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  ushort *puVar4;
  ulong uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  char cVar9;
  uint uVar10;
  float fVar11;
  undefined4 local_38;
  undefined4 local_34;
  
  puVar2 = PTR_DAT_04bb4800;
  local_38 = param_2;
  lVar3 = FUN_00994504(*(undefined8 *)PTR_DAT_04bb4800,2,&local_38);
  if (lVar3 != 0) {
    puVar4 = (ushort *)(**(code **)(*(long *)(lVar3 + 0x98) + 0xf0))();
    uVar1 = (uint)*puVar4 - (uint)*(ushort *)(param_1 + 0x210);
    if (((uVar1 < *(uint *)(param_1 + 0x1f0)) &&
        (puVar8 = *(uint **)(*(long *)(param_1 + 0x1f8) + (long)(int)uVar1 * 8),
        puVar8 != (uint *)0x0)) && (uVar1 = *puVar8, uVar1 != 0)) {
      cVar9 = DAT_052c87e8;
      do {
        if (cVar9 == '\0') {
          DAT_052c87ec = 0xffffffffffffffff;
          cVar9 = '\x01';
          DAT_052c87f4 = 0xffffffff;
          uVar1 = *puVar8;
          DAT_052c87e8 = '\x01';
        }
        else {
          if (-1 < (int)DAT_052c87f4) {
            if ((byte *)((ulong)DAT_052c87f4 + (long)puVar8) == (byte *)0x0) break;
            uVar10 = (uint)*(byte *)((ulong)DAT_052c87f4 + (long)puVar8);
            goto LAB_01943be0;
          }
          if (DAT_052c87f4 != 0xffffffff) break;
        }
        puVar7 = (uint *)(ulong)uVar1;
        uVar10 = 0;
        if ((puVar7 == (uint *)0x0) || (uVar10 = 0, puVar8 == puVar7)) goto LAB_01943be0;
        lVar3 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar7)) != '\0') {
          lVar3 = 0x1c;
        }
        lVar3 = (long)puVar8 + (lVar3 - (long)puVar7);
        if (lVar3 == 0) break;
        uVar5 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar7));
        DAT_052c87f4 = 0xfffffffe;
        if (uVar5 == 0) break;
        puVar7 = (uint *)(lVar3 + 4);
        while (puVar7[-1] != 0x4d9888d3) {
          puVar7 = puVar7 + 2;
          uVar5 = uVar5 - 1;
          if (uVar5 == 0) goto LAB_01943bdc;
        }
        uVar10 = 0;
        DAT_052c87f4 = 0;
        if (*puVar7 != 0xffffffff) {
          DAT_052c87f4 = *puVar7;
        }
        uVar1 = *puVar8;
        if (uVar1 == 0) goto LAB_01943be0;
      } while( true );
    }
  }
LAB_01943bdc:
  uVar10 = 0;
LAB_01943be0:
  local_34 = param_3;
  lVar3 = FUN_00994504(*(undefined8 *)puVar2,2,&local_34);
  if (lVar3 != 0) {
    puVar4 = (ushort *)(**(code **)(*(long *)(lVar3 + 0x98) + 0xf0))();
    uVar1 = (uint)*puVar4 - (uint)*(ushort *)(param_1 + 0x210);
    if (((uVar1 < *(uint *)(param_1 + 0x1f0)) &&
        (puVar8 = *(uint **)(*(long *)(param_1 + 0x1f8) + (long)(int)uVar1 * 8),
        puVar8 != (uint *)0x0)) && (uVar1 = *puVar8, uVar1 != 0)) {
      cVar9 = DAT_052c87e8;
      do {
        if (cVar9 == '\0') {
          DAT_052c87ec = 0xffffffffffffffff;
          cVar9 = '\x01';
          DAT_052c87f4 = 0xffffffff;
          uVar1 = *puVar8;
          DAT_052c87e8 = '\x01';
        }
        else {
          if (-1 < (int)DAT_052c87f4) {
            if ((byte *)((ulong)DAT_052c87f4 + (long)puVar8) == (byte *)0x0) break;
            uVar6 = (uint)*(byte *)((ulong)DAT_052c87f4 + (long)puVar8);
            goto LAB_01943d20;
          }
          if (DAT_052c87f4 != 0xffffffff) break;
        }
        puVar7 = (uint *)(ulong)uVar1;
        uVar6 = 0;
        if ((puVar7 == (uint *)0x0) || (uVar6 = 0, puVar8 == puVar7)) goto LAB_01943d20;
        lVar3 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar7)) != '\0') {
          lVar3 = 0x1c;
        }
        lVar3 = (long)puVar8 + (lVar3 - (long)puVar7);
        uVar6 = 0;
        if (lVar3 == 0) goto LAB_01943d20;
        uVar5 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar7));
        DAT_052c87f4 = 0xfffffffe;
        if (uVar5 == 0) break;
        puVar7 = (uint *)(lVar3 + 4);
        while (puVar7[-1] != 0x4d9888d3) {
          puVar7 = puVar7 + 2;
          uVar5 = uVar5 - 1;
          if (uVar5 == 0) goto LAB_01943d1c;
        }
        uVar6 = 0;
        DAT_052c87f4 = 0;
        if (*puVar7 != 0xffffffff) {
          DAT_052c87f4 = *puVar7;
        }
        uVar1 = *puVar8;
        if (uVar1 == 0) goto LAB_01943d20;
      } while( true );
    }
  }
LAB_01943d1c:
  uVar6 = 0;
LAB_01943d20:
  if (uVar6 + uVar10 == 0) {
    fVar11 = 0.5;
  }
  else {
    fVar11 = (float)uVar10 / (float)(uVar6 + uVar10);
  }
  return fVar11;
}


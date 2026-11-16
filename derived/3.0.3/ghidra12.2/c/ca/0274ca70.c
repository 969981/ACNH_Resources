
void FUN_0274ca70(byte *param_1,undefined8 param_2,int param_3)

{
  ushort *puVar1;
  int iVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  uint *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  long lVar12;
  char cVar13;
  ulong uVar14;
  ushort *puVar15;
  uint *puVar16;
  int *piVar17;
  byte local_5c [4];
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_5c[0] = *param_1;
  if (7 < local_5c[0]) {
    local_5c[0] = 0xff;
  }
  lVar6 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_5c,1);
  if (lVar6 == 0) {
    return;
  }
  lVar12 = *(long *)(lVar6 + 0x18320);
  if (lVar12 == 0) {
    uVar7 = 0;
  }
  else {
    if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
      uVar7 = 0;
      plVar8 = *(long **)(lVar12 + 0x20);
    }
    else {
      uVar7 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
      uVar7 = uVar7 & 0xffffffff;
      if (*(long *)(lVar6 + 0x18320) == 0) goto LAB_0274cb38;
      plVar8 = *(long **)(*(long *)(lVar6 + 0x18320) + 0x20);
    }
    if (plVar8 != (long *)0x0) {
      local_58 = *(long *)(lVar6 + 0x18300);
      local_50 = *(undefined8 *)(lVar6 + 0x18308);
      uStack_48 = 0x1000;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_58);
    }
  }
LAB_0274cb38:
  puVar1 = (ushort *)(*(long *)(lVar6 + 0x18308) + *(long *)(lVar6 + 0x18300));
  puVar9 = (uint *)FUN_0274eeb0(param_2);
  puVar5 = PTR_DAT_04bb6348;
  puVar4 = PTR_DAT_04bb6340;
  if (puVar9 == (uint *)0x0) {
    uVar11 = 0;
  }
  else {
    puVar15 = puVar1;
    if (*puVar9 != 0) {
      cVar13 = *PTR_DAT_04bb6340;
      do {
        if (cVar13 == '\0') {
          cVar13 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          uVar11 = *puVar9;
        }
        else {
          uVar11 = *(uint *)(puVar5 + 8);
          if (-1 < (int)uVar11) {
            if (((ushort *)((ulong)uVar11 + (long)puVar9) != (ushort *)0x0) &&
               (uVar3 = *(ushort *)((ulong)uVar11 + (long)puVar9), uVar3 < 0x800)) {
              puVar15 = puVar1 + uVar3;
            }
            break;
          }
          if (uVar11 != 0xffffffff) break;
          uVar11 = *puVar9;
        }
        if ((uVar11 == 0) || (puVar16 = (uint *)(ulong)uVar11, puVar9 == puVar16)) break;
        lVar12 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar16)) != '\0') {
          lVar12 = 0x1c;
        }
        lVar12 = (long)puVar9 + (lVar12 - (long)puVar16);
        if (lVar12 == 0) break;
        uVar14 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar16));
        *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
        if (uVar14 == 0) break;
        piVar17 = (int *)(lVar12 + 4);
        while (piVar17[-1] != 0x54706054) {
          piVar17 = piVar17 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) goto LAB_0274cc58;
        }
        iVar2 = 0;
        if (*piVar17 != -1) {
          iVar2 = *piVar17;
        }
        *(int *)(puVar5 + 8) = iVar2;
        if (*puVar9 == 0) break;
      } while( true );
    }
LAB_0274cc58:
    uVar11 = (uint)*puVar15;
  }
  FUN_0274c120(puVar1,param_2,uVar11 + param_3,param_1);
  if ((((uVar7 & 1) != 0) && (*(long *)(lVar6 + 0x18320) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar6 + 0x18320) + 0x18), puVar10 != (undefined8 *)0x0))
  {
    (**(code **)*puVar10)();
  }
  return;
}


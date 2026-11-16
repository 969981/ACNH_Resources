
undefined2 FUN_027983c0(byte *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  uint *puVar11;
  long lVar12;
  undefined2 *puVar13;
  char cVar14;
  uint *puVar15;
  ulong uVar16;
  int *piVar17;
  undefined2 uVar18;
  byte local_48 [4];
  undefined4 local_44;
  
  local_48[0] = *param_1;
  if (7 < local_48[0]) {
    local_48[0] = 0xff;
  }
  lVar9 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_48,1);
  if (lVar9 == 0) {
    uVar18 = 0;
  }
  else {
    if ((*(long **)(lVar9 + 0x18358) == (long *)0x0) ||
       (puVar10 = (undefined8 *)**(long **)(lVar9 + 0x18358), puVar10 == (undefined8 *)0x0)) {
      uVar8 = 1;
    }
    else {
      uVar8 = (**(code **)*puVar10)();
      uVar8 = uVar8 ^ 1;
    }
    lVar2 = *(long *)(lVar9 + 0x18338);
    lVar3 = *(long *)(lVar9 + 0x18340);
    lVar12 = *(long *)PTR_DAT_04bb2208;
    (**(code **)(*param_2 + 0x18))(param_2);
    local_44 = FUN_006bd550(param_2[1],0);
    puVar11 = (uint *)FUN_00ad5fc0(lVar12 + 0x1960,&local_44);
    puVar7 = PTR_DAT_04bb6428;
    puVar6 = PTR_DAT_04bb6420;
    if (puVar11 == (uint *)0x0) {
      uVar18 = 0;
    }
    else {
      puVar13 = (undefined2 *)(lVar3 + lVar2);
      if (*puVar11 != 0) {
        cVar14 = *PTR_DAT_04bb6420;
        do {
          if (cVar14 == '\0') {
            cVar14 = '\x01';
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
            uVar4 = *puVar11;
          }
          else {
            uVar4 = *(uint *)(puVar7 + 0x20);
            if (-1 < (int)uVar4) {
              if (((ushort *)((ulong)uVar4 + (long)puVar11) != (ushort *)0x0) &&
                 (uVar5 = *(ushort *)((ulong)uVar4 + (long)puVar11), uVar5 < 0x200)) {
                puVar13 = puVar13 + uVar5;
              }
              break;
            }
            if (uVar4 != 0xffffffff) break;
            uVar4 = *puVar11;
          }
          if ((uVar4 == 0) || (puVar15 = (uint *)(ulong)uVar4, puVar11 == puVar15)) break;
          lVar2 = 0xc;
          if (*(char *)((long)puVar11 + (10 - (long)puVar15)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar11 + (lVar2 - (long)puVar15);
          if (lVar2 == 0) break;
          uVar16 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar15));
          *(undefined4 *)(puVar7 + 0x20) = 0xfffffffe;
          if (uVar16 == 0) break;
          piVar17 = (int *)(lVar2 + 4);
          while (piVar17[-1] != 0x54706054) {
            piVar17 = piVar17 + 2;
            uVar16 = uVar16 - 1;
            if (uVar16 == 0) goto LAB_0279859c;
          }
          iVar1 = 0;
          if (*piVar17 != -1) {
            iVar1 = *piVar17;
          }
          *(int *)(puVar7 + 0x20) = iVar1;
          if (*puVar11 == 0) break;
        } while( true );
      }
LAB_0279859c:
      uVar18 = *puVar13;
    }
    if ((((uVar8 & 1) == 0) && (*(long *)(lVar9 + 0x18358) != 0)) &&
       (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x18358) + 8), puVar10 != (undefined8 *)0x0)) {
      (**(code **)*puVar10)();
    }
  }
  return uVar18;
}



bool FUN_0279b1b0(byte *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  uint uVar9;
  long lVar10;
  uint *puVar11;
  undefined8 *puVar12;
  short sVar13;
  long lVar14;
  long lVar15;
  short *psVar16;
  char cVar17;
  int *piVar18;
  uint *puVar19;
  ulong uVar20;
  short sVar21;
  byte local_5c [4];
  undefined4 local_58;
  undefined4 local_54;
  
  local_5c[0] = *param_1;
  if (7 < local_5c[0]) {
    local_5c[0] = 0xff;
  }
  lVar10 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_5c,1);
  puVar5 = PTR_DAT_04bb2208;
  if (lVar10 == 0) {
    bVar8 = false;
  }
  else {
    lVar14 = *(long *)PTR_DAT_04bb2208;
    (**(code **)(*param_2 + 0x18))(param_2);
    local_58 = FUN_006bd550(param_2[1],0);
    puVar11 = (uint *)FUN_00ad5fc0(lVar14 + 0x1960,&local_58);
    puVar7 = PTR_DAT_04bb6428;
    puVar6 = PTR_DAT_04bb6420;
    if ((puVar11 != (uint *)0x0) && (*puVar11 != 0)) {
      cVar17 = *PTR_DAT_04bb6420;
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
        }
        else {
          uVar9 = *(uint *)(puVar7 + 0x14);
          if (-1 < (int)uVar9) {
            if ((short *)((ulong)uVar9 + (long)puVar11) == (short *)0x0) break;
            sVar21 = *(short *)((ulong)uVar9 + (long)puVar11);
            goto LAB_0279b34c;
          }
          if (uVar9 != 0xffffffff) break;
        }
        puVar19 = (uint *)(ulong)*puVar11;
        sVar21 = 0;
        if ((*puVar11 == 0) || (puVar11 == puVar19)) goto LAB_0279b34c;
        lVar14 = 0xc;
        if (*(char *)((long)puVar11 + (10 - (long)puVar19)) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar11 + (lVar14 - (long)puVar19);
        if (lVar14 == 0) break;
        uVar20 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar19));
        *(undefined4 *)(puVar7 + 0x14) = 0xfffffffe;
        if (uVar20 == 0) break;
        piVar18 = (int *)(lVar14 + 4);
        while (piVar18[-1] != 0x110b14c) {
          piVar18 = piVar18 + 2;
          uVar20 = uVar20 - 1;
          if (uVar20 == 0) goto LAB_0279b348;
        }
        sVar21 = 0;
        iVar1 = 0;
        if (*piVar18 != -1) {
          iVar1 = *piVar18;
        }
        *(int *)(puVar7 + 0x14) = iVar1;
        if (*puVar11 == 0) goto LAB_0279b34c;
      } while( true );
    }
LAB_0279b348:
    sVar21 = 0;
LAB_0279b34c:
    if ((*(long **)(lVar10 + 0x18358) == (long *)0x0) ||
       (puVar12 = (undefined8 *)**(long **)(lVar10 + 0x18358), puVar12 == (undefined8 *)0x0)) {
      uVar9 = 1;
    }
    else {
      uVar9 = (**(code **)*puVar12)();
      uVar9 = uVar9 ^ 1;
    }
    lVar15 = *(long *)puVar5;
    lVar14 = *(long *)(lVar10 + 0x18338);
    lVar2 = *(long *)(lVar10 + 0x18340);
    (**(code **)(*param_2 + 0x18))(param_2);
    local_54 = FUN_006bd550(param_2[1],0);
    puVar11 = (uint *)FUN_00ad5fc0(lVar15 + 0x1960,&local_54);
    puVar6 = PTR_DAT_04bb6428;
    puVar5 = PTR_DAT_04bb6420;
    if (puVar11 == (uint *)0x0) {
      sVar13 = 0;
    }
    else {
      psVar16 = (short *)(lVar2 + lVar14);
      if (*puVar11 != 0) {
        cVar17 = *PTR_DAT_04bb6420;
        do {
          if (cVar17 == '\0') {
            cVar17 = '\x01';
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *puVar5 = 1;
            *(undefined4 *)(puVar6 + 0x50) = 0xffffffff;
            *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
            uVar3 = *puVar11;
          }
          else {
            uVar3 = *(uint *)(puVar6 + 0x20);
            if (-1 < (int)uVar3) {
              if (((ushort *)((ulong)uVar3 + (long)puVar11) != (ushort *)0x0) &&
                 (uVar4 = *(ushort *)((ulong)uVar3 + (long)puVar11), uVar4 < 0x200)) {
                psVar16 = psVar16 + uVar4;
              }
              break;
            }
            if (uVar3 != 0xffffffff) break;
            uVar3 = *puVar11;
          }
          if ((uVar3 == 0) || (puVar19 = (uint *)(ulong)uVar3, puVar11 == puVar19)) break;
          lVar14 = 0xc;
          if (*(char *)((long)puVar11 + (10 - (long)puVar19)) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar11 + (lVar14 - (long)puVar19);
          if (lVar14 == 0) break;
          uVar20 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar19));
          *(undefined4 *)(puVar6 + 0x20) = 0xfffffffe;
          if (uVar20 == 0) break;
          piVar18 = (int *)(lVar14 + 4);
          while (piVar18[-1] != 0x54706054) {
            piVar18 = piVar18 + 2;
            uVar20 = uVar20 - 1;
            if (uVar20 == 0) goto LAB_0279b4c0;
          }
          iVar1 = 0;
          if (*piVar18 != -1) {
            iVar1 = *piVar18;
          }
          *(int *)(puVar6 + 0x20) = iVar1;
          if (*puVar11 == 0) break;
        } while( true );
      }
LAB_0279b4c0:
      sVar13 = *psVar16;
    }
    bVar8 = sVar21 == sVar13;
    if ((((uVar9 & 1) == 0) && (*(long *)(lVar10 + 0x18358) != 0)) &&
       (puVar12 = *(undefined8 **)(*(long *)(lVar10 + 0x18358) + 8), puVar12 != (undefined8 *)0x0))
    {
      (**(code **)*puVar12)();
    }
  }
  return bVar8;
}


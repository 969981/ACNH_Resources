
void FUN_02755820(byte *param_1,long *param_2,int param_3)

{
  ushort *puVar1;
  int iVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  uint *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  long lVar13;
  char cVar14;
  ulong uVar15;
  ushort *puVar16;
  uint *puVar17;
  int *piVar18;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  byte local_34 [4];
  
  local_34[0] = *param_1;
  if (7 < local_34[0]) {
    return;
  }
  lVar7 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_34,1);
  if (lVar7 == 0) {
    return;
  }
  lVar13 = lVar7 + 0x194b0;
  if (*(long *)(lVar7 + 0x194b8) == 0) {
    lVar13 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
  }
  lVar7 = *(long *)(lVar13 + 0x2ad48);
  if (lVar7 == 0) {
    uVar8 = 0;
  }
  else {
    if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
      uVar8 = 0;
      plVar9 = *(long **)(lVar7 + 0x20);
    }
    else {
      uVar8 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      uVar8 = uVar8 & 0xffffffff;
      if (*(long *)(lVar13 + 0x2ad48) == 0) goto LAB_02755908;
      plVar9 = *(long **)(*(long *)(lVar13 + 0x2ad48) + 0x20);
    }
    if (plVar9 != (long *)0x0) {
      local_68 = *(long *)(lVar13 + 0x2ad28);
      local_60 = *(undefined8 *)(lVar13 + 0x2ad30);
      uStack_58 = 0x100;
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_68);
    }
  }
LAB_02755908:
  puVar1 = (ushort *)(*(long *)(lVar13 + 0x2ad30) + *(long *)(lVar13 + 0x2ad28));
  lVar7 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar6 = FUN_006bd550(param_2[1],0);
  local_68 = CONCAT44(local_68._4_4_,uVar6);
  puVar10 = (uint *)FUN_02755c10(lVar7 + 0x1300,&local_68);
  puVar5 = PTR_DAT_04bb63e0;
  puVar4 = PTR_DAT_04bb63d8;
  if (puVar10 == (uint *)0x0) {
    uVar12 = 0;
  }
  else {
    puVar16 = puVar1;
    if (*puVar10 != 0) {
      cVar14 = *PTR_DAT_04bb63d8;
      do {
        if (cVar14 == '\0') {
          cVar14 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          uVar12 = *puVar10;
        }
        else {
          uVar12 = *(uint *)(puVar5 + 8);
          if (-1 < (int)uVar12) {
            if (((ushort *)((ulong)uVar12 + (long)puVar10) != (ushort *)0x0) &&
               (uVar3 = *(ushort *)((ulong)uVar12 + (long)puVar10), uVar3 < 0x80)) {
              puVar16 = puVar1 + uVar3;
            }
            break;
          }
          if (uVar12 != 0xffffffff) break;
          uVar12 = *puVar10;
        }
        if ((uVar12 == 0) || (puVar17 = (uint *)(ulong)uVar12, puVar10 == puVar17)) break;
        lVar7 = 0xc;
        if (*(char *)((long)puVar10 + (10 - (long)puVar17)) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar10 + (lVar7 - (long)puVar17);
        if (lVar7 == 0) break;
        uVar15 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar17));
        *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
        if (uVar15 == 0) break;
        piVar18 = (int *)(lVar7 + 4);
        while (piVar18[-1] != 0x54706054) {
          piVar18 = piVar18 + 2;
          uVar15 = uVar15 - 1;
          if (uVar15 == 0) goto LAB_02755a5c;
        }
        iVar2 = 0;
        if (*piVar18 != -1) {
          iVar2 = *piVar18;
        }
        *(int *)(puVar5 + 8) = iVar2;
        if (*puVar10 == 0) break;
      } while( true );
    }
LAB_02755a5c:
    uVar12 = (uint)*puVar16;
  }
  FUN_027551a0(puVar1,param_1,param_2,uVar12 + param_3);
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar13 + 0x2ad48) != 0)) &&
     (puVar11 = *(undefined8 **)(*(long *)(lVar13 + 0x2ad48) + 0x18), puVar11 != (undefined8 *)0x0))
  {
    (**(code **)*puVar11)();
  }
  return;
}


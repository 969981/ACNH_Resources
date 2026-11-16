
void FUN_0279a9f0(byte *param_1,long *param_2,int param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  uint *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  char cVar16;
  uint *puVar17;
  ulong uVar18;
  byte local_6c [4];
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_6c[0] = *param_1;
  if (7 < local_6c[0]) {
    local_6c[0] = 0xff;
  }
  lVar8 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_6c,1);
  if (lVar8 == 0) {
    return;
  }
  lVar13 = *(long *)(lVar8 + 0x18358);
  if (lVar13 == 0) {
    uVar9 = 0;
  }
  else {
    if (*(undefined8 **)(lVar13 + 0x10) == (undefined8 *)0x0) {
      uVar9 = 0;
      plVar10 = *(long **)(lVar13 + 0x20);
    }
    else {
      uVar9 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      uVar9 = uVar9 & 0xffffffff;
      if (*(long *)(lVar8 + 0x18358) == 0) goto LAB_0279aabc;
      plVar10 = *(long **)(*(long *)(lVar8 + 0x18358) + 0x20);
    }
    if (plVar10 != (long *)0x0) {
      local_68 = *(long *)(lVar8 + 0x18338);
      local_60 = *(undefined8 *)(lVar8 + 0x18340);
      uStack_58 = 0x62ac;
      (**(code **)(*plVar10 + 0x20))(plVar10,&local_68);
    }
  }
LAB_0279aabc:
  lVar2 = *(long *)(lVar8 + 0x18338);
  lVar13 = *(long *)(lVar8 + 0x18340);
  lVar14 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar7 = FUN_006bd550(param_2[1],0);
  local_68 = CONCAT44(local_68._4_4_,uVar7);
  puVar11 = (uint *)FUN_01b1ee90(lVar14 + 0x1b80,&local_68);
  puVar6 = PTR_DAT_04bb6448;
  puVar5 = PTR_DAT_04bb6440;
  if (puVar11 != (uint *)0x0) {
    lVar13 = lVar13 + lVar2;
    if (*puVar11 != 0) {
      cVar16 = *PTR_DAT_04bb6440;
      do {
        if (cVar16 == '\0') {
          cVar16 = '\x01';
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
          uVar3 = *(uint *)(puVar6 + 0x3c);
          if (-1 < (int)uVar3) {
            if ((ushort *)((ulong)uVar3 + (long)puVar11) != (ushort *)0x0) {
              uVar4 = *(ushort *)((ulong)uVar3 + (long)puVar11);
              piVar15 = (int *)(lVar13 + 0xe98);
              if (uVar4 < 0x200) {
                piVar15 = piVar15 + uVar4;
              }
              goto LAB_0279ac20;
            }
            break;
          }
          if (uVar3 != 0xffffffff) break;
          uVar3 = *puVar11;
        }
        if ((uVar3 == 0) || (puVar17 = (uint *)(ulong)uVar3, puVar11 == puVar17)) break;
        lVar2 = 0xc;
        if (*(char *)((long)puVar11 + (10 - (long)puVar17)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar11 + (lVar2 - (long)puVar17);
        if (lVar2 == 0) break;
        uVar18 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar17));
        *(undefined4 *)(puVar6 + 0x3c) = 0xfffffffe;
        if (uVar18 == 0) break;
        piVar15 = (int *)(lVar2 + 4);
        while (piVar15[-1] != 0x54706054) {
          piVar15 = piVar15 + 2;
          uVar18 = uVar18 - 1;
          if (uVar18 == 0) goto LAB_0279ac1c;
        }
        iVar1 = 0;
        if (*piVar15 != -1) {
          iVar1 = *piVar15;
        }
        *(int *)(puVar6 + 0x3c) = iVar1;
        if (*puVar11 == 0) break;
      } while( true );
    }
LAB_0279ac1c:
    piVar15 = (int *)(lVar13 + 0xe98);
LAB_0279ac20:
    FUN_02799500(lVar13,param_1,param_2,*piVar15 + param_3);
  }
  if ((((uVar9 & 1) != 0) && (*(long *)(lVar8 + 0x18358) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar8 + 0x18358) + 0x18), puVar12 != (undefined8 *)0x0))
  {
    (**(code **)*puVar12)();
  }
  return;
}


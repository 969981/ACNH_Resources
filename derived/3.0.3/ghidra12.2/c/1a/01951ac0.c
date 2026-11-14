
void FUN_01951ac0(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined2 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined2 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  undefined *puVar15;
  uint uVar16;
  long lVar17;
  undefined8 *puVar18;
  long *plVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  int *piVar23;
  void *__ptr;
  undefined *puVar24;
  undefined2 *puVar25;
  ulong uVar26;
  ulong uVar27;
  undefined *local_78;
  long local_70;
  undefined8 local_68;
  
  local_78 = PTR_DAT_04bb7648 + 0x10;
  local_70 = CONCAT62(local_70._2_6_,*DAT_05ab5ea8);
  lVar17 = FUN_03775a30(&local_78);
  if (lVar17 == 0) {
    return;
  }
  uVar16 = *(uint *)(param_1 + 0xe60);
  puVar1 = (undefined8 *)(param_1 + 0xe50);
  if (0 < (int)uVar16) {
    lVar21 = 0;
    do {
      while( true ) {
        piVar23 = (int *)*puVar1;
        uVar20 = (uint)lVar21;
        if (uVar20 < uVar16) {
          iVar2 = *(int *)(param_1 + 0xe5c) + uVar20;
          iVar3 = 0;
          if (*(int *)(param_1 + 0xe58) <= iVar2) {
            iVar3 = *(int *)(param_1 + 0xe58);
          }
          piVar23 = piVar23 + (iVar2 - iVar3);
        }
        if (*piVar23 != -1) break;
        uVar16 = uVar16 - 1;
        if (uVar20 < uVar16) {
          lVar22 = lVar21;
          do {
            iVar10 = *(int *)(param_1 + 0xe5c);
            iVar2 = (int)lVar22 + iVar10;
            iVar8 = *(int *)(param_1 + 0xe58);
            iVar3 = 0;
            if (iVar8 <= iVar2 + 1) {
              iVar3 = iVar8;
            }
            iVar6 = 0;
            if (iVar8 <= iVar2) {
              iVar6 = iVar8;
            }
            lVar4 = lVar22 + ((long)iVar10 - (long)iVar3);
            lVar5 = lVar22 + ((long)iVar10 - (long)iVar6);
            lVar22 = lVar22 + 1;
            *(undefined4 *)(*(long *)(param_1 + 0xe50) + lVar5 * 4) =
                 *(undefined4 *)(*(long *)(param_1 + 0xe50) + lVar4 * 4 + 4);
            uVar16 = *(int *)(param_1 + 0xe60) - 1;
          } while ((int)lVar22 < (int)uVar16);
        }
        *(uint *)(param_1 + 0xe60) = uVar16;
        if ((int)uVar16 <= (int)uVar20) goto LAB_01951bf4;
      }
      lVar21 = lVar21 + 1;
    } while ((int)lVar21 < (int)uVar16);
  }
LAB_01951bf4:
  if ((*(long *)(lVar17 + 0x108) == 0) ||
     (puVar18 = *(undefined8 **)(*(long *)(lVar17 + 0x108) + 0x10), puVar18 == (undefined8 *)0x0)) {
    uVar16 = 1;
  }
  else {
    uVar16 = (**(code **)*puVar18)();
    uVar16 = uVar16 ^ 1;
  }
  uVar14 = DAT_0558600c;
  uVar13 = DAT_0558600b;
  uVar12 = DAT_0558600a;
  uVar11 = DAT_05586008;
  iVar2 = *(int *)(param_1 + 0xe60);
  *(undefined2 *)(param_1 + 0xdf0) = DAT_05586008;
  *(undefined1 *)(param_1 + 0xdf2) = uVar12;
  *(undefined1 *)(param_1 + 0xdf3) = uVar13;
  *(undefined4 *)(param_1 + 0xdf4) = uVar14;
  *(undefined2 *)(param_1 + 0xdf8) = uVar11;
  *(undefined1 *)(param_1 + 0xdfa) = uVar12;
  *(undefined1 *)(param_1 + 0xdfb) = uVar13;
  *(undefined4 *)(param_1 + 0xdfc) = uVar14;
  *(undefined2 *)(param_1 + 0xe00) = uVar11;
  *(undefined1 *)(param_1 + 0xe02) = uVar12;
  *(undefined1 *)(param_1 + 0xe03) = uVar13;
  *(undefined4 *)(param_1 + 0xe04) = uVar14;
  *(undefined2 *)(param_1 + 0xe08) = uVar11;
  *(undefined1 *)(param_1 + 0xe0a) = uVar12;
  *(undefined1 *)(param_1 + 0xe0b) = uVar13;
  *(undefined4 *)(param_1 + 0xe0c) = uVar14;
  *(undefined2 *)(param_1 + 0xe10) = uVar11;
  *(undefined1 *)(param_1 + 0xe12) = uVar12;
  *(undefined1 *)(param_1 + 0xe13) = uVar13;
  *(undefined4 *)(param_1 + 0xe14) = uVar14;
  *(undefined2 *)(param_1 + 0xe18) = uVar11;
  *(undefined1 *)(param_1 + 0xe1a) = uVar12;
  *(undefined1 *)(param_1 + 0xe1b) = uVar13;
  *(undefined4 *)(param_1 + 0xe1c) = uVar14;
  *(undefined2 *)(param_1 + 0xe20) = uVar11;
  *(undefined1 *)(param_1 + 0xe22) = uVar12;
  *(undefined1 *)(param_1 + 0xe23) = uVar13;
  *(undefined4 *)(param_1 + 0xe24) = uVar14;
  *(undefined2 *)(param_1 + 0xe28) = uVar11;
  *(undefined1 *)(param_1 + 0xe2a) = uVar12;
  *(undefined1 *)(param_1 + 0xe2b) = uVar13;
  *(undefined4 *)(param_1 + 0xe2c) = uVar14;
  *(undefined2 *)(param_1 + 0xe30) = uVar11;
  *(undefined1 *)(param_1 + 0xe32) = uVar12;
  *(undefined1 *)(param_1 + 0xe33) = uVar13;
  *(undefined4 *)(param_1 + 0xe34) = uVar14;
  *(undefined2 *)(param_1 + 0xe38) = uVar11;
  *(undefined1 *)(param_1 + 0xe3a) = uVar12;
  *(undefined1 *)(param_1 + 0xe3b) = uVar13;
  *(undefined4 *)(param_1 + 0xe3c) = uVar14;
  *(undefined2 *)(param_1 + 0xe40) = uVar11;
  *(undefined1 *)(param_1 + 0xe42) = uVar12;
  *(undefined1 *)(param_1 + 0xe43) = uVar13;
  *(undefined4 *)(param_1 + 0xe44) = uVar14;
  *(undefined2 *)(param_1 + 0xe48) = uVar11;
  *(undefined1 *)(param_1 + 0xe4a) = uVar12;
  *(undefined1 *)(param_1 + 0xe4b) = uVar13;
  *(undefined4 *)(param_1 + 0xe4c) = uVar14;
  if (iVar2 != 0) {
    uVar27 = 0;
    uVar26 = 0;
    do {
      if ((*(long *)(lVar17 + 0x108) != 0) &&
         (plVar19 = *(long **)(*(long *)(lVar17 + 0x108) + 0x20), plVar19 != (long *)0x0)) {
        local_78 = *(undefined **)(lVar17 + 0xe8);
        local_70 = *(long *)(lVar17 + 0xf0);
        local_68 = 0x48a8;
        (**(code **)(*plVar19 + 0x20))(plVar19,&local_78);
      }
      uVar20 = (uint)uVar27;
      iVar3 = *(int *)(param_1 + 0xe5c) + uVar20;
      iVar8 = 0;
      if (*(int *)(param_1 + 0xe58) <= iVar3) {
        iVar8 = *(int *)(param_1 + 0xe58);
      }
      uVar9 = *(uint *)(*(long *)(param_1 + 0xe50) + (long)(iVar3 - iVar8) * 4);
      puVar25 = (undefined2 *)(*(long *)(lVar17 + 0xf0) + *(long *)(lVar17 + 0xe8) + 0x4848);
      puVar7 = puVar25 + (ulong)uVar9 * 4;
      if (0xb < uVar9) {
        puVar7 = puVar25;
      }
      lVar21 = uVar26 * 4;
      uVar27 = uVar26 + 1;
      uVar26 = uVar27 & 0xffffffff;
      puVar25 = (undefined2 *)(param_1 + 0xdf0) + lVar21;
      if (0xb < uVar20) {
        puVar25 = (undefined2 *)(param_1 + 0xdf0);
      }
      *puVar25 = *puVar7;
      *(undefined1 *)(puVar25 + 1) = *(undefined1 *)(puVar7 + 1);
      *(undefined1 *)((long)puVar25 + 3) = *(undefined1 *)((long)puVar7 + 3);
      *(undefined4 *)(puVar25 + 2) = *(undefined4 *)(puVar7 + 2);
    } while (iVar2 != (int)uVar27);
  }
  lVar22 = *(long *)(lVar17 + 0x108);
  puVar15 = local_78;
  lVar21 = local_70;
  if (lVar22 == 0) {
    puVar24 = (undefined *)(*(long *)(lVar17 + 0xf0) + *(long *)(lVar17 + 0xe8));
    puVar25 = (undefined2 *)(puVar24 + 0x4848);
  }
  else {
    plVar19 = *(long **)(lVar22 + 0x20);
    if (plVar19 == (long *)0x0) {
      puVar24 = *(undefined **)(lVar17 + 0xe8) + *(long *)(lVar17 + 0xf0);
      puVar25 = (undefined2 *)(puVar24 + 0x4848);
      plVar19 = *(long **)(lVar22 + 0x20);
      local_78 = *(undefined **)(lVar17 + 0xe8);
      lVar22 = *(long *)(lVar17 + 0xf0);
    }
    else {
      local_78 = *(undefined **)(lVar17 + 0xe8);
      local_70 = *(long *)(lVar17 + 0xf0);
      local_68 = 0x48a8;
      (**(code **)(*plVar19 + 0x20))(plVar19,&local_78);
      puVar24 = *(undefined **)(lVar17 + 0xe8) + *(long *)(lVar17 + 0xf0);
      puVar25 = (undefined2 *)(puVar24 + 0x4848);
      puVar15 = local_78;
      lVar21 = local_70;
      if (*(long *)(lVar17 + 0x108) == 0) goto LAB_01951e54;
      plVar19 = *(long **)(*(long *)(lVar17 + 0x108) + 0x20);
      local_78 = *(undefined **)(lVar17 + 0xe8);
      lVar22 = *(long *)(lVar17 + 0xf0);
    }
    local_70 = lVar22;
    if (plVar19 != (long *)0x0) {
      local_68 = 0x48a8;
      (**(code **)(*plVar19 + 0x20))(plVar19,&local_78);
      puVar15 = local_78;
      lVar21 = local_70;
    }
  }
LAB_01951e54:
  local_70 = lVar21;
  local_78 = puVar15;
  *puVar25 = *(undefined2 *)(param_1 + 0xdf0);
  puVar24[0x484a] = *(undefined1 *)(param_1 + 0xdf2);
  puVar24[0x484b] = *(undefined1 *)(param_1 + 0xdf3);
  *(undefined4 *)(puVar24 + 0x484c) = *(undefined4 *)(param_1 + 0xdf4);
  *(undefined2 *)(puVar24 + 0x4850) = *(undefined2 *)(param_1 + 0xdf8);
  puVar24[0x4852] = *(undefined1 *)(param_1 + 0xdfa);
  puVar24[0x4853] = *(undefined1 *)(param_1 + 0xdfb);
  *(undefined4 *)(puVar24 + 0x4854) = *(undefined4 *)(param_1 + 0xdfc);
  *(undefined2 *)(puVar24 + 0x4858) = *(undefined2 *)(param_1 + 0xe00);
  puVar24[0x485a] = *(undefined1 *)(param_1 + 0xe02);
  puVar24[0x485b] = *(undefined1 *)(param_1 + 0xe03);
  *(undefined4 *)(puVar24 + 0x485c) = *(undefined4 *)(param_1 + 0xe04);
  *(undefined2 *)(puVar24 + 0x4860) = *(undefined2 *)(param_1 + 0xe08);
  puVar24[0x4862] = *(undefined1 *)(param_1 + 0xe0a);
  puVar24[0x4863] = *(undefined1 *)(param_1 + 0xe0b);
  *(undefined4 *)(puVar24 + 0x4864) = *(undefined4 *)(param_1 + 0xe0c);
  *(undefined2 *)(puVar24 + 0x4868) = *(undefined2 *)(param_1 + 0xe10);
  puVar24[0x486a] = *(undefined1 *)(param_1 + 0xe12);
  puVar24[0x486b] = *(undefined1 *)(param_1 + 0xe13);
  *(undefined4 *)(puVar24 + 0x486c) = *(undefined4 *)(param_1 + 0xe14);
  *(undefined2 *)(puVar24 + 0x4870) = *(undefined2 *)(param_1 + 0xe18);
  puVar24[0x4872] = *(undefined1 *)(param_1 + 0xe1a);
  puVar24[0x4873] = *(undefined1 *)(param_1 + 0xe1b);
  *(undefined4 *)(puVar24 + 0x4874) = *(undefined4 *)(param_1 + 0xe1c);
  *(undefined2 *)(puVar24 + 0x4878) = *(undefined2 *)(param_1 + 0xe20);
  puVar24[0x487a] = *(undefined1 *)(param_1 + 0xe22);
  puVar24[0x487b] = *(undefined1 *)(param_1 + 0xe23);
  *(undefined4 *)(puVar24 + 0x487c) = *(undefined4 *)(param_1 + 0xe24);
  *(undefined2 *)(puVar24 + 0x4880) = *(undefined2 *)(param_1 + 0xe28);
  puVar24[0x4882] = *(undefined1 *)(param_1 + 0xe2a);
  puVar24[0x4883] = *(undefined1 *)(param_1 + 0xe2b);
  *(undefined4 *)(puVar24 + 0x4884) = *(undefined4 *)(param_1 + 0xe2c);
  *(undefined2 *)(puVar24 + 0x4888) = *(undefined2 *)(param_1 + 0xe30);
  puVar24[0x488a] = *(undefined1 *)(param_1 + 0xe32);
  puVar24[0x488b] = *(undefined1 *)(param_1 + 0xe33);
  *(undefined4 *)(puVar24 + 0x488c) = *(undefined4 *)(param_1 + 0xe34);
  *(undefined2 *)(puVar24 + 0x4890) = *(undefined2 *)(param_1 + 0xe38);
  puVar24[0x4892] = *(undefined1 *)(param_1 + 0xe3a);
  puVar24[0x4893] = *(undefined1 *)(param_1 + 0xe3b);
  *(undefined4 *)(puVar24 + 0x4894) = *(undefined4 *)(param_1 + 0xe3c);
  *(undefined2 *)(puVar24 + 0x4898) = *(undefined2 *)(param_1 + 0xe40);
  puVar24[0x489a] = *(undefined1 *)(param_1 + 0xe42);
  puVar24[0x489b] = *(undefined1 *)(param_1 + 0xe43);
  *(undefined4 *)(puVar24 + 0x489c) = *(undefined4 *)(param_1 + 0xe44);
  *(undefined2 *)(puVar24 + 0x48a0) = *(undefined2 *)(param_1 + 0xe48);
  puVar24[0x48a2] = *(undefined1 *)(param_1 + 0xe4a);
  puVar24[0x48a3] = *(undefined1 *)(param_1 + 0xe4b);
  *(undefined4 *)(puVar24 + 0x48a4) = *(undefined4 *)(param_1 + 0xe4c);
  if ((((uVar16 & 1) == 0) && (*(long *)(lVar17 + 0x108) != 0)) &&
     (puVar18 = *(undefined8 **)(*(long *)(lVar17 + 0x108) + 0x18), puVar18 != (undefined8 *)0x0)) {
    (**(code **)*puVar18)();
  }
  __ptr = (void *)*puVar1;
  if (__ptr != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar19 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar19 != (long *)0x0) {
        (**(code **)(*plVar19 + 0x38))(plVar19,__ptr);
      }
    }
    *(undefined4 *)(param_1 + 0xe60) = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0xe58) = 0;
  }
  return;
}


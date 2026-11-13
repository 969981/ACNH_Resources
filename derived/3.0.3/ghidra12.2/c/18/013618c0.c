
bool FUN_013618c0(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ushort uVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  char cVar19;
  uint *puVar20;
  undefined2 uVar21;
  uint *puVar22;
  undefined *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if (*(int *)(param_2 + 0xc) == 0) {
    return false;
  }
  local_80 = 0;
  local_90 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_88 = PTR_DAT_04bb2010 + 0x10;
  local_70 = 0;
  local_78 = puStack_88;
  FUN_02a8f7b0(param_2,&local_90);
  if (0x11f < (uint)local_80) {
    return false;
  }
  if (0xff < local_80._4_4_) {
    return false;
  }
  if (0x11f < (uint)local_70) {
    return false;
  }
  if (0xff < local_70._4_4_) {
    return false;
  }
  uVar9 = FUN_013614c0(param_1,param_2);
  if ((uVar9 & 1) != 0) {
    return false;
  }
  plVar10 = (long *)(*(code *)**(undefined8 **)(param_1 + 0x10))();
  uVar8 = (**(code **)(*plVar10 + 0x18))();
  lVar13 = plVar10[5];
  uVar2 = param_3;
  if (uVar8 <= param_3) {
    uVar2 = 0;
  }
  if (lVar13 == 0) {
    uVar9 = 0;
  }
  else {
    if (*(undefined8 **)(lVar13 + 0x10) == (undefined8 *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      lVar13 = plVar10[5];
      uVar9 = uVar9 & 0xffffffff;
      if (lVar13 == 0) goto LAB_01361a30;
    }
    if (*(long *)(lVar13 + 0x20) != 0) {
      local_68 = plVar10[1];
      local_60 = (**(code **)(*plVar10 + 0x20))(plVar10,uVar2);
      uStack_58 = 0x14;
      (**(code **)(**(long **)(plVar10[5] + 0x20) + 0x20))(*(long **)(plVar10[5] + 0x20),&local_68);
    }
  }
LAB_01361a30:
  lVar13 = (**(code **)(*plVar10 + 0x20))(plVar10,uVar2);
  lVar14 = *(long *)PTR_DAT_04bb5008;
  uVar8 = *(uint *)(lVar14 + 0x1df8);
  iVar15 = 0;
  if (uVar8 != 0) {
    uVar4 = *(ushort *)(lVar13 + plVar10[1]);
    lVar13 = *(long *)(lVar14 + 0x1e00);
    uVar18 = 0;
    if (1 < (int)uVar8) {
      iVar15 = uVar8 - 1;
      do {
        uVar17 = (uint)uVar18;
        iVar16 = iVar15 + uVar17;
        if (iVar16 < 0 != SCARRY4(iVar15,uVar17)) {
          iVar16 = iVar16 + 1;
        }
        uVar1 = iVar16 >> 1;
        uVar18 = (ulong)uVar1;
        uVar5 = *(ushort *)(lVar13 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | uVar18 << 3));
        if (uVar5 == uVar4) goto LAB_01361ac0;
        if (uVar5 < uVar4) {
          uVar17 = uVar1 + 1;
        }
        else {
          iVar15 = uVar1 - 1;
        }
        uVar18 = (ulong)uVar17;
      } while ((int)uVar17 < iVar15);
    }
    if (*(ushort *)(lVar13 + (-(uVar18 >> 0x1f) & 0xfffffff800000000 | uVar18 << 3)) == uVar4) {
LAB_01361ac0:
      uVar17 = (uint)uVar18;
      if (-1 < (int)uVar17) {
        if (uVar8 <= uVar17) {
          uVar17 = 0;
        }
        iVar15 = *(int *)(lVar13 + (ulong)uVar17 * 8 + 4);
        goto LAB_01361adc;
      }
    }
    iVar15 = 0;
  }
LAB_01361adc:
  local_68 = CONCAT44(local_68._4_4_,iVar15);
  if (iVar15 != 0) goto LAB_01361ed4;
  uVar8 = *(uint *)(param_2 + 0xc);
  local_68 = CONCAT44(local_68._4_4_,uVar8);
  if (uVar8 == 0) {
LAB_01361b9c:
    puVar22 = (uint *)0x0;
  }
  else if ((int)*(uint *)(lVar14 + 0x1e0) < 1) {
    if ((((*(long *)(lVar14 + 0xd0) == 0) ||
         (puVar22 = *(uint **)(*(long *)(lVar14 + 0xd0) + 8), puVar22 == (uint *)0x0)) ||
        ((uVar8 < *(uint *)(lVar14 + 0xe8) &&
         (*(char *)(*(long *)(lVar14 + 0xf0) + (long)(int)uVar8) == '\0')))) ||
       (((*puVar22 <= uVar8 || (puVar22[1] == 0)) || ((ushort)puVar22[2] == 0)))) goto LAB_01361b9c;
    iVar16 = 0xc;
    if (*(char *)((long)puVar22 + 10) != '\0') {
      iVar16 = 0x1c;
    }
    puVar22 = (uint *)((ulong)(puVar22[1] * uVar8 + (uint)(ushort)puVar22[2] * 8 + iVar16) +
                      (long)puVar22);
  }
  else {
    if (*(uint *)(lVar14 + 0x1e0) <= uVar8) goto LAB_01361b9c;
    if (*(uint *)(lVar14 + 0x1d0) <= uVar8) {
      uVar8 = 0;
    }
    puVar22 = *(uint **)(*(long *)(lVar14 + 0x1d8) + (ulong)uVar8 * 8);
  }
  if ((plVar10[5] != 0) && (*(long *)(plVar10[5] + 0x20) != 0)) {
    local_68 = plVar10[1];
    local_60 = (**(code **)(*plVar10 + 0x20))(plVar10,uVar2);
    uStack_58 = 0x14;
    (**(code **)(**(long **)(plVar10[5] + 0x20) + 0x20))(*(long **)(plVar10[5] + 0x20),&local_68);
  }
  lVar13 = (**(code **)(*plVar10 + 0x20))(plVar10,uVar2);
  puVar7 = PTR_DAT_04bc4698;
  puVar6 = PTR_DAT_04bc4690;
  lVar14 = plVar10[1];
  if ((puVar22 != (uint *)0x0) && (uVar8 = *puVar22, uVar8 != 0)) {
    cVar19 = *PTR_DAT_04bc4690;
    do {
      if (cVar19 == '\0') {
        cVar19 = '\x01';
        *(undefined8 *)puVar7 = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
        *puVar6 = 1;
        *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
        *(undefined4 *)(puVar7 + 0x18) = 0xffffffff;
        uVar8 = *puVar22;
      }
      else {
        uVar17 = *(uint *)(puVar7 + 0x18);
        if (-1 < (int)uVar17) {
          if ((undefined2 *)((ulong)uVar17 + (long)puVar22) == (undefined2 *)0x0) break;
          uVar21 = *(undefined2 *)((ulong)uVar17 + (long)puVar22);
          goto LAB_01361cf0;
        }
        if (uVar17 != 0xffffffff) break;
      }
      puVar20 = (uint *)(ulong)uVar8;
      uVar21 = 0;
      if ((puVar20 == (uint *)0x0) || (puVar22 == puVar20)) goto LAB_01361cf0;
      lVar3 = 0xc;
      if (*(char *)((long)puVar22 + (10 - (long)puVar20)) != '\0') {
        lVar3 = 0x1c;
      }
      lVar3 = (long)puVar22 + (lVar3 - (long)puVar20);
      uVar21 = 0;
      if (lVar3 == 0) goto LAB_01361cf0;
      uVar18 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar20));
      *(undefined4 *)(puVar7 + 0x18) = 0xfffffffe;
      if (uVar18 == 0) break;
      piVar12 = (int *)(lVar3 + 4);
      while (piVar12[-1] != 0x54706054) {
        piVar12 = piVar12 + 2;
        uVar18 = uVar18 - 1;
        if (uVar18 == 0) goto LAB_01361cec;
      }
      uVar21 = 0;
      iVar16 = 0;
      if (*piVar12 != -1) {
        iVar16 = *piVar12;
      }
      *(int *)(puVar7 + 0x18) = iVar16;
      uVar8 = *puVar22;
      if (uVar8 == 0) goto LAB_01361cf0;
    } while( true );
  }
LAB_01361cec:
  uVar21 = 0;
LAB_01361cf0:
  *(undefined2 *)(lVar14 + lVar13) = uVar21;
  if ((plVar10[5] != 0) && (*(long *)(plVar10[5] + 0x20) != 0)) {
    local_68 = plVar10[1];
    local_60 = (**(code **)(*plVar10 + 0x20))(plVar10,uVar2);
    uStack_58 = 0x14;
    (**(code **)(**(long **)(plVar10[5] + 0x20) + 0x20))(*(long **)(plVar10[5] + 0x20),&local_68);
  }
  lVar13 = (**(code **)(*plVar10 + 0x20))(plVar10,uVar2);
  lVar14 = plVar10[1];
  *(short *)(lVar13 + lVar14 + 2) = (short)*(undefined4 *)(param_2 + 0x18);
  *(short *)(lVar13 + lVar14 + 4) = (short)*(undefined4 *)(param_2 + 0x1c);
  if ((plVar10[5] != 0) && (*(long *)(plVar10[5] + 0x20) != 0)) {
    local_68 = plVar10[1];
    local_60 = (**(code **)(*plVar10 + 0x20))(plVar10,uVar2);
    uStack_58 = 0x14;
    (**(code **)(**(long **)(plVar10[5] + 0x20) + 0x20))(*(long **)(plVar10[5] + 0x20),&local_68);
  }
  lVar13 = (**(code **)(*plVar10 + 0x20))(plVar10,uVar2);
  local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(param_2 + 0x20));
  *(char *)(lVar13 + plVar10[1] + 6) = (char)*(undefined4 *)(param_2 + 0x20);
  if ((plVar10[5] != 0) && (*(long *)(plVar10[5] + 0x20) != 0)) {
    local_68 = plVar10[1];
    local_60 = (**(code **)(*plVar10 + 0x20))(plVar10,uVar2);
    uStack_58 = 0x14;
    (**(code **)(**(long **)(plVar10[5] + 0x20) + 0x20))(*(long **)(plVar10[5] + 0x20),&local_68);
  }
  lVar13 = (**(code **)(*plVar10 + 0x20))(plVar10,uVar2);
  *(undefined1 *)(lVar13 + plVar10[1] + 7) = *(undefined1 *)(param_2 + 8);
  if ((plVar10[5] != 0) && (*(long *)(plVar10[5] + 0x20) != 0)) {
    local_68 = plVar10[1];
    local_60 = (**(code **)(*plVar10 + 0x20))(plVar10,uVar2);
    uStack_58 = 0x14;
    (**(code **)(**(long **)(plVar10[5] + 0x20) + 0x20))(*(long **)(plVar10[5] + 0x20),&local_68);
  }
  lVar13 = (**(code **)(*plVar10 + 0x20))(plVar10,uVar2);
  *(undefined2 *)(lVar13 + plVar10[1] + 8) = *(undefined2 *)(param_2 + 0x24);
  FUN_013606b0(param_1,param_3,param_2);
LAB_01361ed4:
  if ((((uVar9 & 1) != 0) && (plVar10[5] != 0)) &&
     (puVar11 = *(undefined8 **)(plVar10[5] + 0x18), puVar11 != (undefined8 *)0x0)) {
    (**(code **)*puVar11)();
  }
  return iVar15 == 0;
}


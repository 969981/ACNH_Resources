
void FUN_02671320(int param_1,ulong param_2)

{
  uint *puVar1;
  long *plVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  bool bVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  ulong uVar16;
  byte bVar17;
  long lVar18;
  int iVar19;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar7 = PTR_DAT_04bb46b0;
  lVar13 = *(long *)PTR_DAT_04bb46b0;
  if (lVar13 == 0) {
    lVar13 = 0;
LAB_02671388:
    lVar10 = 0;
  }
  else {
    puVar14 = *(undefined8 **)(lVar13 + 0x10);
    if ((*(byte *)(lVar13 + 0x453) & 1) == 0) {
      lVar10 = (**(code **)(*(long *)*puVar14 + 0x38))();
      lVar13 = 0;
      if (lVar10 != 0) {
        lVar13 = lVar10 + 0x70;
      }
      lVar10 = *(long *)puVar7;
    }
    else if ((puVar14 == (undefined8 *)0x0) || ((long *)puVar14[0x26] == (long *)0x0)) {
      lVar13 = 0;
      lVar10 = *(long *)PTR_DAT_04bb46b0;
    }
    else {
      lVar13 = (**(code **)(*(long *)puVar14[0x26] + 0x38))();
      lVar10 = *(long *)puVar7;
    }
    if (lVar10 == 0) goto LAB_02671388;
    puVar14 = *(undefined8 **)(lVar10 + 0x10);
    if ((*(byte *)(lVar10 + 0x453) & 1) == 0) {
      lVar18 = (**(code **)(*(long *)*puVar14 + 0x38))();
      lVar10 = 0;
      if (lVar18 != 0) {
        lVar10 = lVar18 + 0x70;
      }
    }
    else {
      if (puVar14 == (undefined8 *)0x0) goto LAB_02671388;
      lVar10 = 0;
      if ((long *)puVar14[0x26] != (long *)0x0) {
        lVar10 = (**(code **)(*(long *)puVar14[0x26] + 0x38))();
      }
    }
  }
  if (*(long **)(&LAB_00205148 + lVar10) == (long *)0x0) {
    uVar11 = 0;
  }
  else {
    puVar14 = (undefined8 *)**(long **)(&LAB_00205148 + lVar10);
    uVar11 = 0;
    if (puVar14 != (undefined8 *)0x0) {
      uVar11 = (**(code **)*puVar14)();
    }
  }
  iVar19 = 0;
  puVar1 = (uint *)(*(long *)(&LAB_00205130 + lVar10) + *(long *)(&LAB_00205128 + lVar10));
  uVar9 = *puVar1;
  if ((*(byte *)((long)puVar1 + 7) != 0 ||
       (((ulong)uVar9 != 0 || (ushort)puVar1[1] != 0) || *(byte *)((long)puVar1 + 6) != 0)) &&
     ((uint)*(byte *)((long)puVar1 + 7) ==
      ((uVar9 + (uVar9 >> 0x10) + (uVar9 >> 0x18) + (uVar9 >> 8)) - 0x2d & 0xff))) {
    lVar18 = (ulong)uVar9 << ((ulong)(0x1d - *(byte *)((long)puVar1 + 6)) & 0x3f);
    iVar19 = ((int)lVar18 - (uint)(ushort)puVar1[1]) + (int)((ulong)lVar18 >> 0x20) + -0x7f1cd4ef;
  }
  plVar2 = (long *)(&LAB_00205128 + lVar13);
  if ((((uVar11 & 1) != 0) && (*(long *)(&LAB_00205148 + lVar10) != 0)) &&
     (puVar14 = *(undefined8 **)(*(long *)(&LAB_00205148 + lVar10) + 8),
     puVar14 != (undefined8 *)0x0)) {
    (**(code **)*puVar14)();
  }
  puVar7 = PTR_DAT_04bb27d0;
  iVar4 = 0;
  if (param_1 <= iVar19) {
    iVar4 = iVar19 - param_1;
  }
  if ((param_2 & 1) == 0) {
    lVar10 = *(long *)(&LAB_00205148 + lVar13);
    if (lVar10 == 0) {
      uVar11 = 0;
    }
    else {
      if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
        uVar11 = 0;
        plVar12 = *(long **)(lVar10 + 0x20);
      }
      else {
        uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
        uVar11 = uVar11 & 0xffffffff;
        if (*(long *)(&LAB_00205148 + lVar13) == 0) goto LAB_02671678;
        plVar12 = *(long **)(*(long *)(&LAB_00205148 + lVar13) + 0x20);
      }
      if (plVar12 != (long *)0x0) {
        local_58 = *plVar2;
        local_50 = *(undefined8 *)(&LAB_00205130 + lVar13);
        uStack_48 = 8;
        (**(code **)(*plVar12 + 0x20))(plVar12,&local_58);
      }
    }
LAB_02671678:
    piVar3 = (int *)(*(long *)(&LAB_00205130 + lVar13) + *plVar2);
    uVar9 = nn::os::GetSystemTick();
    uVar5 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 1;
    uVar9 = uVar5 ^ uVar5 * 0x800;
    uVar6 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 2;
    uVar5 = uVar6 ^ uVar6 * 0x800;
    uVar6 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 3;
    uVar6 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 4;
    uVar9 = uVar9 >> 8 ^ uVar6 >> 0x13 ^ uVar9 ^ uVar6;
    *(short *)(piVar3 + 1) = (short)(uVar9 >> 0x10);
    uVar16 = (ulong)(uVar5 >> 8 ^ uVar9 >> 0x13 ^ uVar5 ^ uVar9) * 0x1b;
    *(char *)((long)piVar3 + 6) = (char)(uVar16 >> 0x20);
    lVar10 = (ulong)(iVar4 + 0x7f1cd4ef + (uVar9 >> 0x10)) << (uVar16 >> 0x20) + 3;
    iVar19 = (int)((ulong)lVar10 >> 0x20) + (int)lVar10;
    *piVar3 = iVar19;
    *(char *)((long)piVar3 + 7) =
         (char)iVar19 + (char)((uint)iVar19 >> 0x10) + (char)((uint)iVar19 >> 0x18) +
         (char)((uint)iVar19 >> 8) + -0x2d;
    if ((uVar11 & 1) == 0) {
      return;
    }
    if (*(long *)(&LAB_00205148 + lVar13) == 0) {
      return;
    }
    puVar14 = *(undefined8 **)(*(long *)(&LAB_00205148 + lVar13) + 0x18);
    goto joined_r0x02671744;
  }
  if (param_1 <= iVar19) {
    iVar19 = param_1;
  }
  lVar10 = *(long *)PTR_DAT_04bb39b0;
  pbVar15 = PTR_DAT_04bb32e0;
  if (lVar10 == 0) {
LAB_02671578:
    if (*pbVar15 < 8) goto LAB_026715e8;
LAB_02671584:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_026715e0:
      pbVar15 = PTR_DAT_04bb5038;
      goto LAB_026715e8;
    }
    lVar10 = **(long **)PTR_DAT_04bb27d0;
    bVar17 = *(byte *)(lVar10 + 0x473);
    pbVar15 = PTR_DAT_04bb5038;
    if ((long)(char)bVar17 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar17 & 0xffffffffU) * 0x20;
      if (7 < bVar17) {
        puVar1 = (uint *)(lVar10 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar15 = (byte *)(lVar10 + 0x471);
      }
    }
    bVar17 = *pbVar15;
    bVar8 = 7 < bVar17;
    if (bVar8) {
      bVar17 = 0xff;
    }
    local_58 = CONCAT71(local_58._1_7_,bVar17);
    if (bVar8) goto LAB_026715e0;
  }
  else {
    if (*(int *)(lVar10 + 0x15c) != 0) {
      pbVar15 = (byte *)(lVar10 + 0x158);
    }
    if (7 < *pbVar15) {
      if ((*(int *)(lVar10 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar15 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_02671578;
      }
      goto LAB_02671584;
    }
LAB_026715e8:
    bVar17 = *pbVar15;
    if (7 < bVar17) {
      bVar17 = 0xff;
    }
    local_58 = CONCAT71(local_58._1_7_,bVar17);
  }
  FUN_0267b340(&local_58,iVar19);
  lVar10 = *(long *)(&LAB_00205148 + lVar13);
  if (lVar10 == 0) {
    uVar11 = 0;
  }
  else {
    if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
      uVar11 = 0;
      plVar12 = *(long **)(lVar10 + 0x20);
    }
    else {
      uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      uVar11 = uVar11 & 0xffffffff;
      if (*(long *)(&LAB_00205148 + lVar13) == 0) goto LAB_0267177c;
      plVar12 = *(long **)(*(long *)(&LAB_00205148 + lVar13) + 0x20);
    }
    if (plVar12 != (long *)0x0) {
      local_58 = *plVar2;
      local_50 = *(undefined8 *)(&LAB_00205130 + lVar13);
      uStack_48 = 8;
      (**(code **)(*plVar12 + 0x20))(plVar12,&local_58);
    }
  }
LAB_0267177c:
  piVar3 = (int *)(*(long *)(&LAB_00205130 + lVar13) + *plVar2);
  uVar9 = nn::os::GetSystemTick();
  uVar5 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 1;
  uVar9 = uVar5 ^ uVar5 * 0x800;
  uVar6 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 2;
  uVar5 = uVar6 ^ uVar6 * 0x800;
  uVar6 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 3;
  uVar6 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 4;
  uVar9 = uVar9 >> 8 ^ uVar6 >> 0x13 ^ uVar9 ^ uVar6;
  *(short *)(piVar3 + 1) = (short)(uVar9 >> 0x10);
  uVar16 = (ulong)(uVar5 >> 8 ^ uVar9 >> 0x13 ^ uVar5 ^ uVar9) * 0x1b;
  *(char *)((long)piVar3 + 6) = (char)(uVar16 >> 0x20);
  lVar10 = (ulong)(iVar4 + 0x7f1cd4ef + (uVar9 >> 0x10)) << (uVar16 >> 0x20) + 3;
  iVar19 = (int)((ulong)lVar10 >> 0x20) + (int)lVar10;
  *piVar3 = iVar19;
  *(char *)((long)piVar3 + 7) =
       (char)iVar19 + (char)((uint)iVar19 >> 0x10) + (char)((uint)iVar19 >> 0x18) +
       (char)((uint)iVar19 >> 8) + -0x2d;
  if ((((uVar11 & 1) != 0) && (*(long *)(&LAB_00205148 + lVar13) != 0)) &&
     (puVar14 = *(undefined8 **)(*(long *)(&LAB_00205148 + lVar13) + 0x18),
     puVar14 != (undefined8 *)0x0)) {
    (**(code **)*puVar14)();
  }
  if (*(byte *)(**(long **)puVar7 + 0x476) < 2) {
    return;
  }
  if ((*(long **)(&LAB_00205148 + lVar13) == (long *)0x0) ||
     (puVar14 = (undefined8 *)**(long **)(&LAB_00205148 + lVar13), puVar14 == (undefined8 *)0x0)) {
    uVar9 = 1;
  }
  else {
    uVar9 = (**(code **)*puVar14)();
    uVar9 = uVar9 ^ 1;
  }
  puVar1 = (uint *)(*(long *)(&LAB_00205130 + lVar13) + *plVar2);
  uVar11 = (ulong)local_58 >> 0x30;
  DAT_05564318 = (ulong)*puVar1 << 0x20 | (ulong)(ushort)puVar1[1] << 0x10 |
                 (ulong)*(byte *)((long)puVar1 + 6) << 8 | (ulong)*(byte *)((long)puVar1 + 7);
  local_58 = CONCAT26((ushort)uVar11 & 0xff00,0xff0000000000);
  if (-1 < DAT_055642f0) {
    FUN_01db1df0(**(long **)puVar7 + 0x480,DAT_055642f0,&local_58,&DAT_05564318,8,0);
  }
  if ((uVar9 & 1) != 0) {
    return;
  }
  if (*(long *)(&LAB_00205148 + lVar13) == 0) {
    return;
  }
  puVar14 = *(undefined8 **)(*(long *)(&LAB_00205148 + lVar13) + 8);
joined_r0x02671744:
  if (puVar14 != (undefined8 *)0x0) {
    (**(code **)*puVar14)();
  }
  return;
}



undefined4 FUN_00883150(long param_1,long *param_2,ulong *param_3,ulong param_4)

{
  undefined4 uVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  undefined *puVar5;
  undefined *__s;
  ulong uVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  ulong *puVar13;
  uint *puVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  char cVar19;
  undefined8 local_70;
  long local_68;
  
  uVar8 = FUN_0087af00();
  if (((uVar8 & 1) != 0) && (uVar8 = FUN_00879630(param_1,param_2,0), (uVar8 & 1) != 0)) {
    if (((param_4 & 1) != 0) && (uVar8 = FUN_00a8117c(param_3), (uVar8 & 1) != 0)) {
      puVar13 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
      if (*(short *)puVar13 == 0) {
        local_70 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
        if ((char)(local_70 >> 0x20) < '\x05') {
          local_68 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
          local_68 = local_68 + -0x15180;
          local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
        }
        uVar8 = local_70 >> 0x30;
        local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
        local_70 = CONCAT26((short)uVar8,(undefined6)local_70) & 0xff00ffffffffffff;
        puVar13 = &local_70;
      }
      uVar8 = *puVar13;
      (**(code **)(*param_2 + 0x18))(param_2);
      uVar7 = FUN_006bd550(param_2[1],0);
      local_68 = CONCAT44(local_68._4_4_,uVar7);
      uVar9 = FUN_0088c0d0(param_1 + 8,&local_68);
      uVar8 = FUN_00875c10(param_1,uVar9,uVar8 & 0xffffffff,uVar8 >> 0x10 & 0xffffffff,
                           uVar8 >> 0x18 & 0xffffffff);
      uVar7 = 2;
      if ((uVar8 & 1) == 0) {
        uVar7 = 0xffffffff;
      }
      return uVar7;
    }
    local_70 = *param_3;
    if ((char)(local_70 >> 0x20) < '\x05') {
      local_68 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
      local_68 = local_68 + -0x15180;
      local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
    }
    uVar6 = local_70;
    uVar8 = local_70 >> 0x30;
    local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
    local_70 = CONCAT26((short)uVar8,(undefined6)local_70) & 0xff00ffffffffffff;
    (**(code **)(*param_2 + 0x18))(param_2);
    uVar7 = FUN_006bd550(param_2[1],0);
    local_68._0_4_ = uVar7;
    uVar9 = FUN_0088c0d0(param_1 + 8,&local_68);
    uVar8 = FUN_00875c10(param_1,uVar9,uVar6 & 0xffffffff,uVar6 >> 0x10 & 0xffffffff,
                         uVar6 >> 0x18 & 0xffffffff);
    if ((uVar8 & 1) != 0) {
      (**(code **)(*param_2 + 0x18))(param_2);
      uVar7 = FUN_006bd550(param_2[1],0);
      local_68 = CONCAT44(local_68._4_4_,uVar7);
      puVar10 = (uint *)FUN_0088c0d0(param_1 + 8,&local_68);
      __s = PTR_DAT_04bb3250;
      puVar5 = PTR_DAT_04bb3248;
      cVar3 = *(char *)((long)param_3 + 4);
      if (*puVar10 != 0) {
        cVar19 = *PTR_DAT_04bb3248;
        do {
          if (cVar19 != '\0') {
            uVar12 = *(uint *)(__s + 0x13c);
            if ((int)uVar12 < 0) {
              if (uVar12 == 0xffffffff) goto LAB_008833a0;
LAB_00883454:
              uVar11 = 0;
            }
            else {
              uVar11 = 0;
              if ((byte *)((ulong)uVar12 + (long)puVar10) != (byte *)0x0) {
                uVar11 = (uint)*(byte *)((ulong)uVar12 + (long)puVar10);
              }
            }
LAB_00883468:
            uVar12 = *puVar10;
            if (uVar12 == 0) goto LAB_008834f8;
            uVar17 = *(uint *)(__s + 0x140);
            goto LAB_0088348c;
          }
          cVar19 = '\x01';
          *puVar5 = 1;
          memset(__s,0xff,0x288);
LAB_008833a0:
          puVar14 = (uint *)(ulong)*puVar10;
          uVar11 = 0;
          if ((*puVar10 == 0) || (puVar10 == puVar14)) goto LAB_00883468;
          lVar4 = 0xc;
          if (*(char *)((long)puVar10 + (10 - (long)puVar14)) != '\0') {
            lVar4 = 0x1c;
          }
          lVar4 = (long)puVar10 + (lVar4 - (long)puVar14);
          if (lVar4 == 0) goto LAB_00883454;
          uVar8 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar14));
          *(undefined4 *)(__s + 0x13c) = 0xfffffffe;
          uVar11 = 0;
          if (uVar8 == 0) goto LAB_00883468;
          piVar15 = (int *)(lVar4 + 4);
          while (piVar15[-1] != -0x72a75c41) {
            piVar15 = piVar15 + 2;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) {
              uVar11 = 0;
              goto LAB_00883468;
            }
          }
          iVar16 = 0;
          if (*piVar15 != -1) {
            iVar16 = *piVar15;
          }
          *(int *)(__s + 0x13c) = iVar16;
        } while (*puVar10 != 0);
      }
      uVar12 = 0;
      iVar16 = cVar3 + 0x18;
      if (4 < cVar3) {
        iVar16 = (int)cVar3;
      }
      uVar11 = 0x18;
      goto LAB_00883518;
    }
  }
  return 0xffffffff;
LAB_0088348c:
  if (-1 < (int)uVar17) {
    uVar12 = 0;
    if ((byte *)((long)puVar10 + (ulong)uVar17) != (byte *)0x0) {
      uVar12 = (uint)*(byte *)((long)puVar10 + (ulong)uVar17);
    }
    goto LAB_008834fc;
  }
  if ((uVar17 != 0xffffffff) || (lVar4 = (long)puVar10 - (ulong)uVar12, lVar4 == 0))
  goto LAB_008834f8;
  lVar2 = 0xc;
  if (*(char *)(lVar4 + 10) != '\0') {
    lVar2 = 0x1c;
  }
  if (lVar2 + lVar4 == 0) goto LAB_008834f8;
  uVar8 = (ulong)*(ushort *)(lVar4 + 8);
  *(undefined4 *)(__s + 0x140) = 0xfffffffe;
  if (uVar8 == 0) goto LAB_008834f8;
  puVar14 = (uint *)(lVar2 + lVar4 + 4);
  while (puVar14[-1] != 0x73a932ae) {
    puVar14 = puVar14 + 2;
    uVar8 = uVar8 - 1;
    if (uVar8 == 0) goto LAB_008834f8;
  }
  uVar17 = 0;
  if (*puVar14 != 0xffffffff) {
    uVar17 = *puVar14;
  }
  *(uint *)(__s + 0x140) = uVar17;
  uVar12 = *puVar10;
  if (uVar12 == 0) goto LAB_008834f8;
  goto LAB_0088348c;
LAB_008834f8:
  uVar12 = 0;
LAB_008834fc:
  iVar18 = (int)cVar3;
  iVar16 = iVar18 + 0x18;
  if (4 < iVar18) {
    iVar16 = iVar18;
  }
  if (uVar11 < 5) {
    uVar11 = uVar11 + 0x18;
  }
LAB_00883518:
  uVar17 = uVar12 + 0x18;
  if (5 < uVar12) {
    uVar17 = uVar12;
  }
  uVar7 = 1;
  if ((int)uVar17 <= iVar16) {
    uVar7 = 2;
  }
  uVar1 = 0;
  if ((int)uVar11 <= iVar16) {
    uVar1 = uVar7;
  }
  return uVar1;
}


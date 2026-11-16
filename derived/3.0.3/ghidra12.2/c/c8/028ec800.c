
undefined8 FUN_028ec800(long param_1,int *param_2,uint *param_3,uint *param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ushort *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  undefined *local_88;
  undefined1 *puStack_80;
  undefined4 local_78;
  undefined1 local_74 [7];
  undefined1 local_6d;
  undefined8 local_68;
  
  puVar5 = PTR_DAT_04bb3768;
  lVar1 = param_1 + 0x297d0;
  if (*param_4 == 2) {
    iVar6 = *param_2;
    if (iVar6 != 0) {
      uVar14 = 0;
      puVar2 = PTR_DAT_04bb3768 + 0x10;
      do {
        while( true ) {
          if (iVar6 <= (int)uVar14) goto LAB_028ec990;
          uVar17 = (ulong)uVar14;
          local_78 = 8;
          local_6d = 0;
          local_74[0] = 0;
          local_88 = puVar2;
          puStack_80 = local_74;
          FUN_0376b510(&local_88,**(undefined2 **)(*(long *)(param_2 + 2) + (ulong)uVar14 * 8));
          iVar6 = FUN_0376dea0(&local_88,0);
          local_68 = CONCAT44(local_68._4_4_,iVar6);
          if (iVar6 != 0) break;
          local_88 = puVar5 + 0x10;
          local_78 = 8;
          local_6d = 0;
          local_74[0] = 0;
          puStack_80 = local_74;
          FUN_0376b510(&local_88,*(undefined2 *)(*(long *)(*(long *)(param_2 + 2) + uVar17 * 8) + 2)
                      );
          iVar6 = FUN_0376dea0(&local_88,0);
          local_68 = CONCAT44(local_68._4_4_,iVar6);
          if (iVar6 != 0) break;
          if (uVar14 != 0) goto LAB_028ec988;
          iVar6 = *param_2;
          uVar14 = 1;
LAB_028ec870:
          if (iVar6 == 0) goto LAB_028eca00;
        }
        iVar6 = *param_2;
        if ((int)uVar14 < iVar6) {
          uVar9 = uVar17;
          puVar10 = *(undefined8 **)(param_2 + 4);
          do {
            puVar12 = *(undefined8 **)(*(long *)(param_2 + 2) + uVar9 * 8);
            uVar9 = uVar9 + 1;
            *puVar12 = puVar10;
            *(undefined8 **)(param_2 + 4) = puVar12;
            puVar10 = puVar12;
          } while (uVar9 < uVar14 + 1);
          iVar6 = *param_2;
        }
        if (iVar6 <= (int)uVar14) goto LAB_028ec870;
        uVar16 = uVar14 + 1;
        uVar15 = iVar6 - uVar16;
        if (uVar15 != 0 && (int)uVar16 <= iVar6) {
          memmove((void *)(*(long *)(param_2 + 2) + uVar17 * 8),
                  (void *)(*(long *)(param_2 + 2) + (ulong)uVar16 * 8),
                  -(ulong)(uVar15 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar15 << 3);
          iVar6 = *param_2;
        }
        iVar6 = iVar6 + -1;
        *param_2 = iVar6;
      } while (iVar6 != 0);
    }
LAB_028eca00:
    uVar17 = (ulong)*param_4;
    if (2 < *param_4) {
      uVar17 = 0;
    }
    *(undefined1 *)(lVar1 + uVar17 + 0xc) = 0x1e;
    uVar17 = (ulong)*param_4;
    if (2 < *param_4) {
      uVar17 = 0;
    }
    *(undefined4 *)(lVar1 + uVar17 * 4) = 0xffffffff;
    return 0;
  }
LAB_028ec988:
  if (*param_2 == 0) goto LAB_028eca00;
LAB_028ec990:
  uVar13 = DAT_04cea100;
  uVar17 = (ulong)*param_4;
  lVar3 = param_1 + 0x297dc;
  if (2 < *param_4) {
    uVar17 = 0;
  }
  uVar14 = *(uint *)(lVar1 + uVar17 * 4);
  uVar17 = (ulong)*param_4;
  if (2 < *param_4) {
    uVar17 = 0;
  }
  uVar16 = *(uint *)(lVar1 + uVar17 * 4);
  uVar17 = (ulong)*param_4;
  if (2 < *param_4) {
    uVar17 = 0;
  }
  uVar15 = (uint)*(byte *)(lVar3 + uVar17);
  if (*param_4 == 2) {
    plVar8 = (long *)(DAT_04da6480 + 0x4068);
    if (*(short *)(DAT_04da6480 + 0x4070) == 0) {
      if (*(short *)plVar8 == 0) {
        local_68 = *(long *)(DAT_04da6480 + 0x4060);
        if ((char)(local_68 >> 0x20) < '\x05') {
          lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
          local_88 = (undefined *)(lVar7 + -0x15180);
          local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_88);
        }
        uVar17 = local_68 >> 0x30;
        local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
        local_68 = CONCAT26((short)uVar17,(undefined6)local_68) & 0xff00ffffffffffff;
        plVar8 = &local_68;
      }
      local_88 = (undefined *)*plVar8;
    }
    else {
      local_88 = *(undefined **)(DAT_04da6480 + 0x4070);
    }
    uVar17 = FUN_008839a4(uVar13,&local_88);
    if ((uVar17 & 1) == 0) goto LAB_028ecab0;
    uVar14 = *(uint *)(param_1 + 0x297e0);
    uVar15 = 100;
    bVar4 = true;
    uVar16 = uVar14;
  }
  else {
LAB_028ecab0:
    bVar4 = false;
  }
  puVar10 = *(undefined8 **)(param_2 + 2);
  puVar11 = (ushort *)*puVar10;
  if (((uint)*puVar11 == uVar14 >> 0x10 && (uint)puVar11[1] == (uVar16 & 0xffff)) ||
     ((uint)puVar11[1] == uVar14 >> 0x10 && (uint)*puVar11 == (uVar16 & 0xffff))) {
    if (*param_2 == 1) {
      uVar17 = (ulong)*param_4;
      if (2 < *param_4) {
        uVar17 = 0;
      }
      goto LAB_028ecbd8;
    }
    uVar13 = puVar10[1];
    puVar10[1] = puVar11;
    **(undefined8 **)(param_2 + 2) = uVar13;
  }
  uVar14 = *param_3 ^ *param_3 << 0xb;
  uVar16 = param_3[3];
  *param_3 = param_3[1];
  param_3[1] = param_3[2];
  uVar14 = uVar14 >> 8 ^ uVar16 >> 0x13 ^ uVar14 ^ uVar16;
  param_3[2] = uVar16;
  param_3[3] = uVar14;
  uVar17 = (ulong)*param_4;
  if (2 < *param_4) {
    uVar17 = 0;
  }
  if ((uint)((ulong)uVar14 * 100 >> 0x20) < uVar15) {
    *(undefined1 *)(lVar3 + uVar17) = 0x1e;
    uVar17 = (ulong)*param_4;
    if (2 < *param_4) {
      uVar17 = 0;
    }
    *(uint *)(lVar1 + uVar17 * 4) =
         CONCAT22(*(undefined2 *)**(undefined8 **)(param_2 + 2),
                  ((undefined2 *)**(undefined8 **)(param_2 + 2))[1]);
    if (bVar4) {
      *(uint *)(param_1 + 0x297e0) =
           CONCAT22(*(undefined2 *)**(undefined8 **)(param_2 + 2),
                    ((undefined2 *)**(undefined8 **)(param_2 + 2))[1]);
    }
    if (0 < *param_2) {
      puVar10 = (undefined8 *)**(undefined8 **)(param_2 + 2);
      *puVar10 = *(undefined8 *)(param_2 + 4);
      *(undefined8 **)(param_2 + 4) = puVar10;
      uVar14 = *param_2 - 1;
      if (0 < *param_2) {
        if (uVar14 == 0) {
          iVar6 = 0;
        }
        else {
          memmove(*(void **)(param_2 + 2),(void *)((long)*(void **)(param_2 + 2) + 8),
                  (ulong)uVar14 << 3);
          iVar6 = *param_2 + -1;
        }
        *param_2 = iVar6;
      }
    }
    return 1;
  }
LAB_028ecbd8:
  *(char *)(lVar3 + uVar17) = *(char *)(lVar3 + uVar17) + '\x14';
  uVar17 = (ulong)*param_4;
  if (2 < *param_4) {
    uVar17 = 0;
  }
  *(undefined4 *)(lVar1 + uVar17 * 4) = 0xffffffff;
  if (!bVar4) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x297e0) = 0xffffffff;
  return 0;
}


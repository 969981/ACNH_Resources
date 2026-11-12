
void FUN_007ecdb0(int *param_1,ushort *param_2,ushort *param_3,byte *param_4)

{
  uint uVar1;
  ushort *puVar2;
  ushort *puVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  ushort local_64 [2];
  uint local_60;
  undefined4 uStack_5c;
  undefined3 uStack_58;
  byte local_55;
  undefined4 local_54;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  param_2[0x62] = 0x100;
  iVar13 = 1;
  if (*(uint *)(param_2 + 0x66) < 0xfffffffe) {
    iVar13 = *(uint *)(param_2 + 0x66) + 1;
  }
  *(int *)(param_2 + 0x60) = iVar13;
  *(int *)(param_2 + 0x66) = iVar13;
  *(int *)(param_2 + 0x68) = iVar13;
  if ((char)param_2[0x6c] != '\0') {
    *(undefined1 *)(param_2 + 0x6c) = 0;
  }
  puVar10 = PTR_DAT_04bb3170;
  bVar4 = *param_4;
  bVar12 = 7 < bVar4;
  if (bVar12) {
    bVar4 = 0xff;
  }
  puVar3 = param_2 + (ulong)(uint)(int)(char)bVar4 * 0xc;
  if (bVar12) {
    puVar3 = param_2;
  }
  uVar5 = *puVar3;
  uVar6 = puVar3[4];
  uVar7 = *(ushort *)PTR_DAT_04bb3170;
  uVar16 = (uint)(uVar5 != uVar7);
  if (uVar6 != uVar7) {
    uVar16 = uVar16 + 1;
  }
  uVar8 = puVar3[8];
  if (uVar16 != -(uint)(uVar8 != uVar7)) {
    uVar9 = *param_3;
    if (uVar5 == uVar7 || uVar5 != uVar9) {
      if (uVar6 == uVar7 || uVar6 != uVar9) {
        if (uVar8 == uVar7 || uVar8 != uVar9) goto LAB_007ed120;
        lVar14 = 2;
      }
      else {
        lVar14 = 1;
      }
    }
    else {
      lVar14 = 0;
    }
    if ((DAT_0537d558 != (long *)0x0) && ((int)DAT_0537d558[0x10] == 3)) {
      puVar3 = puVar3 + lVar14 * 4;
      uVar5 = *puVar3;
      if (((*PTR_DAT_04bb3128 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar13 != 0)) {
        FUN_00706e58(&DAT_04c8c0f0);
        __cxa_guard_release(&DAT_04c8c100);
      }
      if (0 < (int)DAT_04c8c0f0) {
        uVar17 = 0;
        do {
          if (*(uint *)(DAT_04c8c0f8 + uVar17 * 4) == (uint)(uVar5 >> 0xb)) goto LAB_007ecf0c;
          uVar17 = uVar17 + 1;
        } while (DAT_04c8c0f0 != uVar17);
      }
      uVar17 = 0;
LAB_007ecf0c:
      if (((*PTR_DAT_04bb3128 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(&DAT_04c8c100), iVar13 != 0)) {
        FUN_00706e58(&DAT_04c8c0f0);
        __cxa_guard_release(&DAT_04c8c100);
      }
      puVar11 = PTR_DAT_04bb3170;
      if (0 < (int)DAT_04c8c0f0) {
        uVar15 = 0;
        do {
          if (*(int *)(DAT_04c8c0f8 + uVar15 * 4) == 0x1a) {
            if ((int)uVar17 != (int)uVar15) goto LAB_007ed110;
            goto LAB_007ecf68;
          }
          uVar15 = uVar15 + 1;
        } while (DAT_04c8c0f0 != uVar15);
      }
      if ((int)uVar17 == -1) {
LAB_007ecf68:
        bVar4 = *param_4;
        bVar12 = 7 < bVar4;
        if (bVar12) {
          bVar4 = 0xff;
        }
        uVar5 = *(ushort *)puVar10;
        puVar2 = param_2 + (ulong)(uint)(int)(char)bVar4 * 0xc;
        if (bVar12) {
          puVar2 = param_2;
        }
        uVar6 = *puVar2;
        uVar7 = puVar2[4];
        uVar8 = puVar2[8];
        uVar16 = (uint)(uVar6 != uVar5);
        if (uVar7 != uVar5) {
          uVar16 = uVar16 + 1;
        }
        if (uVar16 != -(uint)(uVar8 != uVar5)) {
          uVar9 = *puVar3;
          uVar16 = 2;
          if (uVar9 != uVar8 || uVar8 == uVar5) {
            uVar16 = 0xffffffff;
          }
          uVar1 = 1;
          if (uVar7 == uVar5 || uVar9 != uVar7) {
            uVar1 = uVar16;
          }
          uVar16 = 0;
          if (uVar6 == uVar5 || uVar9 != uVar6) {
            uVar16 = uVar1;
          }
          if (uVar16 != 0xffffffff) {
            FUN_007ef010(local_64,PTR_DAT_04bb3170);
            local_64[0] = *puVar3;
            uStack_58 = 0;
            local_54 = 3;
            bVar4 = *param_4;
            uStack_5c = 0;
            local_38 = 0;
            local_32 = 0;
            local_55 = bVar4;
            if (7 < bVar4) {
              local_55 = 0xff;
            }
            local_34 = 0xff00;
            if (-1 < DAT_04cb5488) {
              local_60 = uVar16;
              FUN_01db1df0(*DAT_0537d558 + 0x480,DAT_04cb5488,&local_38,local_64,0x14,0);
              bVar4 = *param_4;
            }
            bVar12 = 7 < bVar4;
            if (bVar12) {
              bVar4 = 0xff;
            }
            puVar3 = param_2 + (ulong)(uint)(int)(char)bVar4 * 0xc;
            if (bVar12) {
              puVar3 = param_2;
            }
            puVar3[(ulong)uVar16 * 4] = *(ushort *)puVar11;
            bVar4 = *param_4;
            bVar12 = 7 < bVar4;
            if (bVar12) {
              bVar4 = 0xff;
            }
            puVar3 = param_2 + (ulong)(uint)(int)(char)bVar4 * 0xc;
            if (bVar12) {
              puVar3 = param_2;
            }
            (puVar3 + (ulong)uVar16 * 4 + 2)[0] = 0;
            (puVar3 + (ulong)uVar16 * 4 + 2)[1] = 0;
            iVar13 = *(int *)(param_2 + 0x68);
            if (iVar13 == *(int *)(param_2 + 0x60)) {
              *(undefined1 *)(param_2 + 100) = 0;
              param_2[0x62] = 1;
              param_2[99] = 0;
            }
            goto LAB_007ed128;
          }
        }
      }
LAB_007ed110:
      iVar13 = *(int *)(param_2 + 0x68);
      if (iVar13 != *(int *)(param_2 + 0x60)) goto LAB_007ed128;
    }
  }
LAB_007ed120:
  *(undefined1 *)(param_2 + 100) = 0;
  param_2[0x62] = 0;
  param_2[99] = 0;
LAB_007ed128:
  *param_1 = iVar13;
  return;
}


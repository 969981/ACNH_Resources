
void FUN_03a7c7c0(long param_1,undefined4 *param_2,long *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  byte bVar7;
  ushort uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  long *plVar13;
  void *pvVar14;
  ulong uVar15;
  undefined8 *puVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  uint uVar21;
  int iVar22;
  long lVar23;
  long *plVar24;
  undefined8 uVar25;
  size_t sVar26;
  undefined8 local_4c8;
  undefined4 local_4c0;
  undefined4 uStack_4bc;
  undefined4 local_4b8;
  long local_4b0;
  undefined4 local_4a8;
  undefined4 uStack_4a4;
  undefined4 local_4a0;
  undefined8 local_49c;
  undefined4 local_494;
  undefined4 uStack_490;
  undefined8 local_48c;
  undefined1 local_484;
  undefined8 local_480;
  undefined8 local_478;
  undefined4 local_470;
  uint local_46c;
  undefined4 local_468;
  undefined1 local_6d;
  
  lVar18 = *(long *)(param_2 + 10);
  lVar23 = *(long *)(param_1 + 0x580);
  *(long *)(param_1 + 0x458) = lVar18;
  lVar20 = 0;
  if (lVar18 != 0) {
    lVar20 = lVar18 + 0x38;
  }
  *(undefined8 *)(param_1 + 0x460) = *(undefined8 *)(param_2 + 0xc);
  if (lVar23 != lVar20) {
    if (lVar23 != 0) {
      plVar13 = (long *)((long)*(int *)(lVar23 + 0x4c) + param_1 + 0x510);
      if (*plVar13 != 0) {
        *(long *)(*plVar13 + 8) = plVar13[1];
      }
      if ((long *)plVar13[1] != (long *)0x0) {
        *(long *)plVar13[1] = *plVar13;
      }
      *plVar13 = 0;
      plVar13[1] = 0;
      *(int *)(lVar23 + 0x48) = *(int *)(lVar23 + 0x48) + -1;
    }
    *(long *)(param_1 + 0x580) = lVar20;
    if (lVar18 != 0) {
      plVar24 = (long *)(lVar18 + 0x70);
      lVar20 = *plVar24;
      plVar13 = (long *)((long)*(int *)(lVar18 + 0x84) + param_1 + 0x510);
      *plVar24 = (long)plVar13;
      *plVar13 = lVar20;
      plVar13[1] = (long)plVar24;
      if (lVar20 != 0) {
        *(long **)(lVar20 + 8) = plVar13;
      }
      *(int *)(lVar18 + 0x80) = *(int *)(lVar18 + 0x80) + 1;
    }
  }
  lVar20 = *(long *)(param_1 + 0x460);
  if (lVar20 != 0) {
    lVar18 = *(long *)(param_1 + 0x600);
    if (lVar18 != lVar20 + 0x38) {
      if (lVar18 != 0) {
        plVar13 = (long *)((long)*(int *)(lVar18 + 0x4c) + param_1 + 0x590);
        if (*plVar13 != 0) {
          *(long *)(*plVar13 + 8) = plVar13[1];
        }
        if ((long *)plVar13[1] != (long *)0x0) {
          *(long *)plVar13[1] = *plVar13;
        }
        *plVar13 = 0;
        plVar13[1] = 0;
        *(int *)(lVar18 + 0x48) = *(int *)(lVar18 + 0x48) + -1;
      }
      *(long *)(param_1 + 0x600) = lVar20 + 0x38;
      plVar24 = (long *)(lVar20 + 0x70);
      lVar18 = *plVar24;
      plVar13 = (long *)(param_1 + 0x590 + (long)*(int *)(lVar20 + 0x84));
      *plVar24 = (long)plVar13;
      *plVar13 = lVar18;
      plVar13[1] = (long)plVar24;
      if (lVar18 != 0) {
        *(long **)(lVar18 + 8) = plVar13;
      }
      *(int *)(lVar20 + 0x80) = *(int *)(lVar20 + 0x80) + 1;
    }
  }
  lVar20 = *(long *)(param_1 + 8);
  if (*(char *)(lVar20 + 0x9b0) == '\0') {
    plVar13 = (long *)PTR_DAT_04bb2698;
  }
  else {
    local_468 = 1;
    local_480 = PTR_DAT_04bd1418 + 0x10;
    lVar18 = *(long *)PTR_DAT_04bb2698;
    local_46c = *(int *)(lVar20 + 0x13a0) + *(int *)(lVar20 + 0x1380) + *(int *)(lVar20 + 0x13c0);
    local_470 = *(undefined4 *)(lVar20 + 0x1400);
    local_478 = (uint *)CONCAT44(*(undefined4 *)(lVar20 + 0x13e0),*param_2);
    if (lVar18 == 0) {
      pvVar14 = malloc(0x2cb0);
    }
    else {
      plVar13 = param_3;
      if (param_3 == (long *)0x0) {
        lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar13 = (long *)(lVar18 + 8);
        if (lVar20 != 0) {
          plVar13 = (long *)(lVar20 + 0xa8);
        }
        plVar13 = (long *)*plVar13;
      }
      pvVar14 = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,0x2cb0,8);
    }
    FUN_039dde48();
    *(void **)(param_1 + 0x448) = pvVar14;
    FUN_039de650(pvVar14,*(long *)(param_1 + 8) + 0x248,&local_480,*(undefined8 *)(param_1 + 0x458),
                 param_3);
    uVar25 = *(undefined8 *)(*(long *)(param_1 + 0x448) + 0x1d8);
    lVar20 = *(long *)(param_1 + 0x458);
    iVar12 = (int)**(short **)PTR_DAT_04bd1230;
    if (*(uint *)(lVar20 + 0x18) <= (uint)(int)**(short **)PTR_DAT_04bd1230) {
      iVar12 = 0;
    }
    if (*(short *)(*(long *)(lVar20 + 0x20) + (long)iVar12 * 4 + 2) == 0) {
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = *(long **)(*(long *)(lVar20 + 0x30) +
                          (ulong)*(ushort *)(*(long *)(lVar20 + 0x20) + (long)iVar12 * 4) * 8);
    }
    if (((*PTR_DAT_04bd1248 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_04bd1248), iVar12 != 0)) {
      *(undefined **)PTR_DAT_04bd1240 = PTR_DAT_04bbd8c8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bd1248);
    }
    if (plVar13 == (long *)0x0) {
      plVar13 = (long *)0x0;
    }
    else {
      uVar15 = (**(code **)(*plVar13 + 0x48))(plVar13,PTR_DAT_04bd1240);
      if ((uVar15 & 1) == 0) {
        plVar13 = (long *)0x0;
      }
    }
    FUN_03923830(uVar25,plVar13);
    puVar9 = PTR_DAT_04bbdc40;
    puVar2 = PTR_DAT_04bbdc30;
    lVar20 = *(long *)(param_1 + 0x458);
    iVar12 = (int)**(short **)PTR_DAT_04bbdc40;
    if (*(uint *)(lVar20 + 0x18) <= (uint)(int)**(short **)PTR_DAT_04bbdc40) {
      iVar12 = 0;
    }
    if (*(short *)(*(long *)(lVar20 + 0x20) + (long)iVar12 * 4 + 2) == 0) {
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = *(long **)(*(long *)(lVar20 + 0x30) +
                          (ulong)*(ushort *)(*(long *)(lVar20 + 0x20) + (long)iVar12 * 4) * 8);
    }
    if (((*PTR_DAT_04bbdc30 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_04bbdc30), iVar12 != 0)) {
      *(undefined **)PTR_DAT_04bbdc28 = PTR_DAT_04bbd8c8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbdc30);
    }
    if (plVar13 == (long *)0x0) {
      plVar13 = (long *)0x0;
    }
    else {
      uVar15 = (**(code **)(*plVar13 + 0x48))(plVar13,PTR_DAT_04bbdc28);
      if ((uVar15 & 1) == 0) {
        plVar13 = (long *)0x0;
      }
    }
    FUN_03923830(uVar25,plVar13);
    lVar20 = *(long *)(param_1 + 0x458);
    iVar12 = (int)**(short **)puVar9;
    if (*(uint *)(lVar20 + 0x18) <= (uint)(int)**(short **)puVar9) {
      iVar12 = 0;
    }
    if (*(ushort *)(*(long *)(lVar20 + 0x20) + (long)iVar12 * 4 + 2) < 2) {
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = *(long **)(*(long *)(lVar20 + 0x30) +
                           (ulong)*(ushort *)(*(long *)(lVar20 + 0x20) + (long)iVar12 * 4) * 8 + 8);
    }
    if (((*puVar2 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04bbdc30), iVar12 != 0)) {
      *(undefined **)PTR_DAT_04bbdc28 = PTR_DAT_04bbd8c8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbdc30);
    }
    if (plVar13 == (long *)0x0) {
      plVar13 = (long *)0x0;
    }
    else {
      uVar15 = (**(code **)(*plVar13 + 0x48))(plVar13,PTR_DAT_04bbdc28);
      if ((uVar15 & 1) == 0) {
        plVar13 = (long *)0x0;
      }
    }
    FUN_03923830(uVar25,plVar13);
    lVar20 = *(long *)(param_1 + 0x458);
    iVar12 = (int)**(short **)PTR_DAT_04bbd930;
    if (*(uint *)(lVar20 + 0x18) <= (uint)(int)**(short **)PTR_DAT_04bbd930) {
      iVar12 = 0;
    }
    if (*(short *)(*(long *)(lVar20 + 0x20) + (long)iVar12 * 4 + 2) == 0) {
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = *(long **)(*(long *)(lVar20 + 0x30) +
                          (ulong)*(ushort *)(*(long *)(lVar20 + 0x20) + (long)iVar12 * 4) * 8);
    }
    if (((*PTR_DAT_04bbd8c0 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_04bbd8c0), iVar12 != 0)) {
      *(undefined **)PTR_DAT_04bbd8b8 = PTR_DAT_04bbd8c8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbd8c0);
    }
    if (plVar13 == (long *)0x0) {
      plVar13 = (long *)0x0;
    }
    else {
      uVar15 = (**(code **)(*plVar13 + 0x48))(plVar13,PTR_DAT_04bbd8b8);
      if ((uVar15 & 1) == 0) {
        plVar13 = (long *)0x0;
      }
    }
    FUN_03923830(uVar25,plVar13);
    lVar20 = *(long *)(param_1 + 8);
    uVar19 = *(uint *)(lVar20 + 0x1380);
    if ((int)uVar19 < 1) {
      uVar19 = 0;
    }
    else {
      uVar21 = 0;
      do {
        uVar5 = uVar21;
        if (*(uint *)(*(long *)(param_1 + 0x448) + 0x1d0) <= uVar21) {
          uVar5 = 0;
        }
        uVar21 = uVar21 + 1;
        lVar20 = *(long *)(*(long *)(param_1 + 0x448) + 0x1d8) + (ulong)uVar5 * 0x910;
        *(undefined4 *)(lVar20 + 0x848) = 0;
        *(byte *)(lVar20 + 0x308) = *(byte *)(lVar20 + 0x308) | 4;
      } while (uVar19 != uVar21);
      lVar20 = *(long *)(param_1 + 8);
    }
    if (0 < *(int *)(lVar20 + 0x13a0)) {
      uVar21 = *(int *)(lVar20 + 0x13a0) + uVar19;
      if ((int)uVar21 <= (int)(uVar19 + 1)) {
        uVar21 = uVar19 + 1;
      }
      do {
        uVar5 = uVar19;
        if (*(uint *)(*(long *)(param_1 + 0x448) + 0x1d0) <= uVar19) {
          uVar5 = 0;
        }
        uVar19 = uVar19 + 1;
        lVar20 = *(long *)(*(long *)(param_1 + 0x448) + 0x1d8) + (long)(int)uVar5 * 0x910;
        *(undefined4 *)(lVar20 + 0x848) = 1;
        *(byte *)(lVar20 + 0x308) = *(byte *)(lVar20 + 0x308) | 4;
      } while (uVar21 != uVar19);
      lVar20 = *(long *)(param_1 + 8);
      uVar19 = uVar21;
    }
    if (0 < *(int *)(lVar20 + 0x13c0)) {
      uVar21 = *(int *)(lVar20 + 0x13c0) + uVar19;
      if ((int)uVar21 <= (int)(uVar19 + 1)) {
        uVar21 = uVar19 + 1;
      }
      do {
        uVar5 = uVar19;
        if (*(uint *)(*(long *)(param_1 + 0x448) + 0x1d0) <= uVar19) {
          uVar5 = 0;
        }
        uVar19 = uVar19 + 1;
        lVar20 = *(long *)(*(long *)(param_1 + 0x448) + 0x1d8) + (long)(int)uVar5 * 0x910;
        *(undefined4 *)(lVar20 + 0x848) = 2;
        *(byte *)(lVar20 + 0x308) = *(byte *)(lVar20 + 0x308) | 4;
      } while (uVar21 != uVar19);
    }
    iVar12 = *(int *)(*(long *)(param_1 + 0x448) + 0x1d0);
    if (iVar12 != 0) {
      lVar20 = *(long *)(*(long *)(param_1 + 0x448) + 0x1d8);
      iVar17 = 0;
      do {
        lVar18 = lVar20 + (long)iVar17 * 0x910;
        *(undefined1 *)(lVar18 + 0x708) = 1;
        *(byte *)(lVar18 + 0x308) = *(byte *)(lVar18 + 0x308) | 5;
        iVar17 = iVar17 + 1;
      } while (iVar12 != iVar17);
    }
    lVar20 = *(long *)PTR_DAT_04bb2698;
    if (lVar20 == 0) {
      pvVar14 = malloc(0x2000);
joined_r0x03a7cf80:
      if (pvVar14 != (void *)0x0) {
        *(void **)(param_1 + 0x658) = pvVar14;
        *(undefined4 *)(param_1 + 0x650) = 0;
        *(undefined4 *)(param_1 + 0x654) = 0x400;
      }
    }
    else {
      plVar13 = param_3;
      if (param_3 != (long *)0x0) {
LAB_03a7cdc8:
        pvVar14 = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,0x2000,8);
        goto joined_r0x03a7cf80;
      }
      lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar13 = (long *)(lVar20 + 8);
      if (lVar18 != 0) {
        plVar13 = (long *)(lVar18 + 0xa8);
      }
      plVar13 = (long *)*plVar13;
      if (plVar13 != (long *)0x0) goto LAB_03a7cdc8;
    }
    plVar13 = (long *)PTR_DAT_04bb2698;
    iVar12 = *(int *)(param_1 + 0x654);
    if (0 < iVar12) {
      lVar20 = *(long *)PTR_DAT_04bb2698;
      if (lVar20 == 0) {
        pvVar14 = malloc((long)iVar12 << 3);
      }
      else {
        plVar24 = param_3;
        if (param_3 == (long *)0x0) {
          lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar24 = (long *)(lVar20 + 8);
          if (lVar18 != 0) {
            plVar24 = (long *)(lVar18 + 0xa8);
          }
          plVar24 = (long *)*plVar24;
          if (plVar24 == (long *)0x0) goto LAB_03a7ce6c;
        }
        pvVar14 = (void *)(**(code **)(*plVar24 + 0x30))(plVar24,(long)iVar12 << 3,8);
      }
      if (pvVar14 != (void *)0x0) {
        *(void **)(param_1 + 0x668) = pvVar14;
        *(undefined4 *)(param_1 + 0x660) = 0;
        *(int *)(param_1 + 0x664) = iVar12;
      }
    }
LAB_03a7ce6c:
    lVar20 = *(long *)(param_1 + 8);
  }
  puVar9 = PTR_DAT_04bd1890;
  puVar2 = PTR_DAT_04bd1880;
  lVar18 = *(long *)(param_1 + 0x458);
  if (*(char *)(lVar20 + 0xb10) != '\0') {
    uVar19 = *(uint *)(lVar18 + 0x18);
    lVar20 = *(long *)(lVar18 + 0x20);
    lVar18 = *plVar13;
    iVar12 = (int)**(short **)PTR_DAT_04bd1880;
    if (uVar19 <= (uint)(int)**(short **)PTR_DAT_04bd1880) {
      iVar12 = 0;
    }
    iVar17 = (int)**(short **)PTR_DAT_04bd1890;
    if (uVar19 <= (uint)(int)**(short **)PTR_DAT_04bd1890) {
      iVar17 = 0;
    }
    iVar22 = (int)**(short **)PTR_DAT_04bd16e0;
    if (uVar19 <= (uint)(int)**(short **)PTR_DAT_04bd16e0) {
      iVar22 = 0;
    }
    local_480 = (undefined *)
                CONCAT44((uint)*(ushort *)(lVar20 + (long)iVar22 * 4 + 2) +
                         (uint)*(ushort *)(lVar20 + (long)iVar17 * 4 + 2),
                         (uint)*(ushort *)(lVar20 + (long)iVar12 * 4 + 2));
    iVar12 = (int)**(short **)PTR_DAT_04bd16e8;
    if (uVar19 <= (uint)(int)**(short **)PTR_DAT_04bd16e8) {
      iVar12 = 0;
    }
    local_470 = 1;
    local_478 = (uint *)CONCAT44(*param_2,(uint)*(ushort *)(lVar20 + (long)iVar12 * 4 + 2));
    if (lVar18 == 0) {
      pvVar14 = malloc(0x7c8);
    }
    else {
      plVar24 = param_3;
      if (param_3 == (long *)0x0) {
        lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar24 = (long *)(lVar18 + 8);
        if (lVar20 != 0) {
          plVar24 = (long *)(lVar20 + 0xa8);
        }
        plVar24 = (long *)*plVar24;
      }
      pvVar14 = (void *)(**(code **)(*plVar24 + 0x30))(plVar24,0x7c8,8);
    }
    FUN_039741a0();
    *(void **)(param_1 + 0x440) = pvVar14;
    FUN_03974c20(pvVar14,&local_480,param_3);
    lVar20 = *(long *)(param_1 + 0x440);
    *(undefined1 **)(lVar20 + 0x7a8) = &LAB_03a7e29c;
    *(long *)(lVar20 + 0x7a0) = param_1;
    *(undefined8 *)(lVar20 + 0x7b0) = 0;
    *(undefined ***)(lVar20 + 0x798) = &PTR_LAB_04b708c0;
    *(long *)(lVar20 + 0x770) = lVar20 + 0x798;
    lVar18 = *(long *)(param_1 + 0x458);
    *(ushort *)(param_1 + 0x438) =
         *(ushort *)(param_1 + 0x438) & 0xfffe | (ushort)*(byte *)(*(long *)(param_1 + 8) + 0x1480);
  }
  uVar19 = *(uint *)(lVar18 + 0x18);
  lVar20 = *(long *)(lVar18 + 0x20);
  iVar12 = (int)**(short **)puVar2;
  if (uVar19 <= (uint)(int)**(short **)puVar2) {
    iVar12 = 0;
  }
  if (*(short *)(lVar20 + (long)iVar12 * 4 + 2) != 0) {
    lVar20 = *plVar13;
    if (lVar20 == 0) {
      puVar16 = malloc(0x68);
    }
    else {
      plVar24 = param_3;
      if (param_3 == (long *)0x0) {
        lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar24 = (long *)(lVar20 + 8);
        if (lVar18 != 0) {
          plVar24 = (long *)(lVar18 + 0xa8);
        }
        plVar24 = (long *)*plVar24;
        if (plVar24 == (long *)0x0) {
          puVar16 = (undefined8 *)0x0;
          goto LAB_03a7d080;
        }
      }
      puVar16 = (undefined8 *)(**(code **)(*plVar24 + 0x30))(plVar24,0x68,8);
    }
LAB_03a7d080:
    puVar16[4] = 0;
    *puVar16 = &PTR_LAB_04b70938;
    puVar16[1] = 0;
    puVar16[2] = 0;
    puVar16[3] = 0;
    FUN_038e18e4(puVar16 + 5);
    lVar18 = *(long *)(param_1 + 0x458);
    *(undefined8 **)(param_1 + 0x468) = puVar16;
    uVar19 = *(uint *)(lVar18 + 0x18);
    lVar20 = *(long *)(lVar18 + 0x20);
    iVar12 = (int)**(short **)puVar2;
    if (uVar19 <= (uint)(int)**(short **)puVar2) {
      iVar12 = 0;
    }
    uVar8 = *(ushort *)(lVar20 + (long)iVar12 * 4 + 2);
    if (uVar8 != 0) {
      lVar20 = *plVar13;
      sVar26 = (ulong)uVar8 << 3;
      if (lVar20 == 0) {
        pvVar14 = malloc(sVar26);
joined_r0x03a7d160:
        if (pvVar14 != (void *)0x0) {
          puVar16[2] = pvVar14;
          *(undefined4 *)(puVar16 + 1) = 0;
          *(uint *)((long)puVar16 + 0xc) = (uint)uVar8;
        }
        lVar20 = *(long *)PTR_DAT_04bb2698;
        if (lVar20 == 0) goto LAB_03a7d448;
        if (param_3 != (long *)0x0) {
          plVar13 = param_3;
LAB_03a7d1b0:
          pvVar14 = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,sVar26,8);
          if (pvVar14 == (void *)0x0) goto LAB_03a7d1d0;
          goto LAB_03a7d1c8;
        }
LAB_03a7d184:
        lVar23 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar13 = (long *)(lVar20 + 8);
        if (lVar23 != 0) {
          plVar13 = (long *)(lVar23 + 0xa8);
        }
        plVar13 = (long *)*plVar13;
        if (plVar13 != (long *)0x0) goto LAB_03a7d1b0;
      }
      else {
        plVar13 = param_3;
        if (param_3 != (long *)0x0) {
LAB_03a7d108:
          pvVar14 = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,sVar26,8);
          goto joined_r0x03a7d160;
        }
        lVar23 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar13 = (long *)(lVar20 + 8);
        if (lVar23 != 0) {
          plVar13 = (long *)(lVar23 + 0xa8);
        }
        plVar13 = (long *)*plVar13;
        if (plVar13 != (long *)0x0) goto LAB_03a7d108;
        lVar20 = *(long *)PTR_DAT_04bb2698;
        if (lVar20 != 0) goto LAB_03a7d184;
LAB_03a7d448:
        pvVar14 = malloc(sVar26);
        if (pvVar14 != (void *)0x0) {
LAB_03a7d1c8:
          puVar16[4] = pvVar14;
          *(undefined4 *)(puVar16 + 3) = 0;
          *(uint *)((long)puVar16 + 0x1c) = (uint)uVar8;
        }
      }
LAB_03a7d1d0:
      puVar10 = PTR_DAT_04bd1950;
      puVar3 = PTR_DAT_04bd1948;
      lVar20 = 0;
      puVar1 = PTR_DAT_04bbd8c8 + 0x10;
      do {
        iVar12 = (int)**(short **)puVar2;
        if (*(uint *)(lVar18 + 0x18) <= (uint)(int)**(short **)puVar2) {
          iVar12 = 0;
        }
        if ((uint)lVar20 < (uint)*(ushort *)(*(long *)(lVar18 + 0x20) + (long)iVar12 * 4 + 2)) {
          plVar13 = *(long **)(*(long *)(lVar18 + 0x30) +
                              (lVar20 + (ulong)*(ushort *)
                                                (*(long *)(lVar18 + 0x20) + (long)iVar12 * 4)) * 8);
        }
        else {
          plVar13 = (long *)0x0;
        }
        if (((*puVar10 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar10), iVar12 != 0)) {
          *(undefined **)puVar3 = puVar1;
          __cxa_guard_release(puVar10);
        }
        if (plVar13 == (long *)0x0) {
          plVar13 = (long *)0x0;
          bVar7 = bRam00000000000000b2;
        }
        else {
          uVar15 = (**(code **)(*plVar13 + 0x48))(plVar13,puVar3);
          if ((uVar15 & 1) == 0) {
            plVar13 = (long *)0x0;
          }
          bVar7 = *(byte *)((long)plVar13 + 0xb2);
        }
        if ((bVar7 & 1) != 0) {
          *(byte *)((long)plVar13 + 0xb2) = bVar7 & 0xfe;
          *(ushort *)(plVar13[7] + 0x8c) = *(ushort *)(plVar13[7] + 0x8c) | 1;
        }
        if (*(int *)(puVar16 + 1) < *(int *)((long)puVar16 + 0xc)) {
          *(long **)(puVar16[2] + (long)*(int *)(puVar16 + 1) * 8) = plVar13;
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
        }
        lVar20 = lVar20 + 1;
      } while ((uint)uVar8 != (uint)lVar20);
      lVar18 = *(long *)(param_1 + 0x458);
      uVar19 = *(uint *)(lVar18 + 0x18);
      lVar20 = *(long *)(lVar18 + 0x20);
      plVar13 = (long *)PTR_DAT_04bb2698;
    }
  }
  iVar12 = (int)**(short **)puVar9;
  if (uVar19 <= (uint)(int)**(short **)puVar9) {
    iVar12 = 0;
  }
  if (*(short *)(lVar20 + (long)iVar12 * 4 + 2) != 0) {
    lVar20 = *plVar13;
    if (lVar20 == 0) {
      puVar16 = malloc(0x68);
    }
    else {
      plVar24 = param_3;
      if (param_3 == (long *)0x0) {
        lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar24 = (long *)(lVar20 + 8);
        if (lVar18 != 0) {
          plVar24 = (long *)(lVar18 + 0xa8);
        }
        plVar24 = (long *)*plVar24;
        if (plVar24 == (long *)0x0) {
          puVar16 = (undefined8 *)0x0;
          goto LAB_03a7d388;
        }
      }
      puVar16 = (undefined8 *)(**(code **)(*plVar24 + 0x30))(plVar24,0x68,8);
    }
LAB_03a7d388:
    puVar16[4] = 0;
    *puVar16 = &PTR_LAB_04b70958;
    puVar16[1] = 0;
    puVar16[2] = 0;
    puVar16[3] = 0;
    FUN_038e18e4(puVar16 + 5);
    lVar18 = *(long *)(param_1 + 0x458);
    *(undefined8 **)(param_1 + 0x470) = puVar16;
    uVar19 = *(uint *)(lVar18 + 0x18);
    lVar20 = *(long *)(lVar18 + 0x20);
    iVar12 = (int)**(short **)puVar9;
    if (uVar19 <= (uint)(int)**(short **)puVar9) {
      iVar12 = 0;
    }
    uVar8 = *(ushort *)(lVar20 + (long)iVar12 * 4 + 2);
    if (uVar8 != 0) {
      lVar20 = *plVar13;
      sVar26 = (ulong)uVar8 << 3;
      if (lVar20 == 0) {
        pvVar14 = malloc(sVar26);
joined_r0x03a7d460:
        if (pvVar14 != (void *)0x0) {
          puVar16[2] = pvVar14;
          *(undefined4 *)(puVar16 + 1) = 0;
          *(uint *)((long)puVar16 + 0xc) = (uint)uVar8;
        }
        lVar20 = *plVar13;
        if (lVar20 == 0) goto LAB_03a7d75c;
        if (param_3 != (long *)0x0) {
          plVar13 = param_3;
LAB_03a7d4a8:
          pvVar14 = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,sVar26,8);
          if (pvVar14 == (void *)0x0) goto LAB_03a7d4c8;
          goto LAB_03a7d4c0;
        }
LAB_03a7d47c:
        lVar23 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar13 = (long *)(lVar20 + 8);
        if (lVar23 != 0) {
          plVar13 = (long *)(lVar23 + 0xa8);
        }
        plVar13 = (long *)*plVar13;
        if (plVar13 != (long *)0x0) goto LAB_03a7d4a8;
      }
      else {
        plVar24 = param_3;
        if (param_3 != (long *)0x0) {
LAB_03a7d410:
          pvVar14 = (void *)(**(code **)(*plVar24 + 0x30))(plVar24,sVar26,8);
          goto joined_r0x03a7d460;
        }
        lVar23 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar24 = (long *)(lVar20 + 8);
        if (lVar23 != 0) {
          plVar24 = (long *)(lVar23 + 0xa8);
        }
        plVar24 = (long *)*plVar24;
        if (plVar24 != (long *)0x0) goto LAB_03a7d410;
        lVar20 = *plVar13;
        if (lVar20 != 0) goto LAB_03a7d47c;
LAB_03a7d75c:
        pvVar14 = malloc(sVar26);
        if (pvVar14 != (void *)0x0) {
LAB_03a7d4c0:
          puVar16[4] = pvVar14;
          *(undefined4 *)(puVar16 + 3) = 0;
          *(uint *)((long)puVar16 + 0x1c) = (uint)uVar8;
        }
      }
LAB_03a7d4c8:
      puVar3 = PTR_DAT_04bd1960;
      puVar1 = PTR_DAT_04bd1958;
      lVar20 = 0;
      puVar2 = PTR_DAT_04bbd8c8 + 0x10;
      do {
        iVar12 = (int)**(short **)puVar9;
        if (*(uint *)(lVar18 + 0x18) <= (uint)(int)**(short **)puVar9) {
          iVar12 = 0;
        }
        if ((uint)lVar20 < (uint)*(ushort *)(*(long *)(lVar18 + 0x20) + (long)iVar12 * 4 + 2)) {
          plVar13 = *(long **)(*(long *)(lVar18 + 0x30) +
                              (lVar20 + (ulong)*(ushort *)
                                                (*(long *)(lVar18 + 0x20) + (long)iVar12 * 4)) * 8);
        }
        else {
          plVar13 = (long *)0x0;
        }
        if (((*puVar3 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar3), iVar12 != 0)) {
          *(undefined **)puVar1 = puVar2;
          __cxa_guard_release(puVar3);
        }
        if (plVar13 == (long *)0x0) {
          plVar13 = (long *)0x0;
          bVar7 = bRam00000000000000b2;
        }
        else {
          uVar15 = (**(code **)(*plVar13 + 0x48))(plVar13,puVar1);
          if ((uVar15 & 1) == 0) {
            plVar13 = (long *)0x0;
          }
          bVar7 = *(byte *)((long)plVar13 + 0xb2);
        }
        if ((bVar7 & 1) != 0) {
          *(byte *)((long)plVar13 + 0xb2) = bVar7 & 0xfe;
          *(ushort *)(plVar13[7] + 0x8c) = *(ushort *)(plVar13[7] + 0x8c) | 1;
        }
        if (*(int *)(puVar16 + 1) < *(int *)((long)puVar16 + 0xc)) {
          *(long **)(puVar16[2] + (long)*(int *)(puVar16 + 1) * 8) = plVar13;
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
        }
        lVar20 = lVar20 + 1;
      } while ((uint)uVar8 != (uint)lVar20);
      lVar18 = *(long *)(param_1 + 0x458);
      uVar19 = *(uint *)(lVar18 + 0x18);
      lVar20 = *(long *)(lVar18 + 0x20);
    }
  }
  puVar1 = PTR_DAT_04bd1740;
  puVar9 = PTR_DAT_04bd1738;
  puVar2 = PTR_DAT_04bd1730;
  iVar12 = (int)**(short **)PTR_DAT_04bd1730;
  if (uVar19 <= (uint)(int)**(short **)PTR_DAT_04bd1730) {
    iVar12 = 0;
  }
  if (*(short *)(lVar20 + (long)iVar12 * 4 + 2) != 0) {
    lVar20 = *(long *)PTR_DAT_04bb2698;
    if (lVar20 == 0) {
      puVar16 = malloc(0x68);
    }
    else {
      plVar13 = param_3;
      if (param_3 == (long *)0x0) {
        lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar13 = (long *)(lVar20 + 8);
        if (lVar18 != 0) {
          plVar13 = (long *)(lVar18 + 0xa8);
        }
        plVar13 = (long *)*plVar13;
        if (plVar13 == (long *)0x0) {
          puVar16 = (undefined8 *)0x0;
          goto LAB_03a7d68c;
        }
      }
      puVar16 = (undefined8 *)(**(code **)(*plVar13 + 0x30))(plVar13,0x68,8);
    }
LAB_03a7d68c:
    puVar16[4] = 0;
    *puVar16 = &PTR_LAB_04b70978;
    puVar16[1] = 0;
    puVar16[2] = 0;
    puVar16[3] = 0;
    FUN_038e18e4(puVar16 + 5);
    lVar18 = *(long *)(param_1 + 0x458);
    *(undefined8 **)(param_1 + 0x478) = puVar16;
    uVar19 = *(uint *)(lVar18 + 0x18);
    lVar20 = *(long *)(lVar18 + 0x20);
    iVar12 = (int)**(short **)puVar2;
    if (uVar19 <= (uint)(int)**(short **)puVar2) {
      iVar12 = 0;
    }
    uVar8 = *(ushort *)(lVar20 + (long)iVar12 * 4 + 2);
    if (uVar8 != 0) {
      sVar26 = (ulong)uVar8 << 3;
      lVar20 = *(long *)PTR_DAT_04bb2698;
      if (lVar20 == 0) {
        pvVar14 = malloc(sVar26);
joined_r0x03a7d774:
        if (pvVar14 != (void *)0x0) {
          puVar16[2] = pvVar14;
          *(undefined4 *)(puVar16 + 1) = 0;
          *(uint *)((long)puVar16 + 0xc) = (uint)uVar8;
        }
        lVar20 = *(long *)PTR_DAT_04bb2698;
        if (lVar20 == 0) goto LAB_03a7e190;
        plVar13 = param_3;
        if (param_3 != (long *)0x0) {
LAB_03a7d7c4:
          pvVar14 = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,sVar26,8);
          if (pvVar14 == (void *)0x0) goto LAB_03a7d7e4;
          goto LAB_03a7d7dc;
        }
LAB_03a7d798:
        lVar23 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar13 = (long *)(lVar20 + 8);
        if (lVar23 != 0) {
          plVar13 = (long *)(lVar23 + 0xa8);
        }
        plVar13 = (long *)*plVar13;
        if (plVar13 != (long *)0x0) goto LAB_03a7d7c4;
      }
      else {
        plVar13 = param_3;
        if (param_3 != (long *)0x0) {
LAB_03a7d71c:
          pvVar14 = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,sVar26,8);
          goto joined_r0x03a7d774;
        }
        lVar23 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar13 = (long *)(lVar20 + 8);
        if (lVar23 != 0) {
          plVar13 = (long *)(lVar23 + 0xa8);
        }
        plVar13 = (long *)*plVar13;
        if (plVar13 != (long *)0x0) goto LAB_03a7d71c;
        lVar20 = *(long *)PTR_DAT_04bb2698;
        if (lVar20 != 0) goto LAB_03a7d798;
LAB_03a7e190:
        pvVar14 = malloc(sVar26);
        if (pvVar14 != (void *)0x0) {
LAB_03a7d7dc:
          puVar16[4] = pvVar14;
          *(undefined4 *)(puVar16 + 3) = 0;
          *(uint *)((long)puVar16 + 0x1c) = (uint)uVar8;
        }
      }
LAB_03a7d7e4:
      lVar20 = 0;
      puVar3 = PTR_DAT_04bbd8c8 + 0x10;
      do {
        iVar12 = (int)**(short **)puVar2;
        if (*(uint *)(lVar18 + 0x18) <= (uint)(int)**(short **)puVar2) {
          iVar12 = 0;
        }
        if ((uint)lVar20 < (uint)*(ushort *)(*(long *)(lVar18 + 0x20) + (long)iVar12 * 4 + 2)) {
          plVar13 = *(long **)(*(long *)(lVar18 + 0x30) +
                              (lVar20 + (ulong)*(ushort *)
                                                (*(long *)(lVar18 + 0x20) + (long)iVar12 * 4)) * 8);
        }
        else {
          plVar13 = (long *)0x0;
        }
        if (((*puVar1 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar1), iVar12 != 0)) {
          *(undefined **)puVar9 = puVar3;
          __cxa_guard_release(puVar1);
        }
        if (plVar13 == (long *)0x0) {
          plVar13 = (long *)0x0;
          bVar7 = bRam00000000000000b2;
        }
        else {
          uVar15 = (**(code **)(*plVar13 + 0x48))(plVar13,puVar9);
          if ((uVar15 & 1) == 0) {
            plVar13 = (long *)0x0;
          }
          bVar7 = *(byte *)((long)plVar13 + 0xb2);
        }
        if ((bVar7 & 1) != 0) {
          *(byte *)((long)plVar13 + 0xb2) = bVar7 & 0xfe;
          *(ushort *)(plVar13[7] + 0x8c) = *(ushort *)(plVar13[7] + 0x8c) | 1;
        }
        if (*(int *)(puVar16 + 1) < *(int *)((long)puVar16 + 0xc)) {
          *(long **)(puVar16[2] + (long)*(int *)(puVar16 + 1) * 8) = plVar13;
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
        }
        lVar20 = lVar20 + 1;
      } while ((uint)uVar8 != (uint)lVar20);
      lVar18 = *(long *)(param_1 + 0x458);
      uVar19 = *(uint *)(lVar18 + 0x18);
      lVar20 = *(long *)(lVar18 + 0x20);
    }
  }
  puVar11 = PTR_DAT_04bd1708;
  puVar10 = PTR_DAT_04bd1700;
  puVar3 = PTR_DAT_04bd16e0;
  iVar12 = (int)**(short **)PTR_DAT_04bd16e0;
  if (uVar19 <= (uint)(int)**(short **)PTR_DAT_04bd16e0) {
    iVar12 = 0;
  }
  uVar8 = *(ushort *)(lVar20 + (long)iVar12 * 4 + 2);
  if (uVar8 != 0) {
    lVar20 = 0;
    puVar4 = PTR_DAT_04bd1710 + 0x10;
    do {
      lVar18 = *(long *)(param_1 + 0x458);
      iVar12 = (int)**(short **)puVar3;
      if (*(uint *)(lVar18 + 0x18) <= (uint)(int)**(short **)puVar3) {
        iVar12 = 0;
      }
      if ((uint)lVar20 < (uint)*(ushort *)(*(long *)(lVar18 + 0x20) + (long)iVar12 * 4 + 2)) {
        plVar13 = *(long **)(*(long *)(lVar18 + 0x30) +
                            (lVar20 + (ulong)*(ushort *)
                                              (*(long *)(lVar18 + 0x20) + (long)iVar12 * 4)) * 8);
      }
      else {
        plVar13 = (long *)0x0;
      }
      if (((*puVar11 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar11), iVar12 != 0)) {
        *(undefined **)puVar10 = puVar4;
        __cxa_guard_release(puVar11);
      }
      uVar15 = (**(code **)(*plVar13 + 0x48))(plVar13,puVar10);
      lVar20 = lVar20 + 1;
      if ((uVar15 & 1) == 0) {
        plVar13 = (long *)0x0;
      }
      plVar13[0x22] = *(long *)(param_1 + 0x440);
    } while ((uint)uVar8 != (uint)lVar20);
    lVar18 = *(long *)(param_1 + 0x458);
    uVar19 = *(uint *)(lVar18 + 0x18);
    lVar20 = *(long *)(lVar18 + 0x20);
  }
  iVar12 = (int)**(short **)puVar2;
  if (uVar19 <= (uint)(int)**(short **)puVar2) {
    iVar12 = 0;
  }
  if (*(short *)(lVar20 + (long)iVar12 * 4 + 2) != 0) {
    lVar23 = 0;
    puVar3 = PTR_DAT_04bbd8c8 + 0x10;
    do {
      plVar13 = *(long **)(*(long *)(lVar18 + 0x30) +
                          (lVar23 + (ulong)*(ushort *)(lVar20 + (long)iVar12 * 4)) * 8);
      if (((*puVar1 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar1), iVar12 != 0)) {
        *(undefined **)puVar9 = puVar3;
        __cxa_guard_release(puVar1);
      }
      uVar15 = (**(code **)(*plVar13 + 0x48))(plVar13,puVar9);
      lVar23 = lVar23 + 1;
      if ((uVar15 & 1) == 0) {
        plVar13 = (long *)0x0;
      }
      plVar13[0x22] = *(long *)(param_1 + 0x440);
      lVar18 = *(long *)(param_1 + 0x458);
      uVar19 = *(uint *)(lVar18 + 0x18);
      lVar20 = *(long *)(lVar18 + 0x20);
      iVar12 = (int)**(short **)puVar2;
      if (uVar19 <= (uint)(int)**(short **)puVar2) {
        iVar12 = 0;
      }
    } while ((uint)lVar23 < (uint)*(ushort *)(lVar20 + (long)iVar12 * 4 + 2));
  }
  puVar1 = PTR_DAT_04bd1720;
  puVar9 = PTR_DAT_04bd1718;
  puVar2 = PTR_DAT_04bd16e8;
  iVar12 = (int)**(short **)PTR_DAT_04bd16e8;
  if (uVar19 <= (uint)(int)**(short **)PTR_DAT_04bd16e8) {
    iVar12 = 0;
  }
  uVar8 = *(ushort *)(lVar20 + (long)iVar12 * 4 + 2);
  if (uVar8 != 0) {
    lVar20 = 0;
    puVar3 = PTR_DAT_04bd1710 + 0x10;
    do {
      lVar18 = *(long *)(param_1 + 0x458);
      iVar12 = (int)**(short **)puVar2;
      if (*(uint *)(lVar18 + 0x18) <= (uint)(int)**(short **)puVar2) {
        iVar12 = 0;
      }
      if ((uint)lVar20 < (uint)*(ushort *)(*(long *)(lVar18 + 0x20) + (long)iVar12 * 4 + 2)) {
        plVar13 = *(long **)(*(long *)(lVar18 + 0x30) +
                            (lVar20 + (ulong)*(ushort *)
                                              (*(long *)(lVar18 + 0x20) + (long)iVar12 * 4)) * 8);
      }
      else {
        plVar13 = (long *)0x0;
      }
      if (((*puVar1 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar1), iVar12 != 0)) {
        *(undefined **)puVar9 = puVar3;
        __cxa_guard_release(puVar1);
      }
      uVar15 = (**(code **)(*plVar13 + 0x48))(plVar13,puVar9);
      lVar20 = lVar20 + 1;
      if ((uVar15 & 1) == 0) {
        plVar13 = (long *)0x0;
      }
      plVar13[0x22] = *(long *)(param_1 + 0x440);
    } while ((uint)uVar8 != (uint)lVar20);
  }
  puVar2 = PTR_DAT_04bb2698;
  if (*(char *)(*(long *)(param_1 + 8) + 0xbd0) != '\0') {
    lVar20 = *(long *)PTR_DAT_04bb2698;
    if (lVar20 == 0) {
      pvVar14 = malloc(0x728);
    }
    else {
      plVar13 = param_3;
      if (param_3 == (long *)0x0) {
        lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar13 = (long *)(lVar20 + 8);
        if (lVar18 != 0) {
          plVar13 = (long *)(lVar18 + 0xa8);
        }
        plVar13 = (long *)*plVar13;
      }
      pvVar14 = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,0x728,8);
    }
    FUN_03a817fc();
    *(void **)(param_1 + 0x450) = pvVar14;
    FUN_03a81f80(pvVar14,*param_2,param_3);
    lVar20 = *(long *)(param_1 + 0x450);
    *(undefined8 *)(lVar20 + 0x40) = &PTR_LAB_04b70998;
    *(long *)(lVar20 + 0x48) = param_1;
    *(undefined1 **)(lVar20 + 0x50) = &LAB_03a7e2fc;
    *(undefined8 *)(lVar20 + 0x58) = 0;
    *(undefined8 **)(lVar20 + 0x38) = (undefined8 *)(lVar20 + 0x40);
    uVar19 = *(uint *)PTR_DAT_04bd0f28;
    *(uint *)(*(long *)(param_1 + 0x450) + 0x20) =
         *(uint *)(*(long *)(param_1 + 0x450) + 0x20) | 0x10;
    if (0 < (int)uVar19) {
      lVar20 = *(long *)puVar2;
      sVar26 = (ulong)uVar19 << 3;
      if (lVar20 == 0) {
        pvVar14 = malloc(sVar26);
      }
      else {
        plVar13 = param_3;
        if (param_3 == (long *)0x0) {
          lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar13 = (long *)(lVar20 + 8);
          if (lVar18 != 0) {
            plVar13 = (long *)(lVar18 + 0xa8);
          }
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) goto LAB_03a7dd10;
        }
        pvVar14 = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,sVar26,8);
      }
      if (pvVar14 != (void *)0x0) {
        memset(pvVar14,0,sVar26);
        *(uint *)(param_1 + 0x670) = uVar19;
        *(void **)(param_1 + 0x678) = pvVar14;
      }
    }
  }
LAB_03a7dd10:
  puVar9 = PTR_DAT_04bb2f40;
  lVar20 = *(long *)(param_1 + 8);
  if (*(char *)(lVar20 + 0xa70) == '\0') goto LAB_03a7e020;
  local_4a8 = *(undefined4 *)(lVar20 + 0x1b80);
  uStack_4a4 = *(undefined4 *)(lVar20 + 0x1ba0);
  local_4b8 = *(undefined4 *)(lVar20 + 0x1be0);
  local_4a0 = *(undefined4 *)(lVar20 + 0x1bc0);
  local_484 = *(undefined1 *)(lVar20 + 0x1c00);
  local_49c = 0x2b00000033;
  local_494 = 0x2b;
  local_48c = 0x6400000064;
  if (*(char *)(lVar20 + 0x1ca0) != '\0') {
    local_49c = 0x1a0000001a;
    local_494 = 0x1a;
  }
  local_4c8 = *(undefined8 *)(param_2 + 0xe);
  uStack_4bc = *(undefined4 *)(lVar20 + 0x1c80);
  local_4b0 = (long)*(int *)(lVar20 + 0x1b60);
  lVar20 = *(long *)puVar2;
  local_4c0 = 0x400;
  uStack_490 = local_4b8;
  if (lVar20 == 0) {
    plVar13 = malloc(0xef8);
  }
  else {
    plVar13 = param_3;
    if (param_3 == (long *)0x0) {
      lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar13 = (long *)(lVar20 + 8);
      if (lVar18 != 0) {
        plVar13 = (long *)(lVar18 + 0xa8);
      }
      plVar13 = (long *)*plVar13;
      if (plVar13 == (long *)0x0) {
        plVar13 = (long *)0x0;
        goto LAB_03a7de08;
      }
    }
    plVar13 = (long *)(**(code **)(*plVar13 + 0x30))(plVar13,0xef8,8);
  }
LAB_03a7de08:
  *(undefined1 *)((long)plVar13 + 0xc) = 0;
  puVar1 = PTR_DAT_04bd1798;
  *(undefined4 *)(plVar13 + 1) = 0x7000000;
  plVar13[2] = -0x407fffff40800000;
  *plVar13 = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_04bd1850;
  *(undefined4 *)(plVar13 + 3) = 0;
  *(undefined8 *)((long)plVar13 + 0x1c) = 0;
  *(undefined8 *)((long)plVar13 + 0x24) = 0x3f80000000000000;
  *(undefined4 *)(plVar13 + 7) = 0;
  plVar13[6] = (long)(puVar1 + 0x10);
  plVar13[8] = 0;
  plVar13[9] = 0;
  puVar3 = PTR_DAT_04bd1840;
  plVar13[10] = 0;
  plVar13[0x15] = 0;
  plVar13[0xd] = 0;
  plVar13[0xe] = 0;
  plVar13[0x11] = 0;
  plVar13[0x12] = 0;
  plVar13[0x13] = 0;
  plVar13[0x14] = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  plVar13[9] = (long)(puVar3 + 0x10);
  plVar13[0xe] = 0;
  plVar13[0xf] = 0;
  plVar13[0xf] = 0;
  plVar13[0x10] = 0;
  *(undefined4 *)(plVar13 + 0x10) = 0;
  plVar13[10] = (long)puVar1;
  plVar13[0xb] = 0;
  plVar13[0xb] = (long)&DAT_0407ebb1;
  plVar13[0xc] = 0;
  *(undefined4 *)((long)plVar13 + 0x84) = 0;
  *(undefined4 *)(plVar13 + 0x15) = 0;
  *(undefined4 *)(plVar13 + 0x18) = 0;
  plVar13[0x11] = (long)(puVar3 + 0x10);
  plVar13[0x12] = (long)puVar1;
  plVar13[0x13] = (long)&DAT_0407ebb1;
  plVar13[0x14] = 0;
  plVar13[0x16] = 0;
  plVar13[0x17] = 0;
  *(undefined4 *)((long)plVar13 + 0xc4) = 0;
  puVar1 = PTR_DAT_04bd1828 + 0x10;
  *(undefined4 *)(plVar13 + 0x1a) = 0;
  *(undefined4 *)(plVar13 + 0x1b) = 0;
  plVar13[0x1c] = 0;
  *(undefined4 *)(plVar13 + 0x81) = 0;
  plVar13[0x80] = 0;
  plVar13[0x7f] = 0;
  plVar13[0x19] = (long)puVar1;
  plVar13[0x7e] = 0;
  *(undefined2 *)((long)plVar13 + 0xd4) = 0xffff;
  plVar13[0x7d] = 0;
  plVar13[0x7c] = 0;
  plVar13[0x7b] = 0;
  *(undefined1 **)((long)plVar13 + 0x40c) = &DAT_3f8000003f800000;
  *(undefined1 **)((long)plVar13 + 0x414) = &DAT_3f8000003f800000;
  puVar1 = PTR_DAT_04bd1838;
  *(undefined1 **)((long)plVar13 + 0x41c) = &DAT_3f8000003f800000;
  plVar13[0x89] = 0;
  *(undefined4 *)(plVar13 + 0x8a) = 0;
  plVar13[0x8b] = 0;
  plVar13[0x85] = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_04bb4bd0;
  plVar13[0x8c] = (long)&DAT_3f8000003f800000;
  uVar6 = *(undefined4 *)(puVar1 + 8);
  lVar20 = *(long *)puVar1;
  *(undefined4 *)((long)plVar13 + 0x474) = 0x3f800000;
  *(undefined8 *)((long)plVar13 + 0x484) = 0x3f800000;
  *(undefined4 *)((long)plVar13 + 0x48c) = 0;
  *(undefined4 *)(plVar13 + 0x8e) = uVar6;
  plVar13[0x8d] = lVar20;
  *(undefined4 *)(plVar13 + 0x90) = uVar6;
  plVar13[0x8f] = lVar20;
  FUN_03916960(plVar13 + 0x92);
  *(undefined4 *)(plVar13 + 0x1b0) = 0;
  memset(plVar13 + 0x1b1,0,0x170);
  *(long **)(param_1 + 0x418) = plVar13;
  FUN_03a8e670(plVar13,&local_4c8,&local_4a8,param_3);
  lVar20 = 0;
  if (*(long *)(param_1 + 0x418) != 0) {
    lVar20 = *(long *)(param_1 + 0x418) + 0x490;
  }
  if (param_4 != 0) {
    local_480 = puVar9 + 0x10;
    local_6d = 0;
    local_470 = 0x400;
    local_478 = &local_46c;
    local_46c = local_46c & 0xffffff00;
    FUN_038d1270(&local_480,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",&DAT_0407e6e3);
  }
  lVar18 = *(long *)(param_1 + 8);
  if (*(char *)(lVar18 + 0x1ca0) != '\0') {
    *(uint *)(lVar20 + 0x450) = *(uint *)(lVar20 + 0x450) | 0x40000000;
    lVar18 = *(long *)(param_1 + 8);
  }
  *(undefined4 *)(lVar20 + 0x428) = *(undefined4 *)(lVar18 + 0x1c20);
  *(undefined4 *)(lVar20 + 0x42c) = *(undefined4 *)(*(long *)(param_1 + 8) + 0x1c40);
  lVar20 = *(long *)(param_1 + 8);
LAB_03a7e020:
  if (*(char *)(lVar20 + 0xa90) != '\0') {
    lVar20 = *(long *)puVar2;
    if (lVar20 == 0) {
      pvVar14 = malloc(0x5c8);
    }
    else {
      plVar13 = param_3;
      if (param_3 == (long *)0x0) {
        lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar13 = (long *)(lVar20 + 8);
        if (lVar18 != 0) {
          plVar13 = (long *)(lVar18 + 0xa8);
        }
        plVar13 = (long *)*plVar13;
      }
      pvVar14 = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,0x5c8,8);
    }
    FUN_03a8c950();
    *(void **)(param_1 + 0x420) = pvVar14;
    FUN_03a8d000(pvVar14,*param_2,param_3);
    lVar20 = *(long *)(param_1 + 8);
  }
  if (*(char *)(lVar20 + 0x9d0) != '\0') {
    lVar20 = *(long *)puVar2;
    if (lVar20 == 0) {
      pvVar14 = malloc(0x2d8);
    }
    else {
      plVar13 = param_3;
      if (param_3 == (long *)0x0) {
        lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar13 = (long *)(lVar20 + 8);
        if (lVar18 != 0) {
          plVar13 = (long *)(lVar18 + 0xa8);
        }
        plVar13 = (long *)*plVar13;
      }
      pvVar14 = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,0x2d8,8);
    }
    FUN_039c6170();
    *(void **)(param_1 + 0x430) = pvVar14;
    local_480 = (undefined *)CONCAT44(local_480._4_4_,*param_2);
    FUN_039c7874(pvVar14,&local_480,param_3,param_4);
    *(undefined1 *)(*(long *)(param_1 + 0x430) + 0x218) = 1;
  }
  if (param_4 != 0) {
    local_480 = puVar9 + 0x10;
    local_6d = 0;
    local_470 = 0x400;
    local_478 = &local_46c;
    local_46c = local_46c & 0xffffff00;
    FUN_038d1270(&local_480,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",&DAT_040a34f6);
  }
  return;
}


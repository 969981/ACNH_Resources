
void FUN_02dd5630(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  undefined *puVar9;
  byte bVar10;
  long lVar11;
  long *plVar12;
  void *pvVar13;
  ulong *puVar14;
  ulong *puVar15;
  undefined1 uVar16;
  long lVar17;
  ulong __size;
  void *pvVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar1 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar8 = PTR_DAT_04bd4738;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x35] = (long)(puVar8 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  if (param_3 != 0) {
    bVar10 = *(byte *)(param_3 + 0xe);
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar10;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  param_1[0x44] = 0;
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_LAB_04acada8;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  puVar1 = PTR_DAT_04bc9ca8 + 0x10;
  param_1[0x48] = (long)puVar1;
  param_1[0x4d] = (long)puVar1;
  puVar1 = PTR_DAT_04bc9be0 + 0x10;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x51] = (long)puVar1;
  memset(param_1 + 0x52,0,0x1bf30);
  puVar8 = PTR_DAT_04bb2bc0;
  lVar20 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar12 = param_1;
  do {
    FUN_03463544(plVar12 + 0x52,0);
    *(undefined4 *)(plVar12 + 0x7d) = 0x40;
    lVar20 = lVar20 + -1;
    plVar12[0x7c] = (long)plVar12 + 0x3ec;
    *(undefined1 *)((long)plVar12 + 0x42b) = 0;
    *(undefined1 *)((long)plVar12 + 0x3ec) = 0;
    plVar12[0x7b] = (long)puVar1;
    *(undefined4 *)(plVar12 + 0x86) = 0;
    plVar12 = plVar12 + 0x35;
  } while (lVar20 != 0);
  *(undefined4 *)(param_1 + 0x383a) = 0;
  puVar1 = PTR_DAT_04bc8e10;
  *(undefined4 *)(param_1 + 0x383b) = 0;
  *(undefined4 *)(param_1 + 0x383c) = 0;
  param_1[0x3838] = (long)(puVar1 + 0x10);
  param_1[0x3839] = -1;
  FUN_03135560(param_1 + 0x3849);
  param_1[0x386f] = 0;
  *(undefined1 *)(param_1 + 0x3871) = 1;
  param_1[0x386c] = 0;
  param_1[0x386d] = 0;
  *(undefined4 *)(param_1 + 0x386e) = 0;
  *(undefined4 *)((long)param_1 + 0x1c38c) = 0;
  *(undefined2 *)(param_1 + 0x3872) = 0x100;
  puVar1 = PTR_DAT_04bc5170 + 0x10;
  *(undefined4 *)((long)param_1 + 0x1c394) = 0;
  *(undefined1 *)(param_1 + 0x3874) = 1;
  *(undefined4 *)((long)param_1 + 0x1c3a4) = 0;
  *(undefined2 *)(param_1 + 0x3875) = 0x100;
  *(undefined4 *)((long)param_1 + 0x1c3ac) = 0;
  param_1[0x3870] = (long)puVar1;
  param_1[0x3873] = (long)puVar1;
  puVar1 = PTR_DAT_04bc4830 + 0x10;
  param_1[0x3876] = 0;
  param_1[0x3877] = (long)puVar1;
  param_1[0x3879] = 0;
  param_1[0x387a] = 0;
  param_1[0x387b] = 0;
  param_1[0x387c] = 0;
  puVar1 = PTR_DAT_04bc4880 + 0x10;
  param_1[0x387d] = 0;
  param_1[0x387e] = 0;
  param_1[0x3878] = (long)puVar1;
  puVar1 = PTR_DAT_04bc4828;
  param_1[0x387f] = 0;
  param_1[0x3880] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0x3882] = 0;
  param_1[0x3883] = 0;
  *(undefined4 *)(param_1 + 0x389c) = 0;
  param_1[0x3884] = 0;
  param_1[0x3885] = 0;
  *(undefined4 *)(param_1 + 0x38a8) = 1;
  *(undefined1 *)((long)param_1 + 0x1c546) = 1;
  param_1[0x389d] = 0;
  *(undefined4 *)(param_1 + 0x389e) = 0;
  param_1[0x389f] = 0;
  *(undefined4 *)(param_1 + 0x38a0) = 0;
  param_1[0x38a1] = 0;
  *(undefined4 *)(param_1 + 0x38a2) = 0;
  param_1[0x38a3] = 0;
  *(undefined4 *)(param_1 + 0x38a4) = 0;
  param_1[0x38a5] = 0;
  *(undefined4 *)(param_1 + 0x38a6) = 0;
  param_1[0x38a7] = 0;
  *(undefined2 *)((long)param_1 + 0x1c544) = 0;
  *(undefined4 *)((long)param_1 + 0x1c1f4) = 0xffffffff;
  param_1[0x3881] = (long)puVar1;
  param_1[0x388a] = (long)puVar1;
  param_1[0x3893] = (long)puVar1;
  param_1[0x3886] = 0;
  param_1[0x3887] = 0;
  param_1[0x3888] = 0;
  param_1[0x3889] = 0;
  param_1[0x388b] = 0;
  param_1[0x388c] = 0;
  param_1[0x388d] = 0;
  param_1[0x388e] = 0;
  param_1[0x388f] = 0;
  param_1[0x3890] = 0;
  param_1[0x3891] = 0;
  param_1[0x3892] = 0;
  param_1[0x389a] = 0;
  param_1[0x389b] = 0;
  param_1[0x3898] = 0;
  param_1[0x3899] = 0;
  param_1[0x3896] = 0;
  param_1[0x3897] = 0;
  param_1[0x3894] = 0;
  param_1[0x3895] = 0;
  *(undefined8 *)((long)param_1 + 0x1c1e4) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x1c1ec) = 0xffffffffffffffff;
  param_1[0x3847] = 0;
  param_1[0x3848] = 0;
  param_1[0x3845] = 0;
  param_1[0x3846] = 0;
  param_1[0x3843] = 0;
  param_1[0x3844] = 0;
  puVar1 = PTR_DAT_04bb2698;
  param_1[0x3841] = 0;
  param_1[0x3842] = 0;
  puVar9 = PTR_DAT_04bb3350;
  lVar20 = *(long *)puVar1;
  param_1[0x383f] = 0;
  param_1[0x3840] = 0;
  if (lVar20 == 0) {
    pvVar13 = malloc(0x400);
joined_r0x02dd5aec:
    if (pvVar13 != (void *)0x0) {
      param_1[0x38a1] = (long)pvVar13;
      *(undefined4 *)(param_1 + 0x38a0) = 0x200;
    }
  }
  else {
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar9 + 0x68));
    plVar12 = (long *)(lVar20 + 8);
    if (lVar11 != 0) {
      plVar12 = (long *)(lVar11 + 0xa8);
    }
    plVar12 = (long *)*plVar12;
    if (plVar12 != (long *)0x0) {
      pvVar13 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,0x400,8);
      goto joined_r0x02dd5aec;
    }
  }
  lVar20 = *(long *)puVar1;
  if (lVar20 == 0) {
    pvVar13 = malloc(0x400);
joined_r0x02dd5afc:
    if (pvVar13 != (void *)0x0) {
      param_1[0x389f] = (long)pvVar13;
      *(undefined4 *)(param_1 + 0x389e) = 0x200;
    }
  }
  else {
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar9 + 0x68));
    plVar12 = (long *)(lVar20 + 8);
    if (lVar11 != 0) {
      plVar12 = (long *)(lVar11 + 0xa8);
    }
    plVar12 = (long *)*plVar12;
    if (plVar12 != (long *)0x0) {
      pvVar13 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,0x400,8);
      goto joined_r0x02dd5afc;
    }
  }
  lVar20 = *(long *)puVar1;
  if (lVar20 == 0) {
    pvVar13 = malloc(0x400);
joined_r0x02dd5b0c:
    if (pvVar13 != (void *)0x0) {
      param_1[0x38a3] = (long)pvVar13;
      *(undefined4 *)(param_1 + 0x38a2) = 0x200;
    }
  }
  else {
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar9 + 0x68));
    plVar12 = (long *)(lVar20 + 8);
    if (lVar11 != 0) {
      plVar12 = (long *)(lVar11 + 0xa8);
    }
    plVar12 = (long *)*plVar12;
    if (plVar12 != (long *)0x0) {
      pvVar13 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,0x400,8);
      goto joined_r0x02dd5b0c;
    }
  }
  lVar20 = *(long *)puVar1;
  if (lVar20 == 0) {
    pvVar13 = malloc(0x400);
joined_r0x02dd5b1c:
    if (pvVar13 != (void *)0x0) {
      param_1[0x389d] = (long)pvVar13;
      *(undefined4 *)(param_1 + 0x389c) = 0x200;
    }
  }
  else {
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar9 + 0x68));
    plVar12 = (long *)(lVar20 + 8);
    if (lVar11 != 0) {
      plVar12 = (long *)(lVar11 + 0xa8);
    }
    plVar12 = (long *)*plVar12;
    if (plVar12 != (long *)0x0) {
      pvVar13 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,0x400,8);
      goto joined_r0x02dd5b1c;
    }
  }
  lVar20 = *(long *)puVar1;
  if (lVar20 == 0) {
    pvVar13 = malloc(0x1800);
joined_r0x02dd5b30:
    if (pvVar13 != (void *)0x0) {
      memset(pvVar13,0,0x1800);
      param_1[0x38a5] = (long)pvVar13;
      *(undefined4 *)(param_1 + 0x38a4) = 0x200;
    }
  }
  else {
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar9 + 0x68));
    plVar12 = (long *)(lVar20 + 8);
    if (lVar11 != 0) {
      plVar12 = (long *)(lVar11 + 0xa8);
    }
    plVar12 = (long *)*plVar12;
    if (plVar12 != (long *)0x0) {
      pvVar13 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,0x1800,8);
      goto joined_r0x02dd5b30;
    }
  }
  if (*(long *)PTR_DAT_04bb2230 == 0) {
    lVar20 = 0;
    if (cRam0000000000000da8 == '\0') goto LAB_02dd5b44;
LAB_02dd5acc:
    bVar10 = (**(code **)(*(long *)(lVar20 + 0xda0) + 0x18))(lVar20 + 0xda0);
    *(undefined1 *)(lVar20 + 0xda8) = 0;
  }
  else {
    lVar20 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
    if (*(char *)(lVar20 + 0xda8) != '\0') goto LAB_02dd5acc;
LAB_02dd5b44:
    bVar10 = 1;
  }
  *(byte *)(lVar20 + 0xda9) = bVar10 & 1;
  uVar22 = 5;
  if (*(uint *)(lVar20 + 0xdb4) != 0) {
    uVar22 = *(uint *)(lVar20 + 0xdb4);
  }
  if (uVar22 < 9) {
    uVar21 = (ulong)*(uint *)(&DAT_04180858 + (long)(int)uVar22 * 4);
    *(uint *)((long)param_1 + 0x1c534) = *(uint *)(&DAT_04180858 + (long)(int)uVar22 * 4);
  }
  else {
    uVar21 = (ulong)*(uint *)((long)param_1 + 0x1c534);
    if ((int)*(uint *)((long)param_1 + 0x1c534) < 1) goto LAB_02dd5c5c;
  }
  lVar20 = *(long *)puVar1;
  __size = uVar21 * 0x70 | 8;
  if (lVar20 == 0) {
    puVar14 = malloc(__size);
    puVar1 = PTR_DAT_04bc4ee8;
joined_r0x02dd5bec:
    PTR_DAT_04bc4ee8 = puVar1;
    if (puVar14 != (ulong *)0x0) {
      puVar15 = puVar14 + 1;
      *puVar14 = uVar21;
      puVar14 = puVar15;
      do {
        *puVar14 = (ulong)(puVar1 + 0x10);
        *(undefined4 *)(puVar14 + 1) = 0xffffffff;
        *(undefined1 *)((long)puVar14 + 0x24) = 0;
        *(undefined4 *)(puVar14 + 4) = 0x40;
        *(undefined1 *)((long)puVar14 + 99) = 0;
        *(undefined1 *)(puVar14 + 0xd) = 1;
        puVar14[2] = (ulong)(puVar8 + 0x10);
        puVar14[3] = (ulong)((long)puVar14 + 0x24);
        puVar14 = puVar14 + 0xe;
      } while (puVar14 != puVar15 + uVar21 * 0xe);
      *(int *)(param_1 + 0x386e) = (int)uVar21;
      param_1[0x386f] = (long)puVar15;
    }
  }
  else {
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar9 + 0x68));
    plVar12 = (long *)(lVar20 + 8);
    if (lVar11 != 0) {
      plVar12 = (long *)(lVar11 + 0xa8);
    }
    plVar12 = (long *)*plVar12;
    if (plVar12 != (long *)0x0) {
      puVar14 = (ulong *)(**(code **)(*plVar12 + 0x30))(plVar12,__size,8);
      puVar1 = PTR_DAT_04bc4ee8;
      goto joined_r0x02dd5bec;
    }
  }
  uVar21 = (ulong)*(uint *)((long)param_1 + 0x1c534);
LAB_02dd5c5c:
  if ((int)uVar21 != 0) {
    uVar22 = 0;
    do {
      uVar19 = (uint)uVar21;
      if (uVar19 < 5) {
        if (uVar22 != 0) {
          if (uVar22 == uVar19 - 1) {
            lVar11 = param_1[0x386f];
            uVar19 = uVar22;
            if (*(uint *)(param_1 + 0x386e) <= uVar22) {
              uVar19 = 0;
            }
            lVar20 = lVar11 + (long)(int)uVar19 * 0x70;
            *(undefined4 *)(lVar20 + 8) = DAT_0568def8;
            pvVar18 = *(void **)(lVar20 + 0x18);
            (**(code **)(DAT_0568df00 + 0x18))(&DAT_0568df00);
            pvVar13 = DAT_0568df08;
            if (pvVar18 != DAT_0568df08) {
              (**(code **)(DAT_0568df00 + 0x18))(&DAT_0568df00);
              lVar20 = 0;
              do {
                if (*(char *)((long)DAT_0568df08 + lVar20) == '\0') goto LAB_02dd6270;
                if (*(char *)((long)DAT_0568df08 + lVar20 + 1) == '\0') {
                  lVar20 = lVar20 + 1;
                  goto LAB_02dd6270;
                }
                if (*(char *)((long)DAT_0568df08 + lVar20 + 2) == '\0') {
                  lVar20 = lVar20 + 2;
                  goto LAB_02dd6270;
                }
                lVar20 = lVar20 + 3;
              } while (lVar20 != 0x80001);
              lVar20 = 0;
LAB_02dd6270:
              iVar7 = *(int *)(lVar11 + (long)(int)uVar19 * 0x70 + 0x20);
              iVar6 = (int)lVar20;
              if (iVar7 <= (int)lVar20) {
                iVar6 = iVar7 + -1;
              }
              memcpy(pvVar18,pvVar13,(long)iVar6);
              *(undefined1 *)((long)pvVar18 + (long)iVar6) = 0;
            }
            lVar11 = lVar11 + (long)(int)uVar19 * 0x70;
            uVar16 = DAT_0568df58;
          }
          else {
            lVar11 = param_1[0x386f];
            uVar5 = uVar22;
            if (*(uint *)(param_1 + 0x386e) <= uVar22) {
              uVar5 = 0;
            }
            lVar20 = lVar11 + (long)(int)uVar5 * 0x70;
            puVar2 = (undefined4 *)(lVar20 + 8);
            puVar3 = (undefined8 *)(lVar20 + 0x18);
            if (uVar22 == uVar19 - 2) {
              pvVar18 = (void *)*puVar3;
              *puVar2 = DAT_0568de18;
              (**(code **)(DAT_0568de20 + 0x18))(&DAT_0568de20);
              pvVar13 = DAT_0568de28;
              if (pvVar18 != DAT_0568de28) {
                (**(code **)(DAT_0568de20 + 0x18))(&DAT_0568de20);
                lVar20 = 0;
                do {
                  if (*(char *)((long)DAT_0568de28 + lVar20) == '\0') goto LAB_02dd5c80;
                  if (*(char *)((long)DAT_0568de28 + lVar20 + 1) == '\0') {
                    lVar20 = lVar20 + 1;
                    goto LAB_02dd5c80;
                  }
                  if (*(char *)((long)DAT_0568de28 + lVar20 + 2) == '\0') {
                    lVar20 = lVar20 + 2;
                    goto LAB_02dd5c80;
                  }
                  lVar20 = lVar20 + 3;
                } while (lVar20 != 0x80001);
                lVar20 = 0;
LAB_02dd5c80:
                iVar7 = *(int *)(lVar11 + (long)(int)uVar5 * 0x70 + 0x20);
                iVar6 = (int)lVar20;
                if (iVar7 <= (int)lVar20) {
                  iVar6 = iVar7 + -1;
                }
                memcpy(pvVar18,pvVar13,(long)iVar6);
                *(undefined1 *)((long)pvVar18 + (long)iVar6) = 0;
              }
              uVar16 = DAT_0568de78;
            }
            else {
              pvVar18 = (void *)*puVar3;
              *puVar2 = DAT_0568de88;
              (**(code **)(DAT_0568de90 + 0x18))(&DAT_0568de90);
              pvVar13 = DAT_0568de98;
              if (pvVar18 != DAT_0568de98) {
                (**(code **)(DAT_0568de90 + 0x18))(&DAT_0568de90);
                lVar20 = 0;
                do {
                  if (*(char *)((long)DAT_0568de98 + lVar20) == '\0') goto LAB_02dd62c4;
                  if (*(char *)((long)DAT_0568de98 + lVar20 + 1) == '\0') {
                    lVar20 = lVar20 + 1;
                    goto LAB_02dd62c4;
                  }
                  if (*(char *)((long)DAT_0568de98 + lVar20 + 2) == '\0') {
                    lVar20 = lVar20 + 2;
                    goto LAB_02dd62c4;
                  }
                  lVar20 = lVar20 + 3;
                } while (lVar20 != 0x80001);
                lVar20 = 0;
LAB_02dd62c4:
                iVar7 = *(int *)(lVar11 + (long)(int)uVar5 * 0x70 + 0x20);
                iVar6 = (int)lVar20;
                if (iVar7 <= (int)lVar20) {
                  iVar6 = iVar7 + -1;
                }
                memcpy(pvVar18,pvVar13,(long)iVar6);
                *(undefined1 *)((long)pvVar18 + (long)iVar6) = 0;
              }
              uVar16 = DAT_0568dee8;
            }
            lVar11 = lVar11 + (long)(int)uVar5 * 0x70;
          }
          goto LAB_02dd5cc0;
        }
        lVar20 = param_1[0x386f];
        *(undefined4 *)(lVar20 + 8) = DAT_0568dda8;
        pvVar18 = *(void **)(lVar20 + 0x18);
        (**(code **)(DAT_0568ddb0 + 0x18))(&DAT_0568ddb0);
        pvVar13 = DAT_0568ddb8;
        if (pvVar18 != DAT_0568ddb8) {
          (**(code **)(DAT_0568ddb0 + 0x18))(&DAT_0568ddb0);
          lVar11 = 0;
          do {
            if (*(char *)((long)DAT_0568ddb8 + lVar11) == '\0') goto LAB_02dd612c;
            if (*(char *)((long)DAT_0568ddb8 + lVar11 + 1) == '\0') {
              lVar11 = lVar11 + 1;
              goto LAB_02dd612c;
            }
            if (*(char *)((long)DAT_0568ddb8 + lVar11 + 2) == '\0') {
              lVar11 = lVar11 + 2;
              goto LAB_02dd612c;
            }
            lVar11 = lVar11 + 3;
          } while (lVar11 != 0x80001);
          lVar11 = 0;
LAB_02dd612c:
          iVar6 = (int)lVar11;
          if (*(int *)(lVar20 + 0x20) <= (int)lVar11) {
            iVar6 = *(int *)(lVar20 + 0x20) + -1;
          }
          memcpy(pvVar18,pvVar13,(long)iVar6);
          *(undefined1 *)((long)pvVar18 + (long)iVar6) = 0;
        }
        *(undefined1 *)(lVar20 + 0x68) = DAT_0568de08;
      }
      else {
        if (uVar22 == 3) {
          lVar11 = param_1[0x386f];
          lVar20 = 3;
          if (*(uint *)(param_1 + 0x386e) < 4) {
            lVar20 = 0;
          }
          lVar17 = lVar11 + lVar20 * 0x70;
          *(undefined4 *)(lVar17 + 8) = DAT_0568de18;
          pvVar18 = *(void **)(lVar17 + 0x18);
          (**(code **)(DAT_0568de20 + 0x18))(&DAT_0568de20);
          pvVar13 = DAT_0568de28;
          if (pvVar18 != DAT_0568de28) {
            (**(code **)(DAT_0568de20 + 0x18))(&DAT_0568de20);
            lVar17 = 0;
            do {
              if (*(char *)((long)DAT_0568de28 + lVar17) == '\0') goto LAB_02dd61d0;
              if (*(char *)((long)DAT_0568de28 + lVar17 + 1) == '\0') {
                lVar17 = lVar17 + 1;
                goto LAB_02dd61d0;
              }
              if (*(char *)((long)DAT_0568de28 + lVar17 + 2) == '\0') {
                lVar17 = lVar17 + 2;
                goto LAB_02dd61d0;
              }
              lVar17 = lVar17 + 3;
            } while (lVar17 != 0x80001);
            lVar17 = 0;
LAB_02dd61d0:
            iVar7 = *(int *)(lVar11 + lVar20 * 0x70 + 0x20);
            iVar6 = (int)lVar17;
            if (iVar7 <= (int)lVar17) {
              iVar6 = iVar7 + -1;
            }
            memcpy(pvVar18,pvVar13,(long)iVar6);
            *(undefined1 *)((long)pvVar18 + (long)iVar6) = 0;
          }
          lVar11 = lVar11 + lVar20 * 0x70;
          uVar16 = DAT_0568de78;
        }
        else if (uVar22 == 2) {
          lVar11 = param_1[0x386f];
          uVar21 = (ulong)(2 < *(uint *)(param_1 + 0x386e));
          lVar20 = lVar11 + uVar21 * 0xe0;
          pvVar18 = *(void **)(lVar20 + 0x18);
          *(undefined4 *)(lVar20 + 8) = DAT_0568de88;
          (**(code **)(DAT_0568de90 + 0x18))(&DAT_0568de90);
          pvVar13 = DAT_0568de98;
          if (pvVar18 != DAT_0568de98) {
            (**(code **)(DAT_0568de90 + 0x18))(&DAT_0568de90);
            lVar20 = 0;
            do {
              if (*(char *)((long)DAT_0568de98 + lVar20) == '\0') goto LAB_02dd618c;
              if (*(char *)((long)DAT_0568de98 + lVar20 + 1) == '\0') {
                lVar20 = lVar20 + 1;
                goto LAB_02dd618c;
              }
              if (*(char *)((long)DAT_0568de98 + lVar20 + 2) == '\0') {
                lVar20 = lVar20 + 2;
                goto LAB_02dd618c;
              }
              lVar20 = lVar20 + 3;
            } while (lVar20 != 0x80001);
            lVar20 = 0;
LAB_02dd618c:
            iVar7 = *(int *)(lVar11 + uVar21 * 0xe0 + 0x20);
            iVar6 = (int)lVar20;
            if (iVar7 <= (int)lVar20) {
              iVar6 = iVar7 + -1;
            }
            memcpy(pvVar18,pvVar13,(long)iVar6);
            *(undefined1 *)((long)pvVar18 + (long)iVar6) = 0;
          }
          lVar11 = lVar11 + uVar21 * 0xe0;
          uVar16 = DAT_0568dee8;
        }
        else {
          uVar19 = uVar22;
          if (4 < uVar22) {
            uVar19 = 0;
          }
          lVar11 = param_1[0x386f];
          lVar20 = (long)(int)uVar19;
          uVar5 = uVar22;
          if (*(uint *)(param_1 + 0x386e) <= uVar22) {
            uVar5 = 0;
          }
          lVar17 = lVar11 + (long)(int)uVar5 * 0x70;
          *(undefined4 *)(lVar17 + 8) = (&DAT_0568dd38)[lVar20 * 0x1c];
          pvVar13 = *(void **)(lVar17 + 0x18);
          plVar12 = &DAT_0568dd40 + lVar20 * 0xe;
          (**(code **)(*plVar12 + 0x18))(plVar12);
          pvVar18 = (void *)(&DAT_0568dd48)[lVar20 * 0xe];
          if (pvVar13 != pvVar18) {
            (**(code **)(*plVar12 + 0x18))(plVar12);
            lVar17 = (&DAT_0568dd48)[lVar20 * 0xe];
            lVar20 = 0;
            do {
              if (*(char *)(lVar17 + lVar20) == '\0') goto LAB_02dd6214;
              lVar4 = lVar17 + lVar20;
              if (*(char *)(lVar4 + 1) == '\0') {
                lVar20 = lVar20 + 1;
                goto LAB_02dd6214;
              }
              if (*(char *)(lVar4 + 2) == '\0') {
                lVar20 = lVar20 + 2;
                goto LAB_02dd6214;
              }
              lVar20 = lVar20 + 3;
            } while (lVar20 != 0x80001);
            lVar20 = 0;
LAB_02dd6214:
            iVar7 = *(int *)(lVar11 + (long)(int)uVar5 * 0x70 + 0x20);
            iVar6 = (int)lVar20;
            if (iVar7 <= (int)lVar20) {
              iVar6 = iVar7 + -1;
            }
            memcpy(pvVar13,pvVar18,(long)iVar6);
            *(undefined1 *)((long)pvVar13 + (long)iVar6) = 0;
          }
          lVar11 = lVar11 + (long)(int)uVar5 * 0x70;
          uVar16 = (&DAT_0568dd98)[(long)(int)uVar19 * 0x70];
        }
LAB_02dd5cc0:
        *(undefined1 *)(lVar11 + 0x68) = uVar16;
      }
      uVar21 = (ulong)*(uint *)((long)param_1 + 0x1c534);
      uVar22 = uVar22 + 1;
    } while (uVar22 < *(uint *)((long)param_1 + 0x1c534));
  }
  return;
}


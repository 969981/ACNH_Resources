
void FUN_008ca5c0(long param_1)

{
  uint *puVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  byte bVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 *puVar14;
  int iVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  long lVar19;
  void *pvVar20;
  void *pvVar21;
  long lVar22;
  
  puVar1 = (uint *)(param_1 + 0x31080);
  uVar2 = *puVar1;
  if ((int)uVar2 < 1) {
    return;
  }
  uVar12 = (ulong)(uVar2 - 1);
  lVar22 = *(long *)(*(long *)(param_1 + 0x31088) + uVar12 * 8);
  uVar7 = (uint)*(ushort *)(lVar22 + 0x130) - (*(ushort *)(lVar22 + 0x130) >> 1 & 0x55555555);
  uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
  uVar7 = uVar7 + (uVar7 >> 4) & 0xf0f0f0f;
  uVar7 = uVar7 + (uVar7 >> 8);
  if ((uVar7 + (uVar7 >> 0x10) & 0x3f) == 0) goto LAB_008cadf8;
  iVar15 = *(int *)(lVar22 + 8);
  plVar5 = (long *)(param_1 + 0x309c0);
  if ((iVar15 != 0) && (*(int *)(param_1 + 0x309d0) < *(int *)(param_1 + 0x309e8))) {
    piVar13 = *(int **)(param_1 + 0x309d8);
    if (piVar13 != (int *)0x0) {
      *(undefined8 *)(param_1 + 0x309d8) = *(undefined8 *)piVar13;
      iVar15 = *(int *)(lVar22 + 8);
    }
    *piVar13 = iVar15;
    piVar13[2] = 0;
    piVar13[3] = 0;
    plVar16 = (long *)(piVar13 + 4);
    *plVar16 = 0;
    piVar13[6] = 0;
    piVar13[7] = 0;
    lVar19 = *plVar5;
    *plVar5 = (long)plVar16;
    *(long **)(piVar13 + 6) = plVar5;
    *plVar16 = lVar19;
    if (lVar19 != 0) {
      *(long **)(lVar19 + 8) = plVar16;
    }
    *(int *)(param_1 + 0x309d0) = *(int *)(param_1 + 0x309d0) + 1;
  }
  iVar15 = *(int *)(lVar22 + 0xc);
  if ((iVar15 != 0) && (*(int *)(param_1 + 0x309d0) < *(int *)(param_1 + 0x309e8))) {
    piVar13 = *(int **)(param_1 + 0x309d8);
    if (piVar13 != (int *)0x0) {
      *(undefined8 *)(param_1 + 0x309d8) = *(undefined8 *)piVar13;
      iVar15 = *(int *)(lVar22 + 0xc);
    }
    *piVar13 = iVar15;
    piVar13[2] = 0;
    piVar13[3] = 0;
    plVar16 = (long *)(piVar13 + 4);
    *plVar16 = 0;
    piVar13[6] = 0;
    piVar13[7] = 0;
    lVar19 = *plVar5;
    *plVar5 = (long)plVar16;
    *(long **)(piVar13 + 6) = plVar5;
    *plVar16 = lVar19;
    if (lVar19 != 0) {
      *(long **)(lVar19 + 8) = plVar16;
    }
    *(int *)(param_1 + 0x309d0) = *(int *)(param_1 + 0x309d0) + 1;
  }
  iVar15 = *(int *)(lVar22 + 0x10);
  if ((iVar15 != 0) && (*(int *)(param_1 + 0x309d0) < *(int *)(param_1 + 0x309e8))) {
    piVar13 = *(int **)(param_1 + 0x309d8);
    if (piVar13 != (int *)0x0) {
      *(undefined8 *)(param_1 + 0x309d8) = *(undefined8 *)piVar13;
      iVar15 = *(int *)(lVar22 + 0x10);
    }
    *piVar13 = iVar15;
    piVar13[2] = 0;
    piVar13[3] = 0;
    plVar16 = (long *)(piVar13 + 4);
    *plVar16 = 0;
    piVar13[6] = 0;
    piVar13[7] = 0;
    lVar19 = *plVar5;
    *plVar5 = (long)plVar16;
    *(long **)(piVar13 + 6) = plVar5;
    *plVar16 = lVar19;
    if (lVar19 != 0) {
      *(long **)(lVar19 + 8) = plVar16;
    }
    *(int *)(param_1 + 0x309d0) = *(int *)(param_1 + 0x309d0) + 1;
  }
  iVar15 = *(int *)(lVar22 + 0x14);
  if ((iVar15 != 0) && (*(int *)(param_1 + 0x309d0) < *(int *)(param_1 + 0x309e8))) {
    piVar13 = *(int **)(param_1 + 0x309d8);
    if (piVar13 != (int *)0x0) {
      *(undefined8 *)(param_1 + 0x309d8) = *(undefined8 *)piVar13;
      iVar15 = *(int *)(lVar22 + 0x14);
    }
    *piVar13 = iVar15;
    piVar13[2] = 0;
    piVar13[3] = 0;
    plVar16 = (long *)(piVar13 + 4);
    *plVar16 = 0;
    piVar13[6] = 0;
    piVar13[7] = 0;
    lVar19 = *plVar5;
    *plVar5 = (long)plVar16;
    *(long **)(piVar13 + 6) = plVar5;
    *plVar16 = lVar19;
    if (lVar19 != 0) {
      *(long **)(lVar19 + 8) = plVar16;
    }
    *(int *)(param_1 + 0x309d0) = *(int *)(param_1 + 0x309d0) + 1;
  }
  iVar15 = *(int *)(lVar22 + 0x18);
  if ((iVar15 != 0) && (*(int *)(param_1 + 0x309d0) < *(int *)(param_1 + 0x309e8))) {
    piVar13 = *(int **)(param_1 + 0x309d8);
    if (piVar13 != (int *)0x0) {
      *(undefined8 *)(param_1 + 0x309d8) = *(undefined8 *)piVar13;
      iVar15 = *(int *)(lVar22 + 0x18);
    }
    *piVar13 = iVar15;
    piVar13[2] = 0;
    piVar13[3] = 0;
    plVar16 = (long *)(piVar13 + 4);
    *plVar16 = 0;
    piVar13[6] = 0;
    piVar13[7] = 0;
    lVar19 = *plVar5;
    *plVar5 = (long)plVar16;
    *(long **)(piVar13 + 6) = plVar5;
    *plVar16 = lVar19;
    if (lVar19 != 0) {
      *(long **)(lVar19 + 8) = plVar16;
    }
    *(int *)(param_1 + 0x309d0) = *(int *)(param_1 + 0x309d0) + 1;
  }
  iVar15 = *(int *)(lVar22 + 0x1c);
  if ((iVar15 != 0) && (*(int *)(param_1 + 0x309d0) < *(int *)(param_1 + 0x309e8))) {
    piVar13 = *(int **)(param_1 + 0x309d8);
    if (piVar13 != (int *)0x0) {
      *(undefined8 *)(param_1 + 0x309d8) = *(undefined8 *)piVar13;
      iVar15 = *(int *)(lVar22 + 0x1c);
    }
    *piVar13 = iVar15;
    piVar13[2] = 0;
    piVar13[3] = 0;
    plVar16 = (long *)(piVar13 + 4);
    *plVar16 = 0;
    piVar13[6] = 0;
    piVar13[7] = 0;
    lVar19 = *plVar5;
    *plVar5 = (long)plVar16;
    *(long **)(piVar13 + 6) = plVar5;
    *plVar16 = lVar19;
    if (lVar19 != 0) {
      *(long **)(lVar19 + 8) = plVar16;
    }
    *(int *)(param_1 + 0x309d0) = *(int *)(param_1 + 0x309d0) + 1;
  }
  iVar15 = *(int *)(lVar22 + 0x20);
  if ((iVar15 != 0) && (*(int *)(param_1 + 0x309d0) < *(int *)(param_1 + 0x309e8))) {
    piVar13 = *(int **)(param_1 + 0x309d8);
    if (piVar13 != (int *)0x0) {
      *(undefined8 *)(param_1 + 0x309d8) = *(undefined8 *)piVar13;
      iVar15 = *(int *)(lVar22 + 0x20);
    }
    *piVar13 = iVar15;
    piVar13[2] = 0;
    piVar13[3] = 0;
    plVar16 = (long *)(piVar13 + 4);
    *plVar16 = 0;
    piVar13[6] = 0;
    piVar13[7] = 0;
    lVar19 = *plVar5;
    *plVar5 = (long)plVar16;
    *(long **)(piVar13 + 6) = plVar5;
    *plVar16 = lVar19;
    if (lVar19 != 0) {
      *(long **)(lVar19 + 8) = plVar16;
    }
    *(int *)(param_1 + 0x309d0) = *(int *)(param_1 + 0x309d0) + 1;
  }
  iVar15 = *(int *)(lVar22 + 0x24);
  if ((iVar15 != 0) && (*(int *)(param_1 + 0x309d0) < *(int *)(param_1 + 0x309e8))) {
    piVar13 = *(int **)(param_1 + 0x309d8);
    if (piVar13 != (int *)0x0) {
      *(undefined8 *)(param_1 + 0x309d8) = *(undefined8 *)piVar13;
      iVar15 = *(int *)(lVar22 + 0x24);
    }
    *piVar13 = iVar15;
    piVar13[2] = 0;
    piVar13[3] = 0;
    plVar16 = (long *)(piVar13 + 4);
    *plVar16 = 0;
    piVar13[6] = 0;
    piVar13[7] = 0;
    lVar19 = *plVar5;
    *plVar5 = (long)plVar16;
    *(long **)(piVar13 + 6) = plVar5;
    *plVar16 = lVar19;
    if (lVar19 != 0) {
      *(long **)(lVar19 + 8) = plVar16;
    }
    *(int *)(param_1 + 0x309d0) = *(int *)(param_1 + 0x309d0) + 1;
  }
  lVar19 = DAT_05ae7600;
  uVar3 = *(ushort *)(lVar22 + 0x130);
  if ((uVar3 >> 1 & 1) != 0) {
    if (DAT_05ae7600 == 0) {
      plVar5 = malloc(0x40);
    }
    else {
      plVar5 = *(long **)(param_1 + 0x38020);
      if (plVar5 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar5 = (long *)(lVar19 + 8);
        if (lVar6 != 0) {
          plVar5 = (long *)(lVar6 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          plVar5 = (long *)0x0;
          goto LAB_008ca9f0;
        }
      }
      plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x40,8);
    }
LAB_008ca9f0:
    puVar4 = PTR_DAT_04bd0d40;
    plVar5[2] = 0;
    plVar5[3] = 0;
    *plVar5 = (long)(puVar4 + 0x10);
    plVar5[1] = 0;
    if (DAT_05ae7600 != 0) {
      lVar19 = FUN_038cb610(DAT_05ae7600,plVar5);
      plVar5[1] = lVar19;
      if (lVar19 != 0) {
        if ((*(uint *)(lVar19 + 0xd0) & 1) == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = lVar19 + 0x90;
          nn::os::LockMutex((MutexType *)(lVar19 + 0xb0));
        }
        plVar17 = (long *)(lVar19 + 0x70);
        lVar8 = *plVar17;
        plVar16 = (long *)((long)*(int *)(lVar19 + 0x84) + (long)plVar5);
        *plVar17 = (long)plVar16;
        *plVar16 = lVar8;
        plVar16[1] = (long)plVar17;
        if (lVar8 != 0) {
          *(long **)(lVar8 + 8) = plVar16;
        }
        *(int *)(lVar19 + 0x80) = *(int *)(lVar19 + 0x80) + 1;
        if (lVar6 != 0) {
          nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
        }
      }
    }
    plVar5[4] = 0;
    *(undefined2 *)(plVar5 + 5) = 1;
    *(undefined8 *)((long)plVar5 + 0x2c) = 0x100000002;
    *plVar5 = (long)&PTR_FUN_04926120;
    uVar9 = *(undefined8 *)(lVar22 + 0x28);
    *(undefined4 *)((long)plVar5 + 0x3c) = *(undefined4 *)(lVar22 + 0x30);
    *(undefined8 *)((long)plVar5 + 0x34) = uVar9;
    *(long **)(param_1 + 0x38030) = plVar5;
    uVar3 = *(ushort *)(lVar22 + 0x130);
  }
  if ((uVar3 >> 2 & 1) != 0) {
    bVar11 = *(byte *)(lVar22 + 0x34);
    if (7 < bVar11) {
      bVar11 = 0xff;
    }
    *(byte *)(param_1 + 0x309b8) = bVar11;
    uVar3 = *(ushort *)(lVar22 + 0x130);
  }
  uVar7 = (uint)uVar3;
  if ((uVar3 >> 3 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x37fb4) = *(undefined1 *)(lVar22 + 0x35);
    uVar7 = (uint)*(ushort *)(lVar22 + 0x130);
    if ((*(ushort *)(lVar22 + 0x130) >> 5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x307b4) = *(undefined4 *)(lVar22 + 0x3c);
      *(undefined4 *)(param_1 + 0x307b8) = *(undefined4 *)(lVar22 + 0x40);
      *(undefined4 *)(param_1 + 0x307bc) = *(undefined4 *)(lVar22 + 0x44);
      uVar7 = (uint)*(ushort *)(lVar22 + 0x130);
    }
  }
  if ((uVar7 >> 4 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x307b0) = *(undefined4 *)(lVar22 + 0x38);
    uVar7 = (uint)*(ushort *)(lVar22 + 0x130);
  }
  if ((uVar7 >> 6 & 1) != 0) {
    pvVar20 = *(void **)(param_1 + 0x306a0);
    (**(code **)(*(long *)(lVar22 + 0x48) + 0x18))(lVar22 + 0x48);
    pvVar21 = *(void **)(lVar22 + 0x50);
    if (pvVar20 != pvVar21) {
      (**(code **)(*(long *)(lVar22 + 0x48) + 0x18))(lVar22 + 0x48);
      lVar19 = 0;
      do {
        if (*(char *)(*(long *)(lVar22 + 0x50) + lVar19) == '\0') goto LAB_008caba0;
        lVar6 = *(long *)(lVar22 + 0x50) + lVar19;
        if (*(char *)(lVar6 + 1) == '\0') {
          lVar19 = lVar19 + 1;
          goto LAB_008caba0;
        }
        if (*(char *)(lVar6 + 2) == '\0') {
          lVar19 = lVar19 + 2;
          goto LAB_008caba0;
        }
        lVar19 = lVar19 + 3;
      } while (lVar19 != 0x80001);
      lVar19 = 0;
LAB_008caba0:
      iVar15 = (int)lVar19;
      if (*(int *)(param_1 + 0x306a8) <= (int)lVar19) {
        iVar15 = *(int *)(param_1 + 0x306a8) + -1;
      }
      memcpy(pvVar20,pvVar21,(long)iVar15);
      *(undefined1 *)((long)pvVar20 + (long)iVar15) = 0;
    }
  }
  if ((*(ushort *)(lVar22 + 0x130) >> 7 & 1) != 0) {
    pvVar20 = *(void **)(param_1 + 0x306d8);
    (**(code **)(*(long *)(lVar22 + 0x80) + 0x18))(lVar22 + 0x80);
    pvVar21 = *(void **)(lVar22 + 0x88);
    if (pvVar20 != pvVar21) {
      (**(code **)(*(long *)(lVar22 + 0x80) + 0x18))(lVar22 + 0x80);
      lVar19 = 0;
      do {
        if (*(char *)(*(long *)(lVar22 + 0x88) + lVar19) == '\0') goto LAB_008cac4c;
        lVar6 = *(long *)(lVar22 + 0x88) + lVar19;
        if (*(char *)(lVar6 + 1) == '\0') {
          lVar19 = lVar19 + 1;
          goto LAB_008cac4c;
        }
        if (*(char *)(lVar6 + 2) == '\0') {
          lVar19 = lVar19 + 2;
          goto LAB_008cac4c;
        }
        lVar19 = lVar19 + 3;
      } while (lVar19 != 0x80001);
      lVar19 = 0;
LAB_008cac4c:
      iVar15 = (int)lVar19;
      if (*(int *)(param_1 + 0x306e0) <= (int)lVar19) {
        iVar15 = *(int *)(param_1 + 0x306e0) + -1;
      }
      memcpy(pvVar20,pvVar21,(long)iVar15);
      *(undefined1 *)((long)pvVar20 + (long)iVar15) = 0;
    }
  }
  if ((*(ushort *)(lVar22 + 0x130) >> 8 & 1) != 0) {
    pvVar20 = *(void **)(param_1 + 0x30710);
    (**(code **)(*(long *)(lVar22 + 0xb8) + 0x18))(lVar22 + 0xb8);
    pvVar21 = *(void **)(lVar22 + 0xc0);
    if (pvVar20 != pvVar21) {
      (**(code **)(*(long *)(lVar22 + 0xb8) + 0x18))(lVar22 + 0xb8);
      lVar19 = 0;
      do {
        if (*(char *)(*(long *)(lVar22 + 0xc0) + lVar19) == '\0') goto LAB_008cacfc;
        lVar6 = *(long *)(lVar22 + 0xc0) + lVar19;
        if (*(char *)(lVar6 + 1) == '\0') {
          lVar19 = lVar19 + 1;
          goto LAB_008cacfc;
        }
        if (*(char *)(lVar6 + 2) == '\0') {
          lVar19 = lVar19 + 2;
          goto LAB_008cacfc;
        }
        lVar19 = lVar19 + 3;
      } while (lVar19 != 0x80001);
      lVar19 = 0;
LAB_008cacfc:
      iVar15 = (int)lVar19;
      if (*(int *)(param_1 + 0x30718) <= (int)lVar19) {
        iVar15 = *(int *)(param_1 + 0x30718) + -1;
      }
      memcpy(pvVar20,pvVar21,(long)iVar15);
      *(undefined1 *)((long)pvVar20 + (long)iVar15) = 0;
    }
  }
  if ((*(ushort *)(lVar22 + 0x130) >> 9 & 1) != 0) {
    pvVar20 = *(void **)(param_1 + 0x30748);
    (**(code **)(*(long *)(lVar22 + 0xf0) + 0x18))(lVar22 + 0xf0);
    pvVar21 = *(void **)(lVar22 + 0xf8);
    if (pvVar20 != pvVar21) {
      (**(code **)(*(long *)(lVar22 + 0xf0) + 0x18))(lVar22 + 0xf0);
      lVar19 = 0;
      do {
        if (*(char *)(*(long *)(lVar22 + 0xf8) + lVar19) == '\0') goto LAB_008cadac;
        lVar6 = *(long *)(lVar22 + 0xf8) + lVar19;
        if (*(char *)(lVar6 + 1) == '\0') {
          lVar19 = lVar19 + 1;
          goto LAB_008cadac;
        }
        if (*(char *)(lVar6 + 2) == '\0') {
          lVar19 = lVar19 + 2;
          goto LAB_008cadac;
        }
        lVar19 = lVar19 + 3;
      } while (lVar19 != 0x80001);
      lVar19 = 0;
LAB_008cadac:
      iVar15 = (int)lVar19;
      if (*(int *)(param_1 + 0x30750) <= (int)lVar19) {
        iVar15 = *(int *)(param_1 + 0x30750) + -1;
      }
      memcpy(pvVar20,pvVar21,(long)iVar15);
      *(undefined1 *)((long)pvVar20 + (long)iVar15) = 0;
    }
  }
  uVar3 = *(ushort *)(lVar22 + 0x130);
  if ((uVar3 >> 10 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x37fb8) = *(undefined1 *)(lVar22 + 0x128);
    uVar3 = *(ushort *)(lVar22 + 0x130);
  }
  if ((uVar3 >> 0xb & 1) != 0) {
    *(undefined4 *)(param_1 + 0x307e4) = *(undefined4 *)(lVar22 + 300);
  }
LAB_008cadf8:
  if (*(char *)(lVar22 + 4) != '\0') {
    *(undefined ***)(param_1 + 0x37f58) = &PTR_LAB_04925ae0;
  }
  uVar7 = *puVar1;
  if ((int)uVar2 <= (int)uVar7) {
    uVar10 = uVar12;
    puVar14 = *(undefined8 **)(param_1 + 0x31090);
    do {
      puVar18 = *(undefined8 **)(*(long *)(param_1 + 0x31088) + uVar10 * 8);
      uVar10 = uVar10 + 1;
      *puVar18 = puVar14;
      *(undefined8 **)(param_1 + 0x31090) = puVar18;
      puVar14 = puVar18;
    } while (uVar10 < uVar2);
    uVar7 = *puVar1;
  }
  if ((int)uVar2 <= (int)uVar7) {
    if ((int)uVar2 < (int)uVar7) {
      memmove((void *)(*(long *)(param_1 + 0x31088) + uVar12 * 8),
              (void *)(*(long *)(param_1 + 0x31088) + (long)(int)uVar2 * 8),
              -(ulong)(uVar7 - uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)(uVar7 - uVar2) << 3);
      uVar7 = *puVar1;
    }
    *puVar1 = uVar7 - 1;
  }
  return;
}


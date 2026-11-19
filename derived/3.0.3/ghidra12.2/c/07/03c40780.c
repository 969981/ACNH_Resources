
void FUN_03c40780(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  
  puVar9 = PTR_DAT_04bc3d70;
  puVar8 = PTR_DAT_04bc3d68;
  if (*(long *)(param_1[1] + 0x58) != 0) {
    plVar12 = *(long **)(*(long *)(param_1[1] + 0x58) + 0x20);
    if (((*PTR_DAT_04bc3d70 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04bc3d70), iVar10 != 0)) {
      *(undefined **)puVar8 = PTR_DAT_04bc3d50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc3d70);
    }
    if ((plVar12 != (long *)0x0) &&
       (uVar11 = (**(code **)(*plVar12 + 0x18))(plVar12,PTR_DAT_04bc3d68), (uVar11 & 1) != 0)) {
      puVar13 = (undefined8 *)plVar12[0x12];
      if (((*PTR_DAT_04bc3d18 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04bc3d18), iVar10 != 0)) {
        *(undefined **)PTR_DAT_04bc3d10 = PTR_DAT_04bc3d20 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc3d18);
      }
      if (puVar13 != (undefined8 *)0x0) {
        uVar11 = (**(code **)*puVar13)(puVar13,PTR_DAT_04bc3d10);
        if ((uVar11 & 1) == 0) {
          puVar13 = (undefined8 *)0x0;
        }
        goto LAB_03c4082c;
      }
    }
  }
  puVar13 = (undefined8 *)0x0;
LAB_03c4082c:
  (**(code **)(*param_1 + 0x30))(param_1,puVar13);
  puVar7 = PTR_DAT_04bc3d48;
  puVar6 = PTR_DAT_04bc3d40;
  puVar5 = PTR_DAT_04bc3d18;
  puVar4 = PTR_DAT_04bc3d10;
  lVar14 = *(long *)(param_1[1] + 0x60);
  if (lVar14 != 0) {
    puVar1 = PTR_DAT_04bc3d50 + 0x10;
    puVar2 = PTR_DAT_04bc3d20 + 0x10;
    do {
      plVar12 = *(long **)(lVar14 + 0x20);
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
        *(undefined **)puVar6 = puVar1;
        __cxa_guard_release(puVar7);
      }
      if (plVar12 == (long *)0x0) {
        plVar15 = (long *)0x0;
        bVar3 = *puVar9;
      }
      else {
        uVar11 = (**(code **)(*plVar12 + 0x18))(plVar12,puVar6);
        plVar15 = plVar12;
        if ((uVar11 & 1) == 0) {
          plVar15 = (long *)0x0;
        }
        bVar3 = *puVar9;
      }
      if (((bVar3 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar9), iVar10 != 0)) {
        *(undefined **)puVar8 = PTR_DAT_04bc3d50 + 0x10;
        __cxa_guard_release(puVar9);
      }
      if (plVar12 == (long *)0x0) {
        if (plVar15 != (long *)0x0) goto LAB_03c40944;
      }
      else {
        uVar11 = (**(code **)(*plVar12 + 0x18))(plVar12,puVar8);
        if ((uVar11 & 1) == 0) {
          plVar12 = (long *)0x0;
        }
        if (plVar15 == (long *)0x0) {
          if (plVar12 == (long *)0x0) goto LAB_03c40890;
          puVar13 = (undefined8 *)plVar12[0x12];
          if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
            *(undefined **)puVar4 = PTR_DAT_04bc3d20 + 0x10;
            __cxa_guard_release(puVar5);
          }
        }
        else {
LAB_03c40944:
          puVar13 = (undefined8 *)plVar15[0x12];
          if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
            *(undefined **)puVar4 = puVar2;
            __cxa_guard_release(puVar5);
          }
        }
        if ((puVar13 != (undefined8 *)0x0) &&
           (uVar11 = (**(code **)*puVar13)(puVar13,puVar4), (uVar11 & 1) != 0)) {
          FUN_03c40780(puVar13);
        }
      }
LAB_03c40890:
      lVar14 = *(long *)(lVar14 + 0x10);
    } while (lVar14 != 0);
  }
  return;
}


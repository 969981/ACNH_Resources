
long * FUN_03b192a0(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                   undefined8 param_5,undefined8 param_6,long param_7)

{
  char *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  uint *puVar11;
  undefined8 *puVar12;
  int iVar13;
  uint *puVar14;
  ulong uVar15;
  uint local_dc;
  long *local_b8;
  long *local_b0;
  undefined8 local_a8 [9];
  
  puVar11 = *(uint **)(param_7 + 0xc0);
  if ((puVar11 != (uint *)0x0) && (uVar15 = (ulong)(ushort)puVar11[2], uVar15 != 0)) {
    do {
      puVar14 = puVar11 + 3;
      pcVar1 = (char *)0x0;
      if (*puVar14 != 0) {
        pcVar1 = (char *)((long)puVar14 + (ulong)*puVar14);
      }
      iVar6 = strcmp("LocalizeReplaceTarget",pcVar1);
      if (iVar6 == 0) {
        uVar7 = FUN_038cefc4();
        if (uVar7 < 0x10) {
          puVar12 = *(undefined8 **)(PTR_DAT_04bb43e0 + (ulong)uVar7 * 8 + 0x60);
        }
        else {
          puVar12 = &DAT_0407ebb1;
        }
        uVar15 = (ulong)puVar11[4];
        uVar7 = (uint)*(byte *)((long)puVar14 + uVar15);
        if (*(byte *)((long)puVar14 + uVar15) == 0) {
          return (long *)0x0;
        }
        iVar6 = 0;
        iVar13 = 0;
        while( true ) {
          if (uVar7 == *(byte *)((long)puVar12 + (long)iVar6)) {
            iVar13 = iVar13 + 1;
            iVar6 = iVar6 + 1;
            uVar7 = (uint)*(byte *)((long)puVar14 + uVar15 + (long)iVar13);
          }
          else {
            iVar6 = 0;
          }
          if ((uVar7 < 0xe) && ((1 << (ulong)(uVar7 & 0x1f) & 0x2401U) != 0)) break;
          if (iVar6 == 0) {
            lVar9 = uVar15 + (long)iVar13;
            while ((0xd < uVar7 || ((1 << (ulong)(uVar7 & 0x1f) & 0x2401U) == 0))) {
              uVar7 = (uint)*(byte *)((long)puVar14 + lVar9 + 1);
              iVar13 = iVar13 + 1;
              lVar9 = lVar9 + 1;
            }
            while ((uVar7 == 0xd || (uVar7 == 10))) {
              iVar13 = iVar13 + 1;
              lVar3 = lVar9 + 1;
              lVar9 = lVar9 + 1;
              uVar7 = (uint)*(byte *)((long)puVar14 + lVar3);
            }
          }
          if (uVar7 == 0) {
            return (long *)0x0;
          }
        }
        puVar11 = *(uint **)(param_7 + 0xc0);
        if (puVar11 == (uint *)0x0) {
          puVar11 = (uint *)0x0;
LAB_03b1957c:
          plVar8 = *(long **)(param_7 + 0x98);
        }
        else {
          uVar15 = (ulong)(ushort)puVar11[2];
          if (uVar15 != 0) {
            do {
              puVar11 = puVar11 + 3;
              pcVar1 = (char *)0x0;
              if (*puVar11 != 0) {
                pcVar1 = (char *)((long)puVar11 + (ulong)*puVar11);
              }
              iVar6 = strcmp("LocalizeReplaceOn",pcVar1);
              if (iVar6 == 0) goto LAB_03b1957c;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          puVar11 = (uint *)0x0;
          plVar8 = *(long **)(param_7 + 0x98);
        }
        if ((plVar8 == (long *)0x0) ||
           (plVar8 = (long *)(**(code **)(*plVar8 + 0x60))
                                       (plVar8,(long)puVar11 + (ulong)puVar11[1],1),
           plVar8 == (long *)0x0)) {
          bVar5 = 0;
        }
        else {
          uVar15 = FUN_03b17110();
          if ((uVar15 & 1) == 0) {
            local_dc = FUN_03b17250(plVar8);
          }
          else {
            local_dc = 1;
          }
          bVar5 = (**(code **)(*plVar8 + 0x50))(plVar8);
          if (bVar5 != 0) {
            uVar15 = 0;
            puVar12 = local_a8;
            do {
              lVar9 = (**(code **)(*plVar8 + 0x58))(plVar8,uVar15 & 0xffffffff);
              bVar4 = 8 < uVar15;
              uVar15 = uVar15 + 1;
              puVar2 = puVar12;
              if (bVar4) {
                puVar2 = local_a8;
              }
              puVar12 = puVar12 + 1;
              *puVar2 = *(undefined8 *)(lVar9 + 0x28);
            } while (bVar5 != uVar15);
          }
          (**(code **)(*plVar8 + 0x18))(plVar8,param_3);
          FUN_0037d044(*(undefined8 *)(param_7 + 0x98),plVar8);
          (**(code **)(*plVar8 + 8))(plVar8);
          plVar10 = *(long **)PTR_DAT_04bd0810;
          if (((*PTR_DAT_04bd0b80 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04bd0b80), iVar6 != 0)) {
            *(undefined **)PTR_DAT_04bd0b78 = PTR_DAT_04bb44e0 + 0x10;
            __cxa_guard_release(PTR_DAT_04bd0b80);
          }
          if (plVar10 != (long *)0x0) {
            uVar15 = (**(code **)(*plVar10 + 0x10))(plVar10,PTR_DAT_04bd0b78);
            if ((uVar15 & 1) == 0) {
              plVar10 = (long *)0x0;
            }
            if ((local_dc & 1) == 0 && plVar10 != (long *)0x0) {
              local_b8 = (long *)plVar10[0x1b];
              if ((int)plVar10[0x11] == 1) {
                local_b8 = plVar8;
                local_b0 = (long *)plVar10[0x1c];
              }
              else {
                local_b0 = plVar8;
              }
              FUN_038c9d34(plVar10,&local_b8);
            }
          }
        }
        goto LAB_03b19330;
      }
      uVar15 = uVar15 - 1;
      puVar11 = puVar14;
    } while (uVar15 != 0);
  }
  bVar5 = 0;
  puVar11 = (uint *)0x0;
LAB_03b19330:
  plVar8 = (long *)(**(code **)(*param_1 + 0xe0))(param_1,param_2,param_4,param_5,param_6,param_7);
  if ((puVar11 != (uint *)0x0) &&
     (FUN_0037c2a0(plVar8,(long)puVar11 + (ulong)puVar11[1]), bVar5 != 0)) {
    uVar15 = 0;
    puVar12 = local_a8;
    do {
      lVar9 = (**(code **)(*plVar8 + 0x58))(plVar8,uVar15 & 0xffffffff);
      bVar4 = 8 < uVar15;
      uVar15 = uVar15 + 1;
      puVar2 = puVar12;
      if (bVar4) {
        puVar2 = local_a8;
      }
      puVar12 = puVar12 + 1;
      *(undefined8 *)(lVar9 + 0x28) = *puVar2;
    } while (bVar5 != uVar15);
  }
  (**(code **)(*param_1 + 0xe8))(param_1,plVar8,param_7);
  plVar10 = (long *)param_1[0x11];
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x58))(plVar10,plVar8,param_1,param_7);
  }
  return plVar8;
}


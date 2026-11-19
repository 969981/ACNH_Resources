
void FUN_039fdec0(undefined8 *param_1)

{
  undefined *puVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  uint uVar10;
  ulong uVar11;
  void *pvVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 local_78;
  undefined8 *local_70;
  byte *local_68;
  
  *param_1 = &PTR_FUN_04b6bdd8;
  if (((*(byte *)((long)param_1 + 0x2b4) >> 6 & 1) != 0) && (DAT_05ae9cb8 != 0)) {
    lVar7 = param_1[4];
    if (*(short *)(lVar7 + 0xdc) != 0) {
      uVar11 = 0;
      puVar13 = (undefined8 *)(PTR_DAT_04bb2020 + 0x10);
      do {
        lVar16 = *(long *)(lVar7 + 0x28) + uVar11 * 0x78;
        uVar17 = (ulong)*(ushort *)(lVar16 + 0x6c);
        if (uVar17 != 0) {
          uVar14 = 0;
          do {
            lVar7 = *(long *)(lVar16 + 0x38) + uVar14 * 0xa8;
            bVar3 = *(byte *)(lVar7 + 0x9c);
            if ((ulong)bVar3 != 0) {
              uVar15 = 0;
              do {
                if ((*(long *)(*(long *)(lVar7 + 0x28) + uVar15 * 8) != 0) &&
                   (*(long *)(*(long *)(lVar7 + 0x90) + uVar15 * 8) != -1)) {
                  lVar8 = *(long *)(*(long *)(lVar7 + 0x30) + uVar15 * 8);
                  local_68 = (byte *)(lVar8 + 2);
                  bVar2 = *local_68;
                  uVar10 = (uint)bVar2;
                  if (bVar2 != 0) {
                    uVar10 = 0xffffffff;
                    pbVar9 = (byte *)(lVar8 + 3);
                    do {
                      uVar10 = crc32b(uVar10,(uint)bVar2,0x4c11db7);
                      bVar2 = *pbVar9;
                      pbVar9 = pbVar9 + 1;
                    } while (bVar2 != 0);
                    uVar10 = ~uVar10;
                  }
                  local_78 = CONCAT44(local_78._4_4_,uVar10);
                  local_70 = puVar13;
                  FUN_039d9c90(DAT_05ae9cb8,&local_78,0);
                }
                uVar15 = uVar15 + 1;
              } while (uVar15 != bVar3);
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 != uVar17);
          lVar7 = param_1[4];
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(ushort *)(lVar7 + 0xdc));
    }
    if (*(short *)(lVar7 + 0xe4) != 0) {
      uVar11 = 0;
      puVar13 = (undefined8 *)(PTR_DAT_04bb2020 + 0x10);
      do {
        lVar16 = *(long *)(lVar7 + 0x68) + uVar11 * 0x70;
        uVar4 = *(ushort *)(lVar16 + 0x6c);
        if ((ulong)uVar4 != 0) {
          uVar17 = 0;
          do {
            if ((*(long *)(*(long *)(lVar16 + 0x30) + uVar17 * 8) != 0) &&
               (*(long *)(*(long *)(lVar16 + 0x50) + uVar17 * 8) != -1)) {
              lVar7 = *(long *)(*(long *)(lVar16 + 0x38) + uVar17 * 8);
              local_68 = (byte *)(lVar7 + 2);
              bVar3 = *local_68;
              uVar10 = (uint)bVar3;
              if (bVar3 != 0) {
                uVar10 = 0xffffffff;
                pbVar9 = (byte *)(lVar7 + 3);
                do {
                  uVar10 = crc32b(uVar10,(uint)bVar3,0x4c11db7);
                  bVar3 = *pbVar9;
                  pbVar9 = pbVar9 + 1;
                } while (bVar3 != 0);
                uVar10 = ~uVar10;
              }
              local_78 = CONCAT44(local_78._4_4_,uVar10);
              local_70 = puVar13;
              FUN_039d9c90(DAT_05ae9cb8,&local_78,0);
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 != uVar4);
          lVar7 = param_1[4];
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(ushort *)(lVar7 + 0xe4));
    }
  }
  FUN_039ffa80(*(undefined8 *)PTR_DAT_04bd1770,param_1);
  plVar5 = *(long **)(DAT_05ae9b00 + 0x48);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))(plVar5,param_1);
  }
  puVar1 = PTR_DAT_04bb2698;
  lVar7 = param_1[0x12];
  if (lVar7 != 0) {
    plVar5 = (long *)(lVar7 + -8);
    if (*plVar5 != 0) {
      lVar16 = *plVar5 * 0x50;
      do {
        FUN_03ad2990(lVar7 + -0x50 + lVar16);
        lVar16 = lVar16 + -0x50;
      } while (lVar16 != 0);
    }
    if (*(long *)puVar1 == 0) {
      free(plVar5);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar1,plVar5);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,plVar5);
      }
    }
    param_1[0x12] = 0;
    *(undefined4 *)(param_1 + 0x11) = 0;
  }
  pvVar12 = (void *)param_1[0x14];
  if (pvVar12 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar12);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar1,pvVar12);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar12);
      }
    }
    param_1[0x13] = 0;
    param_1[0x14] = 0;
  }
  lVar7 = param_1[4];
  uVar11 = (ulong)*(ushort *)(lVar7 + 0xdc);
  if (uVar11 != 0) {
    puVar13 = (undefined8 *)param_1[5];
    do {
      (**(code **)*puVar13)(puVar13);
      uVar11 = uVar11 - 1;
      puVar13 = puVar13 + 0x86;
    } while (uVar11 != 0);
    lVar7 = param_1[4];
  }
  FUN_038fe410(lVar7);
  pvVar12 = (void *)param_1[0x17];
  if (pvVar12 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar12);
      pvVar12 = (void *)param_1[0x1b];
      goto joined_r0x039fe224;
    }
    plVar5 = (long *)FUN_038cb610(*(long *)puVar1,pvVar12);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x38))(plVar5,pvVar12);
    }
  }
  pvVar12 = (void *)param_1[0x1b];
joined_r0x039fe224:
  if (pvVar12 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar12);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar1,pvVar12);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar12);
      }
    }
  }
  lVar7 = param_1[4];
  if (*(short *)(lVar7 + 0xe2) != 0) {
    lVar16 = 0;
    uVar11 = 0;
    do {
      pvVar12 = (void *)FUN_003a1910(*(long *)(lVar7 + 0x58) + lVar16);
      if (pvVar12 != (void *)0x0) {
        if (*(long *)puVar1 == 0) {
          free(pvVar12);
        }
        else {
          plVar5 = (long *)FUN_038cb610(*(long *)puVar1,pvVar12);
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x38))(plVar5,pvVar12);
          }
        }
      }
      lVar7 = param_1[4];
      uVar11 = uVar11 + 1;
      lVar16 = lVar16 + 0x50;
    } while (uVar11 < *(ushort *)(lVar7 + 0xe2));
  }
  FUN_0039c760();
  plVar5 = (long *)param_1[0x15];
  if (plVar5 != (long *)0x0) {
    local_78 = param_1[4];
    local_70 = param_1;
    (**(code **)(*plVar5 + 8))(plVar5,&local_78);
  }
  FUN_038fe020(param_1[4]);
  FUN_038e1a84(param_1 + 0x58);
  param_1[0x51] = &PTR_LAB_04b6bdf8;
  param_1[0x50] = &PTR_LAB_04b6bdf8;
  FUN_003490c0(param_1 + 0x2c);
  puVar1 = PTR_DAT_04bb2cd0 + 0x10;
  param_1[0x25] = puVar1;
  FUN_038f4940(param_1 + 0x25);
  param_1[0x1e] = puVar1;
  FUN_038f4940();
  lVar7 = param_1[1];
  *param_1 = &PTR_FUN_04b64428;
  if (lVar7 != 0) {
    if (lVar7 == 1) {
      return;
    }
    if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
      lVar16 = 0;
    }
    else {
      lVar16 = lVar7 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
    }
    plVar5 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)param_1);
    if (*plVar5 != 0) {
      *(long *)(*plVar5 + 8) = plVar5[1];
    }
    if ((long *)plVar5[1] != (long *)0x0) {
      *(long *)plVar5[1] = *plVar5;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + -1;
    if (lVar16 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar16 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}


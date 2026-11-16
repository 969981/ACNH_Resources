
void FUN_029bd080(long param_1,undefined8 param_2,long param_3,long param_4,uint param_5)

{
  MutexType *pMVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  int iVar5;
  byte bVar6;
  long *plVar7;
  ulong uVar8;
  undefined *puVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  undefined8 local_88;
  undefined4 local_80;
  undefined *local_78;
  long local_70;
  undefined1 local_68;
  
  puVar3 = (uint *)(param_1 + 0x5d00);
  pMVar1 = (MutexType *)(param_1 + 0x5bd48);
  nn::os::LockMutex(pMVar1);
  lVar11 = *(long *)(param_1 + 0x1b48);
  if (*(long *)(param_1 + 0x1b40) != param_4) {
    if ((lVar11 != 0) && (*(int *)(lVar11 + 0x20) == *(int *)(param_1 + 0x1b50))) {
      FUN_029be300(*(undefined8 *)(param_1 + 7000));
      lVar11 = *(long *)(param_1 + 0x1b48);
      if ((lVar11 != 0) && (*(int *)(lVar11 + 0x20) == *(int *)(param_1 + 0x1b50))) {
        *(uint *)(lVar11 + 8) = *(uint *)(lVar11 + 8) | 0x10;
        if ((*(long *)(lVar11 + 0x28) != 0) && (*(long *)(lVar11 + 0x58) != 0)) {
          plVar7 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(lVar11 + 0x28) + 0x30) +
                                                   0x18) + 0x20))();
          plVar7 = (long *)(**(code **)(*plVar7 + 0x38))();
          (**(code **)(*plVar7 + 0x10))();
          (**(code **)(**(long **)(lVar11 + 0x58) + 0x38))(*(long **)(lVar11 + 0x58),0xffffffff);
          (**(code **)(*plVar7 + 0x18))(plVar7);
        }
      }
      lVar11 = 0;
      *(undefined8 *)(param_1 + 0x1b48) = 0;
      *(undefined4 *)(param_1 + 0x1b50) = 0;
    }
    *(long *)(param_1 + 0x1b40) = param_4;
  }
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0x20) == *(int *)(param_1 + 0x1b50))) goto LAB_029bd28c;
  if ((param_5 & 1) == 0) {
    local_88 = 0;
    local_80 = 0;
    lVar11 = (**(code **)(**(long **)(*(long *)(param_4 + 0x30) + 0x18) + 0x20))();
    if ((*(char *)(lVar11 + 0x78) != '\0') &&
       (uVar8 = FUN_03bf46a8(param_4,"searchAndEmit(%s)",&DAT_0408dbda), (uVar8 & 1) != 0)) {
      puVar9 = &DAT_0408dbda;
      goto LAB_029bd248;
    }
  }
  else {
    local_88 = 0;
    local_80 = 0;
    lVar11 = (**(code **)(**(long **)(*(long *)(param_4 + 0x30) + 0x18) + 0x20))();
    if ((*(char *)(lVar11 + 0x78) != '\0') &&
       (uVar8 = FUN_03bf46a8(param_4,"searchAndEmit(%s)",&DAT_040d085f), (uVar8 & 1) != 0)) {
      puVar9 = &DAT_040d085f;
LAB_029bd248:
      local_68 = 0;
      local_78 = PTR_DAT_04bcadf8 + 0x10;
      local_70 = FUN_03bf5ec0(*(undefined8 *)(*(long *)(param_4 + 0x30) + 0x18),puVar9);
      if (local_70 != 0) {
        FUN_03bf47b0(param_4,&local_78,&local_88);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x1b48) = local_88;
  *(undefined4 *)(param_1 + 0x1b50) = local_80;
LAB_029bd28c:
  bVar6 = *(byte *)(param_3 + 8);
  iVar5 = *(int *)(param_3 + 0x10);
  nn::os::LockMutex(pMVar1);
  lVar11 = param_1 + 0x5cf0;
  uVar10 = *puVar3;
  if (0 < (int)uVar10) {
    uVar14 = 0;
    puVar2 = (uint *)(param_1 + 0x5bd20);
    do {
      if (uVar14 < uVar10) {
        uVar13 = uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU);
        uVar10 = uVar13 + 1;
        lVar12 = lVar11;
        if (6 < uVar13) {
          uVar13 = uVar10 & 0xfffffff8;
          do {
            uVar13 = uVar13 - 8;
            lVar12 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)
                                                  (lVar12 + 8) + 8) + 8) + 8) + 8) + 8) + 8) + 8);
          } while (uVar13 != 0);
        }
        for (uVar10 = uVar10 & 7; uVar10 != 0; uVar10 = uVar10 - 1) {
          lVar12 = *(long *)(lVar12 + 8);
        }
      }
      else {
        lVar12 = 0;
      }
      puVar4 = (undefined8 *)0x0;
      if (lVar12 != 0) {
        puVar4 = (undefined8 *)(lVar12 + -0x148);
      }
      if (puVar4[4] == *(long *)(param_3 + 0x40)) break;
      if (*(char *)((long)puVar4 + 3) == '\0') {
        if (*(char *)((long)puVar4 + 2) != '\0') {
LAB_029bd380:
          *(undefined1 *)((long)puVar4 + 3) = 1;
          if (uVar14 == *puVar2) {
            *puVar2 = uVar14 + 1;
          }
          if (puVar4[0x28] != 0) {
            FUN_029bef10(*(undefined8 *)(param_1 + 7000));
          }
          goto LAB_029bd3b0;
        }
        if ((bVar6 & 2) == 0 || iVar5 == 0x10b) {
          if (puVar4[5] == 0) goto LAB_029bd380;
          if (*(char *)((long)puVar4 + 5) == '\0') {
            *(undefined4 *)(puVar4 + 1) = 600;
          }
        }
        uVar14 = uVar14 + 1;
      }
      else {
LAB_029bd3b0:
        if (puVar4[0x29] != 0) {
          *(undefined8 *)(puVar4[0x29] + 8) = puVar4[0x2a];
        }
        if ((undefined8 *)puVar4[0x2a] != (undefined8 *)0x0) {
          *(undefined8 *)puVar4[0x2a] = puVar4[0x29];
        }
        puVar4[0x29] = 0;
        puVar4[0x2a] = 0;
        *puVar3 = *puVar3 - 1;
        *puVar4 = *(undefined8 *)(param_1 + 0x5d08);
        *(undefined8 **)(param_1 + 0x5d08) = puVar4;
        if ((int)uVar14 < (int)*puVar2) {
          *puVar2 = *puVar2 - 1;
        }
      }
      uVar10 = *puVar3;
    } while ((int)uVar14 < (int)uVar10);
  }
  nn::os::UnlockMutex(pMVar1);
  lVar12 = *(long *)(param_1 + 0x5cf8);
  if (lVar12 != lVar11) {
    lVar11 = lVar12 + -0x148;
    do {
      if (*(long *)(lVar11 + 0x20) == *(long *)(param_3 + 0x40)) {
        *(undefined1 *)(lVar11 + 2) = 0;
        break;
      }
      lVar12 = *(long *)(lVar12 + 8);
      lVar11 = lVar12 + -0x148;
    } while (lVar11 != param_1 + 0x5ba8);
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


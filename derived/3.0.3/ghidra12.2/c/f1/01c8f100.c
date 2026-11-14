
void FUN_01c8f100(long param_1)

{
  undefined *puVar1;
  uint *puVar2;
  int iVar3;
  byte bVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  byte *pbVar8;
  long lVar9;
  byte local_64 [4];
  undefined *local_60;
  byte local_58;
  undefined4 local_54;
  undefined4 local_38;
  undefined1 local_34;
  
  if (*(int *)(param_1 + 0x98) == 0) {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x68));
  if (DAT_04cd19d8 == 0) {
    pbVar8 = &DAT_0548e140;
LAB_01c8f194:
    if (*pbVar8 < 8) goto LAB_01c8f20c;
LAB_01c8f1a0:
    if (DAT_0537d558 == (long *)0x0) {
LAB_01c8f204:
      pbVar8 = &DAT_0548e168;
      goto LAB_01c8f20c;
    }
    lVar9 = *DAT_0537d558;
    bVar4 = *(byte *)(lVar9 + 0x473);
    pbVar8 = PTR_DAT_04bb5038;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar2 = (uint *)(lVar9 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar8 = (byte *)(lVar9 + 0x471);
      }
    }
    local_64[0] = *pbVar8;
    if (7 < local_64[0]) goto LAB_01c8f204;
LAB_01c8f228:
    if ((*(char *)(param_1 + 0xaa) == '\0') && (uVar5 = FUN_01c8f3dc(), (uVar5 & 1) != 0)) {
      if (*(int *)(param_1 + 0x98) != 0) {
        puVar1 = PTR_DAT_04bc31f0 + 0x10;
        do {
          iVar7 = 0;
          if (*(int *)(param_1 + 0x90) <= *(int *)(param_1 + 0x94)) {
            iVar7 = *(int *)(param_1 + 0x90);
          }
          FUN_02caead0(uVar5,*(long *)(param_1 + 0x88) +
                             (long)(*(int *)(param_1 + 0x94) - iVar7) * 0x98,local_64,1,1,0);
          local_54 = 0xffffffff;
          local_38 = 0;
          local_34 = 1;
          local_58 = local_64[0];
          if (7 < local_64[0]) {
            local_58 = 0xff;
          }
          local_60 = puVar1;
          uVar5 = FUN_02586300(&local_60,&local_38);
          iVar7 = *(int *)(param_1 + 0x98);
          if (0 < iVar7) {
            iVar7 = 0;
            if (*(int *)(param_1 + 0x90) <= *(int *)(param_1 + 0x94)) {
              iVar7 = *(int *)(param_1 + 0x90);
            }
            uVar5 = (*(code *)**(undefined8 **)
                                (*(long *)(param_1 + 0x88) +
                                (long)(*(int *)(param_1 + 0x94) - iVar7) * 0x98))();
            iVar3 = 0;
            if (*(int *)(param_1 + 0x94) + 1 < *(int *)(param_1 + 0x90)) {
              iVar3 = *(int *)(param_1 + 0x94) + 1;
            }
            iVar7 = *(int *)(param_1 + 0x98) + -1;
            *(int *)(param_1 + 0x94) = iVar3;
            *(int *)(param_1 + 0x98) = iVar7;
          }
        } while (iVar7 != 0);
      }
      goto LAB_01c8f3b0;
    }
    if ((((DAT_056658d0 != 0) && (plVar6 = *(long **)(DAT_056658d0 + 0x1e40), plVar6 != (long *)0x0)
         ) && ((int)plVar6[0x3e] == -1)) &&
       ((*(int *)((long)plVar6 + 500) == -1 && (*(uint *)(plVar6 + 0x36) < 2)))) {
      (**(code **)(*plVar6 + 0xa8))();
    }
  }
  else {
    pbVar8 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar8 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar8) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar8 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_01c8f194;
      }
      goto LAB_01c8f1a0;
    }
LAB_01c8f20c:
    local_64[0] = *pbVar8;
    if (local_64[0] < 8) goto LAB_01c8f228;
    local_64[0] = 0xff;
  }
  if (0 < *(int *)(param_1 + 0x98)) {
    lVar9 = 0;
    do {
      iVar7 = 0;
      if (*(int *)(param_1 + 0x90) <= (int)lVar9 + *(int *)(param_1 + 0x94)) {
        iVar7 = *(int *)(param_1 + 0x90);
      }
      (*(code *)**(undefined8 **)
                  (*(long *)(param_1 + 0x88) +
                  ((lVar9 - iVar7) + (long)*(int *)(param_1 + 0x94)) * 0x98))();
      lVar9 = lVar9 + 1;
    } while ((int)lVar9 < *(int *)(param_1 + 0x98));
  }
LAB_01c8f3b0:
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined2 *)(param_1 + 0xa9) = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x68));
  return;
}



void FUN_03c0bcb0(long param_1,int *param_2,long *param_3)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *__dest;
  undefined2 *puVar8;
  int local_1674;
  undefined1 local_1670 [5600];
  DeliveryCacheDirectory aDStack_90 [8];
  undefined1 local_88 [31];
  undefined1 local_69;
  
  if (*(char *)(param_1 + 0x2d7) == '\0') {
    puVar8 = (undefined2 *)(param_1 + 0x2d5);
    *(undefined4 *)(param_1 + 0x2d0) = 0;
    *puVar8 = 0;
    lVar4 = *(long *)PTR_DAT_04bb29d0;
    if (lVar4 < 0) {
      lVar4 = lVar4 + 1;
    }
    uVar2 = nn::bcat::MountDeliveryCacheStorage();
    if (uVar2 != 0) {
      do {
        if ((uVar2 & 0x3fffff) != 0x67a) {
          *(uint *)(param_1 + 0x2d0) = uVar2;
          goto LAB_03c0bdc0;
        }
        nn::os::ConvertToTimeSpan(lVar4 >> 1);
        nn::os::SleepThread();
        uVar2 = nn::bcat::MountDeliveryCacheStorage();
      } while (uVar2 != 0);
    }
    puVar8 = (undefined2 *)(param_1 + 0x2d7);
LAB_03c0bdc0:
    *(undefined1 *)puVar8 = 1;
    if (*(char *)(param_1 + 0x2d4) != '\0') {
      FUN_03ebb160(param_1 + 0x238,2);
      return;
    }
  }
  else {
    local_69 = 0;
    (**(code **)(*param_3 + 0x18))(param_3);
    puVar7 = (undefined1 *)param_3[1];
    if (local_88 != puVar7) {
      (**(code **)(*param_3 + 0x18))(param_3);
      lVar4 = 0;
      do {
        if (*(char *)(param_3[1] + lVar4) == '\0') {
LAB_03c0be00:
          iVar3 = (int)lVar4;
joined_r0x03c0be04:
          if (0x1f < iVar3) {
            iVar3 = 0x1f;
          }
          goto LAB_03c0be0c;
        }
        lVar6 = param_3[1] + lVar4;
        if (*(char *)(lVar6 + 1) == '\0') {
          lVar4 = lVar4 + 1;
          goto LAB_03c0be00;
        }
        if (*(char *)(lVar6 + 2) == '\0') {
          iVar3 = (int)lVar4 + 2;
          goto joined_r0x03c0be04;
        }
        lVar4 = lVar4 + 3;
      } while (lVar4 != 0x80001);
      iVar3 = 0;
LAB_03c0be0c:
      memcpy(local_88,puVar7,(long)iVar3);
      local_88[iVar3] = 0;
    }
    nn::bcat::DeliveryCacheDirectory::DeliveryCacheDirectory(aDStack_90);
    iVar3 = nn::bcat::DeliveryCacheDirectory::Open((DirectoryName *)aDStack_90);
    if (iVar3 == 0) {
      memset(local_1670,0,0x15e0);
      local_1674 = 0;
      iVar3 = nn::bcat::DeliveryCacheDirectory::Read
                        ((int *)aDStack_90,(DeliveryCacheDirectoryEntry *)&local_1674,
                         (int)local_1670);
      if ((iVar3 == 0) && (0 < local_1674)) {
        lVar4 = 0;
        puVar7 = local_1670;
        puVar1 = PTR_DAT_04bb2028 + 0x10;
        do {
          if (*param_2 < param_2[1]) {
            plVar5 = *(long **)(param_2 + 4);
            if (plVar5 != (long *)0x0) {
              *(long *)(param_2 + 4) = *plVar5;
            }
            *(undefined4 *)(plVar5 + 2) = 0x20;
            *(undefined1 *)((long)plVar5 + 0x33) = 0;
            *(undefined1 *)((long)plVar5 + 0x14) = 0;
            *plVar5 = (long)puVar1;
            plVar5[1] = (long)plVar5 + 0x14;
            if (*param_2 < param_2[1]) {
              *(long **)(*(long *)(param_2 + 2) + (long)*param_2 * 8) = plVar5;
              *param_2 = *param_2 + 1;
            }
          }
          else {
            plVar5 = (long *)0x0;
          }
          *(undefined1 *)plVar5[1] = 0;
          __dest = (undefined1 *)plVar5[1];
          if (__dest != local_1670 + lVar4 * 0x38) {
            lVar6 = 0;
            do {
              if (puVar7[lVar6] == '\0') goto LAB_03c0bed4;
              if (puVar7[lVar6 + 1] == '\0') {
                lVar6 = lVar6 + 1;
                goto LAB_03c0bed4;
              }
              if (puVar7[lVar6 + 2] == '\0') {
                lVar6 = lVar6 + 2;
                goto LAB_03c0bed4;
              }
              lVar6 = lVar6 + 3;
            } while (lVar6 != 0x80001);
            lVar6 = 0;
LAB_03c0bed4:
            iVar3 = (int)lVar6;
            if ((int)plVar5[2] <= (int)lVar6) {
              iVar3 = (int)plVar5[2] + -1;
            }
            memcpy(__dest,local_1670 + lVar4 * 0x38,(long)iVar3);
            __dest[iVar3] = 0;
          }
          lVar4 = lVar4 + 1;
          puVar7 = puVar7 + 0x38;
        } while (lVar4 < local_1674);
      }
    }
    nn::bcat::DeliveryCacheDirectory::~DeliveryCacheDirectory(aDStack_90);
  }
  return;
}


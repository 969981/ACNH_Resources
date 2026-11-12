
void FUN_0092cfa0(char *param_1)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  uint *puVar8;
  undefined **local_50;
  char *pcStack_48;
  undefined1 *local_40;
  undefined8 uStack_38;
  
  if (param_1[0x48] == '\0') {
    if (DAT_054f5738 == 0) {
      if ((DAT_054f08d8 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_054f08d8);
        puVar8 = &DAT_054f08d0;
        if (iVar5 != 0) {
          DAT_054f08d0 = 0;
          __cxa_guard_release(&DAT_054f08d8);
        }
      }
      else {
        puVar8 = &DAT_054f08d0;
      }
    }
    else {
      puVar8 = (uint *)(DAT_054f5738 + 0x200);
    }
    if ((*puVar8 >> 10 & 1) == 0) {
      if ((((-1 < *param_1) && (-1 < param_1[1])) && (-1 < param_1[2])) && (DAT_04c487d4 != -1)) {
        puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
        if (0xff < (uint)(int)DAT_04c487d4) {
          puVar2 = PTR_DAT_04bc39f8;
        }
        if ((((*(long *)PTR_DAT_04bb2118 != 0) && ((*(uint *)(puVar2 + 4) & 1) != 0)) &&
            ((DAT_05aed670 != 0 &&
             ((*(long *)(DAT_05aed670 + 0x330) != 0 &&
              (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 8) == 4)))))) &&
           (*(char *)(DAT_05aed670 + 0x344) == '\0')) {
          FUN_025399d4();
          return;
        }
      }
    }
    else {
      local_50 = &PTR_LAB_049287f0;
      local_40 = &LAB_0092cf30;
      uStack_38 = 0;
      pcStack_48 = param_1;
      if (param_1[0x48] != '\0') {
        plVar7 = *(long **)(param_1 + 0x40);
        if (plVar7 != (long *)0x0) {
          plVar1 = plVar7 + 1;
          do {
            lVar6 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar6 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
            std::__shared_weak_count::__release_weak();
          }
        }
        param_1[0x48] = '\0';
      }
      *(undefined **)(param_1 + 0x10) = PTR_DAT_04bbba70 + 0x10;
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      (*(code *)local_50[2])(&local_50,param_1 + 0x10);
      param_1[0x30] = '\0';
      param_1[0x31] = '\0';
      param_1[0x32] = '\0';
      param_1[0x33] = '\0';
      param_1[0x48] = '\x01';
      param_1[0x38] = '\0';
      param_1[0x39] = '\0';
      param_1[0x3a] = '\0';
      param_1[0x3b] = '\0';
      param_1[0x3c] = '\0';
      param_1[0x3d] = '\0';
      param_1[0x3e] = '\0';
      param_1[0x3f] = '\0';
      param_1[0x40] = '\0';
      param_1[0x41] = '\0';
      param_1[0x42] = '\0';
      param_1[0x43] = '\0';
      param_1[0x44] = '\0';
      param_1[0x45] = '\0';
      param_1[0x46] = '\0';
      param_1[0x47] = '\0';
    }
  }
  else {
    FUN_02dad100(param_1 + 8);
    if (*(int *)(param_1 + 0x30) == 2) {
      if (param_1[0x48] != '\0') {
        plVar7 = *(long **)(param_1 + 0x40);
        if (plVar7 != (long *)0x0) {
          plVar1 = plVar7 + 1;
          do {
            lVar6 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar6 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
            std::__shared_weak_count::__release_weak();
          }
        }
        param_1[0x48] = '\0';
      }
      FUN_02539c48();
      return;
    }
  }
  return;
}


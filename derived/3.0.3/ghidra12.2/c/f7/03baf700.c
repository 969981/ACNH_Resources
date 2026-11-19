
void FUN_03baf700(char *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  void *__ptr;
  long lVar6;
  
  if (*param_1 != '\0') {
    __ptr = *(void **)(param_1 + 0xa0);
    if (__ptr != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(__ptr);
      }
      else {
        plVar2 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
        }
      }
      param_1[0xa0] = '\0';
      param_1[0xa1] = '\0';
      param_1[0xa2] = '\0';
      param_1[0xa3] = '\0';
      param_1[0xa4] = '\0';
      param_1[0xa5] = '\0';
      param_1[0xa6] = '\0';
      param_1[0xa7] = '\0';
      param_1[0x98] = '\0';
      param_1[0x99] = '\0';
      param_1[0x9a] = '\0';
      param_1[0x9b] = '\0';
    }
    if (*(long **)(param_1 + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x20) + 8))();
      param_1[0x20] = '\0';
      param_1[0x21] = '\0';
      param_1[0x22] = '\0';
      param_1[0x23] = '\0';
      param_1[0x24] = '\0';
      param_1[0x25] = '\0';
      param_1[0x26] = '\0';
      param_1[0x27] = '\0';
    }
    if (*(long **)(param_1 + 0x60) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x60) + 8))();
      param_1[0x60] = '\0';
      param_1[0x61] = '\0';
      param_1[0x62] = '\0';
      param_1[99] = '\0';
      param_1[100] = '\0';
      param_1[0x65] = '\0';
      param_1[0x66] = '\0';
      param_1[0x67] = '\0';
    }
    if (*(long **)(param_1 + 0x80) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x80) + 8))();
      param_1[0x80] = '\0';
      param_1[0x81] = '\0';
      param_1[0x82] = '\0';
      param_1[0x83] = '\0';
      param_1[0x84] = '\0';
      param_1[0x85] = '\0';
      param_1[0x86] = '\0';
      param_1[0x87] = '\0';
    }
    if (*(long **)(param_1 + 0xa8) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0xa8) + 8))();
      param_1[0xa8] = '\0';
      param_1[0xa9] = '\0';
      param_1[0xaa] = '\0';
      param_1[0xab] = '\0';
      param_1[0xac] = '\0';
      param_1[0xad] = '\0';
      param_1[0xae] = '\0';
      param_1[0xaf] = '\0';
    }
    if (*(long **)(param_1 + 0xb0) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0xb0) + 8))();
      param_1[0xb0] = '\0';
      param_1[0xb1] = '\0';
      param_1[0xb2] = '\0';
      param_1[0xb3] = '\0';
      param_1[0xb4] = '\0';
      param_1[0xb5] = '\0';
      param_1[0xb6] = '\0';
      param_1[0xb7] = '\0';
    }
    if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
      param_1[0xb8] = '\0';
      param_1[0xb9] = '\0';
      param_1[0xba] = '\0';
      param_1[0xbb] = '\0';
      param_1[0xbc] = '\0';
      param_1[0xbd] = '\0';
      param_1[0xbe] = '\0';
      param_1[0xbf] = '\0';
    }
    if (*(long **)(param_1 + 200) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 200) + 8))();
      param_1[200] = '\0';
      param_1[0xc9] = '\0';
      param_1[0xca] = '\0';
      param_1[0xcb] = '\0';
      param_1[0xcc] = '\0';
      param_1[0xcd] = '\0';
      param_1[0xce] = '\0';
      param_1[0xcf] = '\0';
    }
    lVar6 = *(long *)(param_1 + 0xd0);
    if (lVar6 != 0) {
      if (*(long *)(lVar6 + 0x60) != 0) {
        nn::os::LockMutex((MutexType *)(lVar6 + 0x88));
        lVar4 = *(long *)(lVar6 + 0x60);
        lVar5 = *(long *)(lVar4 + 8);
        if (lVar5 != lVar4) {
          iVar1 = *(int *)(lVar4 + 0x14);
          do {
            lVar5 = *(long *)(lVar5 + 8);
            FUN_03b45ec0(0,0);
          } while (lVar5 - iVar1 != lVar4 - iVar1);
        }
        nn::os::UnlockMutex((MutexType *)(lVar6 + 0x88));
      }
      if (DAT_05aebb78 == 0) {
        lVar6 = 0;
        plVar2 = *(long **)(param_1 + 0xd0);
      }
      else {
        lVar6 = *(long *)(DAT_05aebb78 + 8);
        plVar2 = *(long **)(param_1 + 0xd0);
      }
      if (plVar2 != (long *)0x0) {
        plVar3 = *(long **)(lVar6 + 0x138);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x18))(plVar3,plVar2);
        }
        nn::os::LockMutex((MutexType *)(lVar6 + 0x108));
        FUN_03b3cf2c(plVar2);
        (**(code **)(*plVar2 + 8))(plVar2);
        *(int *)(lVar6 + 0x148) = *(int *)(lVar6 + 0x148) + -1;
        nn::os::UnlockMutex((MutexType *)(lVar6 + 0x108));
      }
      param_1[0xd0] = '\0';
      param_1[0xd1] = '\0';
      param_1[0xd2] = '\0';
      param_1[0xd3] = '\0';
      param_1[0xd4] = '\0';
      param_1[0xd5] = '\0';
      param_1[0xd6] = '\0';
      param_1[0xd7] = '\0';
    }
    *param_1 = '\0';
  }
  return;
}


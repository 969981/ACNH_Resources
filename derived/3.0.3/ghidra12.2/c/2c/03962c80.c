
void FUN_03962c80(undefined8 *param_1)

{
  long lVar1;
  short sVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  void *__ptr;
  long lVar7;
  long lVar8;
  
  *param_1 = &PTR_FUN_04b68210;
  puVar5 = PTR_DAT_04bc1010;
  puVar4 = PTR_DAT_04bb2698;
  lVar7 = 8;
  do {
    __ptr = *(void **)((long)param_1 + lVar7);
    if (*(long **)((long)__ptr + 0x10) == (long *)0x0) {
LAB_03962cfc:
      if (*(short *)((long)__ptr + 0xda) != -1) {
        lVar8 = *(long *)puVar5;
        nn::os::LockMutex((MutexType *)(lVar8 + 0x580));
        uVar3 = (int)*(short *)((long)__ptr + 0xda) - (uint)*(ushort *)(lVar8 + 0x5c0);
        if (*(uint *)(lVar8 + 0x5a0) <= uVar3) {
          uVar3 = 0;
        }
        lVar1 = *(long *)(lVar8 + 0x5a8) + (long)(int)uVar3 * 0x80;
        sVar2 = *(short *)(lVar1 + 0x76) + -1;
        *(short *)(lVar1 + 0x76) = sVar2;
        if (sVar2 == 0) {
          *(short *)(lVar8 + 0x5c4) = *(short *)(lVar8 + 0x5c4) + -1;
        }
        nn::os::UnlockMutex((MutexType *)(lVar8 + 0x580));
        *(undefined2 *)((long)__ptr + 0xda) = 0xffff;
      }
      FUN_038fd0e0((long)__ptr + 0x50);
      if (*(long *)puVar4 == 0) {
        free(__ptr);
      }
      else {
        plVar6 = (long *)FUN_038cb610(*(long *)puVar4,__ptr);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6,__ptr);
        }
      }
    }
    else {
      (**(code **)(**(long **)((long)__ptr + 0x10) + 8))();
      __ptr = *(void **)((long)param_1 + lVar7);
      if (__ptr != (void *)0x0) goto LAB_03962cfc;
    }
    *(undefined8 *)((long)param_1 + lVar7) = 0;
    lVar7 = lVar7 + 8;
    if (lVar7 == 0xe0) {
      param_1[0x1c] = PTR_DAT_04bd0d40 + 0x10;
      lVar7 = param_1[0x1d];
      if (lVar7 != 0) {
        if (lVar7 == 1) {
          return;
        }
        if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = lVar7 + 0x90;
          nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
        }
        plVar6 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)(param_1 + 0x1c));
        if (*plVar6 != 0) {
          *(long *)(*plVar6 + 8) = plVar6[1];
        }
        if ((long *)plVar6[1] != (long *)0x0) {
          *(long *)plVar6[1] = *plVar6;
        }
        *plVar6 = 0;
        plVar6[1] = 0;
        *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + -1;
        if (lVar8 != 0) {
          nn::os::UnlockMutex((MutexType *)(lVar8 + 0x20));
        }
      }
      param_1[0x1d] = 1;
      return;
    }
  } while( true );
}



void FUN_038b94d0(long param_1)

{
  MutexType *pMVar1;
  uint uVar2;
  char cVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  
  if (((*(byte *)(param_1 + 0x242) ^ 0xff) & 3) == 0) {
    fVar10 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xa0));
    lVar9 = *(long *)(param_1 + 0xf8);
    fVar11 = (float)DAT_05ae7888;
    lVar5 = nn::os::GetSystemTick();
    if ((lVar9 - lVar5) + (long)(((fVar10 * 0.5) / 60.0) * fVar11) < 1) {
      return;
    }
    nn::os::ConvertToTimeSpan();
    nn::os::SleepThread();
    return;
  }
  if (*(char *)(param_1 + 0x243) == '\0') {
    if (*(int *)(param_1 + 0xa0) != 0) {
      nn::os::WaitSystemEvent((SystemEventType *)(param_1 + 0x210));
      uVar2 = *(uint *)(param_1 + 0xa0);
      if (1 < uVar2) {
        fVar10 = (float)DAT_05ae7888;
        while (lVar5 = nn::os::GetSystemTick(),
              lVar5 - *(long *)(param_1 + 0xf8) < (long)((0.99 / (60.0 / (float)uVar2)) * fVar10)) {
          nn::os::WaitSystemEvent((SystemEventType *)(param_1 + 0x210));
        }
      }
    }
    goto LAB_038b98d8;
  }
  if ((*(char *)(param_1 + 0x241) == '\0') && (*(int *)(param_1 + 0x50) == 2)) {
    lVar5 = *(long *)PTR_DAT_04bb29d0;
    do {
      nn::os::ConvertToTimeSpan(lVar5 / 1000);
      nn::os::SleepThread();
      if (*(char *)(param_1 + 0x241) != '\0') break;
    } while (*(int *)(param_1 + 0x50) == 2);
  }
  pMVar1 = (MutexType *)(DAT_05ae77d8 + 0x118);
  nn::os::LockMutex(pMVar1);
  if (*(code **)(param_1 + 0x160) != (code *)0x0) {
    (**(code **)(param_1 + 0x160))(0);
  }
  puVar4 = PTR_DAT_04bcff40;
  if (*(char *)(param_1 + 0xbe) == '\0') {
    if (*(int *)(param_1 + 0x50) == 2) {
      (*DAT_04c62c68)(*(undefined8 *)(*(long *)(param_1 + 0x158) + 0x18),0xffffffffffffffff);
    }
    else {
      nn::os::WaitSystemEvent((SystemEventType *)(param_1 + 0x210));
      uVar2 = *(uint *)(param_1 + 0xa0);
      if (1 < uVar2) {
        fVar10 = (float)DAT_05ae7888;
        while (lVar5 = nn::os::GetSystemTick(),
              lVar5 - *(long *)(param_1 + 0xf8) < (long)((0.99 / (60.0 / (float)uVar2)) * fVar10)) {
          nn::os::WaitSystemEvent((SystemEventType *)(param_1 + 0x210));
        }
      }
    }
    (**(code **)PTR_DAT_04bcff40)(*(undefined8 *)(param_1 + 0x1f0),0xffffffffffffffff);
    if ((*(char *)(param_1 + 0x245) != -1) &&
       (*(undefined1 *)(param_1 + 0xbe) = 1, *(char *)(param_1 + 0x245) == '\x02')) {
      *(undefined1 *)(param_1 + 0x245) = 0xff;
    }
  }
  else {
    (**(code **)PTR_DAT_04bcff40)(*(undefined8 *)(param_1 + 0x1f0),0xffffffffffffffff);
    if (*(int *)(param_1 + 0x50) == 2) {
      cVar3 = *(char *)(param_1 + 0x245);
      if (cVar3 == -1) {
        lVar5 = nn::os::GetSystemTick();
        lVar9 = *(long *)(param_1 + 0x158);
        lVar5 = lVar5 - *(long *)(param_1 + 0x140);
        if (*(char *)(lVar9 + 0x49) == '\x02') {
          if (*(long *)(param_1 + 0x148) < lVar5) {
            uVar8 = 3;
            uVar6 = *(undefined8 *)(lVar9 + 0x10);
            uVar7 = 3;
LAB_038b994c:
            *(undefined1 *)(lVar9 + 0x49) = uVar8;
            (*DAT_04c61f28)(uVar6,uVar7);
          }
        }
        else if (((lVar5 < *(long *)(param_1 + 0x148)) &&
                 (*(long *)(param_1 + 0x150) <
                  *(long *)(param_1 + 0x140) - *(long *)(param_1 + 0x138))) &&
                (*(int *)(lVar9 + 0x20) == 1)) {
          uVar8 = 2;
          uVar6 = *(undefined8 *)(lVar9 + 0x10);
          uVar7 = 2;
          goto LAB_038b994c;
        }
      }
      else {
        if (cVar3 == '\x01') {
          lVar5 = *(long *)(param_1 + 0x158);
          if (*(char *)(lVar5 + 0x49) != '\x03') {
            uVar8 = 3;
LAB_038b985c:
            *(undefined1 *)(lVar5 + 0x49) = uVar8;
            (*DAT_04c61f28)(*(undefined8 *)(lVar5 + 0x10));
          }
LAB_038b9874:
          *(undefined1 *)(param_1 + 0xbe) = 0;
        }
        else if (cVar3 == '\0') {
          lVar5 = *(long *)(param_1 + 0x158);
          if (*(char *)(lVar5 + 0x49) != '\x02') {
            uVar8 = 2;
            goto LAB_038b985c;
          }
          goto LAB_038b9874;
        }
        *(undefined1 *)(param_1 + 0x245) = 0xff;
      }
      lVar5 = *(long *)(param_1 + 0x158);
      (*DAT_04c61ef8)(*(undefined8 *)(lVar5 + 0x10),*(undefined8 *)(lVar5 + 0x18),lVar5 + 0x20);
      uVar6 = nn::os::GetSystemTick();
      *(undefined8 *)(param_1 + 0x138) = uVar6;
      (**(code **)puVar4)(*(undefined8 *)(*(long *)(param_1 + 0x158) + 0x18),0xffffffffffffffff);
      uVar6 = nn::os::GetSystemTick();
      *(undefined8 *)(param_1 + 0x140) = uVar6;
    }
    else {
      nn::os::WaitSystemEvent((SystemEventType *)(param_1 + 0x210));
      uVar2 = *(uint *)(param_1 + 0xa0);
      if (1 < uVar2) {
        fVar10 = (float)DAT_05ae7888;
        while (lVar5 = nn::os::GetSystemTick(),
              lVar5 - *(long *)(param_1 + 0xf8) < (long)((0.99 / (60.0 / (float)uVar2)) * fVar10)) {
          nn::os::WaitSystemEvent((SystemEventType *)(param_1 + 0x210));
        }
      }
    }
  }
  if (*(code **)(param_1 + 0x160) != (code *)0x0) {
    (**(code **)(param_1 + 0x160))(1);
  }
  nn::os::UnlockMutex(pMVar1);
LAB_038b98d8:
  lVar5 = *(long *)(param_1 + 0x158);
  if (*(char *)(lVar5 + 0x4a) != '\0') {
    (**(code **)PTR_DAT_04bcf5b0)
              (*(undefined8 *)(lVar5 + 0x10),*(undefined4 *)(lVar5 + 0x4c),
               *(undefined4 *)(lVar5 + 0x50),*(undefined4 *)(lVar5 + 0x54),
               *(undefined4 *)(lVar5 + 0x58));
    *(undefined1 *)(lVar5 + 0x4a) = 0;
  }
  return;
}


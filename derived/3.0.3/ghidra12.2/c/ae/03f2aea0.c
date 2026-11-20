
int FUN_03f2aea0(long param_1,int param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  bool bVar4;
  undefined *puVar5;
  bool bVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  byte bVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  bool bVar17;
  long local_68;
  
  if ((param_2 == 0) && (*(long *)(param_1 + 0x28) == 0)) {
    return 0;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x90));
  if (param_2 == 0) {
    lVar16 = *(long *)(param_1 + 0x20);
    uVar1 = *(ulong *)(param_1 + 0x28);
    uVar2 = *(ulong *)(param_1 + 0x30);
    lVar8 = lVar16;
    if ((*(uint *)(lVar16 + 0xd0) & 1) != 0) {
      nn::os::LockMutex((MutexType *)(lVar16 + 0xb0));
      lVar8 = *(long *)(param_1 + 0x20);
    }
    if (*(long *)(lVar8 + 0xe0) == lVar8 + 0xd8) {
      bVar13 = 0x40;
      bVar17 = true;
      uVar3 = *(uint *)(lVar16 + 0xd0);
    }
    else {
      lVar9 = (long)*(int *)(lVar8 + 0xec);
      lVar11 = *(long *)(lVar8 + 0xe0) - lVar9;
      bVar4 = true;
      do {
        uVar12 = *(ulong *)(lVar11 + 0x18);
        bVar6 = uVar1 <= uVar12;
        bVar4 = (bool)(uVar12 < uVar2 & bVar4);
        bVar17 = !bVar6;
        if (bVar6) break;
        lVar11 = *(long *)(lVar11 + lVar9 + 8) - lVar9;
      } while (lVar11 != (lVar8 + 0xd8) - lVar9);
      bVar13 = 0x40;
      if (!bVar4) {
        bVar13 = 0;
      }
      uVar3 = *(uint *)(lVar16 + 0xd0);
    }
    if ((uVar3 & 1) != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar16 + 0xb0));
    }
    bVar13 = *(byte *)(param_1 + 0x18) & 0xbf | bVar13;
    *(byte *)(param_1 + 0x18) = bVar13;
    if (bVar17) goto LAB_03f2af94;
  }
  else {
LAB_03f2af94:
    if (param_2 < 0) {
      nn::os::LockMutex((MutexType *)&DAT_05b058c0);
      if (*(long *)(param_1 + 0x60) != param_1 + 0x58) {
        lVar11 = (long)*(int *)(param_1 + 0x6c);
        lVar16 = *(long *)(param_1 + 0x60) - lVar11;
        lVar8 = lVar16 + lVar11;
        do {
          lVar8 = *(long *)(lVar8 + 8);
          if (*(char *)(lVar16 + 0xd) < '\0') {
            lVar9 = *(long *)(lVar16 + 0x80);
            if (lVar9 != 0) {
              nn::os::LockMutex((MutexType *)&DAT_05b058c0);
              if ((*(byte *)(lVar16 + 8) & 1) != 0) {
                plVar10 = (long *)(lVar9 + 0x10);
                lVar9 = FUN_03f3be90(plVar10,*plVar10,lVar16 + 0x2b0);
                *plVar10 = lVar9;
                if (lVar9 != 0) {
                  *(undefined8 *)(lVar9 + 0x18) = 1;
                }
                *(byte *)(lVar16 + 8) = *(byte *)(lVar16 + 8) & 0xfe;
              }
              nn::os::UnlockMutex((MutexType *)&DAT_05b058c0);
            }
          }
          else {
            plVar10 = (long *)(*(int *)(param_1 + 0x6c) + lVar16);
            if (*plVar10 != 0) {
              *(long *)(*plVar10 + 8) = plVar10[1];
            }
            if ((long *)plVar10[1] != (long *)0x0) {
              *(long *)plVar10[1] = *plVar10;
            }
            *plVar10 = 0;
            plVar10[1] = 0;
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
          }
          lVar16 = lVar8 - lVar11;
        } while ((param_1 + 0x58) - lVar11 != lVar16);
      }
      nn::os::UnlockMutex((MutexType *)&DAT_05b058c0);
    }
    puVar5 = PTR_DAT_04bb49b8;
    iVar14 = 0;
    if (0 < param_2) {
      do {
        while( true ) {
          if (*(int *)(param_1 + 0x68) < 1) {
            plVar10 = (long *)0x0;
          }
          else {
            plVar10 = *(long **)(param_1 + 0x60);
            if (*plVar10 != 0) {
              *(long *)(*plVar10 + 8) = plVar10[1];
            }
            if ((long *)plVar10[1] != (long *)0x0) {
              *(long *)plVar10[1] = *plVar10;
            }
            *plVar10 = 0;
            plVar10[1] = 0;
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
          }
          local_68 = 0;
          if (plVar10 != (long *)0x0) {
            local_68 = (long)plVar10 - (long)*(int *)(param_1 + 0x6c);
          }
          iVar15 = iVar14;
          if (local_68 == 0) goto LAB_03f2b398;
          nn::os::LockMutex((MutexType *)&DAT_05b058c0);
          lVar8 = local_68;
          if (*(char *)(local_68 + 0xd) < '\0') break;
          nn::os::UnlockMutex((MutexType *)&DAT_05b058c0);
        }
        lVar16 = *(long *)(local_68 + 0x80);
        if (lVar16 != 0) {
          nn::os::LockMutex((MutexType *)&DAT_05b058c0);
          if ((*(byte *)(lVar8 + 8) & 1) != 0) {
            plVar10 = (long *)(lVar16 + 0x10);
            lVar16 = FUN_03f3be90(plVar10,*plVar10,lVar8 + 0x2b0);
            *plVar10 = lVar16;
            if (lVar16 != 0) {
              *(undefined8 *)(lVar16 + 0x18) = 1;
            }
            *(byte *)(lVar8 + 8) = *(byte *)(lVar8 + 8) & 0xfe;
          }
          nn::os::UnlockMutex((MutexType *)&DAT_05b058c0);
        }
        nn::os::UnlockMutex((MutexType *)&DAT_05b058c0);
        lVar8 = local_68;
        lVar16 = *(long *)puVar5;
        nn::os::LockMutex((MutexType *)(lVar16 + 0x518));
        if (*(long *)(lVar8 + 0xc0) != 0 || *(long *)(lVar8 + 0xb8) != 0) {
          plVar10 = (long *)(*(int *)(lVar16 + 0x54c) + lVar8);
          if (*plVar10 != 0) {
            *(long *)(*plVar10 + 8) = plVar10[1];
          }
          if ((long *)plVar10[1] != (long *)0x0) {
            *(long *)plVar10[1] = *plVar10;
          }
          *plVar10 = 0;
          plVar10[1] = 0;
          *(int *)(lVar16 + 0x548) = *(int *)(lVar16 + 0x548) + -1;
        }
        nn::os::UnlockMutex((MutexType *)(lVar16 + 0x518));
        uVar7 = *(undefined8 *)puVar5;
        *(undefined8 *)(param_1 + 0xb0) = 0;
        FUN_03f354cc(uVar7,&local_68,1,param_3 & 1);
        iVar14 = iVar14 + 1;
      } while (iVar14 < param_2);
      goto LAB_03f2b3cc;
    }
LAB_03f2b20c:
    do {
      do {
        if (*(int *)(param_1 + 0x68) < 1) {
          plVar10 = (long *)0x0;
        }
        else {
          plVar10 = *(long **)(param_1 + 0x60);
          if (*plVar10 != 0) {
            *(long *)(*plVar10 + 8) = plVar10[1];
          }
          if ((long *)plVar10[1] != (long *)0x0) {
            *(long *)plVar10[1] = *plVar10;
          }
          *plVar10 = 0;
          plVar10[1] = 0;
          *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
        }
        lVar8 = (long)plVar10 - (long)*(int *)(param_1 + 0x6c);
        local_68 = 0;
        if (plVar10 != (long *)0x0) {
          local_68 = lVar8;
        }
        iVar15 = iVar14;
        if (local_68 == 0) goto LAB_03f2b398;
        if (-1 < param_2) {
          nn::os::LockMutex((MutexType *)&DAT_05b058c0);
          lVar8 = local_68;
          if (-1 < *(char *)(local_68 + 0xd)) {
            nn::os::UnlockMutex((MutexType *)&DAT_05b058c0);
            goto LAB_03f2b20c;
          }
          lVar16 = *(long *)(local_68 + 0x80);
          if (lVar16 != 0) {
            nn::os::LockMutex((MutexType *)&DAT_05b058c0);
            if ((*(byte *)(lVar8 + 8) & 1) != 0) {
              plVar10 = (long *)(lVar16 + 0x10);
              lVar16 = FUN_03f3be90(plVar10,*plVar10,lVar8 + 0x2b0);
              *plVar10 = lVar16;
              if (lVar16 != 0) {
                *(undefined8 *)(lVar16 + 0x18) = 1;
              }
              *(byte *)(lVar8 + 8) = *(byte *)(lVar8 + 8) & 0xfe;
            }
            nn::os::UnlockMutex((MutexType *)&DAT_05b058c0);
          }
          nn::os::UnlockMutex((MutexType *)&DAT_05b058c0);
          lVar8 = local_68;
        }
        lVar16 = *(long *)puVar5;
        nn::os::LockMutex((MutexType *)(lVar16 + 0x518));
        if (*(long *)(lVar8 + 0xc0) != 0 || *(long *)(lVar8 + 0xb8) != 0) {
          plVar10 = (long *)(*(int *)(lVar16 + 0x54c) + lVar8);
          if (*plVar10 != 0) {
            *(long *)(*plVar10 + 8) = plVar10[1];
          }
          if ((long *)plVar10[1] != (long *)0x0) {
            *(long *)plVar10[1] = *plVar10;
          }
          *plVar10 = 0;
          plVar10[1] = 0;
          *(int *)(lVar16 + 0x548) = *(int *)(lVar16 + 0x548) + -1;
        }
        nn::os::UnlockMutex((MutexType *)(lVar16 + 0x518));
        uVar7 = *(undefined8 *)puVar5;
        *(undefined8 *)(param_1 + 0xb0) = 0;
        FUN_03f354cc(uVar7,&local_68,1,param_3 & 1);
        iVar14 = iVar14 + 1;
      } while (param_2 != 0);
      if (*(ulong *)(param_1 + 0x30) < *(ulong *)(param_1 + 0xb0)) {
        *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xbf;
      }
    } while (*(ulong *)(param_1 + 0xb0) <= *(ulong *)(param_1 + 0x28));
    bVar13 = *(byte *)(param_1 + 0x18);
  }
  iVar14 = 0;
  *(byte *)(param_1 + 0x18) = bVar13 | 0x20;
LAB_03f2b3cc:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x90));
  return iVar14;
LAB_03f2b398:
  if ((param_2 == 0) && (*(long *)(param_1 + 0x28) != 0)) {
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xdf;
  }
  iVar14 = 0;
  if (param_2 != 0) {
    iVar14 = iVar15;
  }
  goto LAB_03f2b3cc;
}


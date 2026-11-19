
long FUN_03885a70(long *param_1,long param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x43));
  switch(*(undefined4 *)(param_2 + 0x18)) {
  case 0:
  case 1:
    if ((param_1[5] == *(long *)(param_2 + 8)) &&
       ((uint)*(byte *)((long)param_1 + 0x31) !=
        ((uint)((ulong)*(undefined8 *)(param_2 + 0x10) >> 8) & 0xff))) {
      *(short *)(param_1 + 6) = (short)*(undefined8 *)(param_2 + 0x10);
      (**(code **)(*param_1 + 0x278))(param_1,param_2);
      FUN_0388d4f0(param_1[0x1f]);
      lVar4 = param_1[0x1f];
      if (*(int *)(lVar4 + 0x28) != 0) {
        plVar6 = *(long **)(lVar4 + 0x30);
        lVar7 = (long)*(int *)(lVar4 + 0x28) << 3;
        do {
          lVar9 = *plVar6;
          if (((*(long *)(lVar9 + 0x10) == param_1[5]) &&
              (*(char *)(lVar9 + 0x18) == (char)param_1[6])) &&
             (*(char *)(lVar9 + 0x19) == *(char *)((long)param_1 + 0x31))) goto LAB_03885c28;
          plVar6 = plVar6 + 1;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
      if (((*(long *)(lVar4 + 0x88) != param_1[5]) || (*(char *)(lVar4 + 0x90) != (char)param_1[6]))
         || (*(char *)(lVar4 + 0x91) != *(char *)((long)param_1 + 0x31))) {
LAB_03885d60:
        auVar12 = (**(code **)(**(long **)(*(long *)PTR_DAT_04bcb7d8 + 0x68) + 0x1d8))
                            (*(long **)(*(long *)PTR_DAT_04bcb7d8 + 0x68),0);
        lVar7 = *auVar12._8_8_;
        lVar9 = *(long *)(auVar12._0_8_ + 0xf8);
        iVar3 = *(int *)(lVar9 + 0x28);
        plVar6 = *(long **)(lVar9 + 0x30);
        lVar4 = (long)iVar3 << 3;
        if (iVar3 != 0) {
          lVar11 = lVar4;
          plVar8 = plVar6;
          do {
            lVar10 = *plVar8;
            if (((*(long *)(lVar10 + 0x10) == lVar7) && (*(char *)(lVar10 + 0x18) == '\0')) &&
               (*(char *)(lVar10 + 0x19) == '\0')) goto LAB_03885e00;
            plVar8 = plVar8 + 1;
            lVar11 = lVar11 + -8;
          } while (lVar11 != 0);
        }
        if (((*(long *)(lVar9 + 0x88) == lVar7) && (*(char *)(lVar9 + 0x90) == '\0')) &&
           (*(char *)(lVar9 + 0x91) == '\0')) {
          lVar10 = lVar9 + 0x78;
LAB_03885e00:
          if (*(int *)(lVar10 + 8) != 3) {
            return lVar7;
          }
        }
        if (iVar3 != 0) {
          do {
            lVar11 = *plVar6;
            if (((*(long *)(lVar11 + 0x10) == lVar7) && (*(char *)(lVar11 + 0x18) == '\0')) &&
               (*(char *)(lVar11 + 0x19) == '\x01')) goto LAB_03885e70;
            plVar6 = plVar6 + 1;
            lVar4 = lVar4 + -8;
          } while (lVar4 != 0);
        }
        if (((*(long *)(lVar9 + 0x88) == lVar7) && (*(char *)(lVar9 + 0x90) == '\0')) &&
           (*(char *)(lVar9 + 0x91) == '\x01')) {
          lVar11 = lVar9 + 0x78;
LAB_03885e70:
          if (*(int *)(lVar11 + 8) != 3) {
            return lVar7;
          }
        }
        lVar4 = *(long *)(DAT_05ae6a60 + 0x30);
        if (*(char *)(lVar4 + 0x80) == '\0') {
          *(undefined1 *)(lVar4 + 0x80) = 1;
          *(undefined8 *)(lVar4 + 0x84) = 9;
          return 0;
        }
        return 0;
      }
      lVar9 = lVar4 + 0x78;
LAB_03885c28:
      *(undefined1 *)(param_1 + 7) = *(undefined1 *)(lVar9 + 0x21);
      lVar7 = param_1[2];
      plVar6 = *(long **)(lVar4 + 0x30);
      iVar3 = *(int *)(lVar4 + 0x28);
      if (iVar3 != 0) {
        cVar2 = (char)param_1[3];
        lVar9 = (long)iVar3 << 3;
        cVar1 = *(char *)((long)param_1 + 0x19);
        plVar8 = plVar6;
        do {
          lVar11 = *plVar8;
          if (((*(long *)(lVar11 + 0x10) == lVar7) && (*(char *)(lVar11 + 0x18) == cVar2)) &&
             (*(char *)(lVar11 + 0x19) == cVar1)) goto LAB_03885cb8;
          plVar8 = plVar8 + 1;
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
      }
      if (((*(long *)(lVar4 + 0x88) == lVar7) &&
          (cVar2 = *(char *)(lVar4 + 0x90), cVar2 == (char)param_1[3])) &&
         (cVar1 = *(char *)((long)param_1 + 0x19), *(char *)(lVar4 + 0x91) == cVar1)) {
LAB_03885cb8:
        if (iVar3 != 0) {
          lVar9 = (long)iVar3 << 3;
          do {
            lVar11 = *plVar6;
            if (((*(long *)(lVar11 + 0x10) == lVar7) && (*(char *)(lVar11 + 0x18) == cVar2)) &&
               (*(char *)(lVar11 + 0x19) == cVar1)) goto LAB_03885d24;
            plVar6 = plVar6 + 1;
            lVar9 = lVar9 + -8;
          } while (lVar9 != 0);
        }
        if (((*(long *)(lVar4 + 0x88) != lVar7) || (*(char *)(lVar4 + 0x90) != cVar2)) ||
           (*(char *)(lVar4 + 0x91) != cVar1)) goto LAB_03885d60;
        lVar11 = lVar4 + 0x78;
LAB_03885d24:
        *(undefined1 *)(param_1 + 4) = *(undefined1 *)(lVar11 + 0x21);
      }
      param_1[8] = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x90) + 0xc0) + 0x4f0);
      (**(code **)(*param_1 + 0x1d8))(param_1,0);
      goto switchD_03885abc_caseD_4;
    }
  case 2:
    pcVar5 = *(code **)(*param_1 + 0x278);
    break;
  case 3:
    pcVar5 = *(code **)(*param_1 + 0x288);
    break;
  default:
    goto switchD_03885abc_caseD_4;
  case 5:
    pcVar5 = *(code **)(*param_1 + 0x298);
    break;
  case 6:
    pcVar5 = *(code **)(*param_1 + 0x2a8);
    break;
  case 7:
    pcVar5 = *(code **)(*param_1 + 0x2b0);
    break;
  case 8:
    pcVar5 = *(code **)(*param_1 + 0x2b8);
    break;
  case 9:
    pcVar5 = *(code **)(*param_1 + 0x2c0);
    break;
  case 10:
    pcVar5 = *(code **)(*param_1 + 0x2c8);
    break;
  case 0xb:
    pcVar5 = *(code **)(*param_1 + 0x2d8);
    break;
  case 0xc:
    pcVar5 = *(code **)(*param_1 + 0x2e0);
  }
  (*pcVar5)(param_1,param_2);
switchD_03885abc_caseD_4:
  lVar4 = nn::os::UnlockMutex((MutexType *)(param_1 + 0x43));
  return lVar4;
}


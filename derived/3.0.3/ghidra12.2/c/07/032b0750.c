
void FUN_032b0750(long *param_1)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  long *plVar5;
  long *plVar6;
  
  plVar6 = (long *)param_1[2];
  plVar2 = (long *)param_1[3];
  if (plVar6 == plVar2) {
LAB_032b0808:
    cVar1 = (char)param_1[0xc];
joined_r0x032b0868:
    if (cVar1 == '\0') {
      plVar6 = (long *)param_1[2];
      if (((long *)param_1[3] != plVar6) &&
         (3 < *(int *)(*plVar6 + 0x24) - 1U && *(int *)(*plVar6 + 0x24) != 6)) {
        plVar2 = plVar6 + 2;
        plVar5 = plVar6;
        if (plVar2 != (long *)param_1[3]) {
          *plVar6 = *plVar2;
          plVar6[1] = plVar6[3];
          plVar5 = plVar2;
          plVar2 = plVar6 + 4;
          if (plVar6 + 4 != (long *)param_1[3]) {
            do {
              plVar5 = plVar2;
              plVar5[-2] = *plVar5;
              plVar5[-1] = plVar5[1];
              plVar2 = plVar5 + 2;
            } while (plVar5 + 2 != (long *)param_1[3]);
          }
        }
        param_1[3] = (long)plVar5;
        (**(code **)(*param_1 + 0x10))(param_1);
        plVar6 = (long *)param_1[2];
        if (((long *)param_1[3] != plVar6) && (*(char *)((long)param_1 + 100) == '\0')) {
          plVar2 = (long *)*plVar6;
          if ((int)plVar6[1] == 2) {
            if (*(int *)((long)plVar2 + 0x24) == 1) {
              *(undefined4 *)((long)plVar2 + 0x24) = 2;
              (**(code **)(*plVar2 + 0x48))();
              *(undefined4 *)(plVar6 + 1) = 0;
            }
          }
          else if (*(int *)((long)plVar2 + 0x24) == 5) {
            *(undefined4 *)((long)plVar2 + 0x24) = 2;
            (**(code **)(*plVar2 + 0x58))();
          }
        }
      }
      plVar6 = (long *)param_1[2];
      if (plVar6 != (long *)param_1[3]) {
        plVar2 = plVar6;
        do {
          if (*(uint *)(*plVar2 + 0x24) < 7 &&
              (1 << (ulong)(*(uint *)(*plVar2 + 0x24) & 0x1f) & 0x5cU) != 0) {
            return;
          }
          plVar2 = plVar2 + 2;
        } while (plVar2 != (long *)param_1[3]);
        if (*(char *)((long)param_1 + 100) == '\0') {
          plVar2 = (long *)*plVar6;
          if ((int)plVar6[1] == 2) {
            if (*(int *)((long)plVar2 + 0x24) == 1) {
              *(undefined4 *)((long)plVar2 + 0x24) = 2;
              (**(code **)(*plVar2 + 0x48))();
              *(undefined4 *)(plVar6 + 1) = 0;
            }
          }
          else if (*(int *)((long)plVar2 + 0x24) == 5) {
            *(undefined4 *)((long)plVar2 + 0x24) = 2;
                    /* WARNING: Could not recover jumptable at 0x032b09fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar2 + 0x58))();
            return;
          }
        }
      }
    }
    return;
  }
  plVar5 = plVar6;
  do {
    if (*(uint *)(*plVar5 + 0x24) < 7 &&
        (1 << (ulong)(*(uint *)(*plVar5 + 0x24) & 0x1f) & 0x54U) != 0) {
      return;
    }
    plVar5 = plVar5 + 2;
  } while (plVar5 != plVar2);
  plVar5 = plVar6;
  do {
    if ((int)plVar5[1] == 3) {
      lVar3 = *plVar5;
      param_1[3] = (long)plVar5;
      (**(code **)(*param_1 + 0x10))(param_1,lVar3);
      plVar6 = (long *)param_1[2];
      plVar2 = (long *)param_1[3];
      break;
    }
    plVar5 = plVar5 + 2;
  } while (plVar5 != plVar2);
  do {
    if (plVar6 == plVar2) goto LAB_032b0808;
    if ((int)plVar6[1] == 1) {
      plVar2 = (long *)*plVar6;
      if ((*(uint *)((long)plVar2 + 0x24) & 0xfffffffe) != 4) {
        if (*(char *)((long)param_1 + 0x62) == '\0') {
          if (2 < *(uint *)((long)plVar2 + 0x24) - 2) goto LAB_032b0860;
          uVar4 = 6;
        }
        else {
          uVar4 = 4;
        }
        *(undefined4 *)((long)plVar2 + 0x24) = uVar4;
        (**(code **)(*plVar2 + 0x60))();
      }
LAB_032b0860:
      *(undefined4 *)(plVar6 + 1) = 0;
      cVar1 = (char)param_1[0xc];
      goto joined_r0x032b0868;
    }
    plVar6 = plVar6 + 2;
  } while( true );
}


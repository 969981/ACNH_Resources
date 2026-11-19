
void FUN_038ebc00(long param_1,long param_2)

{
  long lVar1;
  short sVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  uVar3 = 5;
LAB_038ebc68:
  do {
    plVar4 = (long *)(param_2 + 0x28);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    uVar6 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 0x30) + uVar6) == '\0') goto LAB_038ebcc4;
      lVar7 = *(long *)(param_2 + 0x30) + uVar6;
      if (*(char *)(lVar7 + 1) == '\0') {
        uVar6 = uVar6 + 1;
        goto LAB_038ebcc4;
      }
      if (*(char *)(lVar7 + 2) == '\0') {
        uVar6 = uVar6 + 2;
        goto LAB_038ebcc4;
      }
      uVar6 = uVar6 + 3;
    } while (uVar6 != 0x80001);
    uVar6 = 0;
LAB_038ebcc4:
    (**(code **)(**(long **)(param_1 + 8) + 0x60))
              (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
               *(undefined4 *)(param_1 + 0x18),uVar6 & 0xffffffff);
    (**(code **)(**(long **)(param_1 + 8) + 0xb0))
              (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),plVar4,(uint)uVar6 & 0xff);
    if (*(int *)(param_2 + 0xa8) < 1) {
      (**(code **)(**(long **)(param_1 + 8) + 0x60))
                (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                 *(undefined4 *)(param_1 + 0x18),0);
    }
    else {
      (**(code **)(**(long **)(param_1 + 8) + 0x60))
                (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                 *(undefined4 *)(param_1 + 0x18));
      lVar7 = *(long *)(param_2 + 0xa0);
      if (lVar7 != param_2 + 0x98) {
        lVar5 = lVar7 + -0x30;
        do {
          (**(code **)(*(long *)(lVar7 + -0x30) + 0x18))(lVar5);
          uVar6 = 0;
          do {
            if (*(char *)(*(long *)(lVar5 + 8) + uVar6) == '\0') goto LAB_038ebdd4;
            lVar1 = *(long *)(lVar5 + 8) + uVar6;
            if (*(char *)(lVar1 + 1) == '\0') {
              uVar6 = uVar6 + 1;
              goto LAB_038ebdd4;
            }
            if (*(char *)(lVar1 + 2) == '\0') {
              uVar6 = uVar6 + 2;
              goto LAB_038ebdd4;
            }
            uVar6 = uVar6 + 3;
          } while (uVar6 != 0x80001);
          uVar6 = 0;
LAB_038ebdd4:
          (**(code **)(**(long **)(param_1 + 8) + 0x60))
                    (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                     *(undefined4 *)(param_1 + 0x18),uVar6 & 0xffffffff);
          (**(code **)(**(long **)(param_1 + 8) + 0xb0))
                    (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),lVar5,
                     (uint)uVar6 & 0xff);
          plVar4 = (long *)(lVar5 + 0x18);
          (**(code **)(*plVar4 + 0x18))(plVar4);
          uVar6 = 0;
          do {
            if (*(char *)(*(long *)(lVar5 + 0x20) + uVar6) == '\0') goto LAB_038ebd34;
            lVar1 = *(long *)(lVar5 + 0x20) + uVar6;
            if (*(char *)(lVar1 + 1) == '\0') {
              uVar6 = uVar6 + 1;
              goto LAB_038ebd34;
            }
            if (*(char *)(lVar1 + 2) == '\0') {
              uVar6 = uVar6 + 2;
              goto LAB_038ebd34;
            }
            uVar6 = uVar6 + 3;
          } while (uVar6 != 0x80001);
          uVar6 = 0;
LAB_038ebd34:
          (**(code **)(**(long **)(param_1 + 8) + 0x60))
                    (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                     *(undefined4 *)(param_1 + 0x18),uVar6 & 0xffffffff);
          (**(code **)(**(long **)(param_1 + 8) + 0xb0))
                    (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),plVar4,
                     (uint)uVar6 & 0xff);
          lVar7 = *(long *)(lVar7 + 8);
          lVar5 = lVar7 + -0x30;
        } while (lVar5 != param_2 + 0x68);
      }
    }
    if (*(long *)(param_2 + 0x80) != 0) {
      if (*(long *)(param_2 + 0x10) == 0) {
        sVar2 = *(short *)(param_2 + 0x88);
        (**(code **)(**(long **)(param_1 + 8) + 0x68))
                  (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                   *(undefined4 *)(param_1 + 0x18),sVar2);
        if (sVar2 != 0) {
          (**(code **)(**(long **)(param_1 + 8) + 0xb8))
                    (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                     *(undefined8 *)(param_2 + 0x80),sVar2);
        }
        lVar7 = *(long *)(param_2 + 0x18);
        if (lVar7 == 0) {
          uVar3 = 3;
LAB_038ebf84:
                    /* WARNING: Could not recover jumptable at 0x038ebfac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(**(long **)(param_1 + 8) + 0x60))
                    (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                     *(undefined4 *)(param_1 + 0x18),uVar3);
          return;
        }
        (**(code **)(**(long **)(param_1 + 8) + 0x60))
                  (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                   *(undefined4 *)(param_1 + 0x18),0);
        param_2 = lVar7 + -8;
      }
      else {
LAB_038ebef4:
        (**(code **)(**(long **)(param_1 + 8) + 0x68))
                  (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                   *(undefined4 *)(param_1 + 0x18),0);
        lVar7 = *(long *)(param_2 + 0x18);
        if (lVar7 == 0) {
          (**(code **)(**(long **)(param_1 + 8) + 0x60))
                    (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                     *(undefined4 *)(param_1 + 0x18),1);
          lVar7 = 0;
          if (*(long *)(param_2 + 0x10) != 0) {
            lVar7 = *(long *)(param_2 + 0x10) + -8;
          }
          param_2 = lVar7;
        }
        else {
          (**(code **)(**(long **)(param_1 + 8) + 0x60))
                    (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                     *(undefined4 *)(param_1 + 0x18),2);
          lVar5 = 0;
          if (*(long *)(param_2 + 0x10) != 0) {
            lVar5 = *(long *)(param_2 + 0x10) + -8;
          }
          FUN_038ebc00(param_1,lVar5);
          param_2 = lVar7 + -8;
        }
      }
      goto LAB_038ebc68;
    }
    if (*(long *)(param_2 + 0x10) != 0) goto LAB_038ebef4;
    (**(code **)(**(long **)(param_1 + 8) + 0x68))
              (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
               *(undefined4 *)(param_1 + 0x18),0);
    if (*(long *)(param_2 + 0x18) == 0) goto LAB_038ebf84;
    param_2 = *(long *)(param_2 + 0x18) + -8;
    (**(code **)(**(long **)(param_1 + 8) + 0x60))
              (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
               *(undefined4 *)(param_1 + 0x18),4);
  } while( true );
}


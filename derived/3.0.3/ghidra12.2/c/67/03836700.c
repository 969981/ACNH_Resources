
void FUN_03836700(long *param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  long *plVar7;
  int local_58;
  int local_54;
  undefined4 uStack_50;
  undefined8 local_48;
  
  pvVar5 = (void *)param_1[0xb];
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xfe;
  plVar7 = param_2 + 2;
  (**(code **)(*plVar7 + 0x18))(plVar7);
  pvVar6 = (void *)param_2[3];
  if (pvVar5 != pvVar6) {
    (**(code **)(param_2[2] + 0x18))(plVar7);
    lVar4 = 0;
    do {
      if (*(char *)(param_2[3] + lVar4) == '\0') goto LAB_038367ac;
      lVar1 = param_2[3] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_038367ac;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_038367ac;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_038367ac:
    iVar2 = (int)lVar4;
    if ((int)param_1[0xc] <= (int)lVar4) {
      iVar2 = (int)param_1[0xc] + -1;
    }
    memcpy(pvVar5,pvVar6,(long)iVar2);
    *(undefined1 *)((long)pvVar5 + (long)iVar2) = 0;
  }
  pvVar5 = (void *)param_1[0x1e];
  plVar7 = param_2 + 4;
  (**(code **)(*plVar7 + 0x18))(plVar7);
  pvVar6 = (void *)param_2[5];
  if (pvVar5 != pvVar6) {
    (**(code **)(param_2[4] + 0x18))(plVar7);
    lVar4 = 0;
    do {
      if (*(char *)(param_2[5] + lVar4) == '\0') goto LAB_0383684c;
      lVar1 = param_2[5] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0383684c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0383684c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0383684c:
    iVar2 = (int)lVar4;
    if ((int)param_1[0x1f] <= (int)lVar4) {
      iVar2 = (int)param_1[0x1f] + -1;
    }
    memcpy(pvVar5,pvVar6,(long)iVar2);
    *(undefined1 *)((long)pvVar5 + (long)iVar2) = 0;
  }
  (**(code **)(*param_1 + 0x168))(param_1,param_2);
  cVar3 = (**(code **)(*param_1 + 0x138))(param_1);
  local_58 = (int)cVar3;
  cVar3 = (**(code **)(*param_1 + 0x140))(param_1);
  local_54 = (int)cVar3;
  uStack_50 = 1;
  local_48 = *param_2;
  FUN_03835980(param_1,&local_58);
  (**(code **)(*param_1 + 0x120))(param_1);
  (**(code **)(*param_1 + 0x128))(param_1,*param_2);
                    /* WARNING: Could not recover jumptable at 0x03836914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x130))(param_1);
  return;
}


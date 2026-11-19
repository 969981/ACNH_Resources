
void FUN_038752b0(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  void *__dest;
  void *__src;
  long *plVar7;
  undefined **local_60;
  long lStack_58;
  undefined1 *local_50;
  undefined8 uStack_48;
  
  __dest = *(void **)(param_1 + 0x2e0);
  *(undefined8 *)(param_1 + 0x2b0) = *param_2;
  uVar3 = param_2[1];
  uVar5 = param_2[2];
  uVar4 = param_2[3];
  *(undefined8 *)(param_1 + 0x2d0) = param_2[4];
  *(undefined8 *)(param_1 + 0x2c8) = uVar4;
  *(undefined8 *)(param_1 + 0x2c0) = uVar5;
  *(undefined8 *)(param_1 + 0x2b8) = uVar3;
  plVar7 = param_2 + 5;
  (**(code **)(*plVar7 + 0x18))(plVar7);
  __src = (void *)param_2[6];
  if (__dest != __src) {
    (**(code **)(param_2[5] + 0x18))(plVar7);
    lVar6 = 0;
    do {
      if (*(char *)(param_2[6] + lVar6) == '\0') goto LAB_0387537c;
      lVar1 = param_2[6] + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_0387537c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_0387537c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_0387537c:
    iVar2 = (int)lVar6;
    if (*(int *)(param_1 + 0x2e8) <= (int)lVar6) {
      iVar2 = *(int *)(param_1 + 0x2e8) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  lVar6 = param_1 + 9;
  if (param_3 != 0) {
    lVar6 = param_3;
  }
  local_50 = &LAB_03875410;
  uStack_48 = 0;
  local_60 = &PTR_LAB_04b60280;
  lStack_58 = param_1;
  FUN_038755f4(*(undefined8 *)(*(long *)PTR_DAT_04bcb7d8 + 0x88),&local_60,lVar6,0,0,0);
  return;
}


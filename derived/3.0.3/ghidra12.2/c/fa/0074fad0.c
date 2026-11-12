
void FUN_0074fad0(long param_1,uint param_2,long *param_3,undefined4 param_4)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  void *__dest;
  void *__src;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x298);
  if (lVar7 != 0) {
    if (*(uint *)(param_1 + 0x290) <= param_2) {
      param_2 = 0;
    }
    lVar6 = lVar7 + (long)(int)param_2 * 0x110;
    if (*(long *)(lVar6 + 0x10) == 0 && *(long *)(lVar6 + 8) == 0) {
      lVar6 = lVar7 + (long)(int)param_2 * 0x110;
      __dest = *(void **)(lVar6 + 0x70);
      plVar1 = (long *)(lVar6 + 0x68);
      (**(code **)(*param_3 + 0x18))(param_3);
      __src = (void *)param_3[1];
      if (__dest != __src) {
        (**(code **)(*param_3 + 0x18))(param_3);
        lVar5 = 0;
        do {
          if (*(char *)(param_3[1] + lVar5) == '\0') goto LAB_0074fbac;
          lVar2 = param_3[1] + lVar5;
          if (*(char *)(lVar2 + 1) == '\0') {
            lVar5 = lVar5 + 1;
            goto LAB_0074fbac;
          }
          if (*(char *)(lVar2 + 2) == '\0') {
            lVar5 = lVar5 + 2;
            goto LAB_0074fbac;
          }
          lVar5 = lVar5 + 3;
        } while (lVar5 != 0x80001);
        lVar5 = 0;
LAB_0074fbac:
        iVar3 = (int)lVar5;
        if (*(int *)(lVar6 + 0x78) <= (int)lVar5) {
          iVar3 = *(int *)(lVar6 + 0x78) + -1;
        }
        memcpy(__dest,__src,(long)iVar3);
        *(undefined1 *)((long)__dest + (long)iVar3) = 0;
      }
      (**(code **)(*plVar1 + 0x18))(plVar1);
      uVar4 = FUN_006bd550(*(undefined8 *)(lVar6 + 0x70),0);
      lVar5 = lVar7 + (long)(int)param_2 * 0x110;
      *(undefined4 *)(lVar5 + 0x100) = uVar4;
      *(undefined4 *)(lVar5 + 0x108) = param_4;
      if (*(char *)(param_1 + 0x2a0) != '\0') {
        FUN_00818830(*(undefined8 *)PTR_DAT_04bb2110,lVar7 + (long)(int)param_2 * 0x110 + 0x18,
                     plVar1,param_4,PTR_PTR_04bb2238);
      }
      plVar1 = (long *)(*(int *)(param_1 + 0x28c) + lVar6);
      lVar7 = *(long *)(param_1 + 0x278);
      *(long **)(param_1 + 0x278) = plVar1;
      *plVar1 = lVar7;
      plVar1[1] = param_1 + 0x278;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 8) = plVar1;
      }
      *(int *)(param_1 + 0x288) = *(int *)(param_1 + 0x288) + 1;
    }
  }
  return;
}


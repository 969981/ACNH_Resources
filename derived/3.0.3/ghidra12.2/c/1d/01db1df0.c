
undefined8
FUN_01db1df0(undefined8 *param_1,int param_2,int *param_3,void *param_4,uint param_5,uint param_6)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  
  if (param_2 < 0) {
    return 0;
  }
  if (0x18ff4 < param_5) {
    return 0;
  }
  plVar6 = (long *)*param_1;
  if ((*(int *)PTR_DAT_04bc14a8 <= param_2 || plVar6 == (long *)0x0) ||
     (((param_6 & 1) == 0 && (*(int *)(*DAT_0537d558 + 0x508) != 4)))) {
    return 0;
  }
  nn::os::LockMutex((MutexType *)(plVar6 + 0x1a));
  if (*plVar6 != 0) {
    plVar7 = (long *)plVar6[0xf];
    uVar8 = 0;
    if (plVar7 == (long *)0x0) goto LAB_01db1f74;
    if ((ulong)(param_5 + 0x10) <= 0x8000 - (ulong)*(uint *)(plVar7 + 1)) {
      uVar3 = *(undefined1 *)((long)param_3 + 6);
      piVar1 = (int *)(*plVar7 + (ulong)*(uint *)(plVar7 + 1));
      iVar4 = param_3[1];
      iVar2 = *param_3;
      *piVar1 = param_2;
      piVar1[1] = iVar2;
      *(short *)(piVar1 + 2) = (short)iVar4;
      *(undefined1 *)((long)piVar1 + 10) = uVar3;
      piVar1[3] = param_5;
      memcpy(piVar1 + 4,param_4,(ulong)param_5);
      *(uint *)(plVar7 + 1) = (int)plVar7[1] + param_5 + 0x10;
      *(int *)((long)plVar7 + 0xc) = *(int *)((long)plVar7 + 0xc) + 1;
      uVar8 = 1;
      goto LAB_01db1f74;
    }
    if ((*(int *)(DAT_05358908 + 0x38) != 0) && (*(char *)(DAT_05358908 + 0xfd8) == '\0')) {
      plVar7 = *(long **)(DAT_05ae6a60 + 0x30);
      uVar5 = (**(code **)(*plVar7 + 0x10))(plVar7);
      if (((uVar5 & 1) == 0) && (uVar5 = (**(code **)(*plVar7 + 0x18))(plVar7), (uVar5 & 1) == 0)) {
        FUN_0387de70(plVar7,&DAT_05b03f00,0xe,0x14,0x2a);
      }
    }
  }
  uVar8 = 0;
LAB_01db1f74:
  nn::os::UnlockMutex((MutexType *)(plVar6 + 0x1a));
  return uVar8;
}


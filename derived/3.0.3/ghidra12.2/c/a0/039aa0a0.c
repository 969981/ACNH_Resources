
void FUN_039aa0a0(long param_1,float *param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  param_2[4] = -3.4028235e+38;
  param_2[5] = -3.4028235e+38;
  param_2[0] = 3.4028235e+38;
  param_2[1] = 3.4028235e+38;
  param_2[2] = 3.4028235e+38;
  puVar3 = PTR_DAT_04bb3490;
  puVar2 = PTR_DAT_04bb3488;
  param_2[3] = -3.4028235e+38;
  if (*(int *)(param_1 + 0x40) != 0) {
    lVar8 = (long)*(int *)(param_1 + 0x40) << 3;
    puVar7 = *(undefined8 **)(param_1 + 0x48);
    puVar1 = PTR_DAT_04bb3498 + 0x10;
    do {
      plVar6 = *(long **)*puVar7;
      if (*(int *)((long)plVar6 + 0xa4) != 0) {
        if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar3), iVar4 != 0)) {
          *(undefined **)puVar2 = puVar1;
          __cxa_guard_release(puVar3);
        }
        uVar5 = (**(code **)*plVar6)(plVar6,puVar2);
        if ((uVar5 & 1) != 0) {
          local_78 = 0x7f7fffff7f7fffff;
          local_70 = 0xff7fffff7f7fffff;
          local_68 = 0xff7fffffff7fffff;
          (**(code **)(*plVar6 + 0x220))(plVar6,&local_78,param_3 & 1);
          if ((float)local_78 < *param_2) {
            *param_2 = (float)local_78;
          }
          if (local_78._4_4_ < param_2[1]) {
            param_2[1] = local_78._4_4_;
          }
          if ((float)local_70 < param_2[2]) {
            param_2[2] = (float)local_70;
          }
          if (param_2[3] < local_70._4_4_) {
            param_2[3] = local_70._4_4_;
          }
          if (param_2[4] < (float)local_68) {
            param_2[4] = (float)local_68;
          }
          if (param_2[5] < local_68._4_4_) {
            param_2[5] = local_68._4_4_;
          }
        }
      }
      puVar7 = puVar7 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
  }
  return;
}



void FUN_007550a0(long param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  int iVar7;
  undefined *__dest;
  
  lVar3 = DAT_05ae7600;
  iVar7 = *(int *)(param_1 + 0x2f0);
  if (iVar7 < 1) goto LAB_007552d0;
  if (DAT_05ae7600 == 0) {
    pvVar6 = malloc((long)iVar7 << 3);
joined_r0x00755140:
    if (pvVar6 != (void *)0x0) {
      *(void **)(param_1 + 0x590) = pvVar6;
      *(undefined4 *)(param_1 + 0x588) = 0;
      *(int *)(param_1 + 0x58c) = iVar7;
    }
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar5 = (long *)(lVar3 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) {
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,(long)iVar7 << 3,8);
      goto joined_r0x00755140;
    }
  }
  if (0 < *(int *)(param_1 + 0x2f0)) {
    iVar7 = 0;
    puVar1 = PTR_DAT_04bb36a0 + 0x10;
    do {
      lVar3 = DAT_05ae7600;
      if (DAT_05ae7600 == 0) {
        plVar5 = malloc(0x2f0);
      }
      else {
        plVar5 = param_3;
        if (param_3 == (long *)0x0) {
          lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar5 = (long *)(lVar3 + 8);
          if (lVar4 != 0) {
            plVar5 = (long *)(lVar4 + 0xa8);
          }
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) {
            plVar5 = (long *)0x0;
            goto LAB_007551fc;
          }
        }
        plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x2f0,8);
      }
LAB_007551fc:
      FUN_00705c50(plVar5);
      __dest = (undefined *)plVar5[0xc];
      plVar5[0x54] = (long)&DAT_3f8000003f800000;
      plVar5[0x53] = 0;
      *(undefined4 *)(plVar5 + 0x55) = 0x3f800000;
      plVar5[0x52] = 0;
      plVar5[0x51] = 0;
      plVar5[0x50] = 0;
      plVar5[0x4f] = 0;
      *(undefined8 *)((long)plVar5 + 700) = 0;
      *(undefined8 *)((long)plVar5 + 0x2c1) = 0;
      *(undefined8 *)((long)plVar5 + 0x2dc) = 0;
      *(undefined8 *)((long)plVar5 + 0x2ac) = 0;
      *(undefined8 *)((long)plVar5 + 0x2b4) = 0;
      *(undefined8 *)((long)plVar5 + 0x2cc) = 0;
      *(undefined8 *)((long)plVar5 + 0x2d4) = 0;
      if (__dest != &DAT_040afd37) {
        iVar2 = 4;
        if ((int)plVar5[0xd] < 5) {
          iVar2 = (int)plVar5[0xd] + -1;
        }
        memcpy(__dest,&DAT_040afd37,(long)iVar2);
        __dest[iVar2] = 0;
      }
      *plVar5 = (long)puVar1;
      plVar5[0x5d] = 0;
      *(uint *)(plVar5 + 0x4c) = *(uint *)(plVar5 + 0x4c) & 0xfffffff0 | 5;
      FUN_00756290(param_1 + 0x2f8,plVar5,*(undefined8 *)(param_1 + 0x48));
      if (*(int *)(param_1 + 0x588) < *(int *)(param_1 + 0x58c)) {
        *(long **)(*(long *)(param_1 + 0x590) + (long)*(int *)(param_1 + 0x588) * 8) = plVar5;
        *(int *)(param_1 + 0x588) = *(int *)(param_1 + 0x588) + 1;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_1 + 0x2f0));
  }
LAB_007552d0:
                    /* WARNING: Could not recover jumptable at 0x00755300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x2f8) + 0x38))(param_1 + 0x2f8,param_2,param_3);
  return;
}



void FUN_0037fd60(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined8 *__s;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  undefined4 local_64;
  
  puVar12 = param_1 + 2;
  *param_1 = param_3;
  __s = param_1 + 1;
  FUN_00387858(puVar12);
  FUN_00387858(param_1 + 4);
  FUN_00387858(param_1 + 0xc);
  memset(__s,0,0x221);
  lVar6 = FUN_0037c748(*param_1,3);
  lVar7 = FUN_0037c748(*param_1,4);
  uVar8 = FUN_003693bc(param_6);
  if (lVar6 == 0) {
    if (lVar7 != 0) goto LAB_00380000;
    iVar4 = *(int *)(param_1 + 0x44);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    *__s = *(undefined8 *)(param_2 + 8);
    param_1[2] = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    param_1[5] = *(undefined8 *)(param_2 + 0x28);
    param_1[6] = uVar3;
    param_1[3] = uVar1;
    param_1[4] = uVar2;
    uVar1 = *(undefined8 *)(param_2 + 0x38);
    uVar2 = *(undefined8 *)(param_2 + 0x40);
    uVar3 = *(undefined8 *)(param_2 + 0x50);
    param_1[9] = *(undefined8 *)(param_2 + 0x48);
    param_1[10] = uVar3;
    param_1[7] = uVar1;
    param_1[8] = uVar2;
    if ((*(byte *)(lVar6 + 0x14) & 1) != 0) {
      puVar9 = (undefined8 *)(**(code **)(**(long **)(param_2 + 0x28) + 0x48))();
      if (((*PTR_DAT_04bd0790 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd0790), iVar4 != 0)) {
        if (((*PTR_DAT_04bd07a0 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd07a0), iVar4 != 0)) {
          *(undefined8 *)PTR_DAT_04bd07a8 = 0;
          __cxa_guard_release(PTR_DAT_04bd07a0);
        }
        *(undefined **)PTR_DAT_04bd0798 = PTR_DAT_04bd07a8;
        __cxa_guard_release(PTR_DAT_04bd0790);
      }
      if (puVar9 == (undefined8 *)0x0) {
LAB_0037fe94:
        puVar9 = (undefined8 *)0x0;
      }
      else {
        puVar10 = (undefined8 *)(**(code **)*puVar9)(puVar9);
        if (puVar10 != (undefined8 *)PTR_DAT_04bd0798) {
          do {
            puVar10 = (undefined8 *)*puVar10;
          } while (puVar10 != (undefined8 *)PTR_DAT_04bd0798 && puVar10 != (undefined8 *)0x0);
          if (puVar10 == (undefined8 *)0x0) goto LAB_0037fe94;
        }
      }
      lVar11 = FUN_0036b2f0(uVar8,0,puVar9);
      FUN_0038789c(param_1 + 4,*(undefined8 *)(lVar11 + 8));
    }
    if ((*(uint *)(lVar6 + 0xc) & 1) == 0) {
      if ((*(uint *)(lVar6 + 0xc) >> 1 & 1) != 0) {
        puVar9 = (undefined8 *)(**(code **)(**(long **)(param_2 + 0x18) + 0x48))();
        if (((*PTR_DAT_04bd08c8 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd08c8), iVar4 != 0)) {
          if (((*PTR_DAT_04bd07a0 & 1) == 0) &&
             (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd07a0), iVar4 != 0)) {
            *(undefined8 *)PTR_DAT_04bd07a8 = 0;
            __cxa_guard_release(PTR_DAT_04bd07a0);
          }
          *(undefined **)PTR_DAT_04bd08d0 = PTR_DAT_04bd07a8;
          __cxa_guard_release(PTR_DAT_04bd08c8);
        }
        if (puVar9 == (undefined8 *)0x0) {
LAB_0037ff28:
          puVar9 = (undefined8 *)0x0;
        }
        else {
          puVar10 = (undefined8 *)(**(code **)*puVar9)(puVar9);
          if (puVar10 != (undefined8 *)PTR_DAT_04bd08d0) {
            do {
              puVar10 = (undefined8 *)*puVar10;
            } while (puVar10 != (undefined8 *)PTR_DAT_04bd08d0 && puVar10 != (undefined8 *)0x0);
            if (puVar10 == (undefined8 *)0x0) goto LAB_0037ff28;
          }
        }
        lVar11 = FUN_0036b494(uVar8,param_4,param_5,puVar9);
        FUN_0038789c(puVar12,*(undefined8 *)(lVar11 + 8));
        *(undefined1 *)(param_1 + 0x45) = 1;
      }
      *(undefined1 *)((long)param_1 + 0x54) = 0;
    }
    else {
      puVar9 = (undefined8 *)(**(code **)(**(long **)(param_2 + 0x18) + 0x48))();
      if (((*PTR_DAT_04bd0790 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd0790), iVar4 != 0)) {
        if (((*PTR_DAT_04bd07a0 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd07a0), iVar4 != 0)) {
          *(undefined8 *)PTR_DAT_04bd07a8 = 0;
          __cxa_guard_release(PTR_DAT_04bd07a0);
        }
        *(undefined **)PTR_DAT_04bd0798 = PTR_DAT_04bd07a8;
        __cxa_guard_release(PTR_DAT_04bd0790);
      }
      if (puVar9 == (undefined8 *)0x0) {
LAB_0037ffd4:
        puVar9 = (undefined8 *)0x0;
      }
      else {
        puVar10 = (undefined8 *)(**(code **)*puVar9)(puVar9);
        if (puVar10 != (undefined8 *)PTR_DAT_04bd0798) {
          do {
            puVar10 = (undefined8 *)*puVar10;
          } while (puVar10 != (undefined8 *)PTR_DAT_04bd0798 && puVar10 != (undefined8 *)0x0);
          if (puVar10 == (undefined8 *)0x0) goto LAB_0037ffd4;
        }
      }
      lVar11 = FUN_0036b2f0(uVar8,param_1 + 0x45,puVar9);
      FUN_0038789c(puVar12,*(undefined8 *)(lVar11 + 8));
      *(undefined1 *)((long)param_1 + 0x54) = 0;
    }
    if (lVar7 != 0) {
LAB_00380000:
      memcpy(param_1 + 0xb,(void *)(param_2 + 0x58),0x1c0);
      puVar12 = (undefined8 *)(**(code **)(**(long **)(param_2 + 0x68) + 0x48))();
      if (((*PTR_DAT_04bd0790 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd0790), iVar4 != 0)) {
        if (((*PTR_DAT_04bd07a0 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd07a0), iVar4 != 0)) {
          *(undefined8 *)PTR_DAT_04bd07a8 = 0;
          __cxa_guard_release(PTR_DAT_04bd07a0);
        }
        *(undefined **)PTR_DAT_04bd0798 = PTR_DAT_04bd07a8;
        __cxa_guard_release(PTR_DAT_04bd0790);
      }
      if (puVar12 == (undefined8 *)0x0) {
LAB_00380074:
        puVar12 = (undefined8 *)0x0;
      }
      else {
        puVar9 = (undefined8 *)(**(code **)*puVar12)(puVar12);
        if (puVar9 != (undefined8 *)PTR_DAT_04bd0798) {
          do {
            puVar9 = (undefined8 *)*puVar9;
          } while (puVar9 != (undefined8 *)PTR_DAT_04bd0798 && puVar9 != (undefined8 *)0x0);
          if (puVar9 == (undefined8 *)0x0) goto LAB_00380074;
        }
      }
      lVar11 = FUN_0036b2f0(uVar8,0,puVar12);
      FUN_0038789c(param_1 + 0xc,*(undefined8 *)(lVar11 + 8));
      param_1[0xe] = *(undefined8 *)(lVar11 + 0x20);
      uVar13 = *(undefined4 *)(puVar12 + 5);
      *(undefined1 *)(param_1 + 0x13) = 0;
      FUN_0037f840(param_1,param_4,param_5,lVar6,lVar7);
      goto LAB_0038015c;
    }
    local_64 = 1;
    lVar7 = FUN_0036abf8(param_5,param_4,0x4b53414d,1,&local_64);
    param_1[0x43] = lVar7;
    iVar4 = FUN_0038c040(*(undefined8 *)(lVar7 + 0x38),0x4b53414d,1,&local_64);
    *(int *)(param_1 + 0x44) = iVar4;
  }
  lVar11 = *(long *)(param_1[0x43] + 0x30);
  iVar5 = FUN_00386648();
  uVar13 = 0x3f800000;
  lVar7 = 0;
  *(undefined4 *)((long)param_1 + 0x224) = *(undefined4 *)(lVar11 + (long)(iVar5 * iVar4) * 4);
LAB_0038015c:
  FUN_0037f900(uVar13,param_1,param_4,param_5,lVar6,lVar7);
  *__s = 0;
  param_1[0xb] = 0;
  return;
}


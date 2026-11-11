
ulong FUN_003dca60(long param_1,void *param_2,ulong param_3,int *param_4,long *param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  void *__dest;
  void *__src;
  ulong __n;
  long lVar7;
  size_t __n_00;
  int local_64;
  int local_48;
  int local_44;
  
  plVar3 = *(long **)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x18);
  if ((plVar3 == (long *)0x0 || lVar5 == 0) || *(long *)(param_1 + 0x20) == 0) {
    if (param_5 == (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003dccf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3,param_4);
      return uVar4;
    }
    (**(code **)*param_5)(param_5,param_6);
    uVar4 = (**(code **)(**(long **)(param_1 + 8) + 0x20))
                      (*(long **)(param_1 + 8),param_2,param_3,param_4);
    (**(code **)(*param_5 + 8))(param_5,param_6);
    return uVar4;
  }
  uVar4 = *(ulong *)(param_1 + 0x30);
  if ((uVar4 != 0) && (*(char *)(param_1 + 0x38) == '\x02')) {
    lVar7 = *(long *)(param_1 + 0x28);
    lVar5 = (**(code **)(*plVar3 + 0x38))();
    if (lVar5 != lVar7) {
      uVar4 = (**(code **)(**(long **)(param_1 + 8) + 0x58))();
      if ((uVar4 & 1) == 0) {
        iVar2 = -0x80000000;
        goto joined_r0x003dcdac;
      }
      iVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x30))(*(long **)(param_1 + 8),lVar7,0);
      if (iVar2 < 0) goto joined_r0x003dcdac;
    }
    local_44 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x28))
              (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x30),&local_44);
    *(undefined1 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x30) = 0;
    iVar2 = local_44;
    if (local_44 < 0) goto joined_r0x003dcdac;
    plVar3 = *(long **)(param_1 + 8);
    uVar4 = 0;
    lVar5 = *(long *)(param_1 + 0x18);
  }
  __n_00 = 0;
  if ((((plVar3 != (long *)0x0) && (lVar5 != 0)) && (__n_00 = 0, *(long *)(param_1 + 0x20) != 0)) &&
     (*(char *)(param_1 + 0x38) == '\x01')) {
    lVar7 = *(long *)(param_1 + 0x28);
    if ((lVar7 == 0xffffffff) ||
       (uVar6 = *(long *)(param_1 + 0x10) - lVar7, *(long *)(param_1 + 0x10) < lVar7)) {
      __n_00 = 0;
    }
    else {
      __n_00 = 0;
      if (uVar6 <= uVar4) {
        __n_00 = uVar4 - uVar6;
      }
      if (uVar6 + param_3 <= uVar4) {
        __n_00 = param_3;
      }
      if (__n_00 != 0) {
        memcpy(param_2,(void *)(lVar5 + uVar6),__n_00);
        *(size_t *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + __n_00;
      }
    }
  }
  uVar4 = param_3 - __n_00;
  if (__n_00 <= param_3 && uVar4 != 0) {
    lVar5 = *(long *)(param_1 + 0x10);
    lVar7 = (**(code **)(**(long **)(param_1 + 8) + 0x38))();
    if (lVar7 != lVar5) {
      uVar6 = (**(code **)(**(long **)(param_1 + 8) + 0x58))();
      if ((uVar6 & 1) == 0) {
        iVar2 = -0x80000000;
joined_r0x003dcdac:
        if (param_4 == (int *)0x0) {
          return 0;
        }
        *param_4 = iVar2;
        return 0;
      }
      iVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x30))(*(long **)(param_1 + 8),lVar5,0);
      if (iVar2 < 0) goto joined_r0x003dcdac;
    }
    uVar6 = *(ulong *)(param_1 + 0x20);
    if (uVar6 < uVar4) {
      if (param_5 == (long *)0x0) {
        local_64 = 0;
        uVar6 = (**(code **)(**(long **)(param_1 + 8) + 0x20))
                          (*(long **)(param_1 + 8),param_2,uVar4,&local_64);
      }
      else {
        (**(code **)*param_5)(param_5,param_6);
        local_64 = 0;
        uVar6 = (**(code **)(**(long **)(param_1 + 8) + 0x20))
                          (*(long **)(param_1 + 8),param_2,uVar4,&local_64);
        (**(code **)(*param_5 + 8))(param_5,param_6);
      }
      if (param_4 != (int *)0x0) {
        *param_4 = local_64;
      }
      if (local_64 < 0) {
LAB_003dcdb8:
        FUN_003dce60(param_1);
        return __n_00;
      }
      __dest = *(void **)(param_1 + 0x18);
      __n = *(ulong *)(param_1 + 0x20);
      uVar1 = __n;
      if (uVar6 <= __n) {
        uVar1 = uVar6;
      }
      __src = (void *)((long)param_2 + (long)-(int)(short)uVar1);
      *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 0x10) - uVar1;
      *(ulong *)(param_1 + 0x30) = uVar1;
    }
    else {
      if (param_5 != (long *)0x0) {
        (**(code **)*param_5)(param_5,param_6);
        uVar6 = *(ulong *)(param_1 + 0x20);
      }
      local_48 = 0;
      uVar6 = (**(code **)(**(long **)(param_1 + 8) + 0x20))
                        (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x18),uVar6,&local_48);
      if (param_5 != (long *)0x0) {
        (**(code **)(*param_5 + 8))(param_5,param_6);
      }
      if (param_4 != (int *)0x0) {
        *param_4 = local_48;
      }
      if (local_48 < 0) goto LAB_003dcdb8;
      *(undefined1 *)(param_1 + 0x38) = 1;
      __src = *(void **)(param_1 + 0x18);
      __dest = (void *)((long)param_2 + __n_00);
      __n = uVar6;
      if (uVar4 <= uVar6) {
        __n = uVar4;
      }
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x10);
      *(ulong *)(param_1 + 0x30) = uVar6;
    }
    memcpy(__dest,__src,__n);
    *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + uVar4;
    if (uVar6 + __n_00 < param_3) {
      return uVar6 + __n_00;
    }
    if (param_4 != (int *)0x0) {
      *param_4 = 0;
    }
  }
  return param_3;
}


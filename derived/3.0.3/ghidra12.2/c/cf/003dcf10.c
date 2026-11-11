
ulong FUN_003dcf10(long param_1,void *param_2,ulong param_3,int *param_4)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int local_44;
  int local_28;
  int local_24;
  
  plVar1 = *(long **)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x18);
  uVar2 = *(ulong *)(param_1 + 0x20);
  if ((plVar1 == (long *)0x0 || lVar3 == 0) || uVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x003dcf78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,param_2,param_3,param_4);
    return uVar2;
  }
  if (uVar2 < param_3) {
    if ((*(long *)(param_1 + 0x30) == 0) || (*(char *)(param_1 + 0x38) != '\x02'))
    goto LAB_003dd018;
    lVar4 = *(long *)(param_1 + 0x28);
    lVar3 = (**(code **)(*plVar1 + 0x38))();
    if (lVar3 == lVar4) {
LAB_003dcfe0:
      local_44 = 0;
      (**(code **)(**(long **)(param_1 + 8) + 0x28))
                (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x18),
                 *(undefined8 *)(param_1 + 0x30),&local_44);
      *(undefined1 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0xffffffff;
      *(undefined8 *)(param_1 + 0x30) = 0;
      if (-1 < local_44) {
        plVar1 = *(long **)(param_1 + 8);
LAB_003dd018:
        uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,param_2,param_3,param_4);
        return uVar2;
      }
    }
    else {
      uVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x58))();
      if ((uVar2 & 1) == 0) {
        local_44 = -0x80000000;
      }
      else {
        local_44 = (**(code **)(**(long **)(param_1 + 8) + 0x30))(*(long **)(param_1 + 8),lVar4,0);
        if (-1 < local_44) goto LAB_003dcfe0;
      }
    }
    if (param_4 == (int *)0x0) {
      return 0;
    }
    goto LAB_003dd1f8;
  }
  lVar4 = 0;
  if (*(char *)(param_1 + 0x38) != '\x01') {
    lVar4 = *(long *)(param_1 + 0x30);
  }
  if (((uVar2 - lVar4 < param_3) && (*(long *)(param_1 + 0x30) != 0)) &&
     (*(char *)(param_1 + 0x38) == '\x02')) {
    lVar4 = *(long *)(param_1 + 0x28);
    lVar3 = (**(code **)(*plVar1 + 0x38))();
    if (lVar3 == lVar4) {
LAB_003dd0b0:
      local_28 = 0;
      (**(code **)(**(long **)(param_1 + 8) + 0x28))
                (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x18),
                 *(undefined8 *)(param_1 + 0x30),&local_28);
      *(undefined1 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0xffffffff;
      *(undefined8 *)(param_1 + 0x30) = 0;
      local_44 = local_28;
    }
    else {
      uVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x58))();
      if ((uVar2 & 1) == 0) {
        local_44 = -0x80000000;
      }
      else {
        local_44 = (**(code **)(**(long **)(param_1 + 8) + 0x30))(*(long **)(param_1 + 8),lVar4,0);
        if (-1 < local_44) goto LAB_003dd0b0;
      }
    }
    if ((param_4 != (int *)0x0) && (local_44 < 0)) {
LAB_003dd1f8:
      *param_4 = local_44;
      return 0;
    }
    if (local_44 < 0) {
      return 0;
    }
    lVar3 = *(long *)(param_1 + 0x18);
  }
  memcpy((void *)(lVar3 + *(long *)(param_1 + 0x30)),param_2,param_3);
  if (*(char *)(param_1 + 0x38) == '\x02') {
    uVar2 = *(long *)(param_1 + 0x30) + param_3;
    *(ulong *)(param_1 + 0x30) = uVar2;
    *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_3;
    if (uVar2 != *(ulong *)(param_1 + 0x20)) goto LAB_003dd1e4;
  }
  else {
    *(undefined1 *)(param_1 + 0x38) = 2;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x10);
    *(ulong *)(param_1 + 0x30) = param_3;
    *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_3;
    uVar2 = param_3;
    if (param_3 != *(ulong *)(param_1 + 0x20)) goto LAB_003dd1e4;
  }
  if (uVar2 != 0) {
    lVar4 = *(long *)(param_1 + 0x28);
    lVar3 = (**(code **)(**(long **)(param_1 + 8) + 0x38))();
    if (lVar3 != lVar4) {
      uVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x58))();
      if ((uVar2 & 1) == 0) {
        local_24 = -0x80000000;
        goto LAB_003dd210;
      }
      local_24 = (**(code **)(**(long **)(param_1 + 8) + 0x30))(*(long **)(param_1 + 8),lVar4,0);
      if (local_24 < 0) goto LAB_003dd210;
    }
    local_24 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x28))
              (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x30),&local_24);
    *(undefined1 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (local_24 < 0) {
LAB_003dd210:
      if (param_4 == (int *)0x0) {
        return param_3;
      }
      *param_4 = local_24;
      return param_3;
    }
  }
LAB_003dd1e4:
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  return param_3;
}


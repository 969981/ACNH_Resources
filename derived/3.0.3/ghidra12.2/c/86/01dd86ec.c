
undefined8 FUN_01dd86ec(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  void *__src;
  size_t __n;
  undefined4 uVar3;
  long *plVar4;
  size_t *__s;
  size_t *psVar5;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  size_t *local_98;
  size_t sStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  param_2 = (undefined8 *)*param_2;
  if (((DAT_05382988 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05382988), iVar1 != 0)) {
    DAT_05382980 = PTR_DAT_04bb4ee0 + 0x10;
    __cxa_guard_release(&DAT_05382988);
  }
  if (param_2 == (undefined8 *)0x0) {
    param_2 = (undefined8 *)0x0;
  }
  else {
    uVar2 = (**(code **)*param_2)(param_2,&DAT_05382980);
    if ((uVar2 & 1) == 0) {
      param_2 = (undefined8 *)0x0;
    }
  }
  plVar4 = (long *)param_2[1];
  psVar5 = (size_t *)param_2[3];
  __src = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x23000,8);
  if (__src == (void *)0x0) {
LAB_01dd880c:
    plVar4 = (long *)param_2[1];
    psVar5 = (size_t *)param_2[3];
    __src = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x23000,8);
    if (__src != (void *)0x0) {
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_88 = 0x5f;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_188 = 0;
      uStack_180 = 0;
      local_198 = 0;
      uStack_190 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_80 = 0x23000;
      uStack_78 = 0;
      __s = psVar5 + 1;
      sStack_90 = *psVar5;
      local_98 = __s;
      __n = FUN_006ef8a0(&local_198,__src,0x23000,plVar4);
      if (__n - 1 < 0x23000) goto LAB_01dd88b4;
      (**(code **)(*plVar4 + 0x38))(plVar4,__src);
    }
    uVar3 = 2;
  }
  else {
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_88 = 100;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_198 = 0;
    uStack_190 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0x23000;
    uStack_78 = 0;
    __s = psVar5 + 1;
    sStack_90 = *psVar5;
    local_98 = __s;
    __n = FUN_006ef8a0(&local_198,__src,0x23000,plVar4);
    if (0x22fff < __n - 1) {
      (**(code **)(*plVar4 + 0x38))(plVar4,__src);
      goto LAB_01dd880c;
    }
LAB_01dd88b4:
    memset(__s,0,0x23000);
    *psVar5 = __n;
    memcpy(__s,__src,__n);
    (**(code **)(*plVar4 + 0x38))(plVar4,__src);
    uVar3 = 0;
  }
  *(undefined4 *)(param_2 + 2) = uVar3;
  return 1;
}


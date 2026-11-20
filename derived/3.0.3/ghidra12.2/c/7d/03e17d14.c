
undefined * FUN_03e17d14(long *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  if (param_2 == 0) {
    if (((*PTR_DAT_04bd3478 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd3478), puVar3 = PTR_DAT_04bd3440, iVar2 != 0)) {
      if (((*PTR_DAT_04bd3448 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd3448), puVar5 = PTR_DAT_04bd3460, iVar2 != 0)) {
        puVar1 = PTR_DAT_04bd3458 + 0x10;
        *(undefined **)puVar3 = PTR_DAT_04bd3450 + 0x10;
        *(undefined **)(puVar3 + 8) = puVar1;
        puVar1 = PTR_DAT_04bd3468;
        *(undefined **)(puVar3 + 0x28) = puVar5 + 0x10;
        *(undefined **)(puVar3 + 0x48) = puVar1 + 0x10;
        __cxa_guard_release(PTR_DAT_04bd3448);
      }
      puVar5 = PTR_DAT_04bd3470;
      (*(code *)**(undefined8 **)(puVar3 + 8))(puVar3 + 8,PTR_DAT_04bd3470);
      __cxa_guard_release(PTR_DAT_04bd3478);
    }
    else {
      puVar5 = PTR_DAT_04bd3470;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar4 = *param_1, lVar4 != 0)) {
      if (((*PTR_DAT_04bd3428 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd3428), puVar3 = PTR_DAT_04bd3420, iVar2 != 0)) {
        FUN_03ce3b74(PTR_DAT_04bd3420,0);
        FUN_001001d0(PTR_FUN_04bd2f60,puVar3,&__DT_FINI_ARRAY);
        __cxa_guard_release(PTR_DAT_04bd3428);
      }
      puVar3 = (undefined *)FUN_03c66100(lVar4,PTR_DAT_04bd3420,param_1[1]);
      return puVar3;
    }
    puVar5 = (undefined *)0x0;
  }
  return puVar5;
}


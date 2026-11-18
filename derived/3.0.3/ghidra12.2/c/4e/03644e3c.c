
void FUN_03644e3c(int *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if (*param_1 == 2) {
    memcpy((void *)(*(long *)(param_1 + 8) + 0xf018),*(void **)(*(long *)(param_1 + 0x10) + 0x1a0),
           0xf000);
    lVar1 = (long)param_1 + 9;
    if ((*(byte *)(param_1 + 2) & 1) != 0) {
      lVar1 = *(long *)(param_1 + 6);
    }
    FUN_03644f40(*(undefined8 *)(param_1 + 8),lVar1,1,0xff00);
    if (*(long *)(param_1 + 8) != 0) {
      (**(code **)(*DAT_05b059a0 + 0x18))();
    }
    iVar4 = 0;
  }
  else {
    if (*param_1 != 1) {
      return;
    }
    puVar3 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bdf328 + 0x10))
                       (*(long **)PTR_DAT_04bdf328,&LAB_003004a0,8);
    *(undefined8 **)(param_1 + 8) = puVar3;
    *puVar3 = *(undefined8 *)(param_1 + 0xc);
    lVar1 = *(long *)(param_1 + 8);
    uVar2 = (*(undefined8 **)(param_1 + 10))[1];
    *(undefined8 *)(lVar1 + 8) = **(undefined8 **)(param_1 + 10);
    *(undefined8 *)(lVar1 + 0x10) = uVar2;
    memcpy((void *)(*(long *)(param_1 + 8) + 0x18),*(void **)(*(long *)(param_1 + 0x10) + 0x1a0),
           0xf000);
    *(undefined4 *)(*(long *)(param_1 + 8) + 0x1e018) = 0;
    iVar4 = 2;
  }
  *param_1 = iVar4;
  return;
}


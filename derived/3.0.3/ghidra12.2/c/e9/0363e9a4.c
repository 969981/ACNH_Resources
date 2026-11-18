
void FUN_0363e9a4(long param_1,void *param_2,ulong param_3,int param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  void *__dest;
  uint uVar6;
  
  puVar2 = PTR_DAT_04bdf328;
  __dest = *(void **)(param_1 + 0x58);
  if ((__dest == (void *)0x0 || *(ulong *)(param_1 + 0x60) != param_3) ||
      *(int *)(param_1 + 0x68) != param_4) {
    if (__dest != (void *)0x0) {
      (**(code **)(**(long **)PTR_DAT_04bdf328 + 0x18))();
    }
    if (*(long *)(param_1 + 0x80) != 0) {
      (**(code **)(**(long **)puVar2 + 0x18))();
    }
    lVar3 = (**(code **)(**(long **)puVar2 + 0x10))(*(long **)puVar2,param_3,0);
    *(long *)(param_1 + 0x58) = lVar3;
    if (lVar3 == 0) {
      FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
    }
    plVar4 = *(long **)puVar2;
    uVar5 = param_3 + 0x3ff >> 10;
    *(ulong *)(param_1 + 0x78) = uVar5;
    lVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,uVar5,0);
    *(long *)(param_1 + 0x80) = lVar3;
    if (lVar3 == 0) {
      FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
    }
    __dest = *(void **)(param_1 + 0x58);
    uVar6 = 0xffdc;
    if (param_4 != 0) {
      uVar6 = 0x10000;
    }
    *(ulong *)(param_1 + 0x60) = param_3;
    uVar1 = 0;
    if ((ulong)uVar6 != 0) {
      uVar1 = (undefined4)(param_3 / uVar6);
    }
    *(int *)(param_1 + 0x68) = param_4;
    *(uint *)(param_1 + 0x70) = uVar6;
    *(undefined4 *)(param_1 + 0x74) = uVar1;
    *(bool *)(param_1 + 0x6c) = param_4 == 1;
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  memcpy(__dest,param_2,param_3);
  memset(*(void **)(param_1 + 0x80),0,*(size_t *)(param_1 + 0x78));
  return;
}


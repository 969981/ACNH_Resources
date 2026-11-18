
void FUN_0334abc0(long param_1)

{
  void *__s;
  long *plVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  long lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int local_68;
  int iStack_64;
  
  lVar8 = DAT_05355a60;
  uVar2 = *(uint *)(param_1 + 0x20f4);
  plVar6 = (long *)(param_1 + 0x300);
  __s = (void *)(param_1 + 0x17f8);
  plVar1 = plVar6 + uVar2;
  if (2 < uVar2) {
    uVar2 = 0;
    plVar1 = plVar6;
  }
  uVar4 = FUN_0038a89c(*plVar1);
  lVar5 = *plVar1;
  uVar7 = (&DAT_0418db90)[uVar2];
  uVar11 = *(undefined4 *)(lVar5 + 0x100);
  uVar9 = *(undefined4 *)(lVar5 + 0xf8);
  uVar10 = *(undefined4 *)(lVar5 + 0xfc);
  uVar12 = *(undefined4 *)(lVar5 + 0x104);
  uVar13 = *(undefined4 *)(lVar5 + 0x50);
  *(undefined8 *)(param_1 + 0x2000) = uVar4;
  FUN_00350090(uVar9,uVar10,param_1 + 0x1fd8);
  *(undefined4 *)(param_1 + 0x201c) = uVar11;
  *(undefined4 *)(param_1 + 0x2018) = uVar12;
  *(undefined4 *)(param_1 + 0x2040) = uVar13;
  *(long *)(param_1 + 0x2048) = param_1;
  memset(__s,0,0x7d8);
  *(undefined4 *)(param_1 + 0x1fd4) = uVar7;
  plVar1 = plVar6 + *(uint *)(param_1 + 0x20f4);
  if (2 < *(uint *)(param_1 + 0x20f4)) {
    plVar1 = plVar6;
  }
  *(float *)(param_1 + 0x20b8) = *(float *)(*plVar1 + 0xfc) + *(float *)(*plVar1 + 0x100);
  *(undefined1 *)(lVar8 + 0x484) = 1;
  if (*(long *)(param_1 + 0x4e0) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined4 *)(*(long *)(param_1 + 0x4e0) + 0xc);
  }
  FUN_033618d0(__s,0xffffffff);
  if (*(int *)(param_1 + 0x20f4) == 1) {
    iVar3 = *(int *)(param_1 + 0x1fd0) - (uint)(0 < *(int *)(param_1 + 0x1fd0));
    if (*(char *)(param_1 + 0x2598) != '\0') {
      iVar3 = 0;
    }
    FUN_03349d64(param_1,iVar3,*(undefined4 *)(param_1 + 0x2594));
  }
  else {
    FUN_03361cd0(__s,&iStack_64,&local_68,uVar7);
    if (*(int *)(param_1 + 0x2060) != iStack_64) {
      *(undefined1 *)(param_1 + 0x17f0) = 1;
    }
    if (*(int *)(param_1 + 0x2064) != local_68) {
      *(undefined1 *)(param_1 + 0x17f0) = 1;
    }
    *(int *)(param_1 + 0x2060) = iStack_64;
    *(int *)(param_1 + 0x2064) = local_68;
    if (*(int *)(param_1 + 0x20f4) == 1) {
      *(int *)(param_1 + 0x2594) = local_68;
    }
    *(undefined4 *)(param_1 + 0x20a0) = 0;
    lVar8 = *(long *)(lVar8 + 0x20);
    *(undefined4 *)(lVar8 + 0x6e8) = uVar7;
    *(undefined4 *)(lVar8 + 0x6ec) = uVar7;
    if ((*(long *)(lVar8 + 0x6e0) != 0) &&
       (plVar6 = *(long **)(*(long *)(lVar8 + 0x6e0) + 8), plVar6 != (long *)0x0)) {
      (**(code **)(*plVar6 + 0x188))(plVar6);
      FUN_03322410(plVar6);
      if ((*(long *)(lVar8 + 0x6e0) != 0) &&
         (lVar8 = *(long *)(*(long *)(lVar8 + 0x6e0) + 8), lVar8 != 0)) {
        *(undefined4 *)(lVar8 + 0x15ec) = *(undefined4 *)(*(long *)(DAT_05355a60 + 0x20) + 0x6e8);
      }
    }
  }
  FUN_03347760(param_1);
  return;
}


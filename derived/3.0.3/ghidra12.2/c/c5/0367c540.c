
void FUN_0367c540(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *__dest;
  void *pvVar8;
  
  *param_1 = &PTR_FUN_04b42f00;
  puVar4 = PTR_DAT_04bb2698;
  iVar1 = *(int *)(param_1 + 0xd);
  while (0 < iVar1) {
    __dest = (undefined8 *)param_1[0xe];
    pvVar8 = (void *)*__dest;
    memmove(__dest,__dest + 1,(long)(iVar1 * 8 + -8));
    *(int *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) + -1;
    if (pvVar8 == (void *)0x0) break;
    if ((*(long *)((long)pvVar8 + 8) != 0) && (*(long **)((long)pvVar8 + 0x10) != (long *)0x0)) {
      (**(code **)(**(long **)((long)pvVar8 + 0x10) + 8))();
    }
    FUN_038fd0e0((long)pvVar8 + 0x50);
    lVar6 = *(long *)puVar4;
    if (lVar6 == 0) {
      free(pvVar8);
    }
    else {
      plVar7 = (long *)FUN_038cb610(lVar6,pvVar8);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar8);
      }
    }
    iVar1 = *(int *)(param_1 + 0xd);
  }
  lVar6 = DAT_05aec718;
  if (*(char *)(param_1 + 0x12) != '\0') {
    uVar2 = *(uint *)((long)param_1 + 0x8c);
    lVar5 = *(long *)(*(long *)(DAT_05aec718 + 0x158) + 0x10);
    *(char *)(*(long *)(DAT_05aec718 + 0x158) + 0x48) = (char)uVar2;
    if (lVar5 != 0) {
      (**(code **)PTR_DAT_04bcf5a8)(lVar5,uVar2 & 0xff);
    }
    *(uint *)(lVar6 + 0xa0) = uVar2;
    if (*(char *)(param_1 + 0x12) != '\0') {
      *(undefined1 *)(param_1 + 0x12) = 0;
    }
  }
  if (*(char *)(param_1 + 0xc) != '\0') {
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  pvVar8 = (void *)param_1[10];
  param_1[10] = 0;
  if (pvVar8 != (void *)0x0) {
    FUN_036803b0(pvVar8);
    lVar6 = *(long *)puVar4;
    if (lVar6 == 0) {
      free(pvVar8);
      cVar3 = *(char *)(param_1 + 9);
      goto joined_r0x0367c608;
    }
    plVar7 = (long *)FUN_038cb610(lVar6,pvVar8);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x38))(plVar7,pvVar8);
    }
  }
  cVar3 = *(char *)(param_1 + 9);
joined_r0x0367c608:
  if (cVar3 != '\0') {
    *(undefined1 *)(param_1 + 9) = 0;
  }
  return;
}


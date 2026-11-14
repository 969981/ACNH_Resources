
void FUN_01c6f020(long *param_1)

{
  int iVar1;
  byte bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  void *__ptr;
  undefined8 *puVar7;
  undefined1 uStack_39;
  undefined4 local_38;
  undefined4 local_34;
  
  local_38 = 3;
  lVar5 = *(long *)PTR_DAT_04bb3728;
  bVar2 = *(byte *)(lVar5 + 0x1a8);
  *(byte *)(lVar5 + 0x1a8) = bVar2 & 0xf7;
  local_34 = 0x11;
  iVar1 = 0x11;
  if (*(uint *)(DAT_05357d70 + 0x20) < 0x12) {
    iVar1 = 0;
  }
  *(bool *)(*(long *)(DAT_05357d70 + 0x28) + (long)iVar1 * 0x38 + 0x30) =
       *(char *)(lVar5 + 0x1a9) != '\0' && (bVar2 & 0xf7) == 0;
  FUN_038e1c80(param_1 + 0x72);
  if ((char)param_1[0x71] != '\0') {
    *(undefined1 *)(param_1 + 0x71) = 0;
  }
  if ((char)param_1[0x6f] != '\0') {
    if ((char)param_1[0x6e] != '\0') {
      *(undefined1 *)(param_1 + 0x6e) = 0;
    }
    if (*(uint *)(param_1 + 0x67) != 0xffffffff) {
      (*(code *)(&PTR_LAB_04a43018)[*(uint *)(param_1 + 0x67)])(&uStack_39,param_1 + 0x41);
    }
    *(undefined1 *)(param_1 + 0x6f) = 0;
    *(undefined4 *)(param_1 + 0x67) = 0xffffffff;
  }
  if ((char)param_1[0x1c] != '\0') {
    *(undefined1 *)(param_1 + 0x1c) = 0;
  }
  __ptr = (void *)param_1[0x14];
  param_1[0x14] = 0;
  if (__ptr != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar3 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
      }
    }
  }
  *param_1 = (long)(PTR_DAT_04bc0ec0 + 0x10);
  FUN_038e1c80(param_1 + 0xd);
  puVar7 = (undefined8 *)param_1[9];
  if (puVar7 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)param_1[10];
    puVar4 = puVar7;
    if (puVar6 != puVar7) {
      do {
        puVar6 = puVar6 + -5;
        (**(code **)*puVar6)(puVar6);
      } while (puVar6 != puVar7);
      puVar4 = (undefined8 *)param_1[9];
    }
    param_1[10] = (long)puVar7;
    FUN_00187e4c(puVar4);
  }
  if (*(char *)((long)param_1 + 0xc) != '\0') {
    *(undefined1 *)((long)param_1 + 0xc) = 0;
  }
  return;
}


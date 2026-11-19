
void FUN_039b8500(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  byte bVar5;
  undefined8 *puVar6;
  void *pvVar7;
  ulong uVar8;
  uint uVar9;
  
  *param_1 = &PTR_FUN_04b6a7e8;
  uVar8 = (ulong)*(byte *)(param_1[1] + 0x5b);
  if (uVar8 != 0) {
    puVar6 = (undefined8 *)param_1[0x1c2];
    do {
      (**(code **)*puVar6)(puVar6);
      uVar8 = uVar8 - 1;
      puVar6 = puVar6 + 0x4c;
    } while (uVar8 != 0);
  }
  puVar2 = PTR_DAT_04bc1010;
  puVar1 = PTR_DAT_04bb2698;
  uVar9 = 0;
  do {
    bVar5 = *(byte *)(param_1 + (long)(int)uVar9 * 7 + 8);
    if (((bVar5 >> 1 & 1) != 0) &&
       (pvVar7 = (void *)param_1[(long)(int)uVar9 * 7 + 6], pvVar7 != (void *)0x0)) {
      lVar3 = *(long *)puVar1;
      if (lVar3 == 0) {
        free(pvVar7);
      }
      else {
        plVar4 = (long *)FUN_038cb610(lVar3,pvVar7);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,pvVar7);
        }
      }
      bVar5 = *(byte *)(param_1 + (long)(int)uVar9 * 7 + 8);
    }
    if ((bVar5 & 1) != 0) {
      pvVar7 = (void *)FUN_0034f060(param_1[(long)(int)uVar9 * 7 + 5] + 0x188);
      lVar3 = param_1[(long)(int)uVar9 * 7 + 5];
      *(undefined2 *)(lVar3 + 0x228) = 0;
      if (*(char *)(lVar3 + 0x188) != '\0') {
        FUN_0034f3d4(lVar3 + 0x188,*(undefined8 *)(*(long *)puVar2 + 0x30));
      }
      FUN_0034f050(lVar3 + 0x188);
      if (pvVar7 != (void *)0x0) {
        lVar3 = *(long *)puVar1;
        if (lVar3 == 0) {
          free(pvVar7);
        }
        else {
          plVar4 = (long *)FUN_038cb610(lVar3,pvVar7);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x38))(plVar4,pvVar7);
          }
        }
      }
    }
    if ((uVar9 == *(byte *)((long)param_1 + (long)(int)uVar9 * 0x38 + 0x42)) &&
       ((long *)param_1[(long)(int)uVar9 * 7 + 7] != (long *)0x0)) {
      (**(code **)(*(long *)param_1[(long)(int)uVar9 * 7 + 7] + 8))();
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 != 0x40);
  *(undefined8 *)(param_1[1] + 0x48) = 0;
  *(undefined2 *)(param_1 + 0x208) = 0;
  if (*(char *)(param_1 + 500) != '\0') {
    FUN_0034f3d4(param_1 + 500,*(undefined8 *)(*(long *)puVar2 + 0x30));
  }
  FUN_0034f050(param_1 + 500);
  return;
}


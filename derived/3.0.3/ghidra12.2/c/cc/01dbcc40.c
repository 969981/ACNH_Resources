
void FUN_01dbcc40(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR_DAT_04bc1368;
  if (*(long *)(lVar4 + 8) != lVar4) {
    lVar6 = (long)*(int *)(lVar4 + 0x14);
    plVar5 = (long *)(*(long *)(lVar4 + 8) - lVar6);
    do {
      (**(code **)(*plVar5 + 0x48))(plVar5);
      plVar5 = (long *)(*(long *)((long)plVar5 + lVar6 + 8) - lVar6);
    } while (plVar5 != (long *)(lVar4 - lVar6));
  }
  lVar4 = *param_1;
  if ((lVar4 != 0) &&
     ((*(int *)(lVar4 + 0x508) == 4 ||
      ((*(int *)(lVar4 + 0x508) == 3 && (1 < *(byte *)(lVar4 + 0x54c))))))) {
    if (*(char *)(lVar4 + 0x4f8) != '\0') {
      *(char *)(lVar4 + 0x4f8) = *(char *)(lVar4 + 0x4f8) + -1;
    }
    FUN_01daff74(lVar4 + 0x480);
  }
  if ((code *)param_1[0xd] != (code *)0x0) {
    uVar3 = (*(code *)param_1[0xd])(param_1 + 0xf,param_1 + 0xe);
    if ((uVar3 & 1) != 0) {
      param_1[0xd] = 0;
      if ((undefined8 *)param_1[0xe] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xe] = 0;
        param_1[0xe] = 0;
      }
    }
  }
  if (*(char *)((long)param_1 + 0x61) != '\0') {
    if ((char)param_1[0xc] != '\0') {
      if ((int)param_1[9] == 0) {
        return;
      }
      *(undefined1 *)(param_1 + 0xc) = 0;
    }
    puVar2 = PTR_DAT_04bb36f0;
    if (*(int *)(*DAT_0537d558 + 0x508) != 0) {
      uVar1 = DAT_0536c720;
      if (*(uint *)(*(long *)PTR_DAT_04bb36f0 + 0x20) <= DAT_0536c720) {
        uVar1 = 0;
      }
      *(undefined1 *)(*(long *)(*(long *)PTR_DAT_04bb36f0 + 0x28) + (long)(int)uVar1 * 0x38 + 0x30)
           = 1;
      lVar4 = DAT_0537d558[2];
      plVar5 = (long *)(lVar4 + 0x3f0);
      *(long **)(lVar4 + 0x3f0) = param_1 + 8;
      param_1[8] = (long)plVar5;
      lVar6 = *(long *)(lVar4 + 0x3f0);
      *(undefined8 *)(lVar6 + 8) = 0;
      *(undefined8 *)(lVar6 + 0x10) = 0;
      uVar1 = DAT_0536c720;
      if (*(int *)(lVar4 + 0x380) == 0) {
        lVar6 = *plVar5;
        if (lVar6 != 0) {
          *(undefined8 *)(lVar6 + 8) = 1;
          *(undefined8 *)(lVar6 + 0x10) = 0;
          if ((undefined8 *)*plVar5 != (undefined8 *)0x0) {
            *(undefined8 *)*plVar5 = 0;
            *plVar5 = 0;
          }
        }
      }
      else if (3 < *(int *)(lVar4 + 0x380)) {
        *(undefined1 *)(lVar4 + 0xab0) = 0;
        if (*(uint *)(*(long *)puVar2 + 0x20) <= uVar1) {
          uVar1 = 0;
        }
        *(undefined1 *)(*(long *)(*(long *)puVar2 + 0x28) + (long)(int)uVar1 * 0x38 + 0x30) = 1;
      }
      *(undefined4 *)(lVar4 + 0x3e0) = 0;
      *(undefined1 *)(lVar4 + 0xab4) = 1;
      *(undefined1 *)(param_1 + 0xc) = 1;
      return;
    }
    lVar4 = DAT_0537d558[3];
    if ((((*(int *)(lVar4 + 0x84f4) == -1 && *(long *)(lVar4 + 0xd0) == 0) &&
         (*(ulong *)(lVar4 + 0xd8) == 0 ||
          (*(ulong *)(lVar4 + 0xd8) & 1) == 0 && *(long *)(lVar4 + 0xd0) == 0)) &&
        (*(char *)(DAT_0537d558[4] + 0x40) == '\0')) && (DAT_0537d558[0xd] == 0)) {
      lVar4 = param_1[7];
      if (lVar4 != 0) {
        *(undefined8 *)(lVar4 + 8) = 1;
        *(undefined8 *)(lVar4 + 0x10) = 0;
      }
      *(undefined1 *)((long)param_1 + 0x61) = 0;
      return;
    }
  }
  return;
}



void FUN_00405250(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 uVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  
  lVar8 = param_1[2];
  plVar12 = (long *)*param_1;
  if (param_4 <= (ulong)((lVar8 - (long)plVar12 >> 5) * -0x5555555555555555)) {
    plVar9 = (long *)param_1[1];
    lVar8 = (long)plVar9 - (long)plVar12 >> 5;
    if ((ulong)(lVar8 * -0x5555555555555555) < param_4) {
      lVar11 = param_2 + lVar8 * 0x20;
      if (plVar9 != plVar12) {
        plVar12 = plVar12 + 7;
        param_2 = param_2 + 0x38;
        lVar8 = lVar8 << 5;
        do {
          *(undefined1 *)(plVar12 + -6) = *(undefined1 *)(param_2 + -0x30);
          FUN_00189504(plVar12 + -5,param_2 + -0x28);
          FUN_00189504(plVar12,param_2);
          plVar12 = plVar12 + 0xc;
          lVar8 = lVar8 + -0x60;
          param_2 = param_2 + 0x60;
        } while (lVar8 != 0);
        plVar12 = (long *)param_1[1];
      }
      if (lVar11 != param_3) {
        puVar1 = PTR_DAT_04bc0fb8 + 0x10;
        puVar2 = PTR_DAT_04bc0ec8 + 0x10;
        puVar3 = PTR_DAT_04bc0fb0 + 0x10;
        plVar9 = plVar12;
        do {
          uVar4 = *(undefined1 *)(lVar11 + 8);
          plVar9[2] = (long)puVar2;
          *plVar9 = (long)puVar1;
          *(undefined1 *)(plVar9 + 1) = uVar4;
          *(undefined1 *)(plVar9 + 3) = 0;
          plVar9[5] = (long)(plVar9 + 3);
          plVar9[6] = 0x10;
          FUN_0018b070(plVar9 + 2,*(undefined8 *)(lVar11 + 0x28),0xffffffffffffffff);
          *(undefined1 *)(plVar9 + 8) = 0;
          plVar9[10] = (long)(plVar9 + 8);
          plVar9[0xb] = 0x10;
          uVar7 = *(undefined8 *)(lVar11 + 0x50);
          plVar9[7] = (long)puVar2;
          FUN_0018b070(plVar9 + 7,uVar7,0xffffffffffffffff);
          lVar11 = lVar11 + 0x60;
          plVar12 = plVar12 + 0xc;
          *plVar9 = (long)puVar3;
          plVar9 = plVar9 + 0xc;
        } while (lVar11 != param_3);
      }
      param_1[1] = plVar12;
    }
    else {
      if (param_2 != param_3) {
        lVar8 = 0;
        do {
          lVar11 = param_2 + lVar8;
          *(undefined1 *)((long)plVar12 + lVar8 + 8) = *(undefined1 *)(lVar11 + 8);
          FUN_00189504((long)plVar12 + lVar8 + 0x10,lVar11 + 0x10);
          FUN_00189504((long)plVar12 + lVar8 + 0x38,lVar11 + 0x38);
          lVar8 = lVar8 + 0x60;
        } while (param_2 + lVar8 != param_3);
        plVar9 = (long *)param_1[1];
        plVar12 = (long *)((long)plVar12 + lVar8);
      }
      while (plVar9 != plVar12) {
        plVar9 = plVar9 + -0xc;
        (**(code **)*plVar9)(plVar9);
      }
      param_1[1] = plVar12;
    }
    return;
  }
  if (plVar12 != (long *)0x0) {
    plVar9 = (long *)param_1[1];
    plVar6 = plVar12;
    if (plVar9 != plVar12) {
      do {
        plVar9 = plVar9 + -0xc;
        (**(code **)*plVar9)(plVar9);
      } while (plVar9 != plVar12);
      plVar6 = (long *)*param_1;
    }
    param_1[1] = plVar12;
    FUN_00187e4c(plVar6);
    lVar8 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  if (param_4 < 0x2aaaaaaaaaaaaab) {
    uVar10 = (lVar8 >> 5) * 0x5555555555555556;
    if (uVar10 <= param_4) {
      uVar10 = param_4;
    }
    if (0x155555555555554 < (ulong)((lVar8 >> 5) * -0x5555555555555555)) {
      uVar10 = 0x2aaaaaaaaaaaaaa;
    }
    if (uVar10 < 0x2aaaaaaaaaaaaab) {
      plVar12 = (long *)FUN_00187df4(uVar10 * 0x60);
      param_1[2] = plVar12 + uVar10 * 0xc;
      *param_1 = plVar12;
      param_1[1] = plVar12;
      if (param_2 != param_3) {
        puVar1 = PTR_DAT_04bc0fb8 + 0x10;
        puVar2 = PTR_DAT_04bc0ec8 + 0x10;
        puVar3 = PTR_DAT_04bc0fb0 + 0x10;
        plVar9 = plVar12;
        do {
          uVar4 = *(undefined1 *)(param_2 + 8);
          plVar9[2] = (long)puVar2;
          *plVar9 = (long)puVar1;
          *(undefined1 *)(plVar9 + 1) = uVar4;
          *(undefined1 *)(plVar9 + 3) = 0;
          plVar9[5] = (long)(plVar9 + 3);
          plVar9[6] = 0x10;
          FUN_0018b070(plVar9 + 2,*(undefined8 *)(param_2 + 0x28),0xffffffffffffffff);
          *(undefined1 *)(plVar9 + 8) = 0;
          plVar9[10] = (long)(plVar9 + 8);
          plVar9[0xb] = 0x10;
          uVar7 = *(undefined8 *)(param_2 + 0x50);
          plVar9[7] = (long)puVar2;
          FUN_0018b070(plVar9 + 7,uVar7,0xffffffffffffffff);
          param_2 = param_2 + 0x60;
          plVar12 = plVar9 + 0xc;
          *plVar9 = (long)puVar3;
          plVar9 = plVar12;
        } while (param_2 != param_3);
      }
      param_1[1] = plVar12;
      return;
    }
  }
  FUN_01c6b598(param_1);
                    /* WARNING: Does not return */
  pcVar5 = (code *)UndefinedInstructionException(0,0x4055a4);
  (*pcVar5)();
}


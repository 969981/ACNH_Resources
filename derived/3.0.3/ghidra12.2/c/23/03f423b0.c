
void FUN_03f423b0(long *param_1,uint param_2)

{
  long *plVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined *local_80;
  long *plStack_78;
  long *local_70;
  long local_68;
  
  (**(code **)(*param_1 + 0x20))();
  uVar8 = *(uint *)(param_1 + 5);
  uVar3 = param_2 & 0xff;
  lVar7 = param_1[6];
  uVar4 = uVar3;
  if (uVar8 <= uVar3) {
    uVar4 = 0;
  }
  plVar10 = *(long **)(lVar7 + (ulong)uVar4 * 0x40 + 8);
  if (plVar10 != (long *)0x0) {
    lVar9 = (long)*(int *)((long)param_1 + 0x24);
    plVar1 = (long *)((long)param_1 + (0x10 - lVar9));
    if (plVar10 != plVar1) {
      lVar7 = lVar9 + (long)plVar10;
      puVar2 = PTR_DAT_04bdf1c0 + 0x10;
      do {
        if ((uint)*(byte *)(plVar10 + 1) != (param_2 & 0xff)) break;
        plVar11 = (long *)((long)*(int *)((long)param_1 + 0x24) + (long)plVar10);
        lVar7 = *(long *)(lVar7 + 8);
        if (*plVar11 != 0) {
          *(long *)(*plVar11 + 8) = plVar11[1];
        }
        if ((long *)plVar11[1] != (long *)0x0) {
          *(long *)plVar11[1] = *plVar11;
        }
        *plVar11 = 0;
        plVar11[1] = 0;
        *(int *)(param_1 + 4) = (int)param_1[4] + -1;
        plVar10[6] = 0;
        local_68 = plVar10[3];
        puVar6 = (undefined8 *)plVar10[7];
        local_80 = puVar2;
        plStack_78 = plVar10;
        local_70 = &local_68;
        if (puVar6 != (undefined8 *)0x0) {
          plVar10[7] = 0;
          (**(code **)*puVar6)(puVar6,&local_80);
        }
        plVar11 = (long *)plVar10[4];
        (**(code **)(*plVar11 + 0x20))(plVar11);
        (**(code **)(*plVar10 + 0x50))(plVar10);
        *(undefined4 *)(plVar10 + 8) = 1;
        plVar10[5] = 0;
        if ((*(byte *)((long)plVar10 + 9) & 1) != 0) {
          *(byte *)((long)plVar10 + 9) = *(byte *)((long)plVar10 + 9) & 0xfb;
          nn::os::SignalLightEvent((LightEventType *)(plVar10 + 0xf));
        }
        (**(code **)(*plVar10 + 0x58))(plVar10);
        (**(code **)(*plVar11 + 0x28))(plVar11);
        plVar10 = (long *)(lVar7 - lVar9);
      } while (plVar1 != plVar10);
      uVar8 = *(uint *)(param_1 + 5);
      lVar7 = param_1[6];
    }
  }
  uVar4 = uVar3;
  if (uVar8 <= uVar3) {
    uVar4 = 0;
  }
  *(undefined8 *)(lVar7 + (ulong)uVar4 * 0x40 + 8) = 0;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    (**(code **)(*param_1 + 0x20))(param_1);
  }
  (**(code **)(*param_1 + 0x20))(param_1);
  if ((int)param_1[0xd] != 0) {
    plVar10 = (long *)param_1[0xe];
    lVar7 = (long)(int)param_1[0xd] << 3;
    do {
      if ((*(long *)(*plVar10 + 0x108) != 0) &&
         ((uint)*(byte *)(*(long *)(*plVar10 + 0x108) + 8) == (param_2 & 0xff))) {
        bVar5 = true;
        goto LAB_03f425b4;
      }
      plVar10 = plVar10 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  bVar5 = false;
LAB_03f425b4:
  (**(code **)(*param_1 + 0x28))(param_1);
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    (**(code **)(*param_1 + 0x28))(param_1);
  }
  if (bVar5) {
    uVar4 = uVar3;
    if (*(uint *)(param_1 + 5) <= uVar3) {
      uVar4 = 0;
    }
    nn::os::ClearLightEvent((LightEventType *)(param_1[6] + (ulong)uVar4 * 0x40 + 0x30));
    FUN_03f42690(param_1);
    FUN_03f42850(param_1,param_2);
    (**(code **)(*param_1 + 0x28))(param_1);
    if (*(uint *)(param_1 + 5) <= uVar3) {
      uVar3 = 0;
    }
    nn::os::WaitLightEvent((LightEventType *)(param_1[6] + (ulong)uVar3 * 0x40 + 0x30));
  }
  else {
    FUN_03f42690(param_1);
    FUN_03f42850(param_1,param_2);
    (**(code **)(*param_1 + 0x28))(param_1);
  }
  return;
}


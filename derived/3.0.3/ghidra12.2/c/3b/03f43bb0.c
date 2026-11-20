
void FUN_03f43bb0(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  byte bVar5;
  long lVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  undefined **local_98;
  char local_90;
  undefined *local_88;
  byte local_80;
  long *local_78;
  long *plStack_70;
  long local_68;
  
  if ((*(byte *)(param_1 + 0x104) >> 3 & 1) == 0) {
    if (param_2 == 2) {
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x140));
      bVar5 = *(byte *)(param_1 + 0x104) | 8;
      goto LAB_03f43c80;
    }
  }
  else {
    if (param_2 != 3) {
      return;
    }
    *(byte *)(param_1 + 0x104) = *(byte *)(param_1 + 0x104) & 0xf7;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x140));
  }
  if (0 < *(int *)(param_1 + 0x110)) {
    *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x110);
  }
  plVar8 = *(long **)(param_1 + 0x180);
  (**(code **)(*plVar8 + 0x20))(plVar8);
  uVar3 = nn::os::TryPeekMessageQueue((ulong *)&local_88,(MessageQueueType *)(param_1 + 0x30));
  puVar7 = local_88;
  if ((uVar3 & 1) == 0) {
    puVar7 = (undefined *)0x0;
  }
  if (puVar7 != *(undefined **)(param_1 + 0xc0)) {
    puVar1 = PTR_DAT_04bdf1c8 + 0x10;
    do {
      bVar5 = *(byte *)(param_1 + 0x104);
      if (puVar7 == (undefined *)0x2) goto LAB_03f43c64;
      *(byte *)(param_1 + 0x104) = bVar5 | 0x60;
      FUN_03f42eb0(*(undefined8 *)(param_1 + 0x180),param_1 + 0x108);
      if (*(long *)(param_1 + 0x108) == 0) {
        *(byte *)(param_1 + 0x104) = *(byte *)(param_1 + 0x104) & 0x9f;
        FUN_03f42690(*(undefined8 *)(param_1 + 0x180));
        goto LAB_03f43c68;
      }
      *(byte *)(param_1 + 0x104) = *(byte *)(param_1 + 0x104) & 0x3f | 0x80;
      *(long *)(*(long *)(param_1 + 0x108) + 0x28) = param_1;
      (**(code **)(*plVar8 + 0x28))(plVar8);
      plVar8 = *(long **)(param_1 + 0x108);
      (**(code **)(*plVar8 + 0x30))(plVar8);
      *(undefined4 *)(plVar8 + 8) = 5;
      plVar8 = *(long **)(param_1 + 0x180);
      (**(code **)(*plVar8 + 0x20))(plVar8);
      (**(code **)(**(long **)(param_1 + 0x108) + 0x38))();
      plVar9 = *(long **)(param_1 + 0x108);
      *(undefined8 *)(param_1 + 0x108) = 0;
      (**(code **)(*plVar8 + 0x28))(plVar8);
      if (plVar9 != (long *)0x0) {
        local_98 = &PTR_LAB_04ba9238;
        local_90 = '\0';
        local_68 = plVar9[3];
        puVar4 = (undefined8 *)plVar9[6];
        plVar9[7] = 0;
        local_80 = *(byte *)((long)plVar9 + 9) >> 2 & 1;
        local_88 = puVar1;
        local_78 = plVar9;
        plStack_70 = &local_68;
        if (puVar4 != (undefined8 *)0x0) {
          plVar9[6] = 0;
          (**(code **)*puVar4)(puVar4,&local_98,&local_88);
        }
        plVar8 = *(long **)(param_1 + 0x180);
        (**(code **)(*plVar8 + 0x20))(plVar8);
        if (local_90 == '\0') {
          *(undefined4 *)(plVar9 + 8) = 4;
          (**(code **)(*plVar9 + 0x40))(plVar9);
          plVar9[5] = 0;
          *(undefined4 *)(plVar9 + 8) = 6;
          if ((*(byte *)((long)plVar9 + 9) & 1) != 0) {
            *(byte *)((long)plVar9 + 9) = *(byte *)((long)plVar9 + 9) & 0xfb;
            nn::os::SignalLightEvent((LightEventType *)(plVar9 + 0xf));
          }
          (**(code **)(*plVar9 + 0x48))(plVar9);
        }
        *(byte *)(param_1 + 0x104) = *(byte *)(param_1 + 0x104) & 0x7f;
        nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x170));
        FUN_03f42690(*(undefined8 *)(param_1 + 0x180));
        if (*(int *)(*(long *)(param_1 + 0x180) + 0x20) == 0) {
          *(byte *)(param_1 + 0x104) = *(byte *)(param_1 + 0x104) & 0xdf;
          lVar6 = *plVar8;
          goto LAB_03f43c70;
        }
        *(byte *)(param_1 + 0x104) = *(byte *)(param_1 + 0x104) | 0x40;
        (**(code **)(*plVar8 + 0x28))(plVar8);
      }
      if ((0 < *(int *)(param_1 + 0x110)) &&
         (iVar2 = *(int *)(param_1 + 0x114) + -1, *(int *)(param_1 + 0x114) = iVar2, iVar2 == 0)) {
        nn::os::YieldThread();
        *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_1 + 0x110);
      }
      plVar8 = *(long **)(param_1 + 0x180);
      (**(code **)(*plVar8 + 0x20))(plVar8);
      uVar3 = nn::os::TryPeekMessageQueue((ulong *)&local_88,(MessageQueueType *)(param_1 + 0x30));
      puVar7 = local_88;
      if ((uVar3 & 1) == 0) {
        puVar7 = (undefined *)0x0;
      }
    } while (puVar7 != *(undefined **)(param_1 + 0xc0));
  }
  bVar5 = *(byte *)(param_1 + 0x104);
LAB_03f43c64:
  *(byte *)(param_1 + 0x104) = bVar5 & 0x9f;
LAB_03f43c68:
  lVar6 = *plVar8;
LAB_03f43c70:
  (**(code **)(lVar6 + 0x28))(plVar8);
  bVar5 = *(byte *)(param_1 + 0x104) & 0x9f;
LAB_03f43c80:
  *(byte *)(param_1 + 0x104) = bVar5;
  return;
}


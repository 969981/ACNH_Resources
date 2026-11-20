
void FUN_03f42ca4(long *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined **local_48;
  long *plStack_40;
  long *local_38;
  long local_18;
  
  if (param_2 == (long *)0x0) {
    return;
  }
  (**(code **)(*param_1 + 0x20))();
  uVar1 = *(uint *)(param_2 + 8);
  if (1 < uVar1) {
    if (uVar1 == 2) {
      bVar2 = *(byte *)(param_2 + 1);
      uVar1 = (uint)bVar2;
      if (*(uint *)(param_1 + 5) <= (uint)bVar2) {
        uVar1 = 0;
      }
      plVar4 = (long *)(param_1[6] + (ulong)uVar1 * 0x40 + 8);
      if ((long *)*plVar4 == param_2) {
        plVar6 = *(long **)((long)param_2 + (long)*(int *)((long)param_1 + 0x24) + 8);
        if (((plVar6 == param_1 + 2) ||
            (lVar5 = (long)plVar6 - (long)*(int *)((long)param_1 + 0x24), lVar5 == 0)) ||
           ((uint)bVar2 != (uint)*(byte *)(lVar5 + 8))) {
          *plVar4 = 0;
        }
        else {
          *plVar4 = lVar5;
        }
      }
      plVar4 = (long *)((long)param_2 + (long)*(int *)((long)param_1 + 0x24));
      if (*plVar4 != 0) {
        *(long *)(*plVar4 + 8) = plVar4[1];
      }
      if ((long *)plVar4[1] != (long *)0x0) {
        *(long *)plVar4[1] = *plVar4;
      }
      *plVar4 = 0;
      plVar4[1] = 0;
      *(int *)(param_1 + 4) = (int)param_1[4] + -1;
      param_2[6] = 0;
      local_48 = &PTR_LAB_04ba9360;
      local_18 = param_2[3];
      puVar3 = (undefined8 *)param_2[7];
      local_38 = &local_18;
      plStack_40 = param_2;
      if (puVar3 != (undefined8 *)0x0) {
        param_2[7] = 0;
        (**(code **)*puVar3)(puVar3,&local_48);
      }
      plVar4 = (long *)param_2[4];
      (**(code **)(*plVar4 + 0x20))(plVar4);
      (**(code **)(*param_2 + 0x50))(param_2);
      param_2[5] = 0;
      *(undefined4 *)(param_2 + 8) = 1;
      if ((*(byte *)((long)param_2 + 9) & 1) != 0) {
        *(byte *)((long)param_2 + 9) = *(byte *)((long)param_2 + 9) & 0xfb;
        nn::os::SignalLightEvent((LightEventType *)(param_2 + 0xf));
      }
      (**(code **)(*param_2 + 0x58))(param_2);
      (**(code **)(*plVar4 + 0x28))(plVar4);
      FUN_03f42690(param_1);
    }
    else if ((uVar1 != 6) && ((param_3 & 1) != 0)) {
      nn::os::ClearLightEvent((LightEventType *)(param_2 + 0xf));
      *(byte *)((long)param_2 + 9) = *(byte *)((long)param_2 + 9) | 5;
      (**(code **)(*param_1 + 0x28))(param_1);
      nn::os::WaitLightEvent((LightEventType *)(param_2 + 0xf));
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x03f42ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1);
  return;
}


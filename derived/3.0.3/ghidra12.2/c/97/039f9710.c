
void FUN_039f9710(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  byte bVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  
  *param_1 = &PTR_FUN_04b6bd38;
  bVar4 = *(byte *)((long)param_1 + 0x262);
  if ((bVar4 & 1) != 0) {
    if ((bVar4 >> 1 & 1) == 0) {
      FUN_039bb430(param_1[4],param_1 + 6);
      bVar4 = *(byte *)((long)param_1 + 0x262);
    }
    *(byte *)((long)param_1 + 0x262) = bVar4 & 0xfe;
  }
  if (param_1[0x49] != 0) {
    if ((*(short *)((long)param_1 + 0x14) == 0) &&
       (iVar2 = (**(code **)(*(long *)param_1[1] + 0x218))(), puVar1 = PTR_DAT_04bb2698, 0 < iVar2))
    {
      lVar7 = 0;
      lVar8 = 0;
      do {
        lVar5 = param_1[0x49];
        pvVar6 = *(void **)(lVar5 + lVar7);
        if (pvVar6 != (void *)0x0) {
          if (*(long *)puVar1 == 0) {
            free(pvVar6);
          }
          else {
            plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar6);
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
            }
          }
          lVar5 = param_1[0x49];
        }
        *(undefined8 *)(lVar5 + lVar7) = 0;
        lVar8 = lVar8 + 1;
        iVar2 = (**(code **)(*(long *)param_1[1] + 0x218))();
        lVar7 = lVar7 + 0x18;
      } while (lVar8 < iVar2);
    }
    pvVar6 = (void *)param_1[0x49];
    if (pvVar6 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar6);
      }
      else {
        plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar6);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
        }
      }
    }
    param_1[0x49] = 0;
  }
  if ((long *)param_1[0x4a] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x4a] + 8))();
    param_1[0x4a] = 0;
  }
  param_1[0x4d] = &PTR_LAB_04b6a990;
  return;
}



void FUN_03863fe0(long *param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined **local_80;
  long *plStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 *local_60;
  undefined1 *puStack_58;
  
  if (*param_2 != 0) {
    lVar8 = param_2[1];
    *(int *)(param_1 + 0x5c) = (int)lVar8;
    param_1[0x5b] = *(long *)(*(long *)(*param_2 + 0x210) + 0x48);
    if (param_1[0x90] != 0) {
      FUN_03d59634(*param_2,(int)lVar8,DAT_05ae6068);
    }
    if (param_1[0x92] != 0) {
      FUN_03d59634(*param_2,(int)param_1[0x5c],DAT_05ae606c);
    }
    if (param_1[0x94] != 0) {
      FUN_03d59634(*param_2,(int)param_1[0x5c],DAT_05ae6070);
    }
    if (param_1[0x96] != 0) {
      FUN_03d59634(*param_2,(int)param_1[0x5c],DAT_05ae6074);
    }
    if (((int)param_2[3] != -1) && (*(int *)((long)param_2 + 0x1c) != -1)) {
      if (param_1[0x98] != 0) {
        FUN_03d59634(*param_2,(int)param_1[0x5c]);
      }
      if (param_1[0x9a] != 0) {
        FUN_03d59634(*param_2,(int)param_1[0x5c],*(undefined4 *)((long)param_2 + 0x1c));
      }
    }
    if ((int)param_1[0x41] != 0) {
      plVar7 = (long *)param_1[0x42];
      lVar8 = (long)(int)param_1[0x41] << 3;
      do {
        lVar3 = *plVar7;
        if (lVar3 != 0) {
          plVar5 = (long *)param_1[0x5b];
          if ((plVar5 != (long *)0x0) &&
             (lVar6 = *(long *)(lVar3 + 0x218), *(long **)(lVar6 + 0x18) != plVar5)) {
            *(long **)(lVar6 + 0x18) = plVar5;
            plVar1 = (long *)(*(int *)((long)plVar5 + 0x14) + lVar6);
            lVar3 = *plVar5;
            *plVar5 = (long)plVar1;
            *plVar1 = lVar3;
            plVar1[1] = (long)plVar5;
            if (lVar3 != 0) {
              *(long **)(lVar3 + 8) = plVar1;
            }
            *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
            lVar3 = *plVar7;
          }
          FUN_03d5d0e0(lVar3,(int)param_1[0x5c],0);
        }
        plVar7 = plVar7 + 1;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
    }
    puVar2 = PTR_DAT_04bc5180;
    local_70 = 0xf0;
    uStack_68 = 1;
    local_80 = &PTR_LAB_04b5f8f0;
    local_60 = (undefined8 *)(PTR_DAT_04bc5180 + 0x10);
    plStack_78 = param_1;
    puStack_58 = (undefined1 *)&local_80;
    if ((long *)param_1[8] != param_1 + 7) {
      lVar3 = (long)*(int *)((long)param_1 + 0x4c);
      lVar8 = param_1[8] - lVar3;
      puStack_58 = (undefined1 *)&local_80;
      do {
        uVar4 = (*(code *)*local_60)(&local_60,lVar8);
        if ((uVar4 & 1) != 0) break;
        lVar8 = *(long *)(lVar8 + lVar3 + 8) - lVar3;
      } while (lVar8 != (long)(param_1 + 7) - lVar3);
    }
    lVar8 = param_1[0x40];
    if ((lVar8 == 0) && (lVar3 = param_2[2], lVar8 = 0, lVar3 != 0)) {
      local_60 = (undefined8 *)(puVar2 + 0x10);
      if (*(long *)(lVar3 + 0x40) == lVar3 + 0x38) {
        lVar8 = 0;
        puStack_58 = (undefined1 *)&local_80;
      }
      else {
        lVar6 = (long)*(int *)(lVar3 + 0x4c);
        lVar8 = *(long *)(lVar3 + 0x40) - lVar6;
        puStack_58 = (undefined1 *)&local_80;
        do {
          uVar4 = (*(code *)*local_60)(&local_60,lVar8);
          if ((uVar4 & 1) != 0) break;
          lVar8 = *(long *)(lVar8 + lVar6 + 8) - lVar6;
        } while (lVar8 != (lVar3 + 0x38) - lVar6);
        lVar8 = param_1[0x40];
      }
    }
    *(uint *)((long)param_1 + 0x474) = (uint)(lVar8 != 0);
    (**(code **)(*param_1 + 0xf8))(param_1,param_2);
  }
  return;
}


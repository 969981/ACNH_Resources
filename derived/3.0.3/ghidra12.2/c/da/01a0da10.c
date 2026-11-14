
void FUN_01a0da10(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long *param_4,
                 long param_5,long *param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long *plVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  void *pvVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  undefined *local_a8;
  long lStack_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  
  plVar6 = (long *)param_4[9];
  plVar4 = (long *)PTR_DAT_04bb2698;
  while (PTR_DAT_04bb2698 = (undefined *)plVar4, plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x40))();
    plVar4 = (long *)PTR_DAT_04bb2698;
    plVar6 = (long *)param_4[9];
  }
  if (param_4[0xc] != 0) {
    if (0 < (int)param_4[0xb]) {
      lVar10 = 0;
      do {
        plVar6 = *(long **)(param_4[0xc] + lVar10 * 8);
        (**(code **)*plVar6)(plVar6);
        lVar10 = lVar10 + 1;
        *plVar6 = param_4[0xd];
        param_4[0xd] = (long)plVar6;
      } while (lVar10 < (int)param_4[0xb]);
    }
    pvVar8 = (void *)param_4[0xe];
    *(undefined4 *)(param_4 + 0xb) = 0;
    if (pvVar8 != (void *)0x0) {
      if (*plVar4 == 0) {
        free(pvVar8);
      }
      else {
        plVar6 = (long *)FUN_038cb610(*plVar4,pvVar8);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6,pvVar8);
        }
      }
    }
    *(undefined4 *)((long)param_4 + 0x74) = 0;
    *(undefined8 *)((long)param_4 + 0x6c) = 0;
    *(undefined8 *)((long)param_4 + 100) = 0;
    *(undefined8 *)((long)param_4 + 0x5c) = 0;
  }
  *(undefined4 *)(param_4 + 0xf) = *(undefined4 *)(param_5 + 0x78);
  uVar9 = *(uint *)(param_5 + 0x78);
  uVar3 = uVar9 - 1;
  if ((int)uVar9 < 1) goto LAB_01a0dbf8;
  lVar10 = *plVar4;
  if (lVar10 == 0) {
    pvVar8 = malloc((ulong)uVar9 << 6);
joined_r0x01a0db78:
    if (pvVar8 != (void *)0x0) {
      param_4[0xd] = (long)pvVar8;
      if (1 < uVar9) {
        if (uVar3 == 1) {
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          plVar6 = (long *)((long)pvVar8 + 0x38);
          do {
            uVar11 = uVar11 + 2;
            plVar6[-7] = (long)plVar6;
            *plVar6 = (long)(plVar6 + 7);
            plVar6 = plVar6 + 0xe;
          } while (((ulong)uVar3 & 0xfffffffe) != uVar11);
        }
        if ((uVar3 & 1) != 0) {
          plVar6 = (long *)((long)pvVar8 + uVar11 * 0x38);
          *plVar6 = (long)(plVar6 + 7);
        }
      }
      *(undefined8 *)((long)pvVar8 + (long)(int)(uVar3 * 7) * 8) = 0;
      param_4[0xe] = (long)pvVar8;
      pvVar8 = (void *)((long)pvVar8 + (ulong)uVar9 * 0x38);
      if (pvVar8 != (void *)0x0) {
        param_4[0xc] = (long)pvVar8;
        *(undefined4 *)(param_4 + 0xb) = 0;
        *(uint *)((long)param_4 + 0x5c) = uVar9;
      }
    }
  }
  else {
    if (param_6 != (long *)0x0) {
LAB_01a0db50:
      pvVar8 = (void *)(**(code **)(*param_6 + 0x30))(param_6,(ulong)uVar9 << 6,8);
      goto joined_r0x01a0db78;
    }
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar2 = (undefined8 *)(lVar10 + 8);
    if (lVar7 != 0) {
      puVar2 = (undefined8 *)(lVar7 + 0xa8);
    }
    param_6 = (long *)*puVar2;
    if (param_6 != (long *)0x0) goto LAB_01a0db50;
  }
  uVar9 = *(uint *)(param_5 + 0x78);
LAB_01a0dbf8:
  local_6c = (**(code **)(*param_4 + 0x60))(param_4,0);
  puVar5 = PTR_PTR_04bb2238;
  uStack_68 = param_2;
  local_64 = param_3;
  if (0 < (int)uVar9) {
    uVar11 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      lStack_a0 = param_4[5];
      uStack_90 = *(undefined8 *)(puVar5 + 8);
      local_78 = (undefined4)param_4[8];
      local_a8 = puVar1;
      local_98 = puVar1;
      local_88 = puVar1;
      uStack_80 = uStack_90;
      if ((int)param_4[0xb] < *(int *)((long)param_4 + 0x5c)) {
        plVar6 = (long *)param_4[0xd];
        if (plVar6 != (long *)0x0) {
          param_4[0xd] = *plVar6;
        }
        FUN_006fdfc0(plVar6,&local_a8,&local_6c,0);
        *plVar6 = (long)&DAT_049f9d00;
        if ((int)param_4[0xb] < *(int *)((long)param_4 + 0x5c)) {
          *(long **)(param_4[0xc] + (long)(int)param_4[0xb] * 8) = plVar6;
          *(int *)(param_4 + 0xb) = (int)param_4[0xb] + 1;
        }
      }
      else {
        plVar6 = (long *)0x0;
      }
      if ((long)uVar11 < (long)*(int *)(param_5 + 0x58)) {
        (**(code **)(*plVar6 + 0x98))
                  (plVar6,*(undefined8 *)(*(long *)(param_5 + 0x60) + uVar11 * 8));
      }
      uVar11 = uVar11 + 1;
      *(uint *)(plVar6 + 4) = *(uint *)(plVar6 + 4) & 0xfffffffc;
    } while (uVar9 != uVar11);
  }
  uVar9 = *(uint *)(param_4 + 0xb);
  if (0 < (int)uVar9) {
    uVar11 = 0;
    do {
      plVar6 = *(long **)(param_4[0xc] + uVar11 * 8);
      (**(code **)(*plVar6 + 0x38))(plVar6,param_4 + 4);
      uVar11 = uVar11 + 1;
    } while (uVar9 != uVar11);
  }
  return;
}


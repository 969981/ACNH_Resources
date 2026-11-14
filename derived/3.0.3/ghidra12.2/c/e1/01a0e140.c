
void FUN_01a0e140(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  size_t __size;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  void *pvVar8;
  uint uVar9;
  long *plVar10;
  int iVar11;
  ulong uVar12;
  undefined *local_88;
  long lStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  
  puVar4 = PTR_DAT_04bb3350;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  plVar10 = *(long **)(lVar5 + 0xa8);
  plVar6 = (long *)param_4[9];
  while (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x40))();
    plVar6 = (long *)param_4[9];
  }
  uVar9 = *(uint *)(param_4 + 0xf);
  if ((int)uVar9 < 2) {
    uVar9 = 1;
  }
  __size = (ulong)uVar9 << 6;
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    pvVar8 = malloc(__size);
  }
  else {
    if (plVar10 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      puVar2 = (undefined8 *)(lVar5 + 8);
      if (lVar7 != 0) {
        puVar2 = (undefined8 *)(lVar7 + 0xa8);
      }
      plVar10 = (long *)*puVar2;
      if (plVar10 == (long *)0x0) goto LAB_01a0e284;
    }
    pvVar8 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,__size,8);
  }
  if (pvVar8 != (void *)0x0) {
    uVar3 = uVar9 - 1;
    param_4[0xd] = (long)pvVar8;
    if (1 < uVar9) {
      if (uVar3 == 1) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0;
        plVar6 = (long *)((long)pvVar8 + 0x38);
        do {
          uVar12 = uVar12 + 2;
          plVar6[-7] = (long)plVar6;
          *plVar6 = (long)(plVar6 + 7);
          plVar6 = plVar6 + 0xe;
        } while (((ulong)uVar3 & 0xfffffffe) != uVar12);
      }
      if ((uVar3 & 1) != 0) {
        plVar6 = (long *)((long)pvVar8 + uVar12 * 0x38);
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
LAB_01a0e284:
  lVar5 = param_4[0xf];
  local_4c = (**(code **)(*param_4 + 0x60))(param_4,0);
  puVar4 = PTR_PTR_04bb2238;
  uVar9 = *(uint *)(param_4 + 0xb);
  iVar11 = (int)lVar5 - uVar9;
  uStack_48 = param_2;
  local_44 = param_3;
  if (iVar11 != 0 && (int)uVar9 <= (int)lVar5) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      lStack_80 = param_4[5];
      uStack_70 = *(undefined8 *)(puVar4 + 8);
      local_58 = (undefined4)param_4[8];
      plVar6 = (long *)param_4[0xd];
      if (plVar6 != (long *)0x0) {
        param_4[0xd] = *plVar6;
      }
      local_88 = puVar1;
      local_78 = puVar1;
      local_68 = puVar1;
      uStack_60 = uStack_70;
      FUN_006fdfc0(plVar6,&local_88,&local_4c,0);
      *plVar6 = (long)&DAT_049f9d00;
      if ((int)param_4[0xb] < *(int *)((long)param_4 + 0x5c)) {
        *(long **)(param_4[0xc] + (long)(int)param_4[0xb] * 8) = plVar6;
        *(int *)(param_4 + 0xb) = (int)param_4[0xb] + 1;
      }
      iVar11 = iVar11 + -1;
      *(uint *)(plVar6 + 4) = *(uint *)(plVar6 + 4) & 0xfffffffc;
    } while (iVar11 != 0);
    uVar9 = *(uint *)(param_4 + 0xb);
  }
  if (0 < (int)uVar9) {
    uVar12 = 0;
    do {
      plVar6 = *(long **)(param_4[0xc] + uVar12 * 8);
      (**(code **)(*plVar6 + 0x38))(plVar6,param_4 + 4);
      uVar12 = uVar12 + 1;
    } while (uVar9 != uVar12);
  }
  return;
}


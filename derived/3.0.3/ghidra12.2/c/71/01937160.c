
void FUN_01937160(long *param_1)

{
  uint *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  size_t __size;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  void *pvVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  uint uVar13;
  long lVar14;
  undefined *local_88;
  long lStack_80;
  undefined *local_78;
  long lStack_70;
  undefined *local_68;
  long lStack_60;
  undefined *local_58;
  long local_50;
  undefined4 local_48;
  undefined1 auStack_44 [4];
  undefined8 local_28;
  
  puVar4 = PTR_DAT_04bb3350;
  if (param_1[0xc] != 0) {
    uVar13 = *(uint *)(param_1 + 0xf);
    if ((int)uVar13 <= *(int *)((long)param_1 + 0x5c)) {
      plVar5 = (long *)param_1[9];
      if (plVar5 != (long *)0x0) {
        do {
          (**(code **)(*plVar5 + 0x40))();
          plVar5 = (long *)param_1[9];
        } while (plVar5 != (long *)0x0);
        uVar13 = *(uint *)(param_1 + 0xf);
      }
      puVar1 = (uint *)(param_1 + 0xb);
      uVar6 = (**(code **)(*param_1 + 0x60))(param_1,0);
      puVar4 = PTR_PTR_04bb2238;
      uVar9 = *(uint *)(param_1 + 0xb);
      iVar10 = uVar13 - uVar9;
      if ((int)uVar13 < (int)uVar9) {
        if (uVar13 < uVar9 || iVar10 == 0) {
          lVar14 = (long)(int)uVar13;
          do {
            plVar5 = *(long **)(param_1[0xc] + lVar14 * 8);
            (**(code **)*plVar5)(plVar5);
            lVar14 = lVar14 + 1;
            *plVar5 = param_1[0xd];
            param_1[0xd] = (long)plVar5;
          } while (lVar14 < (int)param_1[0xb]);
          *puVar1 = uVar13;
          uVar9 = uVar13;
        }
      }
      else {
        local_28 = uVar6;
        if (iVar10 != 0 && (int)uVar9 <= (int)uVar13) {
          puVar2 = PTR_DAT_04bb2020 + 0x10;
          do {
            lStack_70 = param_1[5];
            _local_48 = CONCAT44(auStack_44,(int)param_1[8]);
            lStack_60 = *(long *)(puVar4 + 8);
            local_78 = puVar2;
            local_68 = puVar2;
            local_58 = puVar2;
            local_50 = lStack_60;
            lVar14 = FUN_01936854(puVar1,&local_78,&local_28);
            iVar10 = iVar10 + -1;
            *(uint *)(lVar14 + 0x20) = *(uint *)(lVar14 + 0x20) & 0xfffffffc;
          } while (iVar10 != 0);
          uVar9 = *puVar1;
        }
      }
      if (0 < (int)uVar9) {
        uVar11 = 0;
        do {
          plVar5 = *(long **)(param_1[0xc] + uVar11 * 8);
          (**(code **)(*plVar5 + 0x38))(plVar5,param_1 + 4);
          uVar11 = uVar11 + 1;
        } while (uVar9 != uVar11);
      }
    }
    return;
  }
  lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  plVar12 = *(long **)(lVar14 + 0xa8);
  plVar5 = (long *)param_1[9];
  while (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x40))();
    plVar5 = (long *)param_1[9];
  }
  uVar13 = *(uint *)(param_1 + 0xf);
  if ((int)uVar13 < 2) {
    uVar13 = 1;
  }
  __size = (ulong)uVar13 << 8;
  lVar14 = *(long *)PTR_DAT_04bb2698;
  if (lVar14 == 0) {
    pvVar8 = malloc(__size);
  }
  else {
    if (plVar12 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      puVar3 = (undefined8 *)(lVar14 + 8);
      if (lVar7 != 0) {
        puVar3 = (undefined8 *)(lVar7 + 0xa8);
      }
      plVar12 = (long *)*puVar3;
      if (plVar12 == (long *)0x0) goto LAB_01937454;
    }
    pvVar8 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,__size,8);
  }
  if (pvVar8 != (void *)0x0) {
    uVar9 = uVar13 - 1;
    param_1[0xd] = (long)pvVar8;
    if (1 < uVar13) {
      if (uVar9 == 1) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        plVar5 = (long *)((long)pvVar8 + 0xf8);
        do {
          uVar11 = uVar11 + 2;
          plVar5[-0x1f] = (long)plVar5;
          *plVar5 = (long)(plVar5 + 0x1f);
          plVar5 = plVar5 + 0x3e;
        } while (((ulong)uVar9 & 0xfffffffe) != uVar11);
      }
      if ((uVar9 & 1) != 0) {
        plVar5 = (long *)((long)pvVar8 + uVar11 * 0xf8);
        *plVar5 = (long)(plVar5 + 0x1f);
      }
    }
    *(undefined8 *)((long)pvVar8 + (long)(int)(uVar9 * 0x1f) * 8) = 0;
    param_1[0xe] = (long)pvVar8;
    pvVar8 = (void *)((long)pvVar8 + (ulong)uVar13 * 0xf8);
    if (pvVar8 != (void *)0x0) {
      param_1[0xc] = (long)pvVar8;
      *(undefined4 *)(param_1 + 0xb) = 0;
      *(uint *)((long)param_1 + 0x5c) = uVar13;
    }
  }
LAB_01937454:
  lVar14 = param_1[0xf];
  (**(code **)(*param_1 + 0x60))(param_1,0);
  puVar4 = PTR_PTR_04bb2238;
  uVar13 = *(uint *)(param_1 + 0xb);
  iVar10 = (int)lVar14 - uVar13;
  if (iVar10 != 0 && (int)uVar13 <= (int)lVar14) {
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    do {
      lStack_80 = param_1[5];
      local_58 = (undefined *)CONCAT44(local_58._4_4_,(int)param_1[8]);
      lStack_70 = *(long *)(puVar4 + 8);
      local_88 = puVar2;
      local_78 = puVar2;
      local_68 = puVar2;
      lStack_60 = lStack_70;
      lVar14 = FUN_01936854(param_1 + 0xb,&local_88,auStack_44 + 0xc);
      iVar10 = iVar10 + -1;
      *(uint *)(lVar14 + 0x20) = *(uint *)(lVar14 + 0x20) & 0xfffffffc;
    } while (iVar10 != 0);
    uVar13 = *(uint *)(param_1 + 0xb);
  }
  if (0 < (int)uVar13) {
    uVar11 = 0;
    do {
      plVar5 = *(long **)(param_1[0xc] + uVar11 * 8);
      (**(code **)(*plVar5 + 0x38))(plVar5,param_1 + 4);
      uVar11 = uVar11 + 1;
    } while (uVar13 != uVar11);
  }
  return;
}



void FUN_0289e220(undefined8 param_1,long param_2,undefined4 param_3)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  void *pvVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined4 local_804;
  undefined *local_800;
  undefined1 auStack_7f8 [1876];
  uint local_a4;
  uint local_a0;
  uint local_9c;
  int local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined **local_88;
  undefined4 *puStack_80;
  
  lVar9 = *(long *)PTR_DAT_04bb46b0;
  if (lVar9 != 0) {
    puVar10 = *(undefined8 **)(lVar9 + 0x10);
    if ((*(byte *)(lVar9 + 0x453) & 1) == 0) {
      lVar7 = (**(code **)(*(long *)*puVar10 + 0x38))();
      lVar9 = 0;
      if (lVar7 != 0) {
        lVar9 = lVar7 + 0x70;
      }
      goto LAB_0289e2a8;
    }
    if (puVar10 != (undefined8 *)0x0) {
      lVar9 = 0;
      if ((long *)puVar10[0x26] != (long *)0x0) {
        lVar9 = (**(code **)(*(long *)puVar10[0x26] + 0x38))();
      }
      goto LAB_0289e2a8;
    }
  }
  lVar9 = 0;
LAB_0289e2a8:
  plVar1 = (long *)(lVar9 + 0x1c24c8);
  if ((*(long **)(lVar9 + 0x1c24e8) == (long *)0x0) ||
     (puVar10 = (undefined8 *)**(long **)(lVar9 + 0x1c24e8), puVar10 == (undefined8 *)0x0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = (**(code **)*puVar10)();
    uVar4 = uVar4 ^ 1;
  }
  lVar7 = *plVar1;
  lVar3 = *(long *)(lVar9 + 0x1c24d0);
  if (((DAT_0557ee20 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0557ee20), iVar6 != 0)) {
    DAT_0557ede0 = 0x9a;
    DAT_0557ede4 = 0x81f;
    DAT_0557ede8 = 0x98;
    DAT_0557edec = 0xe;
    DAT_0557edf0 = 0x9b;
    DAT_0557edf4 = 0x3c;
    DAT_0557edf8 = 0x99;
    DAT_0557edfc = 0xe70;
    DAT_0557ee00 = 0x97;
    DAT_0557ee04 = 0x7c0;
    DAT_0557ee08 = 0x96;
    DAT_0557ee0c = 0x1e0;
    DAT_0557ee10 = 0x94;
    DAT_0557ee14 = 0xf81;
    DAT_0557ee18 = 0x9c;
    DAT_0557ee1c = 0xc0f;
    __cxa_guard_release(&DAT_0557ee20);
  }
  local_8c = (&DAT_0557ede0)[(ulong)*(byte *)(lVar3 + lVar7 + 0x925) * 2];
  lVar7 = *plVar1;
  lVar3 = *(long *)(lVar9 + 0x1c24d0);
  if (((DAT_0557ee20 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0557ee20), iVar6 != 0)) {
    DAT_0557ede0 = 0x9a;
    DAT_0557ede4 = 0x81f;
    DAT_0557ede8 = 0x98;
    DAT_0557edec = 0xe;
    DAT_0557edf0 = 0x9b;
    DAT_0557edf4 = 0x3c;
    DAT_0557edf8 = 0x99;
    DAT_0557edfc = 0xe70;
    DAT_0557ee00 = 0x97;
    DAT_0557ee04 = 0x7c0;
    DAT_0557ee08 = 0x96;
    DAT_0557ee0c = 0x1e0;
    DAT_0557ee10 = 0x94;
    DAT_0557ee14 = 0xf81;
    DAT_0557ee18 = 0x9c;
    DAT_0557ee1c = 0xc0f;
    __cxa_guard_release(&DAT_0557ee20);
  }
  puVar2 = PTR_DAT_04bbfe60 + 0x10;
  local_90 = (&DAT_0557ede0)[(ulong)*(byte *)(lVar3 + lVar7 + 0x924) * 2];
  local_800 = puVar2;
  memset(auStack_7f8,0,0x754);
  uVar5 = nn::os::GetSystemTick();
  local_a4 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
  local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 2;
  local_9c = (local_a0 ^ local_a0 >> 0x1e) * 0x6c078965 + 3;
  local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 4;
  pvVar8 = (void *)FUN_01a451fc(&local_800);
  memset(pvVar8,0,0x754);
  puStack_80 = &local_90;
  local_88 = &PTR_FUN_049ff4e8;
  FUN_008a1ba0(&local_800,&local_88);
  FUN_0289e6c0(param_1,&local_800,param_3,0);
  local_800 = puVar2;
  memset(auStack_7f8,0,0x754);
  uVar5 = nn::os::GetSystemTick();
  local_a4 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
  local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 2;
  local_9c = (local_a0 ^ local_a0 >> 0x1e) * 0x6c078965 + 3;
  local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 4;
  pvVar8 = (void *)FUN_01a451fc(&local_800);
  memset(pvVar8,0,0x754);
  puStack_80 = &local_8c;
  local_88 = &PTR_FUN_049ff4e8;
  FUN_008a1ba0(&local_800,&local_88);
  FUN_0289e6c0(param_1,&local_800,param_3,0);
  local_800 = puVar2;
  memset(auStack_7f8,0,0x754);
  uVar5 = nn::os::GetSystemTick();
  local_a4 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
  local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 2;
  local_9c = (local_a0 ^ local_a0 >> 0x1e) * 0x6c078965 + 3;
  local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 4;
  pvVar8 = (void *)FUN_01a451fc(&local_800);
  memset(pvVar8,0,0x754);
  local_804 = 0;
  FUN_0275b938(*(long *)(lVar9 + 0x1c24d0) + *plVar1,&local_804,(long)*(char *)(param_2 + 0x12));
  local_88 = &PTR_FUN_049ff4e8;
  puStack_80 = &local_804;
  FUN_008a1ba0(&local_800,&local_88);
  FUN_0289e6c0(param_1,&local_800,param_3,0);
  if ((((uVar4 & 1) == 0) && (*(long *)(lVar9 + 0x1c24e8) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x1c24e8) + 8), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
  return;
}


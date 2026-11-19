
void * FUN_03c2c60c(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined *local_a8;
  undefined8 uStack_a0;
  long *local_98;
  long *plStack_90;
  undefined4 local_88;
  int iStack_84;
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  long *local_68;
  int local_60;
  undefined1 local_5c;
  undefined8 local_58;
  uint local_34;
  
  puVar2 = PTR_DAT_04bb2650;
  local_80 = 0;
  local_58 = 0;
  lVar9 = param_2 + 8;
  local_5c = 1;
  uStack_a0 = *(undefined8 *)(param_2 + 0x10);
  plVar11 = *(long **)(param_2 + 0x130);
  lStack_78 = (ulong)*(uint *)(param_2 + 0x124) << 0x20;
  iStack_84 = *(int *)(param_2 + 0x120);
  local_a8 = PTR_DAT_04bb2020 + 0x10;
  if (iStack_84 < 0x21) {
    iStack_84 = 0x20;
  }
  local_88 = 0x20;
  local_68 = *(long **)(*(long *)PTR_DAT_04bb2650 + 0x100);
  local_60 = (uint)*(byte *)(param_2 + 0x144) << 0x14;
  local_98 = plVar11;
  plStack_90 = plVar11;
  local_70 = FUN_03c2c8f0(param_1,lVar9);
  lVar10 = *(long *)PTR_DAT_04bb2698;
  if (lVar10 == 0) {
    pvVar6 = malloc(0x1b8);
  }
  else {
    plVar5 = plVar11;
    if (plVar11 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar7 = (undefined8 *)(lVar10 + 8);
      if (lVar4 != 0) {
        puVar7 = (undefined8 *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*puVar7;
    }
    pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x1b8,8);
  }
  FUN_03c2d240(pvVar6,param_2,plVar11);
  if (*(char *)(param_1 + 0x2440) != '\0') {
    local_34 = local_34 & 0xffffff00;
    plVar11 = *(long **)(*(long *)puVar2 + 0x108);
    if (((char)plVar11[0xf] != '\0') &&
       ((**(code **)(*plVar11 + 0xc0))(plVar11,&local_34,lVar9), (char)local_34 != '\0')) {
      local_68 = plVar11;
    }
  }
  lVar10 = *(long *)(param_1 + 0x2488);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(param_2 + 8) + 0x18))(lVar9);
    FUN_038d13f0(lVar10,"+\"%s\"\n",*(undefined8 *)(param_2 + 0x10));
  }
  local_34 = 3;
  puVar7 = (undefined8 *)FUN_038d9cc0(*(undefined8 *)PTR_DAT_04bb28c8,&local_a8);
  if (((*PTR_DAT_04bb2828 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb2828), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bb2820 = PTR_DAT_04bb2830 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb2828);
  }
  if ((puVar7 == (undefined8 *)0x0) ||
     (uVar8 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bb2820), (uVar8 & 1) == 0)) {
    puVar7 = (undefined8 *)0x0;
  }
  *(undefined8 **)((long)pvVar6 + 0x48) = puVar7;
  puVar7 = (undefined8 *)((long)pvVar6 + 0x28);
  uVar1 = *(uint *)(param_2 + 0x14c);
  lVar9 = *(long *)((long)pvVar6 + 0x40);
  if (lVar9 != 0) {
    *(undefined8 *)((long)pvVar6 + 0x40) = 0;
    if (*(long *)((long)pvVar6 + 0x28) != 0) {
      *(undefined8 *)(*(long *)((long)pvVar6 + 0x28) + 8) = *(undefined8 *)((long)pvVar6 + 0x30);
    }
    if (*(undefined8 **)((long)pvVar6 + 0x30) != (undefined8 *)0x0) {
      **(undefined8 **)((long)pvVar6 + 0x30) = *puVar7;
    }
    *puVar7 = 0;
    *(undefined8 *)((long)pvVar6 + 0x30) = 0;
    *(int *)(lVar9 + 0x10) = *(int *)(lVar9 + 0x10) + -1;
  }
  plVar11 = (long *)(param_1 + 0x348) + (ulong)uVar1 * 3;
  if (99 < uVar1) {
    plVar11 = (long *)(param_1 + 0x348);
  }
  *(long **)((long)pvVar6 + 0x40) = plVar11;
  lVar9 = *plVar11;
  *plVar11 = (long)puVar7;
  *(long *)((long)pvVar6 + 0x28) = lVar9;
  *(long **)((long)pvVar6 + 0x30) = plVar11;
  if (lVar9 != 0) {
    *(undefined8 **)(lVar9 + 8) = puVar7;
  }
  *(int *)(plVar11 + 2) = (int)plVar11[2] + 1;
  return pvVar6;
}


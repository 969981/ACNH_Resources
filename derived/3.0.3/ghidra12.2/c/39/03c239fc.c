
void FUN_03c239fc(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  void *pvVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined4 local_70 [2];
  undefined *local_68;
  char *pcStack_60;
  undefined4 local_58;
  undefined2 local_54;
  
  FUN_038e18e4();
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  FUN_038e3114(param_1 + 0x48,0,0x7fff);
  *(undefined4 *)(param_1 + 0x90) = 0;
  FUN_038e3114(param_1 + 0x98,0,0x7fff);
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  puVar5 = PTR_DAT_04bbdb78;
  puVar4 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb2698;
  puVar2 = PTR_DAT_04bb2020;
  local_70[0] = 0x1d;
  uVar10 = *(undefined8 *)PTR_DAT_04bbdb78;
  local_58 = 0;
  local_68 = PTR_DAT_04bb2020 + 0x10;
  pcStack_60 = "SysLayoutDefault";
  lVar11 = *(long *)PTR_DAT_04bb2698;
  local_54 = 0x101;
  if (lVar11 == 0) {
    pvVar8 = malloc(0x11e0);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar1 = (undefined8 *)(lVar11 + 8);
    if (lVar7 != 0) {
      puVar1 = (undefined8 *)(lVar7 + 0xa8);
    }
    pvVar8 = (void *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x11e0,8);
  }
  FUN_03c2120c();
  FUN_039721c0(uVar10,pvVar8,local_70,0);
  lVar11 = 0xe8;
  if (*(uint *)(*(long *)puVar5 + 0x20) < 0x1e) {
    lVar11 = 0;
  }
  plVar12 = *(long **)(*(long *)(*(long *)puVar5 + 0x28) + lVar11);
  if (((*PTR_DAT_04bbdc88 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bbdc88), iVar6 != 0))
  {
    *(undefined **)PTR_DAT_04bbdc80 = PTR_DAT_04bbdc90 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbdc88);
  }
  uVar9 = (**(code **)(*plVar12 + 0x10))(plVar12,PTR_DAT_04bbdc80);
  if ((uVar9 & 1) == 0) {
    plVar12 = (long *)0x0;
  }
  plVar12[0x197] = -1;
  plVar12[0x198] = -1;
  plVar12[0x199] = -1;
  plVar12[0x19a] = -1;
  *(undefined4 *)(plVar12 + 0x197) = 0x3e;
  lVar11 = *(long *)PTR_DAT_04bbd8f8;
  if (lVar11 != 0) {
    *(uint *)(lVar11 + 0x3e0) = *(uint *)(lVar11 + 0x3e0) | 0x40000000;
  }
  FUN_03eb32b0(pvVar8);
  lVar11 = *(long *)puVar3;
  local_68 = puVar2 + 0x10;
  local_70[0] = 0x1e;
  pcStack_60 = "SysDbg2D";
  local_58 = 0;
  local_54 = 0x101;
  if (lVar11 == 0) {
    pvVar8 = malloc(0x11e0);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    puVar1 = (undefined8 *)(lVar11 + 8);
    if (lVar7 != 0) {
      puVar1 = (undefined8 *)(lVar7 + 0xa8);
    }
    pvVar8 = (void *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x11e0,8);
  }
  FUN_03c2120c();
  FUN_039721c0(uVar10,pvVar8,local_70,0);
  FUN_03eb32b0(pvVar8);
  return;
}


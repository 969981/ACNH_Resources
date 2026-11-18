
void FUN_031fc7fc(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined *local_50;
  undefined4 local_48;
  
  bVar3 = (param_2 & 1) == 0;
  uVar10 = 0;
  if (bVar3) {
    uVar10 = 0x3f800000;
  }
  uVar11 = 0x3f800000;
  if (bVar3) {
    uVar11 = 0;
  }
  puVar8 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x218) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if ((puVar8 != (undefined8 *)0x0) &&
     (uVar5 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc4e58), puVar2 = PTR_DAT_04bc4f00,
     (uVar5 & 1) != 0)) {
    uVar7 = *(uint *)(puVar8 + 0x44);
    lVar6 = puVar8[0x45];
    lVar1 = 0x18;
    if (uVar7 < 4) {
      lVar1 = 0;
    }
    plVar9 = *(long **)(lVar6 + lVar1);
    if (plVar9 != (long *)0x0) {
      local_50 = PTR_DAT_04bc4f00 + 0x10;
      local_48 = 0x14;
      (**(code **)(*plVar9 + 0x18))(plVar9,&local_50);
      (**(code **)(plVar9[3] + 0x158))(uVar11,plVar9[1]);
      uVar7 = *(uint *)(puVar8 + 0x44);
      lVar6 = puVar8[0x45];
    }
    lVar1 = 0x28;
    if (uVar7 < 6) {
      lVar1 = 0;
    }
    plVar9 = *(long **)(lVar6 + lVar1);
    if (plVar9 != (long *)0x0) {
      local_50 = puVar2 + 0x10;
      local_48 = 0x14;
      (**(code **)(*plVar9 + 0x18))(plVar9,&local_50);
      (**(code **)(plVar9[3] + 0x158))(uVar10,plVar9[1]);
    }
  }
  return;
}


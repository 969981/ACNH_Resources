
void FUN_034f50b0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  undefined *local_70;
  undefined4 local_68;
  
  puVar5 = PTR_DAT_04bc4d98;
  puVar4 = PTR_DAT_04bc4d90;
  lVar10 = *(long *)(*(long *)(param_1 + 0x238) + 0x570);
  if ((lVar10 != 0) && (uVar3 = *(uint *)(lVar10 + 0x2f8), 0 < (int)uVar3)) {
    uVar11 = 0;
    puVar1 = PTR_DAT_04bc4da0 + 0x10;
    puVar2 = PTR_DAT_04bc4f00 + 0x10;
    do {
      if ((long)uVar11 < (long)(int)*(uint *)(lVar10 + 0x208) && uVar11 < *(uint *)(lVar10 + 0x208))
      {
        puVar8 = *(undefined8 **)(*(long *)(lVar10 + 0x210) + uVar11 * 8);
      }
      else {
        puVar8 = (undefined8 *)0x0;
      }
      if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar5), iVar6 != 0)) {
        *(undefined **)puVar4 = puVar1;
        __cxa_guard_release(puVar5);
      }
      if (((puVar8 != (undefined8 *)0x0) &&
          (uVar7 = (**(code **)*puVar8)(puVar8,puVar4), (uVar7 & 1) != 0)) &&
         (plVar9 = *(long **)(puVar8[0x5e] + (ulong)(1 < *(uint *)(puVar8 + 0x5d)) * 8),
         plVar9 != (long *)0x0)) {
        local_68 = 0x14;
        local_70 = puVar2;
        (**(code **)(*plVar9 + 0x18))(plVar9,&local_70);
        (**(code **)(plVar9[3] + 0x158))(0x40000000,plVar9[1]);
      }
      uVar11 = uVar11 + 1;
    } while (uVar3 != uVar11);
  }
  return;
}


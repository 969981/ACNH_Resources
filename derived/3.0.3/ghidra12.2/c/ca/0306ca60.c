
void FUN_0306ca60(long *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined4 uVar12;
  undefined *local_80;
  undefined4 local_78;
  
  lVar7 = (**(code **)(*param_1 + 0x218))();
  puVar5 = PTR_DAT_04bc4d98;
  puVar4 = PTR_DAT_04bc4d90;
  if ((lVar7 != 0) && (uVar3 = *(uint *)(lVar7 + 0x2f8), uVar3 != 0)) {
    uVar12 = 0;
    if (param_2 != 0x52) {
      uVar12 = 0x3f800000;
    }
    uVar11 = 0;
    puVar1 = PTR_DAT_04bc4da0 + 0x10;
    puVar2 = PTR_DAT_04bc4f00 + 0x10;
    do {
      puVar10 = (undefined8 *)0x0;
      if (((-1 < (int)uVar11) && ((int)uVar11 < (int)*(uint *)(lVar7 + 0x208))) &&
         (uVar11 < *(uint *)(lVar7 + 0x208))) {
        puVar10 = *(undefined8 **)(*(long *)(lVar7 + 0x210) + uVar11 * 8);
      }
      if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar5), iVar6 != 0)) {
        *(undefined **)puVar4 = puVar1;
        __cxa_guard_release(puVar5);
      }
      if (((puVar10 != (undefined8 *)0x0) &&
          (uVar8 = (**(code **)*puVar10)(puVar10,puVar4), (uVar8 & 1) != 0)) &&
         (plVar9 = (long *)(**(code **)(*param_1 + 0x230))(param_1,puVar10), plVar9 != (long *)0x0))
      {
        local_78 = 0x14;
        local_80 = puVar2;
        (**(code **)(*plVar9 + 0x18))(plVar9,&local_80);
        (**(code **)(plVar9[3] + 0x158))(uVar12,plVar9[1]);
      }
      uVar11 = uVar11 + 1;
    } while (uVar3 != uVar11);
  }
  return;
}


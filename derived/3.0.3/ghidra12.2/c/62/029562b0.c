
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029562b0(undefined8 param_1,long param_2,undefined4 param_3,ulong *param_4,long param_5)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  undefined1 local_54 [4];
  uint local_38;
  int local_34;
  
  if (param_2 == 0) {
    return;
  }
  puVar1 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  if (param_4 != (ulong *)0x0) {
    puVar1 = param_4;
  }
  if (param_5 == 0) {
    bVar11 = 0x17;
  }
  else {
    bVar11 = *(byte *)(param_5 + 4);
  }
  uVar12 = *puVar1;
  if (DAT_05574040 != 0) {
    puVar7 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar5 = (**(code **)(*(long *)*puVar7 + 0x38))();
      lVar6 = 0;
      if (lVar5 != 0) {
        lVar6 = lVar5 + 0x70;
      }
      plVar8 = *(long **)(lVar6 + 0x28);
      goto joined_r0x02956380;
    }
    if ((puVar7 != (undefined8 *)0x0) && ((long *)puVar7[0x26] != (long *)0x0)) {
      lVar6 = (**(code **)(*(long *)puVar7[0x26] + 0x38))();
      plVar8 = *(long **)(lVar6 + 0x28);
      goto joined_r0x02956380;
    }
  }
  lVar6 = 0;
  plVar8 = _DAT_00000028;
joined_r0x02956380:
  if ((plVar8 == (long *)0x0) || ((undefined8 *)*plVar8 == (undefined8 *)0x0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = (*(code *)**(undefined8 **)*plVar8)();
    uVar4 = uVar4 ^ 1;
  }
  uVar14 = uVar12 >> 0x20;
  local_38 = *(uint *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8) + 0x1e3604);
  if (1 < local_38) {
    local_38 = 0;
  }
  if ((((uVar4 & 1) == 0) && (*(long *)(lVar6 + 0x28) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 8), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  local_54[0] = 0;
  uVar4 = (uint)(uVar12 >> 0x20);
  if ((uVar4 & 0xff) <= (uint)bVar11) {
    uVar9 = 1;
    if (6 < (uVar4 - 9 & 0xff)) {
      uVar9 = (uint)(4 < (uVar4 - 0x10 & 0xff)) << 1;
    }
    uVar10 = 0;
    if (4 < (uVar4 - 4 & 0xff)) {
      uVar10 = uVar9;
    }
    uVar4 = 1 << (ulong)uVar10;
    if (2 < uVar10) {
      uVar4 = 0;
    }
    uVar9 = uVar4;
    do {
      iVar13 = (int)uVar14;
      if ((iVar13 - 4U & 0xff) < 5) {
        uVar10 = 0;
      }
      else {
        uVar10 = 1;
        if (6 < (iVar13 - 9U & 0xff)) {
          uVar10 = (uint)(4 < (iVar13 - 0x10U & 0xff)) << 1;
        }
      }
      uVar14 = (ulong)(iVar13 + 1U);
      uVar2 = uVar9 | 1 << (ulong)uVar10;
      uVar3 = uVar2;
      if (2 < uVar10) {
        uVar2 = uVar9;
        uVar3 = uVar4;
      }
      uVar4 = uVar3;
      uVar9 = uVar2;
    } while ((iVar13 + 1U & 0xff) <= (uint)bVar11);
    local_54[0] = (undefined1)uVar4;
  }
  local_34 = ((uint)uVar12 >> 0x10 & 0xff) - 1;
  FUN_02956500(param_1,param_2,param_3,&local_38,local_54,&local_34);
  return;
}


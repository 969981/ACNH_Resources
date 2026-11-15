
void FUN_01f0369c(long param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  uint local_34;
  
  lVar6 = *(long *)PTR_DAT_04bb46b0;
  if (lVar6 == 0) {
LAB_01f03734:
    bVar3 = 0;
  }
  else {
    puVar7 = *(undefined8 **)(lVar6 + 0x10);
    if ((*(byte *)(lVar6 + 0x453) & 1) == 0) {
      lVar6 = (**(code **)(*(long *)*puVar7 + 0x38))();
      if (lVar6 == 0) goto LAB_01f03734;
      lVar6 = lVar6 + 0x70;
    }
    else if (((puVar7 == (undefined8 *)0x0) || ((long *)puVar7[0x26] == (long *)0x0)) ||
            (lVar6 = (**(code **)(*(long *)puVar7[0x26] + 0x38))(), lVar6 == 0)) goto LAB_01f03734;
    if ((*(long **)(lVar6 + 0x1bf260) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x1bf260), puVar7 == (undefined8 *)0x0)) {
      uVar4 = 1;
    }
    else {
      uVar4 = (**(code **)*puVar7)();
      uVar4 = uVar4 ^ 1;
    }
    bVar3 = FUN_028d53e4(*(long *)(lVar6 + 0x1bf248) + *(long *)(lVar6 + 0x1bf240));
    if ((((uVar4 & 1) == 0) && (*(long *)(lVar6 + 0x1bf260) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x1bf260) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
  lVar6 = *(long *)(param_1 + 8);
  uVar4 = *(uint *)(lVar6 + 0x288);
  *(undefined4 *)(lVar6 + 0x288) = *(undefined4 *)(lVar6 + 0x28c);
  uVar4 = uVar4 ^ uVar4 << 0xb;
  *(undefined4 *)(lVar6 + 0x28c) = *(undefined4 *)(lVar6 + 0x290);
  uVar2 = *(uint *)(lVar6 + 0x294);
  *(uint *)(lVar6 + 0x290) = uVar2;
  uVar4 = uVar4 >> 8 ^ uVar2 >> 0x13 ^ uVar4 ^ uVar2;
  *(uint *)(lVar6 + 0x294) = uVar4;
  if ((uint)((ulong)uVar4 * 100 >> 0x20) < 0x50) {
    lVar6 = *(long *)(param_1 + 8);
    uVar4 = *(uint *)(lVar6 + 0x288);
    *(undefined4 *)(lVar6 + 0x288) = *(undefined4 *)(lVar6 + 0x28c);
    uVar4 = uVar4 ^ uVar4 << 0xb;
    *(undefined4 *)(lVar6 + 0x28c) = *(undefined4 *)(lVar6 + 0x290);
    uVar2 = *(uint *)(lVar6 + 0x294);
    *(uint *)(lVar6 + 0x290) = uVar2;
    uVar4 = uVar4 >> 8 ^ uVar2 >> 0x13 ^ uVar4 ^ uVar2;
    *(uint *)(lVar6 + 0x294) = uVar4;
    lVar6 = 2;
    if ((bVar3 & 1) == 0) {
      lVar6 = 3;
    }
    iVar5 = (int)(lVar6 * (ulong)uVar4 >> 0x20);
    local_34 = iVar5 + 1;
    if (((bVar3 & 1) != 0) && (1 < local_34)) {
      local_34 = iVar5 + 2;
    }
    puVar1 = (uint *)(param_1 + 0x12898);
    if ((*puVar1 != 0) && ((int)*puVar1 <= (int)local_34)) {
      local_34 = local_34 + 1;
    }
    *puVar1 = local_34;
  }
  else {
    lVar6 = *(long *)(param_1 + 8);
    uVar4 = *(uint *)(lVar6 + 0x288);
    *(undefined4 *)(lVar6 + 0x288) = *(undefined4 *)(lVar6 + 0x28c);
    uVar4 = uVar4 ^ uVar4 << 0xb;
    *(undefined4 *)(lVar6 + 0x28c) = *(undefined4 *)(lVar6 + 0x290);
    uVar2 = *(uint *)(lVar6 + 0x294);
    *(uint *)(lVar6 + 0x290) = uVar2;
    uVar4 = uVar4 >> 8 ^ uVar2 >> 0x13 ^ uVar4 ^ uVar2;
    *(uint *)(lVar6 + 0x294) = uVar4;
    lVar6 = 3;
    if ((bVar3 & 1) == 0) {
      lVar6 = 4;
    }
    local_34 = (int)(lVar6 * (ulong)uVar4 >> 0x20) + 1;
    *(uint *)(param_1 + 0x12898) = local_34;
  }
  if ((bVar3 & local_34 == 2) == 1) {
    iVar5 = 3;
    if (*(int *)(param_1 + 0x12898) != 1) {
      iVar5 = *(int *)(param_1 + 0x12898) + 1;
    }
    *(int *)(param_1 + 0x12898) = iVar5;
  }
  return;
}


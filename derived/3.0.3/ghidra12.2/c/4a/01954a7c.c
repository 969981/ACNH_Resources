
bool FUN_01954a7c(long param_1,undefined8 param_2,int *param_3,int *param_4)

{
  long *plVar1;
  bool bVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  code *pcVar8;
  uint local_44;
  
  lVar6 = *(long *)PTR_DAT_04bb46b0;
  if (lVar6 == 0) {
LAB_01954b20:
    uVar5 = 0;
  }
  else {
    puVar7 = *(undefined8 **)(lVar6 + 0x10);
    if ((*(byte *)(lVar6 + 0x453) & 1) == 0) {
      lVar6 = (**(code **)(*(long *)*puVar7 + 0x38))();
      if (lVar6 == 0) goto LAB_01954b20;
      lVar6 = lVar6 + 0x70;
    }
    else if (((puVar7 == (undefined8 *)0x0) || ((long *)puVar7[0x26] == (long *)0x0)) ||
            (lVar6 = (**(code **)(*(long *)puVar7[0x26] + 0x38))(), lVar6 == 0)) goto LAB_01954b20;
    if ((*(long **)(lVar6 + 0x28) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x28), puVar7 == (undefined8 *)0x0)) {
      uVar4 = 1;
    }
    else {
      uVar4 = (**(code **)*puVar7)();
      uVar4 = uVar4 ^ 1;
    }
    uVar5 = *(uint *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8) + 0x1e3604);
    if (1 < uVar5) {
      uVar5 = 0;
    }
    if ((((uVar4 & 1) == 0) && (*(long *)(lVar6 + 0x28) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
  local_44 = uVar5;
  lVar6 = FUN_01950d30(param_1,&local_44);
  bVar2 = false;
  if ((lVar6 != 0) && (DAT_052d2598 != 0)) {
    uVar5 = FUN_0277d6c4(param_2);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if (uVar5 < *(uint *)(lVar6 + 0x1d8)) {
      lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar5 * 8);
      if (lVar6 == 0) {
        bVar2 = false;
      }
      else {
        uVar5 = *param_4 + *param_3 * 6;
        plVar1 = (long *)(param_1 + 0x170) + (ulong)uVar5 * 2;
        if (0x47 < uVar5) {
          plVar1 = (long *)(param_1 + 0x170);
        }
        pcVar8 = (code *)*plVar1;
        if ((plVar1[1] & 1U) != 0) {
          pcVar8 = *(code **)(pcVar8 + *(long *)(lVar6 + (plVar1[1] >> 1)));
        }
        sVar3 = (*pcVar8)();
        bVar2 = sVar3 != 0;
      }
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}


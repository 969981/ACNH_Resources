
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021e9590(undefined8 *param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  if (param_2 == 0) {
LAB_021e96f4:
    uVar4 = DAT_0558600c;
    *(undefined4 *)param_1 = _DAT_05586008;
    *(undefined4 *)((long)param_1 + 4) = uVar4;
    return;
  }
  uVar6 = *(uint *)(param_2 + 0x508);
  if ((param_3 & 1) == 0) {
    if ((9 < uVar6) ||
       (puVar10 = &DAT_053fe348 + (ulong)uVar6 * 0xba0,
       (&DAT_053fee41)[(ulong)uVar6 * 0xba0] == '\0')) {
      puVar10 = (undefined *)0x0;
    }
    piVar2 = (int *)PTR_DAT_04bc2838;
    if (puVar10 != (undefined *)0x0) {
      piVar2 = (int *)(puVar10 + 0x524);
    }
    if (*piVar2 != 3) {
      puVar10 = &DAT_053fe348 + (ulong)uVar6 * 0xba0;
      if (9 < uVar6) {
        puVar10 = &DAT_053fe348;
      }
      puVar1 = (undefined *)0x0;
      if (uVar6 != 0xffffffff) {
        puVar1 = puVar10;
      }
      piVar2 = (int *)PTR_DAT_04bc2830;
      if (uVar6 != 0xffffffff) {
        piVar2 = (int *)(puVar1 + 0x51c);
      }
      iVar3 = *piVar2;
      if (iVar3 == 2) {
        uVar9 = 0x1bd5;
      }
      else if (iVar3 == 1) {
        uVar9 = 0x111f;
      }
      else {
        if (iVar3 != 0) goto LAB_021e96f4;
        uVar9 = 0x1bd4;
      }
      goto LAB_021e9690;
    }
  }
  lVar7 = FUN_0265c2a0();
  if (lVar7 == 0) {
    uVar6 = 0;
  }
  else {
    if ((*(long **)(lVar7 + 0x28) == (long *)0x0) ||
       (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x28), puVar8 == (undefined8 *)0x0)) {
      uVar5 = 1;
    }
    else {
      uVar5 = (**(code **)*puVar8)();
      uVar5 = uVar5 ^ 1;
    }
    uVar6 = FUN_020fd7d8(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8));
    if ((((uVar5 & 1) == 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
  }
  if ((uVar6 & 0xff) - 4 < 4) {
    uVar9 = 0x1c8f;
  }
  else {
    if (3 < (uVar6 & 0xff)) goto LAB_021e96f4;
    uVar9 = 0x1c90;
  }
LAB_021e9690:
  *param_1 = uVar9;
  FUN_0277d4ac(param_1);
  return;
}


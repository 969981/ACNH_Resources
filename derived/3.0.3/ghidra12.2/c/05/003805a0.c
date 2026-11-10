
void FUN_003805a0(long *param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  lVar10 = *param_1;
  uVar2 = *(undefined8 *)(lVar10 + 0x80);
  uVar5 = *(undefined8 *)(lVar10 + 0x88);
  uVar3 = *(undefined8 *)(lVar10 + 0x90);
  uVar6 = *(undefined8 *)(lVar10 + 0x98);
  uVar4 = *(undefined8 *)(lVar10 + 0x70);
  uVar7 = *(undefined8 *)(lVar10 + 0x78);
  if ((param_1[1] == 0) && (lVar10 = FUN_0037c748(lVar10,3), lVar10 != 0)) {
    lVar10 = FUN_0037c748(*param_1,3);
    param_1[1] = lVar10;
  }
  if ((param_1[0xb] == 0) && (lVar10 = FUN_0037c748(*param_1,4), lVar10 != 0)) {
    lVar10 = FUN_0037c748(*param_1,4);
    param_1[0xb] = lVar10;
  }
  if (param_1[1] != 0) {
    *(undefined1 *)(param_2 + 0x18b) = 0;
    *(undefined8 *)(param_2 + 0x90) = uVar2;
    *(undefined8 *)(param_2 + 0x98) = uVar5;
    *(undefined8 *)(param_2 + 0xa0) = uVar3;
    *(undefined8 *)(param_2 + 0xa8) = uVar6;
    *(undefined8 *)(param_2 + 0x80) = uVar4;
    *(undefined8 *)(param_2 + 0x88) = uVar7;
    FUN_0038079c(param_1,param_2);
    if ((long *)param_1[3] == (long *)0x0) {
      puVar11 = (undefined8 *)0x0;
      bVar1 = *PTR_DAT_04bd08c8;
    }
    else {
      puVar11 = (undefined8 *)(**(code **)(*(long *)param_1[3] + 0x48))();
      bVar1 = *PTR_DAT_04bd08c8;
    }
    if (((bVar1 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04bd08c8), puVar8 = PTR_DAT_04bd07a8, iVar9 != 0)) {
      if (((*PTR_DAT_04bd07a0 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04bd07a0), iVar9 != 0)) {
        *(undefined8 *)puVar8 = 0;
        __cxa_guard_release(PTR_DAT_04bd07a0);
      }
      *(undefined **)PTR_DAT_04bd08d0 = puVar8;
      __cxa_guard_release(PTR_DAT_04bd08c8);
    }
    if (puVar11 != (undefined8 *)0x0) {
      puVar12 = (undefined8 *)(**(code **)*puVar11)(puVar11);
      if (puVar12 != (undefined8 *)PTR_DAT_04bd08d0) {
        do {
          puVar12 = (undefined8 *)*puVar12;
        } while (puVar12 != (undefined8 *)PTR_DAT_04bd08d0 && puVar12 != (undefined8 *)0x0);
        if (puVar12 == (undefined8 *)0x0) goto LAB_003806e0;
      }
      *(byte *)(puVar11 + 0x2b) = *(byte *)(puVar11 + 0x2b) | 2;
    }
  }
LAB_003806e0:
  if (param_1[0xb] == 0) {
    return;
  }
  *(undefined1 *)(param_2 + 0x18b) = 0;
  *(undefined8 *)(param_2 + 0x90) = uVar2;
  *(undefined8 *)(param_2 + 0x98) = uVar5;
  *(undefined8 *)(param_2 + 0xa0) = uVar3;
  *(undefined8 *)(param_2 + 0xa8) = uVar6;
  *(undefined8 *)(param_2 + 0x80) = uVar4;
  *(undefined8 *)(param_2 + 0x88) = uVar7;
  FUN_0038093c(param_1,param_2);
  return;
}


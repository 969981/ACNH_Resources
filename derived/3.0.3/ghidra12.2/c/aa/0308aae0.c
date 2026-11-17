
void FUN_0308aae0(long param_1,ulong param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  
  puVar4 = PTR_DAT_04bc4d98;
  puVar3 = PTR_DAT_04bc4d90;
  if (((*(long *)(param_1 + 0x1670) != 0) &&
      (lVar8 = *(long *)(*(long *)(param_1 + 0x1670) + 0x590), lVar8 != 0)) &&
     (uVar2 = *(uint *)(lVar8 + 0x2f8), 0 < (int)uVar2)) {
    uVar9 = 0;
    if ((param_2 & 1) == 0) {
      puVar1 = PTR_DAT_04bc4da0 + 0x10;
      do {
        if ((long)uVar9 < (long)(int)*(uint *)(lVar8 + 0x208) && uVar9 < *(uint *)(lVar8 + 0x208)) {
          puVar7 = *(undefined8 **)(*(long *)(lVar8 + 0x210) + uVar9 * 8);
        }
        else {
          puVar7 = (undefined8 *)0x0;
        }
        if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
          *(undefined **)puVar3 = puVar1;
          __cxa_guard_release(puVar4);
        }
        if ((puVar7 != (undefined8 *)0x0) &&
           (uVar6 = (**(code **)*puVar7)(puVar7,puVar3), (uVar6 & 1) != 0)) {
          FUN_03d49da4(puVar7[0x43],0,7);
          FUN_03d49da4(puVar7[0x43],1,7);
          FUN_03d49da4(puVar7[0x43],2,7);
          FUN_03d49da4(puVar7[0x43],3,7);
        }
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    else {
      puVar1 = PTR_DAT_04bc4da0 + 0x10;
      do {
        if ((long)uVar9 < (long)(int)*(uint *)(lVar8 + 0x208) && uVar9 < *(uint *)(lVar8 + 0x208)) {
          puVar7 = *(undefined8 **)(*(long *)(lVar8 + 0x210) + uVar9 * 8);
        }
        else {
          puVar7 = (undefined8 *)0x0;
        }
        if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
          *(undefined **)puVar3 = puVar1;
          __cxa_guard_release(puVar4);
        }
        if ((puVar7 != (undefined8 *)0x0) &&
           (uVar6 = (**(code **)*puVar7)(puVar7,puVar3), (uVar6 & 1) != 0)) {
          FUN_03d5d280(puVar7,7);
          *(undefined1 *)((long)puVar7 + 0x313) = 1;
        }
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
  }
  return;
}


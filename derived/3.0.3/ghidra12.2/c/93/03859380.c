
void FUN_03859380(undefined8 param_1,long param_2,byte param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  
  puVar3 = PTR_DAT_04bc4c98;
  puVar2 = PTR_DAT_04bc4c90;
  if (param_2 != 0) {
    lVar6 = *(long *)(param_2 + 0xa0);
    if (lVar6 != 0) {
      if (*(long *)(lVar6 + 0x80) != lVar6 + 0x78) {
        lVar8 = (long)*(int *)(lVar6 + 0x8c);
        puVar7 = (undefined8 *)(*(long *)(lVar6 + 0x80) - lVar8);
        puVar1 = PTR_DAT_04bc4ca0 + 0x10;
        do {
          if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar3), iVar4 != 0)) {
            *(undefined **)puVar2 = puVar1;
            __cxa_guard_release(puVar3);
          }
          if (((puVar7 != (undefined8 *)0x0) &&
              (uVar5 = (**(code **)*puVar7)(puVar7,puVar2), (uVar5 & 1) != 0)) &&
             (puVar7[0x42] != 0)) {
            *(byte *)(puVar7[0x42] + 0x54) = (param_3 ^ 0xff) & 1;
          }
          puVar7 = (undefined8 *)(*(long *)((long)puVar7 + lVar8 + 8) - lVar8);
        } while (puVar7 != (undefined8 *)((lVar6 + 0x78) - lVar8));
      }
    }
    if (*(long *)(param_2 + 0x58) != param_2 + 0x50) {
      lVar8 = (long)*(int *)(param_2 + 100);
      lVar6 = *(long *)(param_2 + 0x58) - lVar8;
      do {
        FUN_03859380(param_1,lVar6,param_3 & 1);
        lVar6 = *(long *)(lVar6 + lVar8 + 8) - lVar8;
      } while (lVar6 != (param_2 + 0x50) - lVar8);
    }
  }
  return;
}


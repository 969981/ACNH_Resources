
void FUN_03406ec0(int *param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  if (param_2 != 0) {
    iVar5 = *param_1;
    if (iVar5 != 0) {
      lVar7 = *(long *)(param_1 + 2);
      iVar8 = 0;
      do {
        iVar1 = iVar8 + 1;
        *(undefined1 *)(lVar7 + iVar8) = 0;
        iVar8 = iVar1;
      } while (iVar5 != iVar1);
    }
    puVar4 = PTR_DAT_04bc4d98;
    puVar3 = PTR_DAT_04bc4d90;
    if (*(int *)(param_2 + 0x208) != 0) {
      lVar7 = (long)*(int *)(param_2 + 0x208) << 3;
      puVar10 = *(undefined8 **)(param_2 + 0x210);
      puVar2 = PTR_DAT_04bc4da0 + 0x10;
      do {
        puVar9 = (undefined8 *)*puVar10;
        if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
          *(undefined **)puVar3 = puVar2;
          __cxa_guard_release(puVar4);
        }
        if (((puVar9 != (undefined8 *)0x0) &&
            (uVar6 = (**(code **)*puVar9)(puVar9,puVar3), (uVar6 & 1) != 0)) &&
           (uVar6 = (**(code **)(puVar9[0x74] + 0x10))(puVar9 + 0x74), (uVar6 & 1) == 0)) {
          puVar9[0x75] = param_1;
          puVar9[0x76] = &LAB_03406fe4;
          puVar9[0x77] = 0;
          puVar9[0x74] = &PTR_LAB_04b297a8;
        }
        puVar10 = puVar10 + 1;
        lVar7 = lVar7 + -8;
      } while (lVar7 != 0);
    }
  }
  return;
}


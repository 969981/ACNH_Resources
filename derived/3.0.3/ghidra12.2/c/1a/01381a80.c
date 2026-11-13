
void FUN_01381a80(long param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *__ptr;
  
  puVar3 = *(undefined8 **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    __ptr = puVar3 + -1;
    lVar4 = *__ptr;
    if (lVar4 != 0) {
      puVar5 = puVar3 + lVar4 * 0xd;
      uVar6 = lVar4 * 0x68 - 0x68;
      uVar1 = ((uint)(uVar6 / 0x68) & 0x7ffffff) + 1;
      if ((uVar1 & 7) != 0) {
        lVar4 = ((ulong)uVar1 & 7) * 0x68;
        do {
          lVar4 = lVar4 + -0x68;
          puVar5 = puVar5 + -0xd;
          *puVar5 = &PTR_LAB_04993978;
        } while (lVar4 != 0);
      }
      if (0x2d7 < uVar6) {
        do {
          puVar5[-0xd] = &PTR_LAB_04993978;
          puVar5[-0x1a] = &PTR_LAB_04993978;
          puVar5[-0x27] = &PTR_LAB_04993978;
          puVar5[-0x34] = &PTR_LAB_04993978;
          puVar5[-0x41] = &PTR_LAB_04993978;
          puVar5[-0x4e] = &PTR_LAB_04993978;
          puVar7 = puVar5 + -0x5b;
          puVar5 = puVar5 + -0x68;
          *puVar7 = &PTR_LAB_04993978;
          *puVar5 = &PTR_LAB_04993978;
        } while (puVar5 != puVar3);
      }
    }
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
      }
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  FUN_013835c8(param_1 + 0x40);
  if (*(char *)(param_1 + 0x88) == '\0') {
    return;
  }
  FUN_013835c8(param_1 + 0xa8);
  return;
}


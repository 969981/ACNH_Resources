
void FUN_02c249c4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  byte local_48 [4];
  byte local_44 [4];
  
  *(undefined1 *)(*(long *)(param_1 + 0x1c250) + 0x28) = 1;
  lVar5 = (*(code *)**(undefined8 **)(param_1 + 0x1c1d0))();
  if (lVar5 == 0) {
    if (((DAT_0537d558 == 0) || (*(long *)(DAT_0537d558 + 0x28) == 0)) ||
       (*(int *)(DAT_0537d558 + 0x80) != 1)) {
      local_48[0] = *(byte *)(param_1 + 0x1f8);
      if (7 < local_48[0]) {
        local_48[0] = 0xff;
      }
      bVar4 = FUN_02669430(local_48);
      lVar5 = 0;
    }
    else {
      lVar5 = 0;
      bVar4 = 0;
    }
  }
  else {
    lVar5 = (**(code **)(**(long **)(*(long *)(lVar5 + 0x10) +
                                    (ulong)*(uint *)(param_1 + 0x1c1c8) * 8) + 0x40))();
    if (((DAT_0537d558 == 0) || (*(long *)(DAT_0537d558 + 0x28) == 0)) ||
       ((*(int *)(DAT_0537d558 + 0x80) != 1 && (*(int *)(DAT_0537d558 + 0x80) != 1)))) {
      local_44[0] = *(byte *)(param_1 + 0x1f8);
      if (7 < local_44[0]) {
        local_44[0] = 0xff;
      }
      uVar6 = FUN_02669430(local_44);
      if ((uVar6 & 1) == 0) {
        bVar4 = FUN_02c28e10(lVar5,(byte *)(param_1 + 0x1f8));
      }
      else {
        bVar4 = 1;
      }
    }
    else {
      bVar4 = 0;
    }
  }
  lVar7 = param_1 + 0x1f8;
  bVar3 = FUN_02c25690(lVar5,lVar7);
  lVar1 = 0x60;
  if (*(uint *)(param_1 + 0x1c248) < 3) {
    lVar1 = 0;
  }
  *(byte *)(*(long *)(param_1 + 0x1c250) + lVar1 + 0x28) = (bVar4 | bVar3) & 1;
  uVar6 = (ulong)(2 < *(uint *)(param_1 + 0x1c248));
  if (*(char *)(*(long *)(param_1 + 0x1c250) + uVar6 * 0x60 + 0x28) != '\0') {
    puVar2 = &UNK_040f086a;
    if ((bVar3 & 1) == 0) {
      puVar2 = &DAT_040f0865;
    }
    if ((bVar4 & 1) == 0) {
      puVar2 = &DAT_040bc4f0;
    }
    *(undefined **)(*(long *)(param_1 + 0x1c250) + uVar6 * 0x60) = puVar2;
  }
  if ((DAT_0537d558 == 0) || (*(long *)(DAT_0537d558 + 0x28) == 0)) {
    if (lVar5 != 0) {
LAB_02c24bb4:
      bVar4 = FUN_02c28e10(lVar5,lVar7);
      goto LAB_02c24bc0;
    }
  }
  else {
    bVar4 = 0;
    if ((lVar5 == 0) || (*(int *)(DAT_0537d558 + 0x80) == 1)) goto LAB_02c24bc0;
    if (*(int *)(DAT_0537d558 + 0x80) != 1) goto LAB_02c24bb4;
  }
  bVar4 = 0;
LAB_02c24bc0:
  *(byte *)(*(long *)(param_1 + 0x1c250) + (ulong)(1 < *(uint *)(param_1 + 0x1c248)) * 0x30 + 0x28)
       = bVar4 & 1;
  FUN_03440390(param_1 + 0x1c248,lVar7);
  return;
}



void FUN_036dde80(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined2 uVar5;
  long lVar6;
  undefined **local_70;
  undefined **ppuStack_68;
  undefined *local_50;
  undefined1 *puStack_48;
  undefined4 local_40;
  undefined1 local_3c [7];
  undefined1 local_35;
  
  *(undefined4 *)(param_1 + 0x14) = 2;
  lVar2 = DAT_053e0208;
  if (DAT_053e0208 != 0) {
    local_35 = 0;
    local_40 = 8;
    puStack_48 = local_3c;
    local_3c[0] = 0;
    local_50 = PTR_DAT_04bb3768 + 0x10;
    if ((((DAT_05ab8198 == (ushort *)0x0) || ((*DAT_05ab8198 & 1) == 0)) || (DAT_05ab7608 == 0)) ||
       (lVar6 = *(long *)(DAT_05ab7608 + 8), lVar6 == 0)) {
      uVar5 = *(undefined2 *)(param_1 + 0x2a);
    }
    else if ((*(long **)(lVar6 + 0x60) == (long *)0x0) ||
            (puVar3 = (undefined8 *)**(long **)(lVar6 + 0x60), puVar3 == (undefined8 *)0x0)) {
      uVar5 = *(undefined2 *)(*(long *)(lVar6 + 0x48) + *(long *)(lVar6 + 0x40) + 2);
    }
    else {
      uVar4 = (**(code **)*puVar3)();
      uVar5 = *(undefined2 *)(*(long *)(lVar6 + 0x48) + *(long *)(lVar6 + 0x40) + 2);
      if ((((uVar4 & 1) != 0) && (*(long *)(lVar6 + 0x60) != 0)) &&
         (puVar3 = *(undefined8 **)(*(long *)(lVar6 + 0x60) + 8), puVar3 != (undefined8 *)0x0)) {
        (**(code **)*puVar3)();
      }
    }
    FUN_0376b510(&local_50,uVar5);
    local_70 = &PTR_FUN_04b453f8;
    iVar1 = *(int *)(lVar2 + 0xb88);
    if (iVar1 != 0) {
      lVar6 = (long)iVar1 << 3;
      puVar3 = *(undefined8 **)(lVar2 + 0xb90);
      ppuStack_68 = &local_50;
      do {
        (*(code *)*local_70)(&local_70,*puVar3);
        lVar6 = lVar6 + -8;
        puVar3 = puVar3 + 1;
      } while (lVar6 != 0);
    }
  }
  return;
}


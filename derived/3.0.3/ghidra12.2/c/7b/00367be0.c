
void FUN_00367be0(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  puVar3 = PTR_DAT_04bd0810;
  puVar2 = PTR_DAT_04bd0808;
  lVar4 = *(long *)(param_1 + 0x58);
  if (lVar4 == 0) goto LAB_00367c44;
  if (*(long *)(lVar4 + 8) == 0) {
LAB_00367c34:
    (**(code **)puVar2)(lVar4,*(undefined8 *)puVar3);
  }
  else {
    (**(code **)PTR_DAT_04bd0808)(*(long *)(lVar4 + 8),*(undefined8 *)PTR_DAT_04bd0810);
    lVar4 = *(long *)(param_1 + 0x58);
    if (lVar4 != 0) goto LAB_00367c34;
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
LAB_00367c44:
  plVar5 = *(long **)(param_1 + 0x50);
  while (plVar5 != (long *)(param_1 + 0x48)) {
    plVar1 = (long *)plVar5[1];
    lVar4 = *plVar1;
    *(long **)(*plVar5 + 8) = plVar1;
    *plVar1 = *plVar5;
    *(long **)(lVar4 + 8) = plVar5;
    *plVar5 = lVar4;
    plVar5 = *(long **)(param_1 + 0x50);
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    FUN_00367680(lVar4);
    (**(code **)puVar2)(lVar4,*(undefined8 *)puVar3);
  }
  plVar5 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if ((plVar5 != (long *)0x0) && ((*(byte *)(plVar5 + 0xb) >> 3 & 1) == 0)) {
    (**(code **)(*plVar5 + 0x18))(plVar5,param_2);
    puVar6 = *(undefined8 **)(param_1 + 0x18);
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6);
      (**(code **)puVar2)(puVar6,*(undefined8 *)puVar3);
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  while (plVar5 != (long *)(param_1 + 8)) {
    plVar1 = (long *)plVar5[1];
    lVar4 = *plVar1;
    *(long **)(*plVar5 + 8) = plVar1;
    *plVar1 = *plVar5;
    *(long **)(lVar4 + 8) = plVar5;
    *plVar5 = lVar4;
    plVar5 = plVar5 + -1;
    (**(code **)(*plVar5 + 8))(plVar5);
    (**(code **)puVar2)(plVar5,*(undefined8 *)puVar3);
    plVar5 = plVar1;
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}


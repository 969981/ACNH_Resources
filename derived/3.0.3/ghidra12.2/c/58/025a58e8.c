
void FUN_025a58e8(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *local_50;
  char *pcStack_48;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    return;
  }
  lVar4 = *(long *)PTR_DAT_04bb46b0;
  if (lVar4 != 0) {
    puVar5 = *(undefined8 **)(lVar4 + 0x10);
    if ((*(byte *)(lVar4 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar5 + 0x38))();
      lVar4 = 0;
      if (lVar3 != 0) {
        lVar4 = lVar3 + 0x70;
      }
      goto LAB_025a5968;
    }
    if (puVar5 != (undefined8 *)0x0) {
      lVar4 = 0;
      if ((long *)puVar5[0x26] != (long *)0x0) {
        lVar4 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
      }
      goto LAB_025a5968;
    }
  }
  lVar4 = 0;
LAB_025a5968:
  plVar1 = (long *)(lVar4 + 0x1bf198);
  if ((*(long **)(lVar4 + 0x1bf1b8) == (long *)0x0) ||
     (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x1bf1b8), puVar5 == (undefined8 *)0x0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = (**(code **)*puVar5)();
    uVar2 = uVar2 ^ 1;
  }
  lVar6 = *(long *)(param_1 + 0x30);
  FUN_027bcb80(*(long *)(lVar4 + 0x1bf1a0) + *plVar1,0x6a);
  lVar3 = nn::prepo::Struct::GetBuffer();
  if (lVar3 != 0) {
    nn::prepo::Struct::Add((char *)(lVar6 + 8),0x40d5c21);
  }
  lVar6 = *(long *)(param_1 + 0x30);
  FUN_027bcb80(*(long *)(lVar4 + 0x1bf1a0) + *plVar1,0x69);
  lVar3 = nn::prepo::Struct::GetBuffer();
  if (lVar3 != 0) {
    nn::prepo::Struct::Add((char *)(lVar6 + 8),0x40ffb34);
  }
  lVar6 = *(long *)(param_1 + 0x30);
  FUN_027bcb80(*(long *)(lVar4 + 0x1bf1a0) + *plVar1,0xa4);
  lVar3 = nn::prepo::Struct::GetBuffer();
  if (lVar3 != 0) {
    nn::prepo::Struct::Add((char *)(lVar6 + 8),0x40a7389);
  }
  lVar6 = *(long *)(param_1 + 0x30);
  FUN_027bcb80(*(long *)(lVar4 + 0x1bf1a0) + *plVar1,0xa5);
  lVar3 = nn::prepo::Struct::GetBuffer();
  if (lVar3 != 0) {
    nn::prepo::Struct::Add((char *)(lVar6 + 8),0x4092c6e);
  }
  lVar6 = *(long *)(param_1 + 0x30);
  FUN_027bcb80(*(long *)(lVar4 + 0x1bf1a0) + *plVar1,0x70);
  lVar3 = nn::prepo::Struct::GetBuffer();
  if (lVar3 != 0) {
    nn::prepo::Struct::Add((char *)(lVar6 + 8),0x409795b);
  }
  lVar6 = *(long *)(param_1 + 0x30);
  FUN_027ba860(*(long *)(lVar4 + 0x1bf1a0) + *plVar1);
  lVar3 = nn::prepo::Struct::GetBuffer();
  if (lVar3 != 0) {
    nn::prepo::Struct::Add((char *)(lVar6 + 8),0x40f0346);
  }
  nn::prepo::Struct::GetSize();
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "Collection";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605cc0(*(long *)(param_1 + 8),&local_50,*(undefined8 *)(param_1 + 0x30));
  }
  if ((((uVar2 & 1) == 0) && (*(long *)(lVar4 + 0x1bf1b8) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x1bf1b8) + 8), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}


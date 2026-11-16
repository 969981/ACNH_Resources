
/* WARNING: Type propagation algorithm not settling */

void FUN_025a75d0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 local_50;
  char *pcStack_48;
  
  if (*(long *)(param_1 + 0x40) == 0) {
    return;
  }
  if (*(byte *)(param_1 + 0x18) < 8) {
    local_50 = (undefined *)CONCAT71(local_50._1_7_,*(byte *)(param_1 + 0x18));
    lVar1 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_50,1);
  }
  else {
    if (*(int *)(param_1 + 0x1c) == -1) {
      return;
    }
    if (*(long *)PTR_DAT_04bb46b0 == 0) {
      return;
    }
    lVar1 = FUN_026eec4c();
  }
  if (lVar1 == 0) {
    return;
  }
  lVar6 = lVar1 + 0x194b0;
  if (*(long *)(lVar1 + 0x194b8) == 0) {
    lVar6 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    plVar4 = *(long **)(lVar6 + 0x1170);
  }
  else {
    plVar4 = *(long **)(lVar1 + 0x1a620);
  }
  if ((plVar4 == (long *)0x0) || ((undefined8 *)*plVar4 == (undefined8 *)0x0)) {
    local_50._4_4_ = (undefined4)((ulong)local_50 >> 0x20);
    local_50 = (undefined *)
               CONCAT44(local_50._4_4_,
                        (uint)*(byte *)(*(long *)(lVar6 + 0x1158) + *(long *)(lVar6 + 0x1150) +
                                       0x100));
  }
  else {
    uVar3 = (*(code *)**(undefined8 **)*plVar4)();
    local_50 = (undefined *)
               CONCAT44(local_50._4_4_,
                        (uint)*(byte *)(*(long *)(lVar6 + 0x1158) + *(long *)(lVar6 + 0x1150) +
                                       0x100));
    if (((uVar3 & 1) != 0) &&
       ((*(long *)(lVar6 + 0x1170) != 0 &&
        (puVar2 = *(undefined8 **)(*(long *)(lVar6 + 0x1170) + 8), puVar2 != (undefined8 *)0x0)))) {
      (**(code **)*puVar2)();
    }
  }
  plVar7 = (long *)(lVar6 + 0x1158);
  plVar4 = (long *)(lVar6 + 0x1150);
  lVar5 = *(long *)(param_1 + 0x40);
  lVar1 = nn::prepo::Array::GetBuffer();
  if (lVar1 != 0) {
    nn::prepo::Array::Add(lVar5 + 8);
  }
  if ((*(long **)(lVar6 + 0x1170) == (long *)0x0) ||
     (puVar2 = (undefined8 *)**(long **)(lVar6 + 0x1170), puVar2 == (undefined8 *)0x0)) {
    local_50 = (undefined *)CONCAT44(local_50._4_4_,(uint)*(byte *)(*plVar7 + *plVar4 + 0x101));
  }
  else {
    uVar3 = (**(code **)*puVar2)();
    local_50 = (undefined *)CONCAT44(local_50._4_4_,(uint)*(byte *)(*plVar7 + *plVar4 + 0x101));
    if ((((uVar3 & 1) != 0) && (*(long *)(lVar6 + 0x1170) != 0)) &&
       (puVar2 = *(undefined8 **)(*(long *)(lVar6 + 0x1170) + 8), puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)();
    }
  }
  lVar5 = *(long *)(param_1 + 0x40);
  lVar1 = nn::prepo::Array::GetBuffer();
  if (lVar1 != 0) {
    nn::prepo::Array::Add(lVar5 + 8);
  }
  if ((*(long **)(lVar6 + 0x1170) == (long *)0x0) ||
     (puVar2 = (undefined8 *)**(long **)(lVar6 + 0x1170), puVar2 == (undefined8 *)0x0)) {
    local_50 = (undefined *)CONCAT44(local_50._4_4_,(uint)*(byte *)(*plVar7 + *plVar4 + 0x102));
  }
  else {
    uVar3 = (**(code **)*puVar2)();
    local_50 = (undefined *)CONCAT44(local_50._4_4_,(uint)*(byte *)(*plVar7 + *plVar4 + 0x102));
    if ((((uVar3 & 1) != 0) && (*(long *)(lVar6 + 0x1170) != 0)) &&
       (puVar2 = *(undefined8 **)(*(long *)(lVar6 + 0x1170) + 8), puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)();
    }
  }
  lVar5 = *(long *)(param_1 + 0x40);
  lVar1 = nn::prepo::Array::GetBuffer();
  if (lVar1 != 0) {
    nn::prepo::Array::Add(lVar5 + 8);
  }
  if ((*(long **)(lVar6 + 0x1170) == (long *)0x0) ||
     (puVar2 = (undefined8 *)**(long **)(lVar6 + 0x1170), puVar2 == (undefined8 *)0x0)) {
    local_50 = (undefined *)CONCAT44(local_50._4_4_,(uint)*(byte *)(*plVar7 + *plVar4 + 0x103));
  }
  else {
    uVar3 = (**(code **)*puVar2)();
    local_50 = (undefined *)CONCAT44(local_50._4_4_,(uint)*(byte *)(*plVar7 + *plVar4 + 0x103));
    if ((((uVar3 & 1) != 0) && (*(long *)(lVar6 + 0x1170) != 0)) &&
       (puVar2 = *(undefined8 **)(*(long *)(lVar6 + 0x1170) + 8), puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)();
    }
  }
  lVar5 = *(long *)(param_1 + 0x40);
  lVar1 = nn::prepo::Array::GetBuffer();
  if (lVar1 != 0) {
    nn::prepo::Array::Add(lVar5 + 8);
  }
  if ((*(long **)(lVar6 + 0x1170) == (long *)0x0) ||
     (puVar2 = (undefined8 *)**(long **)(lVar6 + 0x1170), puVar2 == (undefined8 *)0x0)) {
    local_50 = (undefined *)CONCAT44(local_50._4_4_,(uint)*(byte *)(*plVar7 + *plVar4 + 0x104));
  }
  else {
    uVar3 = (**(code **)*puVar2)();
    local_50 = (undefined *)CONCAT44(local_50._4_4_,(uint)*(byte *)(*plVar7 + *plVar4 + 0x104));
    if ((((uVar3 & 1) != 0) && (*(long *)(lVar6 + 0x1170) != 0)) &&
       (puVar2 = *(undefined8 **)(*(long *)(lVar6 + 0x1170) + 8), puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)();
    }
  }
  lVar5 = *(long *)(param_1 + 0x40);
  lVar1 = nn::prepo::Array::GetBuffer();
  if (lVar1 != 0) {
    nn::prepo::Array::Add(lVar5 + 8);
  }
  if ((*(long **)(lVar6 + 0x1170) == (long *)0x0) ||
     (puVar2 = (undefined8 *)**(long **)(lVar6 + 0x1170), puVar2 == (undefined8 *)0x0)) {
    local_50 = (undefined *)CONCAT44(local_50._4_4_,(uint)*(byte *)(*plVar7 + *plVar4 + 0x105));
  }
  else {
    uVar3 = (**(code **)*puVar2)();
    local_50 = (undefined *)CONCAT44(local_50._4_4_,(uint)*(byte *)(*plVar7 + *plVar4 + 0x105));
    if ((((uVar3 & 1) != 0) && (*(long *)(lVar6 + 0x1170) != 0)) &&
       (puVar2 = *(undefined8 **)(*(long *)(lVar6 + 0x1170) + 8), puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)();
    }
  }
  lVar5 = *(long *)(param_1 + 0x40);
  lVar1 = nn::prepo::Array::GetBuffer();
  if (lVar1 != 0) {
    nn::prepo::Array::Add(lVar5 + 8);
  }
  if ((*(long **)(lVar6 + 0x1170) == (long *)0x0) ||
     (puVar2 = (undefined8 *)**(long **)(lVar6 + 0x1170), puVar2 == (undefined8 *)0x0)) {
    local_50 = (undefined *)CONCAT44(local_50._4_4_,(uint)*(byte *)(*plVar7 + *plVar4 + 0x106));
  }
  else {
    uVar3 = (**(code **)*puVar2)();
    local_50 = (undefined *)CONCAT44(local_50._4_4_,(uint)*(byte *)(*plVar7 + *plVar4 + 0x106));
    if ((((uVar3 & 1) != 0) && (*(long *)(lVar6 + 0x1170) != 0)) &&
       (puVar2 = *(undefined8 **)(*(long *)(lVar6 + 0x1170) + 8), puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)();
    }
  }
  lVar5 = *(long *)(param_1 + 0x40);
  lVar1 = nn::prepo::Array::GetBuffer();
  if (lVar1 != 0) {
    nn::prepo::Array::Add(lVar5 + 8);
  }
  if ((*(long **)(lVar6 + 0x1170) == (long *)0x0) ||
     (puVar2 = (undefined8 *)**(long **)(lVar6 + 0x1170), puVar2 == (undefined8 *)0x0)) {
    local_50 = (undefined *)CONCAT44(local_50._4_4_,(uint)*(byte *)(*plVar7 + *plVar4 + 0x107));
  }
  else {
    uVar3 = (**(code **)*puVar2)();
    local_50 = (undefined *)CONCAT44(local_50._4_4_,(uint)*(byte *)(*plVar7 + *plVar4 + 0x107));
    if ((((uVar3 & 1) != 0) && (*(long *)(lVar6 + 0x1170) != 0)) &&
       (puVar2 = *(undefined8 **)(*(long *)(lVar6 + 0x1170) + 8), puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)();
    }
  }
  lVar6 = *(long *)(param_1 + 0x40);
  lVar1 = nn::prepo::Array::GetBuffer();
  if (lVar1 != 0) {
    nn::prepo::Array::Add(lVar6 + 8);
  }
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "ReactionList";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605b30(*(long *)(param_1 + 8),&local_50,*(undefined8 *)(param_1 + 0x40));
  }
  return;
}


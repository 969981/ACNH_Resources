
void FUN_030fe394(long param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  undefined *local_40;
  undefined4 local_38;
  
  *(undefined4 *)(param_1 + 0x458) = 0;
  uVar2 = 0;
  if (param_2 != DAT_056f1348) {
    if (param_2 == DAT_056f1360) {
      uVar2 = 1;
    }
    else if (param_2 == DAT_056f1378) {
      uVar2 = 2;
    }
    else if (param_2 == DAT_056f1390) {
      uVar2 = 3;
    }
    else if (param_2 == DAT_056f13a8) {
      uVar2 = 4;
    }
    else if (param_2 == DAT_056f13c0) {
      uVar2 = 5;
    }
    else if (param_2 == DAT_056f13d8) {
      uVar2 = 6;
    }
    else if (param_2 == DAT_056f13f0) {
      uVar2 = 7;
    }
    else if (param_2 == DAT_056f1408) {
      uVar2 = 8;
    }
    else if (param_2 == DAT_056f1420) {
      uVar2 = 9;
    }
    else if (param_2 == DAT_056f1438) {
      uVar2 = 10;
    }
    else if (param_2 == DAT_056f1450) {
      uVar2 = 0xb;
    }
    else if (param_2 == DAT_056f1468) {
      uVar2 = 0xc;
    }
    else if (param_2 == DAT_056f1480) {
      uVar2 = 0xd;
    }
    else if (param_2 == DAT_056f1498) {
      uVar2 = 0xe;
    }
    else {
      fVar5 = 0.0;
      if (param_2 != DAT_056f14b0) goto LAB_030fe57c;
      uVar2 = 0xf;
    }
  }
  fVar5 = (float)uVar2;
  *(uint *)(param_1 + 0x458) = uVar2;
LAB_030fe57c:
  plVar3 = *(long **)(param_1 + 0x408);
  if (plVar3 != (long *)0x0) {
    puVar1 = PTR_DAT_04bc4f00 + 0x10;
    local_38 = 9;
    local_40 = puVar1;
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_40);
    fVar4 = (float)(**(code **)(plVar3[3] + 0xb0))(plVar3[1]);
    if (fVar5 <= fVar4) {
      local_38 = 0x14;
      local_40 = puVar1;
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
      (**(code **)(plVar3[3] + 0x158))(fVar5,plVar3[1]);
    }
  }
  plVar3 = *(long **)(param_1 + 0x410);
  if (plVar3 != (long *)0x0) {
    local_40 = PTR_DAT_04bc4e68 + 0x10;
    local_38 = 6;
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
    (**(code **)(plVar3[3] + 0x1b8))(plVar3[1]);
  }
  return;
}



void FUN_025a52e0(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined *local_b0;
  char *local_a8;
  undefined *local_a0;
  char *local_98;
  undefined4 local_64;
  
  lVar5 = *(long *)(param_1 + 0x28);
  if (lVar5 == 0 || *param_2 == 0) {
    return;
  }
  lVar4 = nn::prepo::Struct::GetBuffer();
  if (lVar4 != 0) {
    nn::prepo::Struct::Add((char *)(lVar5 + 8),0x40f5968);
  }
  lVar4 = *(long *)(param_1 + 0x28);
  lVar5 = nn::prepo::Struct::GetBuffer();
  if (lVar5 != 0) {
    nn::prepo::Struct::Add((char *)(lVar4 + 8),0x409d021);
  }
  lVar4 = *(long *)(param_1 + 0x28);
  lVar5 = nn::prepo::Struct::GetBuffer();
  if (lVar5 != 0) {
    nn::prepo::Struct::Add((char *)(lVar4 + 8),0x406dc35);
  }
  lVar4 = *(long *)(param_1 + 0x28);
  lVar5 = nn::prepo::Struct::GetBuffer();
  if (lVar5 != 0) {
    nn::prepo::Struct::Add((char *)(lVar4 + 8),0x40a7372);
  }
  puVar2 = PTR_DAT_04bb2020;
  lVar4 = *(long *)(param_1 + 0x28);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_98 = "AdhereTreeFtrNum";
  local_a0 = puVar1;
  lVar5 = nn::prepo::Struct::GetBuffer();
  if (lVar5 != 0) {
    FUN_006bd3a4(&local_a0);
    nn::prepo::Struct::Add((char *)(lVar4 + 8),(long)local_98);
  }
  lVar4 = *(long *)(param_1 + 0x28);
  local_98 = "BranchNum";
  local_a0 = puVar1;
  lVar5 = nn::prepo::Struct::GetBuffer();
  if (lVar5 != 0) {
    (**(code **)(local_a0 + 0x18))(&local_a0);
    nn::prepo::Struct::Add((char *)(lVar4 + 8),(long)local_98);
  }
  local_98 = "ShellNum";
  lVar4 = *(long *)(param_1 + 0x28);
  local_a0 = puVar2 + 0x10;
  lVar5 = nn::prepo::Struct::GetBuffer();
  if (lVar5 != 0) {
    (**(code **)(local_a0 + 0x18))(&local_a0);
    nn::prepo::Struct::Add((char *)(lVar4 + 8),(long)local_98);
  }
  lVar4 = *(long *)(param_1 + 0x28);
  local_98 = "WeedNum";
  local_a0 = puVar2 + 0x10;
  lVar5 = nn::prepo::Struct::GetBuffer();
  if (lVar5 != 0) {
    (**(code **)(local_a0 + 0x18))(&local_a0);
    nn::prepo::Struct::Add((char *)(lVar4 + 8),(long)local_98);
  }
  local_98 = "StoneNum";
  lVar4 = *(long *)(param_1 + 0x28);
  local_a0 = puVar2 + 0x10;
  lVar5 = nn::prepo::Struct::GetBuffer();
  if (lVar5 != 0) {
    (**(code **)(local_a0 + 0x18))(&local_a0);
    nn::prepo::Struct::Add((char *)(lVar4 + 8),(long)local_98);
  }
  lVar5 = 0;
  do {
    FUN_006d8678(&local_a0,"%sNum",(long)&DAT_0417ac34 + (long)(int)(&DAT_0417ac34)[lVar5]);
    lVar7 = *(long *)(param_1 + 0x28);
    (**(code **)(local_a0 + 0x18))(&local_a0);
    local_64 = (undefined4)lVar5;
    local_a8 = local_98;
    local_b0 = puVar2 + 0x10;
    lVar4 = nn::prepo::Struct::GetBuffer();
    if (lVar4 != 0) {
      (**(code **)(local_b0 + 0x18))(&local_b0);
      nn::prepo::Struct::Add((char *)(lVar7 + 8),(long)local_a8);
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x13);
  lVar5 = *(long *)PTR_DAT_04bb46b0;
  if (lVar5 != 0) {
    puVar6 = *(undefined8 **)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x453) & 1) == 0) {
      lVar5 = (**(code **)(*(long *)*puVar6 + 0x38))();
      if (lVar5 == 0) goto LAB_025a5748;
      lVar5 = lVar5 + 0x70;
    }
    else if (((puVar6 == (undefined8 *)0x0) || ((long *)puVar6[0x26] == (long *)0x0)) ||
            (lVar5 = (**(code **)(*(long *)puVar6[0x26] + 0x38))(), lVar5 == 0)) goto LAB_025a5748;
    if ((*(long **)(lVar5 + 0x1c24e8) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x1c24e8), puVar6 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar6)();
      uVar3 = uVar3 ^ 1;
    }
    local_a0 = (undefined *)
               (ulong)*(ushort *)(*(long *)(lVar5 + 0x1c24d0) + *(long *)(lVar5 + 0x1c24c8) + 0x900)
    ;
    FUN_0277d4ac(&local_a0);
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar5 + 0x1c24e8) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x1c24e8) + 8), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
    lVar4 = *(long *)(param_1 + 0x28);
    FUN_0277d6c4(&local_a0);
    lVar5 = nn::prepo::Struct::GetBuffer();
    if (lVar5 != 0) {
      nn::prepo::Struct::Add((char *)(lVar4 + 8),0x40b6b2f);
    }
  }
LAB_025a5748:
  lVar4 = *(long *)(param_1 + 0x28);
  lVar5 = nn::prepo::Struct::GetBuffer();
  if (lVar5 != 0) {
    nn::prepo::Struct::Add((char *)(lVar4 + 8),0x4088182);
  }
  lVar4 = *(long *)(param_1 + 0x28);
  lVar5 = nn::prepo::Struct::GetBuffer();
  if (lVar5 != 0) {
    nn::prepo::Struct::Add((char *)(lVar4 + 8),0x405db3e);
  }
  lVar4 = *(long *)(param_1 + 0x28);
  lVar5 = nn::prepo::Struct::GetBuffer();
  if (lVar5 != 0) {
    nn::prepo::Struct::Add((char *)(lVar4 + 8),0x40cb0f3);
  }
  lVar4 = *(long *)(param_1 + 0x28);
  lVar5 = nn::prepo::Struct::GetBuffer();
  if (lVar5 != 0) {
    nn::prepo::Struct::Add((char *)(lVar4 + 8),0x40d5c13);
  }
  lVar4 = *(long *)(param_1 + 0x28);
  lVar5 = nn::prepo::Struct::GetBuffer();
  if (lVar5 != 0) {
    nn::prepo::Struct::Add((char *)(lVar4 + 8),0x4088196);
  }
  lVar4 = *(long *)(param_1 + 0x28);
  lVar5 = nn::prepo::Struct::GetBuffer();
  if (lVar5 != 0) {
    nn::prepo::Struct::Add((char *)(lVar4 + 8),0x40d0461);
  }
  nn::prepo::Struct::GetSize();
  local_a0 = puVar2 + 0x10;
  local_98 = "FgInfo";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605cc0(*(long *)(param_1 + 8),&local_a0,*(undefined8 *)(param_1 + 0x28));
  }
  return;
}


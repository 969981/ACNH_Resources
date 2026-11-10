
undefined8 FUN_0026b120(long param_1,long param_2)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined4 local_e0;
  undefined1 local_dc;
  long local_d8;
  undefined4 local_d0;
  undefined1 local_cc;
  ulong local_c8;
  undefined4 local_c0 [32];
  int local_40;
  ErrorResultVariant aEStack_3c [12];
  byte local_24 [4];
  
  if (*(char *)(param_1 + 0x9a) == '\0') {
    return 2;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar3 = 0;
    lVar5 = *(long *)(param_1 + 0x40);
  }
  else {
    uVar3 = FUN_002212e4();
    lVar5 = *(long *)(param_1 + 0x40);
  }
  if (lVar5 != 0) {
    uVar4 = FUN_002212e4();
    uVar3 = uVar3 | uVar4;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar4 = FUN_002212e4();
    uVar3 = uVar3 | uVar4;
  }
  if ((uVar3 & 1) != 0) {
    return 2;
  }
  uVar2 = FUN_0026aa40(param_1);
  if ((*(ushort *)(param_1 + 0x98) <= uVar2) || (cVar1 = FUN_0026b410(param_1), cVar1 == -3)) {
    return 0;
  }
  local_40 = 0;
  local_c0[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)local_c0);
  FUN_002b3fa8(local_c0);
  plVar6 = (long *)FUN_002ba788(DAT_04c61168);
  (**(code **)(*plVar6 + 0x20))(&local_d0,plVar6,param_2,local_c0);
  FUN_00229780(&local_40,&local_d0);
  if (local_40 != 0) {
    uVar8 = 2;
    goto LAB_0026b394;
  }
  lVar5 = FUN_002b43ec(local_c0);
  if (lVar5 == 0) {
    lVar5 = 0;
LAB_0026b280:
    uVar3 = FUN_00261120(*(undefined8 *)(param_1 + 0x360));
    if ((*(ushort *)(DAT_04c61168 + 0x58) <= uVar3) ||
       (uVar3 = FUN_00261120(*(undefined8 *)(param_1 + 0x360)),
       *(uint *)(*(long *)(param_1 + 0x360) + 0x48) <= uVar3)) {
      uVar8 = 0;
      goto LAB_0026b394;
    }
  }
  else {
    lVar5 = FUN_002b43ec(local_c0);
    if ((lVar5 == 0) || (lVar7 = FUN_00260e70(*(undefined8 *)(param_1 + 0x360),lVar5), lVar7 == 0))
    goto LAB_0026b280;
  }
  if (*(long *)(param_1 + 0x110) != 0) {
    uVar9 = 1;
    local_24[0] = 1;
    FUN_00262cd0(&local_d0,*(undefined8 *)(param_1 + 0x368),param_2,local_24);
    FUN_00229780(&local_40,&local_d0);
    if (local_40 == 0) {
      uVar9 = (ulong)local_24[0];
    }
    else {
      local_24[0] = 1;
    }
    local_cc = *(undefined1 *)(param_2 + 0x38);
    local_d0 = 0x18;
    local_c8 = uVar9;
    (**(code **)(**(long **)(param_1 + 0x110) + 0x10))(*(long **)(param_1 + 0x110),&local_d0);
    if (*(char *)(param_1 + 0x122) != '\0') {
      uVar8 = 0;
      *(undefined1 *)(param_1 + 0x122) = 0;
      goto LAB_0026b394;
    }
    local_dc = *(undefined1 *)(param_2 + 0x38);
    local_e0 = 0x19;
    local_d8 = lVar5;
    (**(code **)(**(long **)(param_1 + 0x110) + 0x10))(*(long **)(param_1 + 0x110),&local_e0);
    if (*(char *)(param_1 + 0x121) != '\0') {
      uVar8 = 4;
      *(undefined1 *)(param_1 + 0x121) = 0;
      goto LAB_0026b394;
    }
    if (*(char *)(param_1 + 0x123) != '\0') {
      uVar8 = 5;
      *(undefined1 *)(param_1 + 0x123) = 0;
      goto LAB_0026b394;
    }
  }
  uVar8 = 0xff;
LAB_0026b394:
  FUN_002b4104(local_c0);
  return uVar8;
}


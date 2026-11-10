
undefined8 FUN_0024ee68(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined8 local_48;
  undefined1 auStack_34 [16];
  undefined4 local_24;
  
  if (*(long *)PTR_DAT_04bcb8b8 == 0) {
LAB_0024eed8:
    plVar6 = (long *)(param_1 + 0x58);
    if (*(char *)(*plVar6 + 0x28) != '\0') {
      FUN_00221064();
      *plVar6 = 0;
      return 1;
    }
    local_48 = 0;
    FUN_002282f0(&local_48);
    if (*(ulong *)(param_1 + 0x68) < local_48) {
      lVar4 = *plVar6;
      local_48 = CONCAT44(local_48._4_4_,0x6c1b);
      local_24 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((long)&local_48 + 4),(Result *)&local_24);
      FUN_002296c4(auStack_78,&local_48);
      FUN_00220ff8(lVar4,auStack_78);
      *plVar6 = 0;
      return 1;
    }
    uVar2 = FUN_002586b0(*(undefined8 *)(param_1 + 0x70));
    if ((uVar2 & 1) == 0) {
      lVar4 = *plVar6;
      local_48 = local_48 & 0xffffffff00000000;
      local_24 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((long)&local_48 + 4),(Result *)&local_24);
      FUN_002296c4(auStack_88,&local_48);
      FUN_00220f8c(lVar4,auStack_88);
      *plVar6 = 0;
      return 1;
    }
    return 0xf0004;
  }
  iVar1 = FUN_0029b330();
  if (iVar1 == 8) {
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    local_48 = CONCAT44(local_48._4_4_,0xc421);
    local_24 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_48 + 4),(Result *)&local_24);
    FUN_002296c4(auStack_68,&local_48);
    puVar3 = auStack_68;
  }
  else if (iVar1 == 7) {
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    local_48 = CONCAT44(local_48._4_4_,0xc420);
    local_24 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_48 + 4),(Result *)&local_24);
    FUN_002296c4(auStack_58,&local_48);
    puVar3 = auStack_58;
  }
  else {
    if (iVar1 != 5) goto LAB_0024eed8;
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    local_48 = CONCAT44(local_48._4_4_,0xc406);
    local_24 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_48 + 4),(Result *)&local_24);
    FUN_002296c4(auStack_34,&local_48);
    puVar3 = auStack_34;
  }
  FUN_00220ff8(uVar5,puVar3);
  *(undefined8 *)(param_1 + 0x58) = 0;
  return 1;
}


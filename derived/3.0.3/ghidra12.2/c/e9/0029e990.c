
undefined8 FUN_0029e990(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined8 local_48;
  undefined1 auStack_34 [16];
  undefined4 local_24;
  
  puVar1 = PTR_DAT_04bcb8b8;
  uVar2 = FUN_0029b330(*(undefined8 *)PTR_DAT_04bcb8b8);
  switch(uVar2) {
  case 5:
    uVar8 = *(undefined8 *)(param_1 + 0x58);
    local_48 = CONCAT44(local_48._4_4_,0xc406);
    local_24 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_48 + 4),(Result *)&local_24);
    FUN_002296c4(auStack_34,&local_48);
    puVar7 = auStack_34;
    break;
  case 6:
    uVar8 = *(undefined8 *)(param_1 + 0x58);
    local_48 = CONCAT44(local_48._4_4_,0xa471);
    local_24 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_48 + 4),(Result *)&local_24);
    FUN_002296c4(auStack_58,&local_48);
    puVar7 = auStack_58;
    break;
  case 7:
    uVar8 = *(undefined8 *)(param_1 + 0x58);
    local_48 = CONCAT44(local_48._4_4_,0xc420);
    local_24 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_48 + 4),(Result *)&local_24);
    FUN_002296c4(auStack_68,&local_48);
    puVar7 = auStack_68;
    break;
  case 8:
    uVar8 = *(undefined8 *)(param_1 + 0x58);
    local_48 = CONCAT44(local_48._4_4_,0xc421);
    local_24 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_48 + 4),(Result *)&local_24);
    FUN_002296c4(auStack_78,&local_48);
    puVar7 = auStack_78;
    break;
  default:
    iVar3 = FUN_0029b330(*(undefined8 *)puVar1);
    if (iVar3 == 4) {
      uVar8 = *(undefined8 *)(param_1 + 0x58);
      local_48 = CONCAT44(local_48._4_4_,0x8c56);
      local_24 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((long)&local_48 + 4),(Result *)&local_24);
      FUN_002296c4(auStack_88,&local_48);
      puVar7 = auStack_88;
    }
    else {
      local_48 = 0;
      FUN_002282f0(&local_48);
      lVar9 = local_48 - *(long *)(param_1 + 0xa0);
      plVar4 = (long *)FUN_00228380();
      lVar6 = 0;
      if (*plVar4 != 0) {
        lVar6 = lVar9 / *plVar4;
      }
      if ((1000 < lVar6) &&
         (uVar5 = (**(code **)(**(long **)(*(long *)puVar1 + 8) + 0xa0))
                            (*(long **)(*(long *)puVar1 + 8),*(undefined4 *)(param_1 + 0x90)),
         (uVar5 & 1) != 0)) {
        lVar6 = *(long *)puVar1;
        if (*(int *)(lVar6 + (ulong)*(byte *)(lVar6 + 0x162) * 4 + 0x180) ==
            *(int *)(param_1 + 0x90)) {
          FUN_0029db50(lVar6,2);
        }
        else if (*(int *)(lVar6 + (ulong)(*(byte *)(lVar6 + 0x162) == 0) * 4 + 0x180) ==
                 *(int *)(param_1 + 0x90)) {
          FUN_0029db60(lVar6,2);
        }
        uVar8 = *(undefined8 *)(param_1 + 0x58);
        local_48 = local_48 & 0xffffffff00000000;
        local_24 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((long)&local_48 + 4),(Result *)&local_24);
        FUN_002296c4(auStack_98,&local_48);
        FUN_00220f8c(uVar8,auStack_98);
        *(undefined8 *)(param_1 + 0x58) = 0;
        return 1;
      }
      local_48 = 0;
      FUN_002282f0(&local_48);
      lVar9 = local_48 - *(long *)(param_1 + 0xa0);
      plVar4 = (long *)FUN_00228380();
      lVar6 = 0;
      if (*plVar4 != 0) {
        lVar6 = lVar9 / *plVar4;
      }
      if (lVar6 < 0x3a99) {
        return 5;
      }
      lVar6 = *(long *)puVar1;
      if (*(int *)(lVar6 + (ulong)*(byte *)(lVar6 + 0x162) * 4 + 0x180) == *(int *)(param_1 + 0x90))
      {
        FUN_0029db50(lVar6,2);
      }
      else if (*(int *)(lVar6 + (ulong)(*(byte *)(lVar6 + 0x162) == 0) * 4 + 0x180) ==
               *(int *)(param_1 + 0x90)) {
        FUN_0029db60(lVar6,2);
      }
      uVar8 = *(undefined8 *)(param_1 + 0x58);
      local_48 = CONCAT44(local_48._4_4_,0x2c18);
      local_24 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((long)&local_48 + 4),(Result *)&local_24);
      FUN_002296c4(auStack_a8,&local_48);
      puVar7 = auStack_a8;
    }
  }
  FUN_00220ff8(uVar8,puVar7);
  *(undefined8 *)(param_1 + 0x58) = 0;
  return 1;
}


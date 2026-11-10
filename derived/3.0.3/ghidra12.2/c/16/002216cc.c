
undefined8 FUN_002216cc(long param_1)

{
  undefined2 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_98 [16];
  undefined8 local_88;
  undefined1 auStack_78 [16];
  long local_68;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  undefined4 local_14;
  
  FUN_0021f4e0(auStack_40);
  FUN_0021f4e0(auStack_60);
  local_68 = 0;
  FUN_002282f0(&local_68);
  uVar2 = FUN_00227adc(param_1 + 0x90);
  uVar3 = FUN_002270b0(uVar2,0,2,auStack_40,auStack_60);
  if ((uVar3 & 1) == 0) {
    local_14 = 0;
    local_88 = CONCAT44(local_88._4_4_,0x6436);
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_88 + 4),(Result *)&local_14);
    FUN_002296c4(auStack_78,&local_88);
    FUN_00220ff8(param_1 + 0x58,auStack_78);
    if (*(long *)(param_1 + 0x88) != 0) {
      FUN_0021fed4();
    }
  }
  else {
    local_88 = (ulong)local_88._4_4_ << 0x20;
    local_14 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_88 + 4),(Result *)&local_14);
    FUN_002296c4(auStack_98,&local_88);
    FUN_00220f8c(param_1 + 0x58,auStack_98);
    if (*(long *)(param_1 + 0x88) != 0) {
      uVar3 = FUN_0021f6f8(auStack_60);
      if ((uVar3 & 1) != 0) {
        FUN_0021f54c(*(undefined8 *)(param_1 + 0x88),auStack_60);
      }
      *(undefined2 *)(*(long *)(param_1 + 0x88) + 0x18) = 0x8627;
    }
  }
  local_88 = 0;
  FUN_002282f0(&local_88);
  lVar5 = local_88 - local_68;
  plVar4 = (long *)FUN_00228380();
  uVar1 = 0;
  if (*plVar4 != 0) {
    uVar1 = (undefined2)(lVar5 / *plVar4);
  }
  *(undefined2 *)(PTR_DAT_04bccf00 + 0x8a) = uVar1;
  FUN_0021f584(auStack_60);
  FUN_0021f584(auStack_40);
  return 1;
}


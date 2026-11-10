
void FUN_002cd440(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_28;
  
  puVar2 = PTR_DAT_04bcb8d8;
  if (((*(char *)(*(long *)PTR_DAT_04bcb8d8 + 0xb0) != '\0') &&
      (uVar4 = FUN_002bf8d8(), (uVar4 & 1) != 0)) &&
     (*(int *)(*(long *)(param_1 + 0x48) + 0x14) != 1)) {
    FUN_0021fed4(param_1 + 0x58);
    FUN_001984a0(*(undefined8 *)(param_1 + 0x48));
    lVar5 = *(long *)(param_1 + 0x48);
    FUN_0018d4c4(&local_28,10000);
    uVar3 = local_28;
    local_28 = 0;
    *(undefined8 *)(lVar5 + 0x88) = uVar3;
    FUN_00198814(*(undefined8 *)(param_1 + 0x48),&LAB_002cd530,&local_28,1);
    lVar5 = *(long *)(param_1 + 0x48);
    lVar1 = *(long *)(param_1 + 0x50);
    uVar4 = FUN_002bf8d8(*(undefined8 *)puVar2);
    if ((((uVar4 & 1) != 0) && (lVar5 != 0)) && (lVar1 != 0)) {
      if (*(int *)(lVar5 + 0x14) == 1) {
        FUN_00197980(lVar5);
      }
      FUN_001984a0(lVar5);
      FUN_0030df78(*(undefined8 *)(param_1 + 0x30),lVar5,lVar1 + 0x40,lVar1 + 8,lVar1 + 0x10,
                   lVar1 + 0x38,lVar1 + 0x3c,lVar1 + 0x44);
    }
  }
  return;
}


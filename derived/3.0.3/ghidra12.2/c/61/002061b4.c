
void FUN_002061b4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined *local_58;
  undefined *puStack_50;
  undefined8 local_48;
  undefined8 *puStack_40;
  undefined1 auStack_38 [24];
  
  lVar5 = *(long *)(*(long *)(param_1 + 0xa8) + 0x20);
  *(undefined8 *)(param_1 + 0x210) = *(undefined8 *)(lVar5 + 0x40);
  uVar3 = FUN_001ffb80(*(undefined8 *)(lVar5 + 0x20),param_1 + 0x188,param_1 + 0x290,param_1 + 0x2e8
                      );
  if ((uVar3 & 1) == 0) {
    local_58 = (undefined *)CONCAT44(local_58._4_4_,0x8001000d);
    FUN_0018aa70(auStack_38,&local_58);
    FUN_002063b4(param_1,3,auStack_38);
    return;
  }
  if (*(int *)(param_1 + 0x19c) != 1) {
    local_58 = PTR_DAT_04bcc0c0 + 0x10;
    local_48 = 0;
    puStack_40 = &DAT_0407ebb1;
    puStack_50 = PTR_LAB_04bccbf8;
    FUN_0019a704(param_1,&local_58);
    return;
  }
  FUN_0019c910(param_1,2);
  plVar4 = (long *)FUN_00185a6c(0x20);
  puVar2 = PTR_LAB_04bccbf8;
  puVar1 = PTR_DAT_04bcc0c0;
  if (plVar4 != (long *)0x0) {
    plVar4[2] = 0;
    plVar4[3] = (long)&DAT_0407ebb1;
    *plVar4 = (long)(puVar1 + 0x10);
    plVar4[1] = (long)puVar2;
  }
  FUN_0019ab80(param_1,param_1 + 0x188);
  return;
}



void FUN_01bf1ee8(long param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  undefined1 auStack_168 [184];
  ushort auStack_b0 [8];
  undefined4 local_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined *local_88;
  undefined1 *puStack_80;
  undefined4 local_78;
  undefined1 local_74 [63];
  undefined1 local_35;
  
  iVar2 = *(ushort *)(param_2 + 0xe) + 2;
  if (6 < *(ushort *)(param_2 + 0xe)) {
    iVar2 = 2;
  }
  if ((uint)(iVar2 << 1) <= (uint)*(ushort *)(param_2 + 0x10)) {
    memcpy(auStack_b0,*(void **)(param_2 + 0x18),(ulong)(uint)(iVar2 << 1));
  }
  FUN_01be6180(auStack_168,*(undefined8 *)(param_1 + 0x28),*(long *)(param_1 + 0x30) + 0x18);
  uVar1 = FUN_035a3f60(0x3f800000,param_1 + 0x38,auStack_168,iVar2);
  local_35 = 0;
  local_90 = 0;
  local_78 = 0x40;
  puStack_80 = local_74;
  local_88 = PTR_DAT_04bb2bc0 + 0x10;
  local_74[0] = 0;
  local_98 = 0xffffffff;
  uStack_9c = (uint)auStack_b0[uVar1 & 0xffffffff];
  local_a0 = 1;
  FUN_038d1270(&local_88,&DAT_0405bf91);
  (*(code *)**(undefined8 **)(param_1 + 8))((undefined8 *)(param_1 + 8),&local_a0);
  return;
}


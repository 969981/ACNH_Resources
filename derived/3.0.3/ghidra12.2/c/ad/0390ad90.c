
void FUN_0390ad90(long param_1,long param_2,long param_3,undefined4 param_4,uint param_5,
                 undefined4 param_6,uint param_7)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined4 local_78;
  uint uStack_74;
  uint local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  uint uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  
  puVar5 = PTR_DAT_04bcf220;
  local_68 = 0;
  local_80 = 0;
  uVar3 = *(ushort *)(param_1 + 0x30) >> (ulong)(param_7 & 0x1f);
  uStack_5c = (uint)uVar3;
  uVar4 = *(ushort *)(param_3 + 0x30) >> (ulong)(param_5 & 0x1f);
  uStack_74 = (uint)uVar4;
  if (uVar3 < 2) {
    uStack_5c = 1;
  }
  local_58 = (uint)*(ushort *)(param_1 + 0x32);
  uVar1 = (uint)(*(ushort *)(param_1 + 0x32) >> (ulong)(param_7 & 0x1f));
  if (*(short *)(param_1 + 0x3a) != 3) {
    local_58 = 1;
  }
  if (local_58 <= uVar1) {
    local_58 = uVar1;
  }
  if (uVar4 < 2) {
    uStack_74 = 1;
  }
  local_70 = (uint)*(ushort *)(param_3 + 0x32);
  uVar1 = (uint)(*(ushort *)(param_3 + 0x32) >> (ulong)(param_5 & 0x1f));
  uStack_54 = 1;
  if (*(short *)(param_3 + 0x3a) != 3) {
    local_70 = 1;
  }
  if (local_70 <= uVar1) {
    local_70 = uVar1;
  }
  uStack_6c = 1;
  local_78 = param_4;
  local_60 = param_6;
  (**(code **)PTR_DAT_04bcf220)(auStack_90);
  puVar6 = PTR_DAT_04bcf228;
  (**(code **)PTR_DAT_04bcf228)(auStack_90,param_7,1);
  (**(code **)puVar5)(auStack_a0);
  (**(code **)puVar6)(auStack_a0,param_5,1);
  lVar7 = *(long *)PTR_DAT_04bc1010;
  uVar1 = *(int *)(param_1 + 0x50) - (uint)*(ushort *)(lVar7 + 0x3da);
  if (*(uint *)(lVar7 + 0x368) <= uVar1) {
    uVar1 = 0;
  }
  uVar2 = *(int *)(param_3 + 0x50) - (uint)*(ushort *)(lVar7 + 0x3da);
  if (*(uint *)(lVar7 + 0x368) <= uVar2) {
    uVar2 = 0;
  }
  (*DAT_04c62ac0)(*(undefined8 *)(param_2 + 0xb8),
                  *(undefined8 *)(*(long *)(lVar7 + 0x370) + (long)(int)uVar1 * 0x20 + 0x18),
                  auStack_90,&local_68,
                  *(undefined8 *)(*(long *)(lVar7 + 0x370) + (long)(int)uVar2 * 0x20 + 0x18),
                  auStack_a0,&local_80,0);
  return;
}


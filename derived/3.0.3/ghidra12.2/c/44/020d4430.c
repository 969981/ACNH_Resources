
void FUN_020d4430(long param_1)

{
  uint *puVar1;
  undefined2 *puVar2;
  byte bVar3;
  byte *pbVar4;
  long lVar5;
  undefined2 local_50;
  undefined4 uStack_4e;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  undefined2 uStack_42;
  undefined6 local_40;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  undefined2 local_32;
  undefined2 uStack_30;
  undefined4 uStack_2e;
  undefined2 uStack_2a;
  undefined8 local_28;
  
  uStack_30 = 0xffff;
  uStack_2e = 0xffffffff;
  uStack_2a = 0xffff;
  local_28 = 0xffffffffffffffff;
  local_40 = 0xffffffffffff;
  uStack_3a = 0xffff;
  uStack_38 = 0xffffffffffff;
  local_32 = 0xffff;
  local_50 = 0xffff;
  uStack_4e = 0xffffffff;
  uStack_4a = 0xffff;
  uStack_48 = 0xffffffffffff;
  uStack_42 = 0xffff;
  FUN_020d3300(&local_50);
  lVar5 = *DAT_0537d558;
  bVar3 = *(byte *)(lVar5 + 0x473);
  pbVar4 = PTR_DAT_04bc1220;
  if ((long)(char)bVar3 != 0xffffffffffffffff) {
    puVar1 = (uint *)(lVar5 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
    if (7 < bVar3) {
      puVar1 = (uint *)(lVar5 + 0x48);
    }
    if ((*puVar1 & 8) != 0) {
      pbVar4 = (byte *)(lVar5 + 0x473);
    }
  }
  puVar2 = (undefined2 *)(param_1 + 8) + (ulong)(uint)(int)(char)*pbVar4 * 0x18;
  if (7 < *pbVar4) {
    puVar2 = (undefined2 *)(param_1 + 8);
  }
  *puVar2 = local_50;
  puVar2[0x13] = uStack_2a;
  *(undefined4 *)(puVar2 + 1) = uStack_4e;
  puVar2[0x14] = (undefined2)local_28;
  *(ulong *)(puVar2 + 3) = CONCAT62(uStack_48,uStack_4a);
  *(ulong *)(puVar2 + 7) = CONCAT62(local_40,uStack_42);
  *(ulong *)(puVar2 + 0xb) = CONCAT62(uStack_38,uStack_3a);
  *(uint *)(puVar2 + 0xf) = CONCAT22(uStack_30,local_32);
  *(undefined4 *)(puVar2 + 0x11) = uStack_2e;
  puVar2[0x15] = local_28._2_2_;
  *(undefined4 *)(puVar2 + 0x16) = local_28._4_4_;
  return;
}


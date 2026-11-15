
void FUN_02189c14(long param_1,void *param_2,undefined4 param_3)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  long lVar6;
  long *plVar7;
  undefined4 local_278 [2];
  undefined1 auStack_270 [484];
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined8 local_7c;
  undefined1 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_28;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  
  puVar3 = PTR_DAT_04bb27d0;
  *(undefined2 *)(param_1 + 0x1c08) = 0;
  plVar7 = *(long **)puVar3;
  lVar6 = *plVar7;
  bVar2 = *(byte *)(lVar6 + 0x473);
  pbVar4 = PTR_DAT_04bc1220;
  if ((long)(char)bVar2 != 0xffffffffffffffff) {
    puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
    if (7 < bVar2) {
      puVar1 = (uint *)(lVar6 + 0x48);
    }
    if ((*puVar1 & 8) != 0) {
      pbVar4 = (byte *)(lVar6 + 0x473);
    }
  }
  *(short *)(param_1 + 0x1c08) = (short)(1 << (ulong)(*pbVar4 & 0x1f));
  memcpy(auStack_270,param_2,0x1e4);
  local_8c = *(undefined8 *)((long)param_2 + 0x1e4);
  uStack_84 = *(undefined8 *)((long)param_2 + 0x1ec);
  local_7c = *(undefined8 *)((long)param_2 + 500);
  local_74 = *(undefined1 *)((long)param_2 + 0x1fc);
  local_70 = *(undefined8 *)((long)param_2 + 0x200);
  local_48 = *(undefined8 *)((long)param_2 + 0x228);
  local_68 = *(undefined8 *)((long)param_2 + 0x208);
  local_60 = *(undefined8 *)((long)param_2 + 0x210);
  local_58 = *(uint *)((long)param_2 + 0x218);
  if (1 < local_58) {
    local_58 = 0;
  }
  local_50 = *(undefined8 *)((long)param_2 + 0x220);
  lVar6 = *plVar7;
  bVar2 = *(byte *)(lVar6 + 0x473);
  puVar5 = PTR_DAT_04bc1220;
  if ((long)(char)bVar2 != 0xffffffffffffffff) {
    puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
    if (7 < bVar2) {
      puVar1 = (uint *)(lVar6 + 0x48);
    }
    if ((*puVar1 & 8) != 0) {
      puVar5 = (undefined1 *)(lVar6 + 0x473);
    }
  }
  local_23 = *puVar5;
  local_28 = 0;
  local_22 = 0;
  local_24 = 5;
  if (-1 < DAT_053fbbd0) {
    local_278[0] = param_3;
    FUN_01db1df0(*plVar7 + 0x480,DAT_053fbbd0,&local_28,local_278,0x238,0);
  }
  return;
}


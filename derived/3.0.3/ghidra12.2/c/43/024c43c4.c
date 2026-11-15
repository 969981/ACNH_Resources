
void FUN_024c43c4(byte *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  short sVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  
  local_58 = 0xfffe;
  FUN_0277d4ac(&local_58);
  puVar4 = PTR_DAT_04bb6298;
  local_58 = *(undefined8 *)(param_2 + 0x38);
  if (*(char *)(param_2 + 0x40) != '\x03') {
    local_60 = 0xfffe;
    FUN_0277d4ac(&local_60);
    lVar2 = DAT_05150358;
    uVar6 = *(undefined8 *)(param_2 + 0x38);
    sVar3 = *(short *)puVar4;
    local_68 = (undefined2)uVar6;
    local_66 = (undefined1)((ulong)uVar6 >> 0x10);
    local_65 = (undefined1)((ulong)uVar6 >> 0x18);
    uVar7 = (undefined4)((ulong)uVar6 >> 0x20);
    local_64 = uVar7;
    local_60 = uVar6;
    if (sVar3 != -1) {
      local_70 = 0x20;
      puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8;
      if (0xff < (uint)(int)sVar3) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      if ((((((*(uint *)(puVar1 + 4) & 1) != 0) && (DAT_05150358 != 0)) &&
           (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
          ((*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0 &&
           (*(long *)(DAT_05150358 + 0x488) != 0)))) &&
         ((*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0 &&
          ((*(long *)(DAT_05150358 + 0x2b0) != 0 &&
           (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)))))) {
        uVar5 = FUN_0277d6c4(&local_68);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar2 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar2 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar2 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          local_70 = (undefined4)uVar6;
          local_6c = uVar7;
          FUN_023273f8(&local_70,&local_68);
          local_74 = 1;
          FUN_02327084(param_1,&local_70,&local_74);
          goto LAB_024c454c;
        }
      }
    }
    local_70 = 1;
    FUN_02326c70(param_1,&local_60,&local_70);
  }
LAB_024c454c:
  lVar2 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*param_1 * 0x740;
  if (7 < *param_1) {
    lVar2 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  if (*(short *)(param_2 + 1) == *(short *)puVar4) {
    *(undefined4 *)(lVar2 + 0x24c) = 3;
    FUN_01393458(lVar2 + 0x2f0);
  }
  else {
    *(undefined4 *)(lVar2 + 0x24c) = 4;
  }
  return;
}


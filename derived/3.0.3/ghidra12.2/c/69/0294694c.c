
void FUN_0294694c(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 local_60;
  undefined1 local_58;
  undefined2 local_57;
  undefined4 local_54;
  undefined *local_50;
  undefined1 local_48;
  undefined2 local_47;
  undefined4 local_44;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  puVar3 = PTR_DAT_04bb27d0;
  plVar6 = *(long **)PTR_DAT_04bb27d0;
  if (*(byte *)(*plVar6 + 0x476) < 2) {
    lVar7 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar7 = *(long *)(param_1 + 0x70) + 0x278;
    }
    if (*(int *)(lVar7 + 8) != 4) {
      FUN_03ebb160(lVar7,4);
      return;
    }
  }
  else {
    *(byte *)(param_1 + 0x275) = *(byte *)(param_1 + 0x275) | 0x10;
    puVar5 = PTR_DAT_04bc3aa0;
    puVar4 = PTR_DAT_04bb47b8;
    local_44 = 0xffffffff;
    local_50 = PTR_DAT_04bc3aa0 + 0x10;
    local_47 = 0xff06;
    local_48 = (undefined1)*(undefined4 *)(param_1 + 0x3bc);
    uVar8 = (ulong)local_60 >> 0x30;
    local_60 = (undefined *)CONCAT26((ushort)uVar8 & 0xff00,0xff0000000000);
    if (-1 < *(int *)(*(long *)PTR_DAT_04bb47b8 + 0x38)) {
      FUN_01db1df0(*plVar6 + 0x480,*(int *)(*(long *)PTR_DAT_04bb47b8 + 0x38),&local_60,&local_50,
                   0x10,0);
      plVar6 = *(long **)puVar3;
    }
    lVar7 = *plVar6;
    bVar2 = *(byte *)(lVar7 + 0x473);
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      pbVar1 = (byte *)(lVar7 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
      if (7 < bVar2) {
        pbVar1 = (byte *)(lVar7 + 0x48);
      }
      if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar7 + 0x472) != bVar2)) {
        local_60 = puVar5 + 0x10;
        local_54 = 0xffffffff;
        local_28 = 0;
        local_57 = 0xff07;
        local_22 = 0;
        local_24 = 0xff01;
        local_58 = (undefined1)*(undefined4 *)(param_1 + 0x3bc);
        if (*(int *)(*(long *)puVar4 + 0x38) < 0) {
          return;
        }
        FUN_01db1df0(*plVar6 + 0x480,*(int *)(*(long *)puVar4 + 0x38),&local_28,&local_60,0x10,0);
        return;
      }
    }
    uVar8 = (ulong)*(uint *)(param_1 + 0x3bc) & 0xff;
    if (0x13 < (*(uint *)(param_1 + 0x3bc) & 0xff)) {
      uVar8 = 0;
    }
    (&DAT_055cf258)[uVar8] = 0;
  }
  return;
}


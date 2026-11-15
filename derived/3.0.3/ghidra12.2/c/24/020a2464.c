
void FUN_020a2464(uint param_1)

{
  uint *puVar1;
  byte bVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  long lVar7;
  undefined8 local_50;
  undefined1 local_30;
  undefined1 local_2f;
  byte local_2e;
  char local_2d;
  byte local_2c;
  byte local_28 [4];
  uint local_24;
  
  puVar5 = DAT_053dda88;
  puVar4 = PTR_DAT_04bb27d0;
  lVar7 = *(long *)PTR_DAT_04bb39b0;
  pbVar6 = PTR_DAT_04bb32e0;
  if (lVar7 == 0) {
LAB_020a24e8:
    if (7 < *pbVar6) {
LAB_020a24f4:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar7 = **(long **)PTR_DAT_04bb27d0;
        bVar2 = *(byte *)(lVar7 + 0x473);
        pbVar6 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar7 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar6 = (byte *)(lVar7 + 0x471);
          }
        }
        local_28[0] = *pbVar6;
        if (local_28[0] < 8) goto LAB_020a256c;
      }
      pbVar6 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar7 + 0x15c) != 0) {
      pbVar6 = (byte *)(lVar7 + 0x158);
    }
    if (7 < *pbVar6) {
      if ((*(int *)(lVar7 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar6 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_020a24e8;
      }
      goto LAB_020a24f4;
    }
  }
  local_28[0] = *pbVar6;
  if (7 < local_28[0]) {
    local_28[0] = 0xff;
  }
LAB_020a256c:
  local_24 = param_1;
  FUN_0255c138(local_28,0);
  local_50 = &PTR_LAB_04a71e80;
  FUN_020b5220(*(undefined8 *)PTR_DAT_04bb3968,&local_24,&local_50);
  local_30 = 3;
  local_2e = (byte)(local_24 >> 4) & 0xf;
  local_2f = (undefined1)(local_24 << 4);
  lVar7 = **(long **)puVar4;
  bVar2 = *(byte *)(lVar7 + 0x473);
  pbVar6 = PTR_DAT_04bc1220;
  if ((long)(char)bVar2 != 0xffffffffffffffff) {
    puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
    if (7 < bVar2) {
      puVar1 = (uint *)(lVar7 + 0x48);
    }
    if ((*puVar1 & 8) != 0) {
      pbVar6 = (byte *)(lVar7 + 0x473);
    }
  }
  local_2d = *pbVar6 << 6;
  local_2c = *pbVar6 >> 2 & 3;
  *puVar5 = 0;
  *(undefined *)(puVar5 + 1) = *PTR_DAT_04bb5018;
  uVar3 = (ulong)local_50 >> 0x30;
  *(undefined8 *)(puVar5 + 2) = 0xffffffff;
  local_50 = (undefined **)CONCAT26((ushort)uVar3 & 0xff00,0xff0000000000);
  if (-1 < DAT_053d0b30) {
    FUN_01db1df0(**(long **)puVar4 + 0x480,DAT_053d0b30,&local_50,&local_30,5,0);
  }
  return;
}



void FUN_017133a0(long param_1)

{
  char *pcVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined2 local_80;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined4 local_7c;
  undefined *local_78;
  char *local_70;
  long local_68;
  byte local_60 [4];
  uint local_5c;
  uint local_58;
  uint local_54;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar7 = *(long *)(param_1 + 0x1480);
  if (*(char *)(lVar7 + 0x1d5) != '\0') {
    lVar8 = *(long *)PTR_DAT_04bb43c0;
    puVar6 = (undefined8 *)(lVar7 + 0xcc);
    uVar3 = FUN_0277d6c4(puVar6);
    if (*(long *)puVar2 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) goto LAB_01713440;
    }
    iVar4 = FUN_0277d6c4(puVar6);
    if (iVar4 == 0xfffd) {
      puVar6 = (undefined8 *)PTR_DAT_04bb37e0;
      goto LAB_01713440;
    }
  }
  puVar6 = (undefined8 *)(lVar7 + 0xd4);
LAB_01713440:
  local_80 = *(undefined2 *)puVar6;
  local_7e = *(undefined1 *)((long)puVar6 + 2);
  local_7d = *(undefined1 *)((long)puVar6 + 3);
  local_7c = *(undefined4 *)((long)puVar6 + 4);
  pcVar1 = (char *)*puVar6;
  lVar8 = *(long *)puVar2;
  uVar3 = FUN_0277d6c4(&local_80);
  lVar7 = *(long *)puVar2;
  if (lVar7 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      local_78 = PTR_DAT_04bc0510 + 0x10;
      local_68 = 0;
      local_70 = pcVar1;
      uVar3 = FUN_0277d6c4(&local_70);
      if (*(long *)puVar2 != 0) {
        lVar7 = *(long *)(lVar7 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
          lVar7 = *(long *)PTR_DAT_04bc0428;
          uVar3 = FUN_0277d6c4(&local_80);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
             (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8), lVar7 != 0)) {
            local_68 = lVar7;
          }
        }
      }
      local_60[0] = 0;
      local_60[1] = 0;
      FUN_01adab50(&local_78,local_60);
      uVar3 = 0;
      do {
        local_5c = uVar3;
        if (local_5c != 0) {
          local_58 = local_5c;
          if (local_5c < 0xe) {
            uVar3 = local_5c + 7;
            if (-1 < (int)local_5c) {
              uVar3 = local_5c;
            }
            local_54 = local_5c;
            if (((uint)((int)uVar3 >> 3) < 2) &&
               ((local_60[(uint)((int)uVar3 >> 3)] >> (ulong)(local_5c & 7) & 1) != 0)) {
              if ((local_5c == 9) && (uVar5 = FUN_01ad8bd0(&local_78), (uVar5 & 1) != 0)) {
                local_70 = "CommonPitfallFall_NoPartial";
                goto LAB_017135f4;
              }
              break;
            }
          }
        }
        uVar3 = local_5c + 1;
      } while (local_5c + 1 != 0xe);
    }
  }
  local_70 = "CommonPitfallFall";
LAB_017135f4:
  local_78 = PTR_DAT_04bb2020 + 0x10;
  FUN_017029bc(param_1,&local_78,6,0,0);
  return;
}

